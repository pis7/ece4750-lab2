//      // verilator_coverage annotation
        //========================================================================
        // Verilog Components: Drop Unit
        //========================================================================
        // Drop unit allows dropping a packet when the drop signal is high. This
        // is useful especially in pipelined processor, when a squash should drop
        // a late arriving memory response.
        
        `ifndef LAB2_PROC_DROP_UNIT_V
        `define LAB2_PROC_DROP_UNIT_V
        
        module lab2_proc_DropUnit
        #(
          parameter p_msg_nbits = 1
        )
        (
 046258   input  logic                   clk,
 000226   input  logic                   reset,
        
          // the drop signal will drop the next arriving packet
        
 000804   input  logic                   drop,
        
 002636   input  logic [p_msg_nbits-1:0] istream_msg,
 009854   input  logic                   istream_val,
 010940   output logic                   istream_rdy,
        
 002636   output logic [p_msg_nbits-1:0] ostream_msg,
 009394   output logic                   ostream_val,
 011080   input  logic                   ostream_rdy
        );
        
          localparam c_state_pass = 1'b0;
          localparam c_state_drop = 1'b1;
        
 000402   logic state;
 000402   logic next_state;
 011032   logic istream_go;
        
          assign istream_go = istream_rdy && istream_val;
        
          // assign output message same as input message
        
          assign ostream_msg = istream_msg;
        
          // next state
        
%000000   always_comb begin
 000238     if ( state == c_state_pass ) begin
        
              // we only go to drop state if there is a drop request and we cannot
              // drop it right away (!istream_en)
 000603       if ( drop && !istream_go )
 000603         next_state = c_state_drop;
              else
 068183         next_state = c_state_pass;
        
 000238     end else begin
        
              // if we are in the drop mode and a message arrives, we can go back
              // to pass state
 000111       if ( istream_go )
 000603         next_state = c_state_pass;
              else
 000111         next_state = c_state_drop;
        
            end
          end
        
          // state outputs
        
%000000   always_comb begin
 000238     if ( state == c_state_pass ) begin
        
              // we combinationally take care of dropping if the packet is already
              // available
 022778       ostream_val = istream_val && !drop;
 022778       istream_rdy  = ostream_rdy;
        
 000238     end else begin
        
              // we just drop the packet
 000238       ostream_val = 1'b0;
 000238       istream_rdy  = 1'b1;
        
            end
          end
        
          // state transitions
        
 023016   always_ff @( posedge clk ) begin
        
 002938     if ( reset )
 002938       state <= c_state_pass;
            else
 020078       state <= next_state;
        
          end
        
        endmodule
        
        `endif /* LAB2_PROC_DROP_UNIT_V */
        
        

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
 046978   input  logic                   clk,
 000238   input  logic                   reset,
        
          // the drop signal will drop the next arriving packet
        
 000924   input  logic                   drop,
        
 002142   input  logic [p_msg_nbits-1:0] istream_msg,
 009665   input  logic                   istream_val,
 010675   output logic                   istream_rdy,
        
 002142   output logic [p_msg_nbits-1:0] ostream_msg,
 009156   output logic                   ostream_val,
 010878   input  logic                   ostream_rdy
        );
        
          localparam c_state_pass = 1'b0;
          localparam c_state_drop = 1'b1;
        
 000475   logic state;
 000476   logic next_state;
 010817   logic istream_go;
        
          assign istream_go = istream_rdy && istream_val;
        
          // assign output message same as input message
        
          assign ostream_msg = istream_msg;
        
          // next state
        
%000000   always_comb begin
 000288     if ( state == c_state_pass ) begin
        
              // we only go to drop state if there is a drop request and we cannot
              // drop it right away (!istream_en)
 000714       if ( drop && !istream_go )
 000714         next_state = c_state_drop;
              else
 069008         next_state = c_state_pass;
        
 000288     end else begin
        
              // if we are in the drop mode and a message arrives, we can go back
              // to pass state
 000150       if ( istream_go )
 000714         next_state = c_state_pass;
              else
 000150         next_state = c_state_drop;
        
            end
          end
        
          // state outputs
        
%000000   always_comb begin
 000288     if ( state == c_state_pass ) begin
        
              // we combinationally take care of dropping if the packet is already
              // available
 023082       ostream_val = istream_val && !drop;
 023082       istream_rdy  = ostream_rdy;
        
 000288     end else begin
        
              // we just drop the packet
 000288       ostream_val = 1'b0;
 000288       istream_rdy  = 1'b1;
        
            end
          end
        
          // state transitions
        
 023370   always_ff @( posedge clk ) begin
        
 003094     if ( reset )
 003094       state <= c_state_pass;
            else
 020276       state <= next_state;
        
          end
        
        endmodule
        
        `endif /* LAB2_PROC_DROP_UNIT_V */
        
        

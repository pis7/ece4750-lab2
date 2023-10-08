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
 018796   input  logic                   clk,
 000026   input  logic                   reset,
        
          // the drop signal will drop the next arriving packet
        
 000512   input  logic                   drop,
        
 001016   input  logic [p_msg_nbits-1:0] istream_msg,
 005516   input  logic                   istream_val,
 005802   output logic                   istream_rdy,
        
 001016   output logic [p_msg_nbits-1:0] ostream_msg,
 005240   output logic                   ostream_val,
 005894   input  logic                   ostream_rdy
        );
        
          localparam c_state_pass = 1'b0;
          localparam c_state_drop = 1'b1;
        
 000256   logic state;
 000256   logic next_state;
 005968   logic istream_go;
        
          assign istream_go = istream_rdy && istream_val;
        
          // assign output message same as input message
        
          assign ostream_msg = istream_msg;
        
          // next state
        
%000000   always_comb begin
 000155     if ( state == c_state_pass ) begin
        
              // we only go to drop state if there is a drop request and we cannot
              // drop it right away (!istream_en)
 000384       if ( drop && !istream_go )
 000384         next_state = c_state_drop;
              else
 027358         next_state = c_state_pass;
        
 000155     end else begin
        
              // if we are in the drop mode and a message arrives, we can go back
              // to pass state
 000081       if ( istream_go )
 000384         next_state = c_state_pass;
              else
 000081         next_state = c_state_drop;
        
            end
          end
        
          // state outputs
        
%000000   always_comb begin
 000155     if ( state == c_state_pass ) begin
        
              // we combinationally take care of dropping if the packet is already
              // available
 009230       ostream_val = istream_val && !drop;
 009230       istream_rdy  = ostream_rdy;
        
 000155     end else begin
        
              // we just drop the packet
 000155       ostream_val = 1'b0;
 000155       istream_rdy  = 1'b1;
        
            end
          end
        
          // state transitions
        
 009385   always_ff @( posedge clk ) begin
        
 000338     if ( reset )
 000338       state <= c_state_pass;
            else
 009047       state <= next_state;
        
          end
        
        endmodule
        
        `endif /* LAB2_PROC_DROP_UNIT_V */
        
        

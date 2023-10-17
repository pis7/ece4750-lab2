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
 083446   input  logic                   clk,
 000238   input  logic                   reset,
        
          // the drop signal will drop the next arriving packet
        
 000592   input  logic                   drop,
        
 001510   input  logic [p_msg_nbits-1:0] istream_msg,
 000238   input  logic                   istream_val,
 002754   output logic                   istream_rdy,
        
 001510   output logic [p_msg_nbits-1:0] ostream_msg,
 000830   output logic                   ostream_val,
 002754   input  logic                   ostream_rdy
        );
        
          localparam c_state_pass = 1'b0;
          localparam c_state_drop = 1'b1;
        
%000000   logic state;
%000000   logic next_state;
 002992   logic istream_go;
        
          assign istream_go = istream_rdy && istream_val;
        
          // assign output message same as input message
        
          assign ostream_msg = istream_msg;
        
          // next state
        
%000000   always_comb begin
%000000     if ( state == c_state_pass ) begin
        
              // we only go to drop state if there is a drop request and we cannot
              // drop it right away (!istream_en)
 125288       if ( drop && !istream_go )
%000000         next_state = c_state_drop;
              else
 125288         next_state = c_state_pass;
        
%000000     end else begin
        
              // if we are in the drop mode and a message arrives, we can go back
              // to pass state
%000000       if ( istream_go )
%000000         next_state = c_state_pass;
              else
%000000         next_state = c_state_drop;
        
            end
          end
        
          // state outputs
        
%000000   always_comb begin
%000000     if ( state == c_state_pass ) begin
        
              // we combinationally take care of dropping if the packet is already
              // available
 041604       ostream_val = istream_val && !drop;
 041604       istream_rdy  = ostream_rdy;
        
%000000     end else begin
        
              // we just drop the packet
%000000       ostream_val = 1'b0;
%000000       istream_rdy  = 1'b1;
        
            end
          end
        
          // state transitions
        
 041604   always_ff @( posedge clk ) begin
        
 003094     if ( reset )
 003094       state <= c_state_pass;
            else
 038510       state <= next_state;
        
          end
        
        endmodule
        
        `endif /* LAB2_PROC_DROP_UNIT_V */
        
        

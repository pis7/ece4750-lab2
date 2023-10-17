//      // verilator_coverage annotation
        //========================================================================
        // Verilog Components: Test Source with Random Delays
        //========================================================================
        
        `ifndef VC_TEST_RAND_DELAY_SOURCE_V
        `define VC_TEST_RAND_DELAY_SOURCE_V
        
        `include "vc/TestSourceFile.v"
        `include "vc/TestRandDelay.v"
        
        module vc_TestRandDelaySourceFile
        #(
          parameter p_msg_nbits = 1,
          parameter p_num_msgs  = 1024
        )(
 118291   input  logic                   clk,
 000359   input  logic                   reset,
        
          // Max delay input
        
%000000   input  logic [31:0]            max_delay,
        
          // Source message interface
        
 002136   output logic                   val,
 002134   input  logic                   rdy,
 000392   output logic [p_msg_nbits-1:0] msg,
        
          // Goes high once all source data has been issued
        
 000357   output logic                   done
        );
        
          //----------------------------------------------------------------------
          // Test source
          //----------------------------------------------------------------------
        
 000716   logic                   src_val;
 002134   logic                   src_rdy;
 000278   logic [p_msg_nbits-1:0] src_msg;
        
          vc_TestSourceFile#(p_msg_nbits,p_num_msgs) src
          (
            .clk       (clk),
            .reset     (reset),
        
            .val       (src_val),
            .rdy       (src_rdy),
            .msg       (src_msg),
        
            .done      (done)
          );
        
 000359   task load (integer file_load);
 000359   begin
 000359     src.load(file_load);
          end
          endtask
          //----------------------------------------------------------------------
          // Test random delay
          //----------------------------------------------------------------------
        
          vc_TestRandDelay#(p_msg_nbits) msg_delay
          (
            .clk       (clk),
            .reset     (reset),
        
            .max_delay (max_delay),
        
            .in_val    (src_val),
            .in_rdy    (src_rdy),
            .in_msg    (src_msg),
        
            .out_val   (val),
            .out_rdy   (rdy),
            .out_msg   (msg)
          );
        
        endmodule
        
        `endif /* VC_TEST_RAND_DELAY_SOURCE */
        

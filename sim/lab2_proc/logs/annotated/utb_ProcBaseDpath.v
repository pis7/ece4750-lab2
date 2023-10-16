//      // verilator_coverage annotation
        //========================================================================
        // utb_ProcBaseDpath
        //========================================================================
        // A basic Verilog unit test bench for the Processor Base Datapath module
        
        `default_nettype none
        `timescale 1ps/1ps
        
        
        `include "ProcBaseDpath.v"
        `include "vc/trace.v"
        
        //------------------------------------------------------------------------
        // Top-level module
        //------------------------------------------------------------------------
        
%000000 module top(  input logic clk, input logic linetrace );
        
         
 000001   logic         reset;
        
          // Instruction Memory Port
        
 000001   logic [31:0]  imem_reqstream_msg_addr;
%000000   mem_resp_4B_t imem_respstream_msg;
%000000   logic         imem_respstream_drop;
        
          // Data Memory Port
        
 000001   logic [31:0]  dmem_reqstream_msg_addr;
%000000   logic [31:0]  dmem_reqstream_msg_data;
%000000   logic [31:0]  dmem_respstream_msg_data;
        
          // mngr communication ports
        
%000000   logic [31:0]  mngr2proc_data;
 000001   logic [31:0]  proc2mngr_data;
        
          // control signals (ctrl->dpath)
        
%000000   logic         reg_en_F;
%000000   logic [1:0]   pc_sel_F;
        
%000000   logic         reg_en_D;
%000000   logic         op1_sel_D;
%000000   logic [1:0]   op2_sel_D;
%000000   logic [1:0]   csrr_sel_D;
 000001   logic [2:0]   imm_type_D;
          //logic         imul_istream_val_D;
        
%000000   logic         reg_en_X;
%000000   logic [3:0]   alu_fn_X;
%000000   logic [1:0]   ex_result_sel_X;
          //logic         imul_ostream_rdy_X;
        
%000000   logic         reg_en_M;
%000000   logic         wb_result_sel_M;
        
%000000   logic         reg_en_W;
%000000   logic [4:0]   rf_waddr_W;
%000000   logic         rf_wen_W;
%000000   logic         stats_en_wen_W;
        
%000000   logic         imul_req_val_D;
%000000   logic         imul_resp_rdy_X;
        
          // status signals (dpath->ctrl)
        
 000001   logic [31:0]  inst_D;
          //logic         imul_istream_rdy_D;
        
          //logic         imul_ostream_val_X;
 000001   logic         br_cond_eq_X;
 000001   logic         br_cond_lt_X;
 000003   logic         br_cond_ltu_X;
%000000   logic         imul_req_rdy_D;
%000000   logic         imul_resp_val_X;
        
          // extra ports
        
%000000   logic [31:0]  core_id;
%000000   logic         stats_en;
        
        
        
          //----------------------------------------------------------------------
          // Module instantiations
          //----------------------------------------------------------------------
          
          // Instantiate the processor datapath
          lab2_proc_ProcBaseDpath 
          #(
            .p_num_cores( 1)
          )
          DUT
          ( .*
          ); 
        
        
        
          //----------------------------------------------------------------------
          // Run the Test Bench
          //----------------------------------------------------------------------
        
 000001   initial begin
        
 000001     $display("Start of Testbench");
            // Initalize all the signal inital values.
 000001     imem_respstream_msg.type_ = `VC_MEM_RESP_MSG_TYPE_READ;
 000001     imem_respstream_msg.opaque = 8'b0;
 000001     imem_respstream_msg.test = 2'b0;
 000001     imem_respstream_msg.len    = 2'd0;
 000001     imem_respstream_msg.data   = 'hDEADBEEF;
 000001     imem_respstream_drop = 0;
 000001     dmem_respstream_msg_data = '0;
 000001     mngr2proc_data= '0;
 000001     reg_en_F = 1;
 000001     pc_sel_F = 2'd3;
 000001     reg_en_D = 1;
 000001     op1_sel_D = 0;
 000001     op2_sel_D = '0;
 000001     csrr_sel_D = '0;
 000001     imm_type_D = '0;
 000001     imul_req_val_D = '0;
 000001     reg_en_X =1;
 000001     alu_fn_X =0;
 000001     ex_result_sel_X =0;
 000001     imul_resp_rdy_X =0;
 000001     reg_en_M =1;
 000001     wb_result_sel_M =0;
 000001     reg_en_W =1;
 000001     rf_waddr_W ='0;
 000001     rf_wen_W = '0;
 000001     stats_en_wen_W =0;
 000001     core_id = '0;
 000001     reset = 1;
 000001     #10
        
            //--------------------------------------------------------------------
            // Unit Testing #1  If PC is working correctly across the pipeline + a JAL
            //--------------------------------------------------------------------
            // Align test bench with negedge so that it looks better
 000001     @(negedge clk); 
 000001     reset = 0;
 000001     @(negedge clk); 
 000001     $display( "Advancing time");
            // Checking F stage D/X stages are invalid
 000001     assert(DUT.pc_F == 'h200) begin
 000001       $display("pc_F is correct.  Expected: %h, Actual: %h", 'h200,DUT.pc_F); pass();
 000001     end else begin
 000001       $display("pc_F is incorrect.  Expected: %h, Actual: %h", 'h200,DUT.pc_F); fail(); $finish();
            end 
            //Advancing time
 000001     $display( "Advancing time");
 000001     @(negedge clk); 
            // Checking F/D stage X stage is invalid
 000001     assert(DUT.pc_F == 'h204) begin
 000001       $display("pc_F is correct.  Expected: %h, Actual: %h", 'h204,DUT.pc_F);pass();
 000001     end else begin
 000001       $display("pc_F is incorrect.  Expected: %h, Actual: %h", 'h204,DUT.pc_F); fail(); $finish();
            end 
 000001     assert(DUT.pc_D == 'h200) begin
 000001       $display("pc_D is correct.  Expected: %h, Actual: %h", 'h200,DUT.pc_D);pass();
 000001     end else begin
 000001       $display("pc_D is incorrect.  Expected: %h, Actual: %h", 'h200,DUT.pc_D); fail(); $finish();
            end 
            //Advancing time
 000001     $display( "Advancing time");
 000001     @(negedge clk); 
             // Checking F/D/X stage 
 000001     assert(DUT.pc_F == 'h208) begin
 000001       $display("pc_F is correct.  Expected: %h, Actual: %h", 'h208,DUT.pc_F); pass();
 000001     end else begin
 000001       $display("pc_F is incorrect.  Expected: %h, Actual: %h", 'h208,DUT.pc_F); fail(); $finish();
            end 
 000001     assert(DUT.pc_D == 'h204) begin
 000001       $display("pc_D is correct.  Expected: %h, Actual: %h", 'h204,DUT.pc_D);  pass();
 000001     end else begin
 000001       $display("pc_D is incorrect.  Expected: %h, Actual: %h", 'h204,DUT.pc_D); fail(); $finish();
            end 
 000001     assert(DUT.pc_X == 'h200) begin
 000001       $display("pc_X is correct.  Expected: %h, Actual: %h", 'h200,DUT.pc_X);  pass();
 000001     end else begin
 000001       $display("pc_X is incorrect.  Expected: %h, Actual: %h", 'h200,DUT.pc_X); fail(); $finish();
            end 
            // Setting Branch 
 000001     imm_type_D = 4; // J-type imm-type
 000001     pc_sel_F = 2; // J-type imm-type
            
            //Advancing time
 000001     $display( "Advancing time with J imm jump on D stage");
 000001     @(negedge clk); 
             // Checking F/D/X stage 
 000001     assert(DUT.pc_F == 'hfffdb7ee) begin
 000001       $display("pc_F is correct.  Expected: %h, Actual: %h", 'hfffdb7ee,DUT.pc_F); pass();
 000001     end else begin
 000001       $display("pc_F is incorrect.  Expected: %h, Actual: %h", 'hfffdb7ee,DUT.pc_F); fail(); $finish();
            end 
 000001     assert(DUT.pc_D == 'h208) begin
 000001       $display("pc_D is correct.  Expected: %h, Actual: %h", 'h208,DUT.pc_D);  pass();
 000001     end else begin
 000001       $display("pc_D is incorrect.  Expected: %h, Actual: %h", 'h208,DUT.pc_D); fail(); $finish();
            end 
 000001     assert(DUT.pc_X == 'h204) begin
 000001       $display("pc_X is correct.  Expected: %h, Actual: %h", 'h204,DUT.pc_X);  pass();
 000001     end else begin
 000001       $display("pc_X is incorrect.  Expected: %h, Actual: %h", 'h204,DUT.pc_X); fail(); $finish();
            end
        
        
 000001     #10
            //--------------------------------------------------------------------
            // Unit Testing #2  If PC is working correctly across the pipeline + a JAL
            //--------------------------------------------------------------------
            // Align test bench with negedge so that it looks better
            // @(negedge clk);
            // reset = 0;
            // @(negedge clk); 
          
        
        
 000001     $finish();
        
          end
        
          
        endmodule
        

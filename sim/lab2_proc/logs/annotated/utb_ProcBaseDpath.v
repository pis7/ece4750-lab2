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
        
 000002   logic [31:0]  dmem_reqstream_msg_addr;
 000002   logic [31:0]  dmem_reqstream_msg_data;
%000000   logic [31:0]  dmem_respstream_msg_data;
        
          // mngr communication ports
        
 000002   logic [31:0]  mngr2proc_data;
 000002   logic [31:0]  proc2mngr_data;
        
          // control signals (ctrl->dpath)
        
 000002   logic         reg_en_F;
%000000   logic [1:0]   pc_sel_F;
        
 000002   logic         reg_en_D;
 000001   logic         op1_sel_D;
 000004   logic [1:0]   op2_sel_D;
%000000   logic [1:0]   csrr_sel_D;
 000002   logic [2:0]   imm_type_D;
          //logic         imul_istream_val_D;
        
 000002   logic         reg_en_X;
 000008   logic [3:0]   alu_fn_X;
 000002   logic [1:0]   ex_result_sel_X;
          //logic         imul_ostream_rdy_X;
        
%000000   logic         reg_en_M;
 000003   logic         wb_result_sel_M;
        
%000000   logic         reg_en_W;
%000000   logic [4:0]   rf_waddr_W;
 000018   logic         rf_wen_W;
%000000   logic         stats_en_wen_W;
        
 000002   logic         imul_req_val_D;
 000002   logic         imul_resp_rdy_X;
        
          // status signals (dpath->ctrl)
        
 000002   logic [31:0]  inst_D;
          //logic         imul_istream_rdy_D;
        
          //logic         imul_ostream_val_X;
 000007   logic         br_cond_eq_X;
 000006   logic         br_cond_lt_X;
 000010   logic         br_cond_ltu_X;
 000035   logic         imul_req_rdy_D;
 000035   logic         imul_resp_val_X;
        
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
            // Unit Testing #2  Add (Reg-Reg) instruction
            //--------------------------------------------------------------------
            // Initalize all the signal inital values.
            
 000001     $display();
 000001     $display("Test ADD");
            // Reset
 000001     @(negedge clk);
 000001     reset = 0;
 000001     @(negedge clk);
            
            // csrr x1, mngr2proc < 10
 000001     csrr(32'd10, 5'd1);
 000001     delay( $urandom_range(0, 127) );
        
            // csrr x2, mngr2proc < 20
 000001     csrr(32'd20, 5'd2);
 000001     delay( $urandom_range(0, 127) );
        
            // Simulate add ------
        
            // F
 000001     @(negedge clk);
 000001     imem_respstream_msg.type_ = `VC_MEM_RESP_MSG_TYPE_READ;
 000001     imem_respstream_msg.opaque = 8'b0;
 000001     imem_respstream_msg.test = 2'b0;
 000001     imem_respstream_msg.len    = 2'd0;
 000001     imem_respstream_msg.data   = 32'b00000000001000001000000110110011; // add x3, x1, x2;
 000001     imem_respstream_drop = 0;
 000001     dmem_respstream_msg_data = '0;
 000001     mngr2proc_data= '0;
 000001     reg_en_F = 1;
 000001     rf_wen_W = 0;
 000001     pc_sel_F = 2'd3;
        
            // D
 000001     @(negedge clk);
 000001     reg_en_D = 1;
 000001     op1_sel_D = 1'd1;
 000001     op2_sel_D = 2'd1;
 000001     csrr_sel_D = 2'd0;
 000001     imul_req_val_D = 1'b0;
 000001     assert (DUT.inst_D == 32'b00000000001000001000000110110011) begin
 000001       $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b00000000001000001000000110110011 ,DUT.inst_D);pass();
 000001     end else begin
 000001       $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b00000000001000001000000110110011,DUT.inst_D); fail(); $finish();
            end
 000001     assert (DUT.rf_rdata0_D == 32'd10) begin
 000001       $display("rf_rdata0_D is correct.  Expected: %h, Actual: %h", 32'd10 ,DUT.rf_rdata0_D);pass();
 000001     end else begin
 000001       $display("rf_rdata0_D is incorrect.  Expected: %h, Actual: %h", 32'd10 ,DUT.rf_rdata0_D); fail(); $finish();
            end
 000001     assert (DUT.rf_rdata1_D == 32'd20) begin
 000001       $display("rf_rdata1_D is correct.  Expected: %h, Actual: %h", 32'd20 ,DUT.rf_rdata1_D);pass();
 000001     end else begin
 000001       $display("rf_rdata1_D is incorrect.  Expected: %h, Actual: %h", 32'd20 ,DUT.rf_rdata1_D); fail(); $finish();
            end
            
            // X
 000001     @(negedge clk);
 000001     reg_en_X = 1;
 000001     alu_fn_X = 4'd0;
 000001     ex_result_sel_X = 2'd1;
 000001     imul_resp_rdy_X = 0;
 000001     assert (DUT.op1_X == 32'd10) begin
 000001       $display("op1_X is correct.  Expected: %h, Actual: %h", 32'd10 ,DUT.op1_X);pass();
 000001     end else begin
 000001       $display("op1_X is incorrect.  Expected: %h, Actual: %h", 32'd10 ,DUT.op1_X); fail(); $finish();
            end
 000001     assert (DUT.op2_X == 32'd20) begin
 000001       $display("op2_X is correct.  Expected: %h, Actual: %h", 32'd20 ,DUT.op2_X);pass();
 000001     end else begin
 000001       $display("op2_X is incorrect.  Expected: %h, Actual: %h", 32'd20 ,DUT.op2_X); fail(); $finish();
            end
            
            // M
 000001     @(negedge clk);
 000001     reg_en_M = 1;
 000001     wb_result_sel_M = 1'd0;
 000001     assert (DUT.ex_result_M == 32'd30) begin
 000001       $display("ex_result_M is correct.  Expected: %h, Actual: %h", 32'd30 ,DUT.ex_result_M);pass();
 000001     end else begin
 000001       $display("ex_result_M is incorrect.  Expected: %h, Actual: %h", 32'd30 ,DUT.ex_result_M); fail(); $finish();
            end
            
            // W
 000001     @(negedge clk);
 000001     reg_en_W = 1;
 000001     rf_waddr_W = 5'd3;
 000001     rf_wen_W = 1'b1;
 000001     stats_en_wen_W = 0;
 000001     core_id = '0;
 000001     assert (DUT.wb_result_W == 32'd30) begin
 000001       $display("wb_result_W is correct.  Expected: %h, Actual: %h", 32'd30 ,DUT.wb_result_W);pass();
 000001     end else begin
 000001       $display("wb_result_W is incorrect.  Expected: %h, Actual: %h", 32'd30 ,DUT.wb_result_W); fail(); $finish();
            end
        
 000001     delay( $urandom_range(0, 127) );
        
            // csrw proc2mngr, x3 > 32'd30
 000001     csrw(5'd3);
 000001     assert (DUT.proc2mngr_data == 32'd30) begin
 000001       $display("proc2mngr_data is correct.  Expected: %h, Actual: %h", 32'd30 ,DUT.proc2mngr_data);pass();
 000001     end else begin
 000001       $display("proc2mngr_data is incorrect.  Expected: %h, Actual: %h", 32'd30 ,DUT.proc2mngr_data); fail(); $finish();
            end
 000001     delay( $urandom_range(0, 127) );
            
            //--------------------------------------------------------------------
            // Unit Testing #3  ORI (Reg-Imm) instruction
            //--------------------------------------------------------------------
            // Initalize all the signal inital values.
            
 000001     $display();
 000001     $display("Test ORI");
            // Reset
 000001     @(negedge clk);
 000001     reset = 0;
 000001     @(negedge clk);
            
            // csrr x1, mngr2proc < 10
 000001     csrr(32'd10, 5'd1);
 000001     delay( $urandom_range(0, 127) );
        
            // Simulate ori ------
        
            // F
 000001     @(negedge clk);
 000001     imem_respstream_msg.type_ = `VC_MEM_RESP_MSG_TYPE_READ;
 000001     imem_respstream_msg.opaque = 8'b0;
 000001     imem_respstream_msg.test = 2'b0;
 000001     imem_respstream_msg.len    = 2'd0;
 000001     imem_respstream_msg.data   = 32'b00000000001000001110000110010011; // ori x3, x1, 2;
 000001     imem_respstream_drop = 0;
 000001     dmem_respstream_msg_data = '0;
 000001     mngr2proc_data= '0;
 000001     reg_en_F = 1;
 000001     rf_wen_W = 0;
 000001     pc_sel_F = 2'd3;
        
            // D
 000001     @(negedge clk);
 000001     reg_en_D = 1;
 000001     op1_sel_D = 1'd1;
 000001     op2_sel_D = 2'd0;
 000001     imm_type_D = 3'd0;
 000001     imul_req_val_D = 1'b0;
 000001     assert (DUT.inst_D == 32'b00000000001000001110000110010011) begin
 000001       $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b00000000001000001110000110010011 ,DUT.inst_D);pass();
 000001     end else begin
 000001       $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b00000000001000001110000110010011,DUT.inst_D); fail(); $finish();
            end
 000001     assert (DUT.rf_rdata0_D == 32'd10) begin
 000001       $display("rf_rdata0_D is correct.  Expected: %h, Actual: %h", 32'd10 ,DUT.rf_rdata0_D);pass();
 000001     end else begin
 000001       $display("rf_rdata0_D is incorrect.  Expected: %h, Actual: %h", 32'd10 ,DUT.rf_rdata0_D); fail(); $finish();
            end
            
            // X
 000001     @(negedge clk);
 000001     reg_en_X = 1;
 000001     alu_fn_X = 4'd3;
 000001     ex_result_sel_X = 2'd1;
 000001     imul_resp_rdy_X = 0;
 000001     assert (DUT.op1_X == 32'd10) begin
 000001       $display("op1_X is correct.  Expected: %h, Actual: %h", 32'd10 ,DUT.op1_X);pass();
 000001     end else begin
 000001       $display("op1_X is incorrect.  Expected: %h, Actual: %h", 32'd10 ,DUT.op1_X); fail(); $finish();
            end
 000001     assert (DUT.op2_X == 32'd2) begin
 000001       $display("op2_X is correct.  Expected: %h, Actual: %h", 32'd2 ,DUT.op2_X);pass();
 000001     end else begin
 000001       $display("op2_X is incorrect.  Expected: %h, Actual: %h", 32'd2 ,DUT.op2_X); fail(); $finish();
            end
            
            // M
 000001     @(negedge clk);
 000001     reg_en_M = 1;
 000001     wb_result_sel_M = 1'd0;
 000001     assert (DUT.ex_result_M == 32'd10) begin
 000001       $display("ex_result_M is correct.  Expected: %h, Actual: %h", 32'd10 ,DUT.ex_result_M);pass();
 000001     end else begin
 000001       $display("ex_result_M is incorrect.  Expected: %h, Actual: %h", 32'd10 ,DUT.ex_result_M); fail(); $finish();
            end
            
            // W
 000001     @(negedge clk);
 000001     reg_en_W = 1;
 000001     rf_waddr_W = 5'd3;
 000001     rf_wen_W = 1'b1;
 000001     stats_en_wen_W = 0;
 000001     core_id = '0;
 000001     assert (DUT.wb_result_W == 32'd10) begin
 000001       $display("wb_result_W is correct.  Expected: %h, Actual: %h", 32'd10 ,DUT.wb_result_W);pass();
 000001     end else begin
 000001       $display("wb_result_W is incorrect.  Expected: %h, Actual: %h", 32'd10 ,DUT.wb_result_W); fail(); $finish();
            end
        
 000001     delay( $urandom_range(0, 127) );
        
            // csrw proc2mngr, x3 > 32'd30
 000001     csrw(5'd3);
 000001     assert (DUT.proc2mngr_data == 32'd10) begin
 000001       $display("proc2mngr_data is correct.  Expected: %h, Actual: %h", 32'd10 ,DUT.proc2mngr_data);pass();
 000001     end else begin
 000001       $display("proc2mngr_data is incorrect.  Expected: %h, Actual: %h", 32'd10 ,DUT.proc2mngr_data); fail(); $finish();
            end
 000001     delay( $urandom_range(0, 127) );
        
            //--------------------------------------------------------------------
            // Unit Testing #4 Mul instruction - stall until value ready
            //--------------------------------------------------------------------
            // Initalize all the signal inital values.
            
 000001     $display();
 000001     $display("Test MUL");
            // Reset
 000001     @(negedge clk);
 000001     reset = 0;
 000001     @(negedge clk);
            
            
            // csrr x1, mngr2proc < 32'd16375
 000001     csrr(32'd16375, 5'd1);
 000001     delay( $urandom_range(0, 127) );
        
            // csrr x2, mngr2proc < 32'd6911
 000001     csrr(32'd6911, 5'd2);
 000001     delay( $urandom_range(0, 127) );
        
            // Simulate mul ------
        
            // F
 000001     @(negedge clk);
 000001     imem_respstream_msg.type_ = `VC_MEM_RESP_MSG_TYPE_READ;
 000001     imem_respstream_msg.opaque = 8'b0;
 000001     imem_respstream_msg.test = 2'b0;
 000001     imem_respstream_msg.len    = 2'd0;
 000001     imem_respstream_msg.data   = 32'b00000010001000001000000110110011; // mul x3, x1, x2
 000001     imem_respstream_drop = 0;
 000001     dmem_respstream_msg_data = '0;
 000001     mngr2proc_data= '0;
 000001     reg_en_F = 1;
 000001     rf_wen_W = 0;
 000001     pc_sel_F = 2'd3;
        
            // D
 000001     @(negedge clk);
 000001     reg_en_D = 1;
 000001     op1_sel_D = 1'd1;
 000001     op2_sel_D = 2'd1;
 000001     imul_req_val_D = 1'b1;
 000001     assert (DUT.inst_D == 32'b00000010001000001000000110110011) begin
 000001       $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b00000010001000001000000110110011 ,DUT.inst_D);pass();
 000001     end else begin
 000001       $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b00000010001000001000000110110011,DUT.inst_D); fail(); $finish();
            end
 000001     assert (DUT.rf_rdata0_D == 32'd16375) begin
 000001       $display("rf_rdata0_D is correct.  Expected: %h, Actual: %h", 32'd16375 ,DUT.rf_rdata0_D);pass();
 000001     end else begin
 000001       $display("rf_rdata0_D is incorrect.  Expected: %h, Actual: %h", 32'd16375 ,DUT.rf_rdata0_D); fail(); $finish();
            end
 000001     assert (DUT.rf_rdata1_D == 32'd6911) begin
 000001       $display("rf_rdata1_D is correct.  Expected: %h, Actual: %h", 32'd6911 ,DUT.rf_rdata1_D);pass();
 000001     end else begin
 000001       $display("rf_rdata1_D is incorrect.  Expected: %h, Actual: %h", 32'd6911 ,DUT.rf_rdata1_D); fail(); $finish();
            end
            
            // X
 000001     @(negedge clk);
 000001     reg_en_X = 1;
 000001     alu_fn_X = 4'd3;
 000001     ex_result_sel_X = 2'd2;
 000001     imul_resp_rdy_X = 1'b1;
 000001     assert (DUT.op1_X == 32'd16375) begin
 000001       $display("op1_X is correct.  Expected: %h, Actual: %h", 32'd16375 ,DUT.op1_X);pass();
 000001     end else begin
 000001       $display("op1_X is incorrect.  Expected: %h, Actual: %h", 32'd16375 ,DUT.op1_X); fail(); $finish();
            end
 000001     assert (DUT.op2_X == 32'd6911) begin
 000001       $display("op2_X is correct.  Expected: %h, Actual: %h", 32'd6911 ,DUT.op2_X);pass();
 000001     end else begin
 000001       $display("op2_X is incorrect.  Expected: %h, Actual: %h", 32'd6911 ,DUT.op2_X); fail(); $finish();
            end
 000001     assert (DUT.imul_resp_val_X == 1'b0) begin
 000001       $display("imul_resp_val_X is correct.  Expected: %h, Actual: %h", 1'b0 ,DUT.imul_resp_val_X);pass();
 000001     end else begin
 000001       $display("imul_resp_val_X is incorrect.  Expected: %h, Actual: %h", 1'b0 ,DUT.imul_resp_val_X); fail(); $finish();
            end
 000001     reg_en_X = 0;
 000001     reg_en_D = 0;
 000001     reg_en_F = 0;
 000001     @(posedge imul_resp_val_X);
 000001     reg_en_X = 1;
 000001     reg_en_D = 1;
 000001     reg_en_F = 1;
            
            // M
 000001     @(negedge clk);
 000001     reg_en_M = 1;
 000001     wb_result_sel_M = 1'd0;
 000001     assert (DUT.ex_result_M == 32'd113167625) begin
 000001       $display("ex_result_M is correct.  Expected: %h, Actual: %h", 32'd113167625 ,DUT.ex_result_M);pass();
 000001     end else begin
 000001       $display("ex_result_M is incorrect.  Expected: %h, Actual: %h", 32'd113167625 ,DUT.ex_result_M); fail(); $finish();
            end
            
            // W
 000001     @(negedge clk);
 000001     reg_en_W = 1;
 000001     rf_waddr_W = 5'd3;
 000001     rf_wen_W = 1'b1;
 000001     stats_en_wen_W = 0;
 000001     core_id = '0;
 000001     assert (DUT.wb_result_W == 32'd113167625) begin
 000001       $display("wb_result_W is correct.  Expected: %h, Actual: %h", 32'd113167625 ,DUT.wb_result_W);pass();
 000001     end else begin
 000001       $display("wb_result_W is incorrect.  Expected: %h, Actual: %h", 32'd113167625 ,DUT.wb_result_W); fail(); $finish();
            end
        
 000001     delay( $urandom_range(0, 127) );
        
            // csrw proc2mngr, x3 > 32'd30
 000001     csrw(5'd3);
 000001     assert (DUT.proc2mngr_data == 32'd113167625) begin
 000001       $display("proc2mngr_data is correct.  Expected: %h, Actual: %h", 32'd113167625 ,DUT.proc2mngr_data);pass();
 000001     end else begin
 000001       $display("proc2mngr_data is incorrect.  Expected: %h, Actual: %h", 32'd113167625 ,DUT.proc2mngr_data); fail(); $finish();
            end
 000001     delay( $urandom_range(0, 127) );
        
            //--------------------------------------------------------------------
            // Unit Testing #5 LW instruction
            //--------------------------------------------------------------------
            // Initalize all the signal inital values.
            
 000001     $display();
 000001     $display("Test LW");
            // Reset
 000001     @(negedge clk);
 000001     reset = 0;
 000001     @(negedge clk);
            
            // csrr x1, mngr2proc < 10
 000001     csrr(32'd10, 5'd1);
 000001     delay( $urandom_range(0, 127) );
        
            // Simulate lw ------
        
            // F
 000001     @(negedge clk);
 000001     imem_respstream_msg.type_ = `VC_MEM_RESP_MSG_TYPE_READ;
 000001     imem_respstream_msg.opaque = 8'b0;
 000001     imem_respstream_msg.test = 2'b0;
 000001     imem_respstream_msg.len    = 2'd0;
 000001     imem_respstream_msg.data   = 32'b00000000000100001010000100000011; // lw x2, 1(x1)
 000001     imem_respstream_drop = 0;
 000001     dmem_respstream_msg_data = '0;
 000001     mngr2proc_data= '0;
 000001     reg_en_F = 1;
 000001     rf_wen_W = 0;
 000001     pc_sel_F = 2'd3;
        
            // D
 000001     @(negedge clk);
 000001     reg_en_D = 1;
 000001     op1_sel_D = 1'd1;
 000001     op2_sel_D = 2'd0;
 000001     imm_type_D = 3'd0;
 000001     imul_req_val_D = 1'b0;
 000001     assert (DUT.inst_D == 32'b00000000000100001010000100000011) begin
 000001       $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b00000000000100001010000100000011 ,DUT.inst_D);pass();
 000001     end else begin
 000001       $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b00000000000100001010000100000011,DUT.inst_D); fail(); $finish();
            end
 000001     assert (DUT.rf_rdata0_D == 32'd10) begin
 000001       $display("rf_rdata0_D is correct.  Expected: %h, Actual: %h", 32'd10 ,DUT.rf_rdata0_D);pass();
 000001     end else begin
 000001       $display("rf_rdata0_D is incorrect.  Expected: %h, Actual: %h", 32'd10 ,DUT.rf_rdata0_D); fail(); $finish();
            end
            
            // X
 000001     @(negedge clk);
 000001     reg_en_X = 1;
 000001     alu_fn_X = 4'd0;
 000001     ex_result_sel_X = 2'd1;
 000001     imul_resp_rdy_X = 0;
 000001     assert (DUT.op1_X == 32'd10) begin
 000001       $display("op1_X is correct.  Expected: %h, Actual: %h", 32'd10 ,DUT.op1_X);pass();
 000001     end else begin
 000001       $display("op1_X is incorrect.  Expected: %h, Actual: %h", 32'd10 ,DUT.op1_X); fail(); $finish();
            end
 000001     assert (DUT.op2_X == 32'd1) begin
 000001       $display("op2_X is correct.  Expected: %h, Actual: %h", 32'd1 ,DUT.op2_X);pass();
 000001     end else begin
 000001       $display("op2_X is incorrect.  Expected: %h, Actual: %h", 32'd1 ,DUT.op2_X); fail(); $finish();
            end
            
            // M
 000001     @(negedge clk);
 000001     reg_en_M = 1;
 000001     wb_result_sel_M = 1'd1;
 000001     dmem_respstream_msg_data = 32'h0850a4be;
 000001     assert (DUT.dmem_reqstream_msg_addr == 32'd11) begin
 000001       $display("dmem_reqstream_msg_addr is correct.  Expected: %h, Actual: %h", 32'd11 ,DUT.dmem_reqstream_msg_addr);pass();
 000001     end else begin
 000001       $display("dmem_reqstream_msg_addr is incorrect.  Expected: %h, Actual: %h", 32'd11 ,DUT.dmem_reqstream_msg_addr); fail(); $finish();
            end
            
            // W
 000001     @(negedge clk);
 000001     reg_en_W = 1;
 000001     rf_waddr_W = 5'd2;
 000001     rf_wen_W = 1'b1;
 000001     stats_en_wen_W = 0;
 000001     core_id = '0;
 000001     assert (DUT.wb_result_W == 32'h0850a4be) begin
 000001       $display("wb_result_W is correct.  Expected: %h, Actual: %h", 32'h0850a4be ,DUT.wb_result_W);pass();
 000001     end else begin
 000001       $display("wb_result_W is incorrect.  Expected: %h, Actual: %h", 32'h0850a4be ,DUT.wb_result_W); fail(); $finish();
            end
        
 000001     delay( $urandom_range(0, 127) );
        
            // csrw proc2mngr, x2 > 32'h0850a4be
 000001     csrw(5'd2);
 000001     assert (DUT.proc2mngr_data == 32'h0850a4be) begin
 000001       $display("proc2mngr_data is correct.  Expected: %h, Actual: %h", 32'h0850a4be ,DUT.proc2mngr_data);pass();
 000001     end else begin
 000001       $display("proc2mngr_data is incorrect.  Expected: %h, Actual: %h", 32'h0850a4be ,DUT.proc2mngr_data); fail(); $finish();
            end
 000001     delay( $urandom_range(0, 127) );
        
            //--------------------------------------------------------------------
            // Unit Testing #6 SW instruction
            //--------------------------------------------------------------------
            // Initalize all the signal inital values.
            
 000001     $display();
 000001     $display("Test SW");
            // Reset
 000001     @(negedge clk);
 000001     reset = 0;
 000001     @(negedge clk);
            
            // csrr x1, mngr2proc < 10
 000001     csrr(32'd10, 5'd1);
 000001     delay( $urandom_range(0, 127) );
        
            // csrr x2, mngr2proc < 65
 000001     csrr(32'd65, 5'd2);
 000001     delay( $urandom_range(0, 127) );
        
            // Simulate sw ------
        
            // F
 000001     @(negedge clk);
 000001     imem_respstream_msg.type_ = `VC_MEM_RESP_MSG_TYPE_READ;
 000001     imem_respstream_msg.opaque = 8'b0;
 000001     imem_respstream_msg.test = 2'b0;
 000001     imem_respstream_msg.len    = 2'd0;
 000001     imem_respstream_msg.data   = 32'b00000000001000001010000010100011; // sw x2, 1(x1)
 000001     imem_respstream_drop = 0;
 000001     dmem_respstream_msg_data = '0;
 000001     mngr2proc_data= '0;
 000001     reg_en_F = 1;
 000001     rf_wen_W = 0;
 000001     pc_sel_F = 2'd3;
        
            // D
 000001     @(negedge clk);
 000001     reg_en_D = 1;
 000001     op1_sel_D = 1'd1;
 000001     op2_sel_D = 2'd0;
 000001     imm_type_D = 3'd1;
 000001     imul_req_val_D = 1'b0;
 000001     assert (DUT.inst_D == 32'b00000000001000001010000010100011) begin
 000001       $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b00000000001000001010000010100011 ,DUT.inst_D);pass();
 000001     end else begin
 000001       $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b00000000001000001010000010100011,DUT.inst_D); fail(); $finish();
            end
 000001     assert (DUT.rf_rdata0_D == 32'd10) begin
 000001       $display("rf_rdata0_D is correct.  Expected: %h, Actual: %h", 32'd10 ,DUT.rf_rdata0_D);pass();
 000001     end else begin
 000001       $display("rf_rdata0_D is incorrect.  Expected: %h, Actual: %h", 32'd10 ,DUT.rf_rdata0_D); fail(); $finish();
            end
 000001     assert (DUT.rf_rdata1_D == 32'd65) begin
 000001       $display("rf_rdata1_D is correct.  Expected: %h, Actual: %h", 32'd65 ,DUT.rf_rdata1_D);pass();
 000001     end else begin
 000001       $display("rf_rdata1_D is incorrect.  Expected: %h, Actual: %h", 32'd65 ,DUT.rf_rdata1_D); fail(); $finish();
            end
            
            // X
 000001     @(negedge clk);
 000001     reg_en_X = 1;
 000001     alu_fn_X = 4'd0;
 000001     imul_resp_rdy_X = 0;
 000001     assert (DUT.op1_X == 32'd10) begin
 000001       $display("op1_X is correct.  Expected: %h, Actual: %h", 32'd10 ,DUT.op1_X);pass();
 000001     end else begin
 000001       $display("op1_X is incorrect.  Expected: %h, Actual: %h", 32'd10 ,DUT.op1_X); fail(); $finish();
            end
 000001     assert (DUT.op2_X == 32'd1) begin
 000001       $display("op2_X is correct.  Expected: %h, Actual: %h", 32'd1 ,DUT.op2_X);pass();
 000001     end else begin
 000001       $display("op2_X is incorrect.  Expected: %h, Actual: %h", 32'd1 ,DUT.op2_X); fail(); $finish();
            end
 000001     assert (DUT.dmem_reqstream_msg_data == 32'd65) begin
 000001       $display("dmem_reqstream_msg_data is correct.  Expected: %h, Actual: %h", 32'd65 ,DUT.dmem_reqstream_msg_data);pass();
 000001     end else begin
 000001       $display("dmem_reqstream_msg_data is incorrect.  Expected: %h, Actual: %h", 32'd65 ,DUT.dmem_reqstream_msg_data); fail(); $finish();
            end
            
            // M
 000001     @(negedge clk);
 000001     reg_en_M = 1;
 000001     wb_result_sel_M = 1'd1;
 000001     dmem_respstream_msg_data = 32'h0850a4be;
 000001     assert (DUT.dmem_reqstream_msg_addr == 32'd11) begin
 000001       $display("dmem_reqstream_msg_addr is correct.  Expected: %h, Actual: %h", 32'd11 ,DUT.dmem_reqstream_msg_addr);pass();
 000001     end else begin
 000001       $display("dmem_reqstream_msg_addr is incorrect.  Expected: %h, Actual: %h", 32'd11 ,DUT.dmem_reqstream_msg_addr); fail(); $finish();
            end
            
            // W
 000001     @(negedge clk);
            
 000001     delay( $urandom_range(0, 127) );
        
 000001     $display();
 000001     $display("All tests passed!");
 000001     $finish();
          end
        
 000008   task csrr([31:0] data, [4:0] writeReg);
 000008     begin
              
              // F
 000008       @(negedge clk);
 000008       reg_en_F = 1'b1;
        
              // D
 000008       @(negedge clk);
 000008       reg_en_D = 1'b1;
 000008       mngr2proc_data = data;
 000008       csrr_sel_D = 2'd0;
 000008       op2_sel_D = 2'd2;
        
              // X
 000008       @(negedge clk);
 000008       reg_en_X = 1'b1;
 000008       alu_fn_X = 4'd12;
 000008       ex_result_sel_X = 2'd1;
              
              // M
 000008       @(negedge clk);
 000008       reg_en_M = 1'b1;
 000008       wb_result_sel_M = 1'd0;
        
              // W
 000008       @(negedge clk);
 000008       reg_en_W = 1'b1;
 000008       rf_waddr_W = writeReg;
 000008       rf_wen_W = 1'd1;
            end
          endtask
        
 000004   task csrw([4:0] readReg);
 000004     begin
              
              // F
 000004       @(negedge clk);
 000004       reg_en_F = 1'b1;
 000004       imem_respstream_msg.data = {12'd0, readReg, {15'b001000001110011}};
        
              // D
 000004       @(negedge clk);
 000004       reg_en_D = 1'b1;
 000004       op1_sel_D = 1'b1;
        
              // X
 000004       @(negedge clk);
 000004       reg_en_X = 1'b1;
 000004       alu_fn_X = 4'd11;
 000004       ex_result_sel_X = 2'd1;
              
              // M
 000004       @(negedge clk);
 000004       reg_en_M = 1'b1;
 000004       wb_result_sel_M = 1'd0;
        
              // W
 000004       @(negedge clk);
 000004       reg_en_W = 1'b1;
 000004       rf_wen_W = 1'd0;
        
            end
          endtask
        
 000017   task delay( int delay_val );
 000017       begin
 000017           for( int i = 0; i < delay_val; i = i + 1 ) begin
 001040               #1;
                  end
              end
          endtask
        
          
        endmodule
        

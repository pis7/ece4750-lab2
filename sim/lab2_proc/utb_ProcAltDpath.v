//========================================================================
// utb_ProcBaseDpath
//========================================================================
// A basic Verilog unit test bench for the Processor Base Datapath module

`default_nettype none
`timescale 1ps/1ps


`include "ProcAltDpath.v"
`include "vc/trace.v"

//------------------------------------------------------------------------
// Top-level module
//------------------------------------------------------------------------

module top(  input logic clk, input logic linetrace );

 
  logic         reset;

  // Instruction Memory Port

  logic [31:0]  imem_reqstream_msg_addr;
  mem_resp_4B_t imem_respstream_msg;
  logic         imem_respstream_drop;

  // Data Memory Port

  logic [31:0]  dmem_reqstream_msg_addr;
  logic [31:0]  dmem_reqstream_msg_data;
  logic [31:0]  dmem_respstream_msg_data;

  // mngr communication ports

  logic [31:0]  mngr2proc_data;
  logic [31:0]  proc2mngr_data;

  // control signals (ctrl->dpath)

  logic         reg_en_F;
  logic [1:0]   pc_sel_F;

  logic         reg_en_D;
  logic         op1_sel_D;
  logic [1:0]   op2_sel_D;
  logic [1:0]   csrr_sel_D;
  logic [2:0]   imm_type_D;
  logic [1:0]   op1_byp_sel_D;
  logic [1:0]   op2_byp_sel_D;

  logic         reg_en_X;
  logic [3:0]   alu_fn_X;
  logic [1:0]   ex_result_sel_X;

  logic         reg_en_M;
  logic         wb_result_sel_M;

  logic         reg_en_W;
  logic [4:0]   rf_waddr_W;
  logic         rf_wen_W;
  logic         stats_en_wen_W;

  logic         imul_req_val_D;
  logic         imul_resp_rdy_X;

  // status signals (dpath->ctrl)

  logic [31:0]  inst_D;
  logic         br_cond_eq_X;
  logic         br_cond_lt_X;
  logic         br_cond_ltu_X;
  logic         imul_req_rdy_D;
  logic         imul_resp_val_X;

  // extra ports

  logic [31:0]  core_id;
  logic         stats_en;

  // Testbench logic
  logic [31:0] cur_pc;


  //----------------------------------------------------------------------
  // Module instantiations
  //----------------------------------------------------------------------
  
  // Instantiate the processor datapath
  lab2_proc_ProcAltDpath 
  #(
    .p_num_cores( 1)
  )
  DUT
  ( .*
  ); 

  //----------------------------------------------------------------------
  // Run the Test Bench
  //----------------------------------------------------------------------

  initial begin

    $display("Start of Testbench");
    // Initalize all the signal inital values.
    imem_respstream_msg.type_ = `VC_MEM_RESP_MSG_TYPE_READ;
    imem_respstream_msg.opaque = 8'b0;
    imem_respstream_msg.test = 2'b0;
    imem_respstream_msg.len    = 2'd0;
    imem_respstream_msg.data   = 'hDEADBEEF;
    imem_respstream_drop = 0;
    dmem_respstream_msg_data = '0;
    mngr2proc_data= '0;
    reg_en_F = 1;
    pc_sel_F = 2'd3;
    reg_en_D = 1;
    op1_sel_D = 0;
    op2_sel_D = '0;
    csrr_sel_D = '0;
    imm_type_D = '0;
    imul_req_val_D = '0;
    reg_en_X =1;
    alu_fn_X =0;
    ex_result_sel_X =0;
    imul_resp_rdy_X =0;
    reg_en_M =1;
    wb_result_sel_M =0;
    reg_en_W =1;
    rf_waddr_W ='0;
    rf_wen_W = '0;
    stats_en_wen_W =0;
    core_id = '0;
    reset = 1;
    #10

    //--------------------------------------------------------------------
    // Unit Testing #1  If PC is working correctly across the pipeline + a JAL
    //--------------------------------------------------------------------
    // Align test bench with negedge so that it looks better
    @(negedge clk); 
    reset = 0;
    @(negedge clk); 
    $display( "Advancing time");
    // Checking F stage D/X stages are invalid
    assert(DUT.pc_F == 'h200) begin
      $display("pc_F is correct.  Expected: %h, Actual: %h", 'h200,DUT.pc_F); pass();
    end else begin
      $display("pc_F is incorrect.  Expected: %h, Actual: %h", 'h200,DUT.pc_F); fail(); $finish();
    end 
    //Advancing time
    $display( "Advancing time");
    @(negedge clk); 
    // Checking F/D stage X stage is invalid
    assert(DUT.pc_F == 'h204) begin
      $display("pc_F is correct.  Expected: %h, Actual: %h", 'h204,DUT.pc_F);pass();
    end else begin
      $display("pc_F is incorrect.  Expected: %h, Actual: %h", 'h204,DUT.pc_F); fail(); $finish();
    end 
    assert(DUT.pc_D == 'h200) begin
      $display("pc_D is correct.  Expected: %h, Actual: %h", 'h200,DUT.pc_D);pass();
    end else begin
      $display("pc_D is incorrect.  Expected: %h, Actual: %h", 'h200,DUT.pc_D); fail(); $finish();
    end 
    //Advancing time
    $display( "Advancing time");
    @(negedge clk); 
     // Checking F/D/X stage 
    assert(DUT.pc_F == 'h208) begin
      $display("pc_F is correct.  Expected: %h, Actual: %h", 'h208,DUT.pc_F); pass();
    end else begin
      $display("pc_F is incorrect.  Expected: %h, Actual: %h", 'h208,DUT.pc_F); fail(); $finish();
    end 
    assert(DUT.pc_D == 'h204) begin
      $display("pc_D is correct.  Expected: %h, Actual: %h", 'h204,DUT.pc_D);  pass();
    end else begin
      $display("pc_D is incorrect.  Expected: %h, Actual: %h", 'h204,DUT.pc_D); fail(); $finish();
    end 
    assert(DUT.pc_X == 'h200) begin
      $display("pc_X is correct.  Expected: %h, Actual: %h", 'h200,DUT.pc_X);  pass();
    end else begin
      $display("pc_X is incorrect.  Expected: %h, Actual: %h", 'h200,DUT.pc_X); fail(); $finish();
    end 
    // Setting Branch 
    imm_type_D = 4; // J-type imm-type
    pc_sel_F = 2; // J-type imm-type
    
    //Advancing time
    $display( "Advancing time with J imm jump on D stage");
    @(negedge clk); 
     // Checking F/D/X stage 
    assert(DUT.pc_F == 'hfffdb7ee) begin
      $display("pc_F is correct.  Expected: %h, Actual: %h", 'hfffdb7ee,DUT.pc_F); pass();
    end else begin
      $display("pc_F is incorrect.  Expected: %h, Actual: %h", 'hfffdb7ee,DUT.pc_F); fail(); $finish();
    end 
    assert(DUT.pc_D == 'h208) begin
      $display("pc_D is correct.  Expected: %h, Actual: %h", 'h208,DUT.pc_D);  pass();
    end else begin
      $display("pc_D is incorrect.  Expected: %h, Actual: %h", 'h208,DUT.pc_D); fail(); $finish();
    end 
    assert(DUT.pc_X == 'h204) begin
      $display("pc_X is correct.  Expected: %h, Actual: %h", 'h204,DUT.pc_X);  pass();
    end else begin
      $display("pc_X is incorrect.  Expected: %h, Actual: %h", 'h204,DUT.pc_X); fail(); $finish();
    end
    #10

    //--------------------------------------------------------------------
    // Unit Testing #2  Add (Reg-Reg) instruction
    //--------------------------------------------------------------------
    // Initalize all the signal inital values.
    
    $display();
    $display("Test ADD");
    // Reset
    reset = 1;
    @(negedge clk);
    reset = 0;
    @(negedge clk);
    
    // csrr x1, mngr2proc < 10
    csrr(32'd10, 5'd1);
    delay( $urandom_range(0, 127) );

    // csrr x32, mngr2proc < 20
    csrr(32'd20, 5'd31);
    delay( $urandom_range(0, 127) );

    // Simulate add ------

    // F
    @(negedge clk);
    imem_respstream_msg.type_ = `VC_MEM_RESP_MSG_TYPE_READ;
    imem_respstream_msg.opaque = 8'b0;
    imem_respstream_msg.test = 2'b0;
    imem_respstream_msg.len    = 2'd0;
    imem_respstream_msg.data   = 32'b00000001111100001000111110110011; // add x31, x1, x31;
    imem_respstream_drop = 0;
    dmem_respstream_msg_data = '0;
    mngr2proc_data= '0;
    reg_en_F = 1;
    rf_wen_W = 0;
    pc_sel_F = 2'd3;

    // D
    @(negedge clk);
    reg_en_D = 1;
    op1_sel_D = 1'd1;
    op2_sel_D = 2'd1;
    csrr_sel_D = 2'd0;
    imul_req_val_D = 1'b0;
    op1_byp_sel_D = 2'd3;
    op2_byp_sel_D = 2'd0;
    assert (DUT.inst_D == 32'b00000001111100001000111110110011) begin
      $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b00000001111100001000111110110011 ,DUT.inst_D);pass();
    end else begin
      $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b00000001111100001000111110110011,DUT.inst_D); fail(); $finish();
    end
    assert (DUT.rf_rdata0_D == 32'd10) begin
      $display("rf_rdata0_D is correct.  Expected: %h, Actual: %h", 32'd10 ,DUT.rf_rdata0_D);pass();
    end else begin
      $display("rf_rdata0_D is incorrect.  Expected: %h, Actual: %h", 32'd10 ,DUT.rf_rdata0_D); fail(); $finish();
    end
    assert (DUT.rf_rdata1_D == 32'd20) begin
      $display("rf_rdata1_D is correct.  Expected: %h, Actual: %h", 32'd20 ,DUT.rf_rdata1_D);pass();
    end else begin
      $display("rf_rdata1_D is incorrect.  Expected: %h, Actual: %h", 32'd20 ,DUT.rf_rdata1_D); fail(); $finish();
    end
    
    // X
    @(negedge clk);
    reg_en_X = 1;
    alu_fn_X = 4'd0;
    ex_result_sel_X = 2'd1;
    imul_resp_rdy_X = 0;
    assert (DUT.op1_X == 32'd10) begin
      $display("op1_X is correct.  Expected: %h, Actual: %h", 32'd10 ,DUT.op1_X);pass();
    end else begin
      $display("op1_X is incorrect.  Expected: %h, Actual: %h", 32'd10 ,DUT.op1_X); fail(); $finish();
    end
    assert (DUT.op2_X == 32'd20) begin
      $display("op2_X is correct.  Expected: %h, Actual: %h", 32'd20 ,DUT.op2_X);pass();
    end else begin
      $display("op2_X is incorrect.  Expected: %h, Actual: %h", 32'd20 ,DUT.op2_X); fail(); $finish();
    end
    
    // M
    @(negedge clk);
    reg_en_M = 1;
    wb_result_sel_M = 1'd0;
    assert (DUT.ex_result_M == 32'd30) begin
      $display("ex_result_M is correct.  Expected: %h, Actual: %h", 32'd30 ,DUT.ex_result_M);pass();
    end else begin
      $display("ex_result_M is incorrect.  Expected: %h, Actual: %h", 32'd30 ,DUT.ex_result_M); fail(); $finish();
    end
    
    // W
    @(negedge clk);
    reg_en_W = 0;
    rf_waddr_W = 5'd31;
    rf_wen_W = 1'b1;
    stats_en_wen_W = 0;
    core_id = '0;
    assert (DUT.wb_result_W == 32'd30) begin
      $display("wb_result_W is correct.  Expected: %h, Actual: %h", 32'd30 ,DUT.wb_result_W);pass();
    end else begin
      $display("wb_result_W is incorrect.  Expected: %h, Actual: %h", 32'd30 ,DUT.wb_result_W); fail(); $finish();
    end

    delay( $urandom_range(0, 127) );

    // csrw proc2mngr, x31 > 32'd30
    csrw(5'd31);
    assert (DUT.proc2mngr_data == 32'd30) begin
      $display("proc2mngr_data is correct.  Expected: %h, Actual: %h", 32'd30 ,DUT.proc2mngr_data);pass();
    end else begin
      $display("proc2mngr_data is incorrect.  Expected: %h, Actual: %h", 32'd30 ,DUT.proc2mngr_data); fail(); $finish();
    end
    delay( $urandom_range(0, 127) );
    
    //--------------------------------------------------------------------
    // Unit Testing #3  ORI (Reg-Imm) instruction
    //--------------------------------------------------------------------
    // Initalize all the signal inital values.
    
    $display();
    $display("Test ORI");
    // Reset
    reset = 1;
    @(negedge clk);
    reset = 0;
    @(negedge clk);
    
    // csrr x1, mngr2proc < 10
    csrr(32'd10, 5'd1);
    delay( $urandom_range(0, 127) );

    // Simulate ori ------

    // F
    @(negedge clk);
    imem_respstream_msg.type_ = `VC_MEM_RESP_MSG_TYPE_READ;
    imem_respstream_msg.opaque = 8'b0;
    imem_respstream_msg.test = 2'b0;
    imem_respstream_msg.len    = 2'd0;
    imem_respstream_msg.data   = 32'b11111111111100001110000110010011; // ori x3, x1, -1;
    imem_respstream_drop = 0;
    dmem_respstream_msg_data = '0;
    mngr2proc_data= '0;
    reg_en_F = 1;
    rf_wen_W = 0;
    pc_sel_F = 2'd3;

    // D
    @(negedge clk);
    reg_en_D = 1;
    op1_sel_D = 1'd1;
    op2_sel_D = 2'd0;
    imm_type_D = 3'd0;
    imul_req_val_D = 1'b0;
    op1_byp_sel_D = 2'd3;
    op2_byp_sel_D = 2'd0;
    assert (DUT.inst_D == 32'b11111111111100001110000110010011) begin
      $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b11111111111100001110000110010011 ,DUT.inst_D);pass();
    end else begin
      $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b11111111111100001110000110010011,DUT.inst_D); fail(); $finish();
    end
    assert (DUT.rf_rdata0_D == 32'd10) begin
      $display("rf_rdata0_D is correct.  Expected: %h, Actual: %h", 32'd10 ,DUT.rf_rdata0_D);pass();
    end else begin
      $display("rf_rdata0_D is incorrect.  Expected: %h, Actual: %h", 32'd10 ,DUT.rf_rdata0_D); fail(); $finish();
    end
    
    // X
    @(negedge clk);
    reg_en_X = 1;
    alu_fn_X = 4'd3;
    ex_result_sel_X = 2'd1;
    imul_resp_rdy_X = 0;
    assert (DUT.op1_X == 32'd10) begin
      $display("op1_X is correct.  Expected: %h, Actual: %h", 32'd10 ,DUT.op1_X);pass();
    end else begin
      $display("op1_X is incorrect.  Expected: %h, Actual: %h", 32'd10 ,DUT.op1_X); fail(); $finish();
    end
    assert (DUT.op2_X == 32'hFFFFFFFF) begin
      $display("op2_X is correct.  Expected: %h, Actual: %h", 32'hFFFFFFFF ,DUT.op2_X);pass();
    end else begin
      $display("op2_X is incorrect.  Expected: %h, Actual: %h", 32'hFFFFFFFF ,DUT.op2_X); fail(); $finish();
    end
    
    // M
    @(negedge clk);
    reg_en_M = 1;
    wb_result_sel_M = 1'd0;
    assert (DUT.ex_result_M == 32'hFFFFFFFF) begin
      $display("ex_result_M is correct.  Expected: %h, Actual: %h", 32'hFFFFFFFF ,DUT.ex_result_M);pass();
    end else begin
      $display("ex_result_M is incorrect.  Expected: %h, Actual: %h", 32'hFFFFFFFF ,DUT.ex_result_M); fail(); $finish();
    end
    
    // W
    @(negedge clk);
    reg_en_W = 0;
    rf_waddr_W = 5'd3;
    rf_wen_W = 1'b1;
    stats_en_wen_W = 0;
    core_id = '0;
    assert (DUT.wb_result_W == 32'hFFFFFFFF) begin
      $display("wb_result_W is correct.  Expected: %h, Actual: %h", 32'hFFFFFFFF ,DUT.wb_result_W);pass();
    end else begin
      $display("wb_result_W is incorrect.  Expected: %h, Actual: %h", 32'hFFFFFFFF ,DUT.wb_result_W); fail(); $finish();
    end

    delay( $urandom_range(0, 127) );

    // csrw proc2mngr, x3 > 32'hFFFFFFFF
    csrw(5'd3);
    assert (DUT.proc2mngr_data == 32'hFFFFFFFF) begin
      $display("proc2mngr_data is correct.  Expected: %h, Actual: %h", 32'hFFFFFFFF ,DUT.proc2mngr_data);pass();
    end else begin
      $display("proc2mngr_data is incorrect.  Expected: %h, Actual: %h", 32'hFFFFFFFF ,DUT.proc2mngr_data); fail(); $finish();
    end
    delay( $urandom_range(0, 127) );

    //--------------------------------------------------------------------
    // Unit Testing #4 Mul instruction - stall until value ready
    //--------------------------------------------------------------------
    // Initalize all the signal inital values.
    
    $display();
    $display("Test MUL");
    // Reset
    reset = 1;
    @(negedge clk);
    reset = 0;
    @(negedge clk);
    
    
    // csrr x1, mngr2proc < 32'd16375
    csrr(32'd16375, 5'd1);
    delay( $urandom_range(0, 127) );

    // csrr x2, mngr2proc < 32'd6911
    csrr(32'd6911, 5'd2);
    delay( $urandom_range(0, 127) );

    // Simulate mul ------

    // F
    @(negedge clk);
    imem_respstream_msg.type_ = `VC_MEM_RESP_MSG_TYPE_READ;
    imem_respstream_msg.opaque = 8'b0;
    imem_respstream_msg.test = 2'b0;
    imem_respstream_msg.len    = 2'd0;
    imem_respstream_msg.data   = 32'b00000010001000001000000110110011; // mul x3, x1, x2
    imem_respstream_drop = 0;
    dmem_respstream_msg_data = '0;
    mngr2proc_data= '0;
    reg_en_F = 1;
    rf_wen_W = 0;
    pc_sel_F = 2'd3;

    // D
    @(negedge clk);
    reg_en_D = 1;
    op1_sel_D = 1'd1;
    op2_sel_D = 2'd1;
    imul_req_val_D = 1'b1;
    op1_byp_sel_D = 2'd3;
    op2_byp_sel_D = 2'd0;
    assert (DUT.inst_D == 32'b00000010001000001000000110110011) begin
      $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b00000010001000001000000110110011 ,DUT.inst_D);pass();
    end else begin
      $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b00000010001000001000000110110011,DUT.inst_D); fail(); $finish();
    end
    assert (DUT.rf_rdata0_D == 32'd16375) begin
      $display("rf_rdata0_D is correct.  Expected: %h, Actual: %h", 32'd16375 ,DUT.rf_rdata0_D);pass();
    end else begin
      $display("rf_rdata0_D is incorrect.  Expected: %h, Actual: %h", 32'd16375 ,DUT.rf_rdata0_D); fail(); $finish();
    end
    assert (DUT.rf_rdata1_D == 32'd6911) begin
      $display("rf_rdata1_D is correct.  Expected: %h, Actual: %h", 32'd6911 ,DUT.rf_rdata1_D);pass();
    end else begin
      $display("rf_rdata1_D is incorrect.  Expected: %h, Actual: %h", 32'd6911 ,DUT.rf_rdata1_D); fail(); $finish();
    end
    
    // X
    @(negedge clk);
    reg_en_X = 1;
    alu_fn_X = 4'd3;
    ex_result_sel_X = 2'd2;
    imul_resp_rdy_X = 1'b1;
    assert (DUT.op1_X == 32'd16375) begin
      $display("op1_X is correct.  Expected: %h, Actual: %h", 32'd16375 ,DUT.op1_X);pass();
    end else begin
      $display("op1_X is incorrect.  Expected: %h, Actual: %h", 32'd16375 ,DUT.op1_X); fail(); $finish();
    end
    assert (DUT.op2_X == 32'd6911) begin
      $display("op2_X is correct.  Expected: %h, Actual: %h", 32'd6911 ,DUT.op2_X);pass();
    end else begin
      $display("op2_X is incorrect.  Expected: %h, Actual: %h", 32'd6911 ,DUT.op2_X); fail(); $finish();
    end
    assert (DUT.imul_resp_val_X == 1'b0) begin
      $display("imul_resp_val_X is correct.  Expected: %h, Actual: %h", 1'b0 ,DUT.imul_resp_val_X);pass();
    end else begin
      $display("imul_resp_val_X is incorrect.  Expected: %h, Actual: %h", 1'b0 ,DUT.imul_resp_val_X); fail(); $finish();
    end
    reg_en_X = 0;
    reg_en_D = 0;
    reg_en_F = 0;
    @(posedge imul_resp_val_X);
    reg_en_X = 1;
    reg_en_D = 1;
    reg_en_F = 1;
    
    // M
    @(negedge clk);
    reg_en_M = 1;
    wb_result_sel_M = 1'd0;
    assert (DUT.ex_result_M == 32'd113167625) begin
      $display("ex_result_M is correct.  Expected: %h, Actual: %h", 32'd113167625 ,DUT.ex_result_M);pass();
    end else begin
      $display("ex_result_M is incorrect.  Expected: %h, Actual: %h", 32'd113167625 ,DUT.ex_result_M); fail(); $finish();
    end
    
    // W
    @(negedge clk);
    reg_en_W = 0;
    rf_waddr_W = 5'd3;
    rf_wen_W = 1'b1;
    stats_en_wen_W = 0;
    core_id = '0;
    assert (DUT.wb_result_W == 32'd113167625) begin
      $display("wb_result_W is correct.  Expected: %h, Actual: %h", 32'd113167625 ,DUT.wb_result_W);pass();
    end else begin
      $display("wb_result_W is incorrect.  Expected: %h, Actual: %h", 32'd113167625 ,DUT.wb_result_W); fail(); $finish();
    end

    delay( $urandom_range(0, 127) );

    // csrw proc2mngr, x3 > 32'd113167625
    csrw(5'd3);
    assert (DUT.proc2mngr_data == 32'd113167625) begin
      $display("proc2mngr_data is correct.  Expected: %h, Actual: %h", 32'd113167625 ,DUT.proc2mngr_data);pass();
    end else begin
      $display("proc2mngr_data is incorrect.  Expected: %h, Actual: %h", 32'd113167625 ,DUT.proc2mngr_data); fail(); $finish();
    end
    delay( $urandom_range(0, 127) );

    //--------------------------------------------------------------------
    // Unit Testing #5 LW instruction with dmem stall
    //--------------------------------------------------------------------
    // Initalize all the signal inital values.
    
    $display();
    $display("Test LW with dmem stall");
    // Reset
    reset = 1;
    @(negedge clk);
    reset = 0;
    @(negedge clk);
    
    // csrr x1, mngr2proc < 10
    csrr(32'd10, 5'd1);
    delay( $urandom_range(0, 127) );

    // Simulate lw ------

    // F
    @(negedge clk);
    imem_respstream_msg.type_ = `VC_MEM_RESP_MSG_TYPE_READ;
    imem_respstream_msg.opaque = 8'b0;
    imem_respstream_msg.test = 2'b0;
    imem_respstream_msg.len    = 2'd0;
    imem_respstream_msg.data   = 32'b00000000000100001010000100000011; // lw x2, 1(x1)
    imem_respstream_drop = 0;
    dmem_respstream_msg_data = '0;
    mngr2proc_data= '0;
    reg_en_F = 1;
    rf_wen_W = 0;
    pc_sel_F = 2'd3;

    // D
    @(negedge clk);
    reg_en_D = 1;
    op1_sel_D = 1'd1;
    op2_sel_D = 2'd0;
    imm_type_D = 3'd0;
    imul_req_val_D = 1'b0;
    op1_byp_sel_D = 2'd3;
    op2_byp_sel_D = 2'd0;
    assert (DUT.inst_D == 32'b00000000000100001010000100000011) begin
      $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b00000000000100001010000100000011 ,DUT.inst_D);pass();
    end else begin
      $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b00000000000100001010000100000011,DUT.inst_D); fail(); $finish();
    end
    assert (DUT.rf_rdata0_D == 32'd10) begin
      $display("rf_rdata0_D is correct.  Expected: %h, Actual: %h", 32'd10 ,DUT.rf_rdata0_D);pass();
    end else begin
      $display("rf_rdata0_D is incorrect.  Expected: %h, Actual: %h", 32'd10 ,DUT.rf_rdata0_D); fail(); $finish();
    end
    
    // X
    @(negedge clk);
    reg_en_X = 1;
    alu_fn_X = 4'd0;
    ex_result_sel_X = 2'd1;
    imul_resp_rdy_X = 0;
    reg_en_X = 0; // Stall X
    reg_en_D = 0; // Stall D
    reg_en_F = 0; // Stall F
    assert (DUT.op1_X == 32'd10) begin
      $display("op1_X is correct.  Expected: %h, Actual: %h", 32'd10 ,DUT.op1_X);pass();
    end else begin
      $display("op1_X is incorrect.  Expected: %h, Actual: %h", 32'd10 ,DUT.op1_X); fail(); $finish();
    end
    assert (DUT.op2_X == 32'd1) begin
      $display("op2_X is correct.  Expected: %h, Actual: %h", 32'd1 ,DUT.op2_X);pass();
    end else begin
      $display("op2_X is incorrect.  Expected: %h, Actual: %h", 32'd1 ,DUT.op2_X); fail(); $finish();
    end
    assert (DUT.inst_D == 32'b00000000000100001010000100000011) begin // Make sure signals in previous cycles are stalled
      $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b00000000000100001010000100000011 ,DUT.inst_D);pass();
    end else begin
      $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b00000000000100001010000100000011,DUT.inst_D); fail(); $finish();
    end
    assert (DUT.rf_rdata0_D == 32'd10) begin
      $display("rf_rdata0_D is correct.  Expected: %h, Actual: %h", 32'd10 ,DUT.rf_rdata0_D);pass();
    end else begin
      $display("rf_rdata0_D is incorrect.  Expected: %h, Actual: %h", 32'd10 ,DUT.rf_rdata0_D); fail(); $finish();
    end

    // Random dmem delay for ready signal
    delay( $urandom_range(0, 127) );
    
    // M
    @(negedge clk);
    assert (DUT.op1_X == 32'd10) begin // Signals in F, D, X should still be stalled
      $display("op1_X is correct.  Expected: %h, Actual: %h", 32'd10 ,DUT.op1_X);pass();
    end else begin
      $display("op1_X is incorrect.  Expected: %h, Actual: %h", 32'd10 ,DUT.op1_X); fail(); $finish();
    end
    assert (DUT.op2_X == 32'd1) begin
      $display("op2_X is correct.  Expected: %h, Actual: %h", 32'd1 ,DUT.op2_X);pass();
    end else begin
      $display("op2_X is incorrect.  Expected: %h, Actual: %h", 32'd1 ,DUT.op2_X); fail(); $finish();
    end
    assert (DUT.inst_D == 32'b00000000000100001010000100000011) begin // Make sure signals in previous cycles are stalled
      $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b00000000000100001010000100000011 ,DUT.inst_D);pass();
    end else begin
      $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b00000000000100001010000100000011,DUT.inst_D); fail(); $finish();
    end
    assert (DUT.rf_rdata0_D == 32'd10) begin
      $display("rf_rdata0_D is correct.  Expected: %h, Actual: %h", 32'd10 ,DUT.rf_rdata0_D);pass();
    end else begin
      $display("rf_rdata0_D is incorrect.  Expected: %h, Actual: %h", 32'd10 ,DUT.rf_rdata0_D); fail(); $finish();
    end
    reg_en_D = 1;
    reg_en_F = 1;
    reg_en_X = 1;
    reg_en_M = 1;
    assert (DUT.dmem_reqstream_msg_addr == 32'd11) begin
      $display("dmem_reqstream_msg_addr is correct.  Expected: %h, Actual: %h", 32'd11 ,DUT.dmem_reqstream_msg_addr);pass();
    end else begin
      $display("dmem_reqstream_msg_addr is incorrect.  Expected: %h, Actual: %h", 32'd11 ,DUT.dmem_reqstream_msg_addr); fail(); $finish();
    end

    @(negedge clk);
    reg_en_D = 0;
    reg_en_F = 0;
    reg_en_X = 0;
    reg_en_M = 0; // Stall M because dmem not ready to respond

    // Random dmem delay for result signal
    delay( $urandom_range(0, 127) );

    // M unstall
    @(negedge clk);
    reg_en_D = 1;
    reg_en_F = 1;
    reg_en_X = 1;
    reg_en_M = 1; // Unstall M because dmem ready to respond
    wb_result_sel_M = 1'd1;
    dmem_respstream_msg_data = 32'hFFFFFFFF;

    // W
    @(negedge clk);
    reg_en_W = 0;
    rf_waddr_W = 5'd2;
    rf_wen_W = 1'b1;
    stats_en_wen_W = 0;
    core_id = '0;
    assert (DUT.wb_result_W == 32'hFFFFFFFF) begin
      $display("wb_result_W is correct.  Expected: %h, Actual: %h", 32'hFFFFFFFF ,DUT.wb_result_W);pass();
    end else begin
      $display("wb_result_W is incorrect.  Expected: %h, Actual: %h", 32'hFFFFFFFF ,DUT.wb_result_W); fail(); $finish();
    end

    delay( $urandom_range(0, 127) );

    // csrw proc2mngr, x2 > 32'hFFFFFFFF
    csrw(5'd2);
    assert (DUT.proc2mngr_data == 32'hFFFFFFFF) begin
      $display("proc2mngr_data is correct.  Expected: %h, Actual: %h", 32'hFFFFFFFF ,DUT.proc2mngr_data);pass();
    end else begin
      $display("proc2mngr_data is incorrect.  Expected: %h, Actual: %h", 32'hFFFFFFFF ,DUT.proc2mngr_data); fail(); $finish();
    end
    delay( $urandom_range(0, 127) );

    //--------------------------------------------------------------------
    // Unit Testing #6 SW instruction
    //--------------------------------------------------------------------
    // Initalize all the signal inital values.
    
    $display();
    $display("Test SW");
    // Reset
    reset = 1;
    @(negedge clk);
    reset = 0;
    @(negedge clk);
    
    // csrr x1, mngr2proc < 10
    csrr(32'd10, 5'd1);
    delay( $urandom_range(0, 127) );

    // csrr x2, mngr2proc < 65
    csrr(32'd65, 5'd2);
    delay( $urandom_range(0, 127) );

    // Simulate sw ------

    // F
    @(negedge clk);
    imem_respstream_msg.type_ = `VC_MEM_RESP_MSG_TYPE_READ;
    imem_respstream_msg.opaque = 8'b0;
    imem_respstream_msg.test = 2'b0;
    imem_respstream_msg.len    = 2'd0;
    imem_respstream_msg.data   = 32'b00000000001000001010000010100011; // sw x2, 1(x1)
    imem_respstream_drop = 0;
    dmem_respstream_msg_data = '0;
    mngr2proc_data= '0;
    reg_en_F = 1;
    rf_wen_W = 0;
    pc_sel_F = 2'd3;

    // D
    @(negedge clk);
    reg_en_D = 1;
    op1_sel_D = 1'd1;
    op2_sel_D = 2'd0;
    imm_type_D = 3'd1;
    imul_req_val_D = 1'b0;
    op1_byp_sel_D = 2'd3;
    op2_byp_sel_D = 2'd0;
    assert (DUT.inst_D == 32'b00000000001000001010000010100011) begin
      $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b00000000001000001010000010100011 ,DUT.inst_D);pass();
    end else begin
      $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b00000000001000001010000010100011,DUT.inst_D); fail(); $finish();
    end
    assert (DUT.rf_rdata0_D == 32'd10) begin
      $display("rf_rdata0_D is correct.  Expected: %h, Actual: %h", 32'd10 ,DUT.rf_rdata0_D);pass();
    end else begin
      $display("rf_rdata0_D is incorrect.  Expected: %h, Actual: %h", 32'd10 ,DUT.rf_rdata0_D); fail(); $finish();
    end
    assert (DUT.rf_rdata1_D == 32'd65) begin
      $display("rf_rdata1_D is correct.  Expected: %h, Actual: %h", 32'd65 ,DUT.rf_rdata1_D);pass();
    end else begin
      $display("rf_rdata1_D is incorrect.  Expected: %h, Actual: %h", 32'd65 ,DUT.rf_rdata1_D); fail(); $finish();
    end
    
    // X
    @(negedge clk);
    reg_en_X = 1;
    alu_fn_X = 4'd0;
    imul_resp_rdy_X = 0;
    assert (DUT.op1_X == 32'd10) begin
      $display("op1_X is correct.  Expected: %h, Actual: %h", 32'd10 ,DUT.op1_X);pass();
    end else begin
      $display("op1_X is incorrect.  Expected: %h, Actual: %h", 32'd10 ,DUT.op1_X); fail(); $finish();
    end
    assert (DUT.op2_X == 32'd1) begin
      $display("op2_X is correct.  Expected: %h, Actual: %h", 32'd1 ,DUT.op2_X);pass();
    end else begin
      $display("op2_X is incorrect.  Expected: %h, Actual: %h", 32'd1 ,DUT.op2_X); fail(); $finish();
    end
    assert (DUT.dmem_reqstream_msg_data == 32'd65) begin
      $display("dmem_reqstream_msg_data is correct.  Expected: %h, Actual: %h", 32'd65 ,DUT.dmem_reqstream_msg_data);pass();
    end else begin
      $display("dmem_reqstream_msg_data is incorrect.  Expected: %h, Actual: %h", 32'd65 ,DUT.dmem_reqstream_msg_data); fail(); $finish();
    end
    
    // M
    @(negedge clk);
    reg_en_M = 1;
    wb_result_sel_M = 1'd1;
    dmem_respstream_msg_data = 32'h0850a4be;
    assert (DUT.dmem_reqstream_msg_addr == 32'd11) begin
      $display("dmem_reqstream_msg_addr is correct.  Expected: %h, Actual: %h", 32'd11 ,DUT.dmem_reqstream_msg_addr);pass();
    end else begin
      $display("dmem_reqstream_msg_addr is incorrect.  Expected: %h, Actual: %h", 32'd11 ,DUT.dmem_reqstream_msg_addr); fail(); $finish();
    end
    
    // W
    @(negedge clk);
    
    delay( $urandom_range(0, 127) );

    //--------------------------------------------------------------------
    // Unit Testing #7 BLT instruction
    //--------------------------------------------------------------------
    // Initalize all the signal inital values.
    
    $display();
    $display("Test BLT");
    // Reset
    reset = 1;
    @(negedge clk);
    reset = 0;
    @(negedge clk);
    
    // csrr x1, mngr2proc < 10
    csrr(32'd10, 5'd1);
    delay( $urandom_range(0, 127) );

    // csrr x2, mngr2proc < 65
    csrr(32'd65, 5'd2);
    delay( $urandom_range(0, 127) );

    // Simulate blt ------

    // F
    @(negedge clk);
    imem_respstream_msg.type_ = `VC_MEM_RESP_MSG_TYPE_READ;
    imem_respstream_msg.opaque = 8'b0;
    imem_respstream_msg.test = 2'b0;
    imem_respstream_msg.len    = 2'd0;
    imem_respstream_msg.data   = 32'b00000000001000001100000101100011; // blt x1, x2, 2
    imem_respstream_drop = 0;
    dmem_respstream_msg_data = '0;
    mngr2proc_data= '0;
    reg_en_F = 1;
    rf_wen_W = 0;
    pc_sel_F = 2'd3;

    // D
    @(negedge clk);
    reg_en_D = 1;
    op1_sel_D = 1'd1;
    op2_sel_D = 2'd1;
    imm_type_D = 3'd2;
    imul_req_val_D = 1'b0;
    op1_byp_sel_D = 2'd3;
    op2_byp_sel_D = 2'd0;
    cur_pc = DUT.pc_D;
    assert (DUT.inst_D == 32'b00000000001000001100000101100011) begin
      $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b00000000001000001100000101100011 ,DUT.inst_D);pass();
    end else begin
      $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b00000000001000001100000101100011,DUT.inst_D); fail(); $finish();
    end
    assert (DUT.rf_rdata0_D == 32'd10) begin
      $display("rf_rdata0_D is correct.  Expected: %h, Actual: %h", 32'd10 ,DUT.rf_rdata0_D);pass();
    end else begin
      $display("rf_rdata0_D is incorrect.  Expected: %h, Actual: %h", 32'd10 ,DUT.rf_rdata0_D); fail(); $finish();
    end
    assert (DUT.rf_rdata1_D == 32'd65) begin
      $display("rf_rdata1_D is correct.  Expected: %h, Actual: %h", 32'd65 ,DUT.rf_rdata1_D);pass();
    end else begin
      $display("rf_rdata1_D is incorrect.  Expected: %h, Actual: %h", 32'd65 ,DUT.rf_rdata1_D); fail(); $finish();
    end
    
    // X
    @(negedge clk);
    reg_en_X = 1;
    alu_fn_X = 4'd0;
    imul_resp_rdy_X = 0;
    pc_sel_F = 2'd1;
    assert (DUT.op1_X == 32'd10) begin
      $display("op1_X is correct.  Expected: %h, Actual: %h", 32'd10 ,DUT.op1_X);pass();
    end else begin
      $display("op1_X is incorrect.  Expected: %h, Actual: %h", 32'd10 ,DUT.op1_X); fail(); $finish();
    end
    assert (DUT.op2_X == 32'd65) begin
      $display("op2_X is correct.  Expected: %h, Actual: %h", 32'd65 ,DUT.op2_X);pass();
    end else begin
      $display("op2_X is incorrect.  Expected: %h, Actual: %h", 32'd65 ,DUT.op2_X); fail(); $finish();
    end
    assert (DUT.br_target_X == (cur_pc + 32'd2)) begin
      $display("br_target_X is correct.  Expected: %h, Actual: %h", (cur_pc + 32'd2) ,DUT.br_target_X);pass();
    end else begin
      $display("br_target_X is incorrect.  Expected: %h, Actual: %h", (cur_pc + 32'd2) ,DUT.br_target_X); fail(); $finish();
    end
    
    // M
    @(negedge clk);
    assert (DUT.pc_F == (cur_pc + 32'd2)) begin
      $display("pc_F is correct.  Expected: %h, Actual: %h", (cur_pc + 32'd2) ,DUT.pc_F);pass();
    end else begin
      $display("pc_F is incorrect.  Expected: %h, Actual: %h", (cur_pc + 32'd2) ,DUT.pc_F); fail(); $finish();
    end
    
    // W
    @(negedge clk);
    
    delay( $urandom_range(0, 127) );

    //--------------------------------------------------------------------
    // Unit Testing #8 RS2 Forwarding in D from instr in X:
    // 1: add x3, x1, x2
    // 2: add x4, x3, x3
    //--------------------------------------------------------------------
    // Initalize all the signal inital values.
    
    $display();
    $display("Test RS2 Forwarding in D from instr in X");
    // Reset
    reset = 1;
    @(negedge clk);
    reset = 0;
    @(negedge clk);
    
    // csrr x1, mngr2proc < 10
    csrr(32'd10, 5'd1);
    delay( $urandom_range(0, 127) );

    // csrr x2, mngr2proc < 65
    csrr(32'd65, 5'd2);
    delay( $urandom_range(0, 127) );

    // Simulate blt ------

    // Cycle 1 - F = 1
    @(negedge clk);
    imem_respstream_msg.type_ = `VC_MEM_RESP_MSG_TYPE_READ;
    imem_respstream_msg.opaque = 8'b0;
    imem_respstream_msg.test = 2'b0;
    imem_respstream_msg.len    = 2'd0;
    imem_respstream_msg.data   = 32'b00000000001000001000000110110011; // add x3, x1, x2
    imem_respstream_drop = 0;
    dmem_respstream_msg_data = '0;
    mngr2proc_data= '0;
    reg_en_F = 1;
    rf_wen_W = 0;
    pc_sel_F = 2'd3;

    // Cycle 2 - F = 2, D = 1
    @(negedge clk);
    imem_respstream_msg.type_ = `VC_MEM_RESP_MSG_TYPE_READ;
    imem_respstream_msg.opaque = 8'b0;
    imem_respstream_msg.test = 2'b0;
    imem_respstream_msg.len    = 2'd0;
    imem_respstream_msg.data   = 32'b00000000001100011000001000110011; // add x4, x3, x3
    imem_respstream_drop = 0;
    dmem_respstream_msg_data = '0;
    mngr2proc_data= '0;
    reg_en_F = 1;
    rf_wen_W = 0;
    pc_sel_F = 2'd3;

    reg_en_D = 1;
    op1_sel_D = 1'd1;
    op2_sel_D = 2'd1;
    imm_type_D = 3'd2;
    imul_req_val_D = 1'b0;
    op1_byp_sel_D = 2'd3;
    op2_byp_sel_D = 2'd0;
    assert (DUT.inst_D == 32'b00000000001000001000000110110011) begin
      $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b00000000001000001000000110110011 ,DUT.inst_D);pass();
    end else begin
      $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b00000000001000001000000110110011,DUT.inst_D); fail(); $finish();
    end
    assert (DUT.rf_rdata0_D == 32'd10) begin
      $display("rf_rdata0_D is correct.  Expected: %h, Actual: %h", 32'd10 ,DUT.rf_rdata0_D);pass();
    end else begin
      $display("rf_rdata0_D is incorrect.  Expected: %h, Actual: %h", 32'd10 ,DUT.rf_rdata0_D); fail(); $finish();
    end
    assert (DUT.rf_rdata1_D == 32'd65) begin
      $display("rf_rdata1_D is correct.  Expected: %h, Actual: %h", 32'd65 ,DUT.rf_rdata1_D);pass();
    end else begin
      $display("rf_rdata1_D is incorrect.  Expected: %h, Actual: %h", 32'd65 ,DUT.rf_rdata1_D); fail(); $finish();
    end
    
    // Cycle 3 - F = NOP, D = 2, X = 1
    @(negedge clk);
    op1_byp_sel_D = 2'd2;
    op2_byp_sel_D = 2'd3;

    reg_en_X = 1;
    alu_fn_X = 4'd0;
    ex_result_sel_X = 2'd1;
    imul_resp_rdy_X = 0;
    assert (DUT.inst_D == 32'b00000000001100011000001000110011) begin
      $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b00000000001100011000001000110011 ,DUT.inst_D);pass();
    end else begin
      $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b00000000001100011000001000110011,DUT.inst_D); fail(); $finish();
    end
    assert (DUT.op1_X == 32'd10) begin // from instr 1
      $display("op1_X is correct.  Expected: %h, Actual: %h", 32'd10 ,DUT.op1_X);pass();
    end else begin
      $display("op1_X is incorrect.  Expected: %h, Actual: %h", 32'd10 ,DUT.op1_X); fail(); $finish();
    end
    assert (DUT.op2_X == 32'd65) begin // from instr 1
      $display("op2_X is correct.  Expected: %h, Actual: %h", 32'd65 ,DUT.op2_X);pass();
    end else begin
      $display("op2_X is incorrect.  Expected: %h, Actual: %h", 32'd65 ,DUT.op2_X); fail(); $finish();
    end
    
    // Cycle 4 - X = 2, M = 1 
    @(negedge clk);
    reg_en_M = 1;
    wb_result_sel_M = 1'd0;
    assert (DUT.op1_X == 32'd75) begin // from instr 2
      $display("op1_X is correct.  Expected: %h, Actual: %h", 32'd75 ,DUT.op1_X);pass();
    end else begin
      $display("op1_X is incorrect.  Expected: %h, Actual: %h", 32'd75 ,DUT.op1_X); fail(); $finish();
    end
    assert (DUT.op2_X == 32'd75) begin // from instr 2
      $display("op2_X is correct.  Expected: %h, Actual: %h", 32'd75 ,DUT.op2_X);pass();
    end else begin
      $display("op2_X is incorrect.  Expected: %h, Actual: %h", 32'd75 ,DUT.op2_X); fail(); $finish();
    end
    assert (DUT.ex_result_M == 32'd75) begin
      $display("ex_result_M is correct.  Expected: %h, Actual: %h", 32'd75 ,DUT.ex_result_M);pass();
    end else begin
      $display("ex_result_M is incorrect.  Expected: %h, Actual: %h", 32'd75 ,DUT.ex_result_M); fail(); $finish();
    end
    
    // Cycle 5 - M = 2, W = 1
    @(negedge clk);
    reg_en_W = 1;
    rf_waddr_W = 5'd3;
    rf_wen_W = 1'b1;
    stats_en_wen_W = 0;
    core_id = '0;
    assert (DUT.ex_result_M == 32'd150) begin
      $display("ex_result_M is correct.  Expected: %h, Actual: %h", 32'd150 ,DUT.ex_result_M);pass();
    end else begin
      $display("ex_result_M is incorrect.  Expected: %h, Actual: %h", 32'd150 ,DUT.ex_result_M); fail(); $finish();
    end
    assert (DUT.wb_result_W == 32'd75) begin
      $display("wb_result_W is correct.  Expected: %h, Actual: %h", 32'd75 ,DUT.wb_result_W);pass();
    end else begin
      $display("wb_result_W is incorrect.  Expected: %h, Actual: %h", 32'd75 ,DUT.wb_result_W); fail(); $finish();
    end

    // Cycle 6 - W = 2
    @(negedge clk);
    reg_en_W = 0;
    rf_waddr_W = 5'd4;
    rf_wen_W = 1'b1;
    stats_en_wen_W = 0;
    core_id = '0;
    assert (DUT.wb_result_W == 32'd150) begin
      $display("wb_result_W is correct.  Expected: %h, Actual: %h", 32'd150 ,DUT.wb_result_W);pass();
    end else begin
      $display("wb_result_W is incorrect.  Expected: %h, Actual: %h", 32'd150 ,DUT.wb_result_W); fail(); $finish();
    end

    // delay( $urandom_range(0, 127) );

    // // csrw proc2mngr, x3 > 32'd75
    // csrw(5'd3);
    // assert (DUT.proc2mngr_data == 32'd75) begin
    //   $display("proc2mngr_data is correct.  Expected: %h, Actual: %h", 32'd75 ,DUT.proc2mngr_data);pass();
    // end else begin
    //   $display("proc2mngr_data is incorrect.  Expected: %h, Actual: %h", 32'd75 ,DUT.proc2mngr_data); fail(); $finish();
    // end

    delay( $urandom_range(0, 127) );

    // csrw proc2mngr, x4 > 32'd150
    csrw(5'd4);
    assert (DUT.proc2mngr_data == 32'd150) begin
      $display("proc2mngr_data is correct.  Expected: %h, Actual: %h", 32'd150 ,DUT.proc2mngr_data);pass();
    end else begin
      $display("proc2mngr_data is incorrect.  Expected: %h, Actual: %h", 32'd150 ,DUT.proc2mngr_data); fail(); $finish();
    end

    delay( $urandom_range(0, 127) );

    $display();
    $display("All tests passed!");
    $finish();
  end

  task csrr([31:0] data, [4:0] writeReg);
    begin
      
      // F
      @(negedge clk);
      reg_en_F = 1'b1;

      // D
      @(negedge clk);
      reg_en_D = 1'b1;
      mngr2proc_data = data;
      csrr_sel_D = 2'd0;
      op2_sel_D = 2'd2;

      // X
      @(negedge clk);
      reg_en_X = 1'b1;
      alu_fn_X = 4'd12;
      ex_result_sel_X = 2'd1;
      
      // M
      @(negedge clk);
      reg_en_M = 1'b1;
      wb_result_sel_M = 1'd0;

      // W
      @(negedge clk);
      reg_en_W = 1'b1;
      rf_waddr_W = writeReg;
      rf_wen_W = 1'd1;
    end
  endtask

  task csrw([4:0] readReg);
    begin
      
      // F
      @(negedge clk);
      reg_en_F = 1'b1;
      imem_respstream_msg.data = {12'd0, readReg, {15'b001000001110011}};

      // D
      @(negedge clk);
      reg_en_D = 1'b1;
      op1_sel_D = 1'b1;

      // X
      @(negedge clk);
      reg_en_X = 1'b1;
      alu_fn_X = 4'd11;
      ex_result_sel_X = 2'd1;
      
      // M
      @(negedge clk);
      reg_en_M = 1'b1;
      wb_result_sel_M = 1'd0;

      // W
      @(negedge clk);
      reg_en_W = 1'b1;
      rf_wen_W = 1'd0;

    end
  endtask

  task delay( int delay_val );
      begin
          for( int i = 0; i < delay_val; i = i + 1 ) begin
              #1;
          end
      end
  endtask

  
endmodule

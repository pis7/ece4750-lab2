//========================================================================
// utb_ProcAltCtrl
//========================================================================
// A basic Verilog unit test bench for the Processor Alt Control module

`default_nettype none
`timescale 1ps/1ps

`include "ProcAltCtrl.v"
`include "vc/trace.v"

//------------------------------------------------------------------------
// Top-level module
//------------------------------------------------------------------------

module top(  input logic clk, input logic linetrace );

    // DUT signals
    logic        reset;

    // Instruction Memory Port

    logic        imem_reqstream_val;
    logic        imem_reqstream_rdy;
    logic        imem_respstream_val;
    logic        imem_respstream_rdy;
    logic        imem_respstream_drop;

    // Data Memory Port

    logic        dmem_reqstream_val;
    logic        dmem_reqstream_rdy;
    logic        dmem_respstream_val;
    logic        dmem_respstream_rdy;
    logic        mem_action_M;

    // mngr communication port

    logic        mngr2proc_val;
    logic        mngr2proc_rdy;
    logic        proc2mngr_val;
    logic        proc2mngr_rdy;

    // control signals (ctrl->dpath)

    logic        reg_en_F;
    logic [1:0]  pc_sel_F;

    logic        reg_en_D;
    logic        op1_sel_D;
    logic [1:0]  op2_sel_D;
    logic [1:0]  csrr_sel_D;
    logic [2:0]  imm_type_D;
    logic [1:0]  op1_byp_sel_D;
    logic [1:0]  op2_byp_sel_D;

    logic        reg_en_X;
    logic [3:0]  alu_fn_X;
    logic [1:0]  ex_result_sel_X;

    logic        reg_en_M;
    logic        wb_result_sel_M;

    logic        reg_en_W;
    logic [4:0]  rf_waddr_W;
    logic        rf_wen_W;
    logic        stats_en_wen_W;

    logic        imul_req_val_D;
    logic        imul_resp_rdy_X;

    // status signals (dpath->ctrl)

    logic [31:0] inst_D;
    logic        br_cond_eq_X;
    logic        br_cond_lt_X;
    logic        br_cond_ltu_X;

    logic        imul_req_rdy_D;
    logic        imul_resp_val_X;

    // extra ports
    logic        commit_inst;

    // DUT
    lab2_proc_ProcAltCtrl DUT
    (
        .*
    );

    // Generic Parameters -- yes or no

    localparam n = 1'd0;
    localparam y = 1'd1;

    // Register specifiers

    localparam rx = 5'bx;   // don't care
    localparam r0 = 5'd0;   // zero
    localparam rL = 5'd31;  // for jal

    // Jump type
    localparam j_x      = 2'bx;
    localparam j_na     = 2'b0;
    localparam j_jal    = 2'd1;
    localparam j_jalr   = 2'd2;

    // Branch type

    localparam br_x     = 3'bx; // Don't care
    localparam br_na    = 3'b0; // No branch
    localparam br_bne   = 3'b1; // bne
    localparam br_beq   = 3'd2; // beq
    localparam br_blt   = 3'd3; // blt
    localparam br_bltu  = 3'd4; // bltu
    localparam br_bge   = 3'd5; // bge
    localparam br_bgeu  = 3'd6; // bgeu
    
    // Operand 1 Mux Select

    localparam bm1_x     = 1'bx; // Don't care
    localparam bm1_pc    = 1'b0; // Use PC
    localparam bm1_rf    = 1'b1; // Use data from register file

    // Operand 2 Mux Select

    localparam bm2_x     = 2'bx; // Don't care
    localparam bm2_imm   = 2'd0; // Use sign-extended immediate
    localparam bm2_rf    = 2'd1; // Use data from register file
    localparam bm2_csr   = 2'd2; // Use from mngr data

    // Execute Result Mux Select

    localparam ex_x     = 2'bx; // Don't care
    localparam ex_pc    = 2'd0; // Use PC + 4
    localparam ex_alu   = 2'd1; // Use ALU output
    localparam ex_imul  = 2'd2; // Use mutliplier

    // ALU Function

    localparam alu_x    = 4'bx;
    localparam alu_add  = 4'd0;
    localparam alu_sub  = 4'd1;
    localparam alu_and  = 4'd2;
    localparam alu_or   = 4'd3;
    localparam alu_xor  = 4'd4;
    localparam alu_slt  = 4'd5;
    localparam alu_sltu = 4'd6;
    localparam alu_sra  = 4'd7;
    localparam alu_srl  = 4'd8;
    localparam alu_sll  = 4'd9;
    localparam alu_cp0  = 4'd11;
    localparam alu_cp1  = 4'd12;

    // Immediate Type
    localparam imm_x    = 3'bx;
    localparam imm_i    = 3'd0;
    localparam imm_s    = 3'd1;
    localparam imm_b    = 3'd2;
    localparam imm_u    = 3'd3;
    localparam imm_j    = 3'd4;

    // Memory Request Type

    localparam nr       = 2'd0; // No request
    localparam ld       = 2'd1; // Load
    localparam st       = 2'd2; // Store

    // Writeback Mux Select

    localparam wm_x     = 1'bx; // Don't care
    localparam wm_a     = 1'b0; // Use ALU output
    localparam wm_m     = 1'b1; // Use data memory response

    // Tests
    initial begin

        //--------------------------------------------------------------------
        // Unit Testing #1 Test NOP
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.
        reset = 1;
        @(negedge clk);
        reset = 0;
        imem_respstream_val = 1'b0; // Simulate imem response not ready
        imul_req_rdy_D = 1; // Say imul ready so we don't stall the whole pipeline indefinitely

        $display("");
        $display("Test NOP Outputs");

        // F
        @(negedge clk);
        assert(DUT.stall_F == y) begin // F should stall bc imem not ready
            $display("stall_F is correct.  Expected: %h, Actual: %h", y,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", y,DUT.stall_F); fail(); $finish();
        end
        assert(DUT.val_D == n) begin // D should not be valid yet
            $display("val_D is correct.  Expected: %h, Actual: %h", n,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", n,DUT.val_D); fail(); $finish();
        end

        delay( $urandom_range(0, 127) ); // Random imem delay, F stalling
        
        imem_respstream_val = 1'b1; // imem ready to return value

        @(negedge clk);
        assert(DUT.stall_F == n) begin // F should no longer stall bc imem has value ready
            $display("stall_F is correct.  Expected: %h, Actual: %h", n,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_F); fail(); $finish();
        end
        inst_D = 32'b00000000000000000000000000010011; // imem response value - NOP

        // D
        @(negedge clk);
        assert(DUT.inst_val_D == y) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", y,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.j_type_D == j_na) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.br_type_D == br_na) begin
            $display("br_type_D is correct.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); pass();
        end else begin
            $display("br_type_D is incorrect.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); fail(); $finish();
        end
        assert(DUT.rs1_en_D == n) begin
            $display("rs1_en_D is correct.  Expected: %h, Actual: %h", n,DUT.rs1_en_D); pass();
        end else begin
            $display("rs1_en_D is incorrect.  Expected: %h, Actual: %h", n,DUT.rs1_en_D); fail(); $finish();
        end
        assert(DUT.rs2_en_D == n) begin
            $display("rs2_en_D is correct.  Expected: %h, Actual: %h", n,DUT.rs2_en_D); pass();
        end else begin
            $display("rs2_en_D is incorrect.  Expected: %h, Actual: %h", n,DUT.rs2_en_D); fail(); $finish();
        end
        assert(DUT.mul_D == n) begin
            $display("mul_D is correct.  Expected: %h, Actual: %h", n,DUT.mul_D); pass();
        end else begin
            $display("mul_D is incorrect.  Expected: %h, Actual: %h", n,DUT.mul_D); fail(); $finish();
        end
        assert(DUT.dmem_reqstream_type_D == nr) begin
            $display("dmem_reqstream_type_D is correct.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); pass();
        end else begin
            $display("dmem_reqstream_type_D is incorrect.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); fail(); $finish();
        end
        assert(DUT.wb_result_sel_D == wm_a) begin
            $display("wb_result_sel_D is correct.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); pass();
        end else begin
            $display("wb_result_sel_D is incorrect.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); fail(); $finish();
        end
        assert(DUT.rf_wen_D == n) begin
            $display("rf_wen_D is correct.  Expected: %h, Actual: %h", n,DUT.rf_wen_D); pass();
        end else begin
            $display("rf_wen_D is incorrect.  Expected: %h, Actual: %h", n,DUT.rf_wen_D); fail(); $finish();
        end
        assert(DUT.csrr_D == n) begin
            $display("csrr_D is correct.  Expected: %h, Actual: %h", n,DUT.csrr_D); pass();
        end else begin
            $display("csrr_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrr_D); fail(); $finish();
        end
        assert(DUT.csrw_D == n) begin
            $display("csrw_D is correct.  Expected: %h, Actual: %h", n,DUT.csrw_D); pass();
        end else begin
            $display("csrw_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrw_D); fail(); $finish();
        end
        assert(DUT.stall_D == n) begin
            $display("stall_D is correct.  Expected: %h, Actual: %h", n,DUT.stall_D); pass();
        end else begin
            $display("stall_D is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_D); fail(); $finish();
        end
        assert(DUT.squash_D ==  n) begin
            $display("squash_D is correct.  Expected: %h, Actual: %h", n,DUT.squash_D); pass();
        end else begin
            $display("squash_D is incorrect.  Expected: %h, Actual: %h", n,DUT.squash_D); fail(); $finish();
        end
        assert(DUT.next_val_D  == y) begin
            $display("next_val_D is correct.  Expected: %h, Actual: %h", y,DUT.next_val_D); pass();
        end else begin
            $display("next_val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.next_val_D); fail(); $finish();
        end
        assert(DUT.pc_redirect_D  == n) begin
            $display("pc_redirect_D is correct.  Expected: %h, Actual: %h", n,DUT.pc_redirect_D); pass();
        end else begin
            $display("pc_redirect_D is incorrect.  Expected: %h, Actual: %h", n,DUT.pc_redirect_D); fail(); $finish();
        end

        // X
        @(negedge clk);
        assert(DUT.pc_redirect_X  == n) begin
            $display("pc_redirect_X is correct.  Expected: %h, Actual: %h", n,DUT.pc_redirect_X); pass();
        end else begin
            $display("pc_redirect_X is incorrect.  Expected: %h, Actual: %h", n,DUT.pc_redirect_X); fail(); $finish();
        end
        assert(DUT.inst_X  == 32'b00000000000000000000000000010011) begin
            $display("inst_X is correct.  Expected: %h, Actual: %h", 32'b00000000000000000000000000010011,DUT.inst_X); pass();
        end else begin
            $display("inst_X is incorrect.  Expected: %h, Actual: %h", 32'b00000000000000000000000000010011,DUT.inst_X); fail(); $finish();
        end
        assert(DUT.stall_X == n) begin
            $display("stall_X is correct.  Expected: %h, Actual: %h", n,DUT.stall_X); pass();
        end else begin
            $display("stall_X is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_X); fail(); $finish();
        end
        assert(DUT.osquash_X ==  n) begin
            $display("osquash_X is correct.  Expected: %h, Actual: %h", n,DUT.osquash_X); pass();
        end else begin
            $display("osquash_X is incorrect.  Expected: %h, Actual: %h", n,DUT.osquash_X); fail(); $finish();
        end
        assert(DUT.next_val_X  == y) begin
            $display("next_val_X is correct.  Expected: %h, Actual: %h", y,DUT.next_val_X); pass();
        end else begin
            $display("next_val_X is incorrect.  Expected: %h, Actual: %h", y,DUT.next_val_X); fail(); $finish();
        end
        assert(DUT.dmem_reqstream_val == n) begin
            $display("dmem_reqstream_val is correct.  Expected: %h, Actual: %h", n,DUT.dmem_reqstream_val); pass();
        end else begin
            $display("dmem_reqstream_val is incorrect.  Expected: %h, Actual: %h", n,DUT.dmem_reqstream_val); fail(); $finish();
        end

        // M
        @(negedge clk);
        assert(DUT.inst_M  == 32'b00000000000000000000000000010011) begin
            $display("inst_M is correct.  Expected: %h, Actual: %h", 32'b00000000000000000000000000010011,DUT.inst_M); pass();
        end else begin
            $display("inst_M is incorrect.  Expected: %h, Actual: %h", 32'b00000000000000000000000000010011,DUT.inst_M); fail(); $finish();
        end
        assert(DUT.stall_M == n) begin
            $display("stall_M is correct.  Expected: %h, Actual: %h", n,DUT.stall_M); pass();
        end else begin
            $display("stall_M is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_M); fail(); $finish();
        end
        assert(DUT.next_val_M  == y) begin
            $display("next_val_M is correct.  Expected: %h, Actual: %h", y,DUT.next_val_M); pass();
        end else begin
            $display("next_val_M is incorrect.  Expected: %h, Actual: %h", y,DUT.next_val_M); fail(); $finish();
        end

        // W
        @(negedge clk);
        assert(DUT.inst_W  == 32'b00000000000000000000000000010011) begin
            $display("inst_W is correct.  Expected: %h, Actual: %h", 32'b00000000000000000000000000010011,DUT.inst_W); pass();
        end else begin
            $display("inst_W is incorrect.  Expected: %h, Actual: %h", 32'b00000000000000000000000000010011,DUT.inst_W); fail(); $finish();
        end
        assert(DUT.rf_wen_W  == n) begin
            $display("rf_wen_W is correct.  Expected: %h, Actual: %h", n,DUT.rf_wen_W); pass();
        end else begin
            $display("rf_wen_W is incorrect.  Expected: %h, Actual: %h", n,DUT.rf_wen_W); fail(); $finish();
        end
        assert(DUT.stall_W == n) begin
            $display("stall_W is correct.  Expected: %h, Actual: %h", n,DUT.stall_W); pass();
        end else begin
            $display("stall_W is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_W); fail(); $finish();
        end

        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #2 Test ADD and ADDI with bypassing to rs1 and rs2 from X to D
        // 1: addi x3, x1, 4
        // 2: add x4, x3, x3
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.
        reset = 1;
        @(negedge clk);
        reset = 0;
        imem_respstream_val = 1'b1; // Simulate imem response ready
        imul_req_rdy_D = 1; // Say imul ready so we don't stall the whole pipeline indefinitely

        $display("");
        $display("Test ADD and ADDI with stalling on rs1 and rs2 from X, M, W to D");

        // Cycle 1: F - 1
        @(negedge clk);
        assert(DUT.stall_F == n) begin
            $display("stall_F is correct.  Expected: %h, Actual: %h", n,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_F); fail(); $finish();
        end
        assert(DUT.val_D == n) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", n,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", n,DUT.val_D); fail(); $finish();
        end

        // Cycle 2: F - 2, D = 1
        @(negedge clk);
        inst_D = 32'b00000000010000001000000110010011; // addi x3, x1, 4
        #1 // Time to propagate inst_D - needed for testbench to work properly but works normally with assembly
        assert(DUT.stall_F == n) begin
            $display("stall_F is correct.  Expected: %h, Actual: %h", n,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_F); fail(); $finish();
        end
        assert(DUT.val_D == y) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", y,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.val_D); fail(); $finish();
        end
        assert(DUT.inst_val_D == y) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", y,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.j_type_D == j_na) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.br_type_D == br_na) begin
            $display("br_type_D is correct.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); pass();
        end else begin
            $display("br_type_D is incorrect.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); fail(); $finish();
        end
        assert(DUT.imm_type_D == imm_i) begin
            $display("imm_type_D is correct.  Expected: %h, Actual: %h", imm_i,DUT.imm_type_D); pass();
        end else begin
            $display("imm_type_D is incorrect.  Expected: %h, Actual: %h", imm_i,DUT.imm_type_D); fail(); $finish();
        end
        assert(DUT.op1_sel_D == bm1_rf) begin
            $display("op1_sel_D is correct.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); pass();
        end else begin
            $display("op1_sel_D is incorrect.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); fail(); $finish();
        end
        assert(DUT.rs1_en_D == y) begin
            $display("rs1_en_D is correct.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); pass();
        end else begin
            $display("rs1_en_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); fail(); $finish();
        end
        assert(DUT.op2_sel_D == bm2_imm) begin
            $display("op2_sel_D is correct.  Expected: %h, Actual: %h", bm2_imm,DUT.op2_sel_D); pass();
        end else begin
            $display("op2_sel_D is incorrect.  Expected: %h, Actual: %h", bm2_imm,DUT.op2_sel_D); fail(); $finish();
        end
        assert(DUT.rs2_en_D == n) begin
            $display("rs2_en_D is correct.  Expected: %h, Actual: %h", n,DUT.rs2_en_D); pass();
        end else begin
            $display("rs2_en_D is incorrect.  Expected: %h, Actual: %h", n,DUT.rs2_en_D); fail(); $finish();
        end
        assert(DUT.alu_fn_D == alu_add) begin
            $display("alu_fn_D is correct.  Expected: %h, Actual: %h", alu_add,DUT.alu_fn_D); pass();
        end else begin
            $display("alu_fn_D is incorrect.  Expected: %h, Actual: %h", alu_add,DUT.alu_fn_D); fail(); $finish();
        end
        assert(DUT.ex_result_sel_D == ex_alu) begin
            $display("ex_result_sel_D is correct.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); pass();
        end else begin
            $display("ex_result_sel_D is incorrect.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); fail(); $finish();
        end
        assert(DUT.mul_D == n) begin
            $display("mul_D is correct.  Expected: %h, Actual: %h", n,DUT.mul_D); pass();
        end else begin
            $display("mul_D is incorrect.  Expected: %h, Actual: %h", n,DUT.mul_D); fail(); $finish();
        end
        assert(DUT.dmem_reqstream_type_D == nr) begin
            $display("dmem_reqstream_type_D is correct.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); pass();
        end else begin
            $display("dmem_reqstream_type_D is incorrect.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); fail(); $finish();
        end
        assert(DUT.wb_result_sel_D == wm_a) begin
            $display("wb_result_sel_D is correct.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); pass();
        end else begin
            $display("wb_result_sel_D is incorrect.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); fail(); $finish();
        end
        assert(DUT.rf_wen_D == y) begin
            $display("rf_wen_D is correct.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); pass();
        end else begin
            $display("rf_wen_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); fail(); $finish();
        end
        assert(DUT.csrr_D == n) begin
            $display("csrr_D is correct.  Expected: %h, Actual: %h", n,DUT.csrr_D); pass();
        end else begin
            $display("csrr_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrr_D); fail(); $finish();
        end
        assert(DUT.csrw_D == n) begin
            $display("csrw_D is correct.  Expected: %h, Actual: %h", n,DUT.csrw_D); pass();
        end else begin
            $display("csrw_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrw_D); fail(); $finish();
        end
        assert(DUT.stall_D == n) begin
            $display("stall_D is correct.  Expected: %h, Actual: %h", n,DUT.stall_D); pass();
        end else begin
            $display("stall_D is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_D); fail(); $finish();
        end
        assert(DUT.squash_D ==  n) begin
            $display("squash_D is correct.  Expected: %h, Actual: %h", n,DUT.squash_D); pass();
        end else begin
            $display("squash_D is incorrect.  Expected: %h, Actual: %h", n,DUT.squash_D); fail(); $finish();
        end
        assert(DUT.next_val_D  == y) begin
            $display("next_val_D is correct.  Expected: %h, Actual: %h", y,DUT.next_val_D); pass();
        end else begin
            $display("next_val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.next_val_D); fail(); $finish();
        end
        assert(DUT.pc_redirect_D  == n) begin
            $display("pc_redirect_D is correct.  Expected: %h, Actual: %h", n,DUT.pc_redirect_D); pass();
        end else begin
            $display("pc_redirect_D is incorrect.  Expected: %h, Actual: %h", n,DUT.pc_redirect_D); fail(); $finish();
        end
        assert(DUT.op1_byp_sel_D == 2'd3) begin // rs1 bypassing from X
            $display("op1_byp_sel_D is correct.  Expected: %h, Actual: %h", 2'd3,DUT.op1_byp_sel_D); pass();
        end else begin
            $display("op1_byp_sel_D is incorrect.  Expected: %h, Actual: %h", 2'd3,DUT.op1_byp_sel_D); fail(); $finish();
        end
        assert(DUT.op2_byp_sel_D == 2'd0) begin // rs1 bypassing from X
            $display("op2_byp_sel_D is correct.  Expected: %h, Actual: %h", 2'd0,DUT.op2_byp_sel_D); pass();
        end else begin
            $display("op2_byp_sel_D is incorrect.  Expected: %h, Actual: %h", 2'd0,DUT.op2_byp_sel_D); fail(); $finish();
        end

        // Cycle 3: D = 2, X = 1
        @(negedge clk);
        inst_D = 32'b00000000001100011000001000110011; // add x4, x3, x3
        #1
        assert(DUT.inst_D  == 32'b00000000001100011000001000110011) begin
            $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b00000000001100011000001000110011,DUT.inst_D); pass();
        end else begin
            $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b00000000001100011000001000110011,DUT.inst_D); fail(); $finish();
        end
        assert(DUT.val_D == y) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", y,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.val_D); fail(); $finish();
        end
        assert(DUT.inst_val_D == y) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", y,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.j_type_D == j_na) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.br_type_D == br_na) begin
            $display("br_type_D is correct.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); pass();
        end else begin
            $display("br_type_D is incorrect.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); fail(); $finish();
        end
        assert(DUT.op1_sel_D == bm1_rf) begin
            $display("op1_sel_D is correct.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); pass();
        end else begin
            $display("op1_sel_D is incorrect.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); fail(); $finish();
        end
        assert(DUT.rs1_en_D == y) begin
            $display("rs1_en_D is correct.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); pass();
        end else begin
            $display("rs1_en_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); fail(); $finish();
        end
        assert(DUT.op2_sel_D == bm2_rf) begin
            $display("op2_sel_D is correct.  Expected: %h, Actual: %h", bm2_rf,DUT.op2_sel_D); pass();
        end else begin
            $display("op2_sel_D is incorrect.  Expected: %h, Actual: %h", bm2_rf,DUT.op2_sel_D); fail(); $finish();
        end
        assert(DUT.rs2_en_D == y) begin
            $display("rs2_en_D is correct.  Expected: %h, Actual: %h", y,DUT.rs2_en_D); pass();
        end else begin
            $display("rs2_en_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rs2_en_D); fail(); $finish();
        end
        assert(DUT.alu_fn_D == alu_add) begin
            $display("alu_fn_D is correct.  Expected: %h, Actual: %h", alu_add,DUT.alu_fn_D); pass();
        end else begin
            $display("alu_fn_D is incorrect.  Expected: %h, Actual: %h", alu_add,DUT.alu_fn_D); fail(); $finish();
        end
        assert(DUT.ex_result_sel_D == ex_alu) begin
            $display("ex_result_sel_D is correct.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); pass();
        end else begin
            $display("ex_result_sel_D is incorrect.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); fail(); $finish();
        end
        assert(DUT.mul_D == n) begin
            $display("mul_D is correct.  Expected: %h, Actual: %h", n,DUT.mul_D); pass();
        end else begin
            $display("mul_D is incorrect.  Expected: %h, Actual: %h", n,DUT.mul_D); fail(); $finish();
        end
        assert(DUT.dmem_reqstream_type_D == nr) begin
            $display("dmem_reqstream_type_D is correct.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); pass();
        end else begin
            $display("dmem_reqstream_type_D is incorrect.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); fail(); $finish();
        end
        assert(DUT.wb_result_sel_D == wm_a) begin
            $display("wb_result_sel_D is correct.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); pass();
        end else begin
            $display("wb_result_sel_D is incorrect.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); fail(); $finish();
        end
        assert(DUT.rf_wen_D == y) begin
            $display("rf_wen_D is correct.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); pass();
        end else begin
            $display("rf_wen_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); fail(); $finish();
        end
        assert(DUT.csrr_D == n) begin
            $display("csrr_D is correct.  Expected: %h, Actual: %h", n,DUT.csrr_D); pass();
        end else begin
            $display("csrr_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrr_D); fail(); $finish();
        end
        assert(DUT.csrw_D == n) begin
            $display("csrw_D is correct.  Expected: %h, Actual: %h", n,DUT.csrw_D); pass();
        end else begin
            $display("csrw_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrw_D); fail(); $finish();
        end
        assert(DUT.bypass_waddr_X_rs1_D == y) begin // rs1 bypassing from X
            $display("bypass_waddr_X_rs1_D is correct.  Expected: %h, Actual: %h", y,DUT.bypass_waddr_X_rs1_D); pass();
        end else begin
            $display("bypass_waddr_X_rs1_D is incorrect.  Expected: %h, Actual: %h", y,DUT.bypass_waddr_X_rs1_D); fail(); $finish();
        end
        assert(DUT.op1_byp_sel_D == 2'd2) begin // rs1 bypassing from X
            $display("op1_byp_sel_D is correct.  Expected: %h, Actual: %h", 2'd2,DUT.op1_byp_sel_D); pass();
        end else begin
            $display("op1_byp_sel_D is incorrect.  Expected: %h, Actual: %h", 2'd2,DUT.op1_byp_sel_D); fail(); $finish();
        end
        assert(DUT.bypass_waddr_X_rs2_D == y) begin // rs2 bypassing from X
            $display("bypass_waddr_X_rs2_D is correct.  Expected: %h, Actual: %h", y,DUT.bypass_waddr_X_rs2_D); pass();
        end else begin
            $display("bypass_waddr_X_rs2_D is incorrect.  Expected: %h, Actual: %h", y,DUT.bypass_waddr_X_rs2_D); fail(); $finish();
        end
        assert(DUT.op2_byp_sel_D == 2'd3) begin // rs1 bypassing from X
            $display("op2_byp_sel_D is correct.  Expected: %h, Actual: %h", 2'd3,DUT.op2_byp_sel_D); pass();
        end else begin
            $display("op2_byp_sel_D is incorrect.  Expected: %h, Actual: %h", 2'd3,DUT.op2_byp_sel_D); fail(); $finish();
        end
        assert(DUT.stall_D == n) begin // D not stalling
            $display("stall_D is correct.  Expected: %h, Actual: %h", n,DUT.stall_D); pass();
        end else begin
            $display("stall_D is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_D); fail(); $finish();
        end
        assert(DUT.ostall_waddr_X_rs1_D == n) begin // no rs1 RAW from X since bypassing
            $display("ostall_waddr_X_rs1_D is correct.  Expected: %h, Actual: %h", n,DUT.ostall_waddr_X_rs1_D); pass();
        end else begin
            $display("ostall_waddr_X_rs1_D is incorrect.  Expected: %h, Actual: %h", n,DUT.ostall_waddr_X_rs1_D); fail(); $finish();
        end
        assert(DUT.ostall_waddr_X_rs2_D == n) begin // no rs2 RAW from X since bypassing
            $display("ostall_waddr_X_rs2_D is correct.  Expected: %h, Actual: %h", n,DUT.ostall_waddr_X_rs2_D); pass();
        end else begin
            $display("ostall_waddr_X_rs2_D is incorrect.  Expected: %h, Actual: %h", n,DUT.ostall_waddr_X_rs2_D); fail(); $finish();
        end
        assert(DUT.squash_D ==  n) begin
            $display("squash_D is correct.  Expected: %h, Actual: %h", n,DUT.squash_D); pass();
        end else begin
            $display("squash_D is incorrect.  Expected: %h, Actual: %h", n,DUT.squash_D); fail(); $finish();
        end
        assert(DUT.next_val_D  == y) begin // D still valid
            $display("next_val_D is correct.  Expected: %h, Actual: %h", y,DUT.next_val_D); pass();
        end else begin
            $display("next_val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.next_val_D); fail(); $finish();
        end
        assert(DUT.pc_redirect_D  == n) begin
            $display("pc_redirect_D is correct.  Expected: %h, Actual: %h", n,DUT.pc_redirect_D); pass();
        end else begin
            $display("pc_redirect_D is incorrect.  Expected: %h, Actual: %h", n,DUT.pc_redirect_D); fail(); $finish();
        end
        assert(DUT.pc_redirect_X  == n) begin
            $display("pc_redirect_X is correct.  Expected: %h, Actual: %h", n,DUT.pc_redirect_X); pass();
        end else begin
            $display("pc_redirect_X is incorrect.  Expected: %h, Actual: %h", n,DUT.pc_redirect_X); fail(); $finish();
        end
        assert(DUT.pc_sel_X  == 2'd3) begin
            $display("pc_sel_X is correct.  Expected: %h, Actual: %h", 2'd3,DUT.pc_sel_X); pass();
        end else begin
            $display("pc_sel_X is incorrect.  Expected: %h, Actual: %h", 2'd3,DUT.pc_sel_X); fail(); $finish();
        end
        assert(DUT.inst_X  == 32'b00000000010000001000000110010011) begin
            $display("inst_X is correct.  Expected: %h, Actual: %h", 32'b00000000010000001000000110010011,DUT.inst_X); pass();
        end else begin
            $display("inst_X is incorrect.  Expected: %h, Actual: %h", 32'b00000000010000001000000110010011,DUT.inst_X); fail(); $finish();
        end
        assert(DUT.stall_X == n) begin
            $display("stall_X is correct.  Expected: %h, Actual: %h", n,DUT.stall_X); pass();
        end else begin
            $display("stall_X is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_X); fail(); $finish();
        end
        assert(DUT.osquash_X ==  n) begin
            $display("osquash_X is correct.  Expected: %h, Actual: %h", n,DUT.osquash_X); pass();
        end else begin
            $display("osquash_X is incorrect.  Expected: %h, Actual: %h", n,DUT.osquash_X); fail(); $finish();
        end
        assert(DUT.next_val_X  == y) begin
            $display("next_val_X is correct.  Expected: %h, Actual: %h", y,DUT.next_val_X); pass();
        end else begin
            $display("next_val_X is incorrect.  Expected: %h, Actual: %h", y,DUT.next_val_X); fail(); $finish();
        end
        assert(DUT.dmem_reqstream_val == n) begin
            $display("dmem_reqstream_val is correct.  Expected: %h, Actual: %h", n,DUT.dmem_reqstream_val); pass();
        end else begin
            $display("dmem_reqstream_val is incorrect.  Expected: %h, Actual: %h", n,DUT.dmem_reqstream_val); fail(); $finish();
        end

        // Cycle 4: X = 2, M = 1
        @(negedge clk);
        assert(DUT.inst_X  == 32'b00000000001100011000001000110011) begin
            $display("inst_X is correct.  Expected: %h, Actual: %h", 32'b00000000001100011000001000110011,DUT.inst_X); pass();
        end else begin
            $display("inst_X is incorrect.  Expected: %h, Actual: %h", 32'b00000000001100011000001000110011,DUT.inst_X); fail(); $finish();
        end
        assert(DUT.inst_M  == 32'b00000000010000001000000110010011) begin
            $display("inst_M is correct.  Expected: %h, Actual: %h", 32'b00000000010000001000000110010011,DUT.inst_M); pass();
        end else begin
            $display("inst_M is incorrect.  Expected: %h, Actual: %h", 32'b00000000010000001000000110010011,DUT.inst_M); fail(); $finish();
        end
        assert(DUT.stall_M == n) begin
            $display("stall_M is correct.  Expected: %h, Actual: %h", n,DUT.stall_M); pass();
        end else begin
            $display("stall_M is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_M); fail(); $finish();
        end
        assert(DUT.next_val_M  == y) begin
            $display("next_val_M is correct.  Expected: %h, Actual: %h", y,DUT.next_val_M); pass();
        end else begin
            $display("next_val_M is incorrect.  Expected: %h, Actual: %h", y,DUT.next_val_M); fail(); $finish();
        end

        // Cycle 5: M = 2, W = 1
        @(negedge clk);
        assert(DUT.inst_M  == 32'b00000000001100011000001000110011) begin
            $display("inst_M is correct.  Expected: %h, Actual: %h", 32'b00000000001100011000001000110011,DUT.inst_M); pass();
        end else begin
            $display("inst_M is incorrect.  Expected: %h, Actual: %h", 32'b00000000001100011000001000110011,DUT.inst_M); fail(); $finish();
        end
        assert(DUT.inst_W  == 32'b00000000010000001000000110010011) begin
            $display("inst_W is correct.  Expected: %h, Actual: %h", 32'b00000000010000001000000110010011,DUT.inst_W); pass();
        end else begin
            $display("inst_W is incorrect.  Expected: %h, Actual: %h", 32'b00000000010000001000000110010011,DUT.inst_W); fail(); $finish();
        end
        assert(DUT.rf_wen_W  == y) begin
            $display("rf_wen_W is correct.  Expected: %h, Actual: %h", y,DUT.rf_wen_W); pass();
        end else begin
            $display("rf_wen_W is incorrect.  Expected: %h, Actual: %h", y,DUT.rf_wen_W); fail(); $finish();
        end
        assert(DUT.rf_waddr_W  == 5'd3) begin
            $display("rf_waddr_W is correct.  Expected: %h, Actual: %h", 5'd3,DUT.rf_waddr_W); pass();
        end else begin
            $display("rf_waddr_W is incorrect.  Expected: %h, Actual: %h", 5'd3,DUT.rf_waddr_W); fail(); $finish();
        end
        assert(DUT.stall_W == n) begin
            $display("stall_W is correct.  Expected: %h, Actual: %h", n,DUT.stall_W); pass();
        end else begin
            $display("stall_W is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_W); fail(); $finish();
        end

        // Cycle 6: W = 2
        @(negedge clk);
        assert(DUT.inst_W  == 32'b00000000001100011000001000110011) begin
            $display("inst_W is correct.  Expected: %h, Actual: %h", 32'b00000000001100011000001000110011,DUT.inst_W); pass();
        end else begin
            $display("inst_W is incorrect.  Expected: %h, Actual: %h", 32'b00000000001100011000001000110011,DUT.inst_W); fail(); $finish();
        end
        assert(DUT.rf_wen_W  == y) begin
            $display("rf_wen_W is correct.  Expected: %h, Actual: %h", y,DUT.rf_wen_W); pass();
        end else begin
            $display("rf_wen_W is incorrect.  Expected: %h, Actual: %h", y,DUT.rf_wen_W); fail(); $finish();
        end
        assert(DUT.rf_waddr_W  == 5'd4) begin
            $display("rf_waddr_W is correct.  Expected: %h, Actual: %h", 5'd4,DUT.rf_waddr_W); pass();
        end else begin
            $display("rf_waddr_W is incorrect.  Expected: %h, Actual: %h", 5'd4,DUT.rf_waddr_W); fail(); $finish();
        end
        assert(DUT.stall_W == n) begin
            $display("stall_W is correct.  Expected: %h, Actual: %h", n,DUT.stall_W); pass();
        end else begin
            $display("stall_W is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_W); fail(); $finish();
        end

        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #3 Test Decode SUB
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.
        reset = 1;
        @(negedge clk);
        reset = 0;
        imem_respstream_val = 1'b1; // Simulate imem response ready
        imul_req_rdy_D = 1; // Say imul ready so we don't stall the whole pipeline indefinitely

        $display("");
        $display("Test Decode SUB");

        // F
        @(negedge clk);
        assert(DUT.stall_F == n) begin
            $display("stall_F is correct.  Expected: %h, Actual: %h", n,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_F); fail(); $finish();
        end
        assert(DUT.val_D == n) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", n,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", n,DUT.val_D); fail(); $finish();
        end

        // D
        @(negedge clk);
        inst_D = 32'b01000001111111111000111110110011; // sub x31, x31, x31
        #1
        assert(DUT.inst_D  == 32'b01000001111111111000111110110011) begin
            $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b01000001111111111000111110110011,DUT.inst_D); pass();
        end else begin
            $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b01000001111111111000111110110011,DUT.inst_D); fail(); $finish();
        end
        assert(DUT.val_D == y) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", y,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.val_D); fail(); $finish();
        end
        assert(DUT.inst_val_D == y) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", y,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.j_type_D == j_na) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.br_type_D == br_na) begin
            $display("br_type_D is correct.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); pass();
        end else begin
            $display("br_type_D is incorrect.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); fail(); $finish();
        end
        assert(DUT.op1_sel_D == bm1_rf) begin
            $display("op1_sel_D is correct.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); pass();
        end else begin
            $display("op1_sel_D is incorrect.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); fail(); $finish();
        end
        assert(DUT.rs1_en_D == y) begin
            $display("rs1_en_D is correct.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); pass();
        end else begin
            $display("rs1_en_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); fail(); $finish();
        end
        assert(DUT.op2_sel_D == bm2_rf) begin
            $display("op2_sel_D is correct.  Expected: %h, Actual: %h", bm2_rf,DUT.op2_sel_D); pass();
        end else begin
            $display("op2_sel_D is incorrect.  Expected: %h, Actual: %h", bm2_rf,DUT.op2_sel_D); fail(); $finish();
        end
        assert(DUT.rs2_en_D == y) begin
            $display("rs2_en_D is correct.  Expected: %h, Actual: %h", y,DUT.rs2_en_D); pass();
        end else begin
            $display("rs2_en_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rs2_en_D); fail(); $finish();
        end
        assert(DUT.alu_fn_D == alu_sub) begin
            $display("alu_fn_D is correct.  Expected: %h, Actual: %h", alu_sub,DUT.alu_fn_D); pass();
        end else begin
            $display("alu_fn_D is incorrect.  Expected: %h, Actual: %h", alu_sub,DUT.alu_fn_D); fail(); $finish();
        end
        assert(DUT.ex_result_sel_D == ex_alu) begin
            $display("ex_result_sel_D is correct.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); pass();
        end else begin
            $display("ex_result_sel_D is incorrect.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); fail(); $finish();
        end
        assert(DUT.mul_D == n) begin
            $display("mul_D is correct.  Expected: %h, Actual: %h", n,DUT.mul_D); pass();
        end else begin
            $display("mul_D is incorrect.  Expected: %h, Actual: %h", n,DUT.mul_D); fail(); $finish();
        end
        assert(DUT.dmem_reqstream_type_D == nr) begin
            $display("dmem_reqstream_type_D is correct.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); pass();
        end else begin
            $display("dmem_reqstream_type_D is incorrect.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); fail(); $finish();
        end
        assert(DUT.wb_result_sel_D == wm_a) begin
            $display("wb_result_sel_D is correct.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); pass();
        end else begin
            $display("wb_result_sel_D is incorrect.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); fail(); $finish();
        end
        assert(DUT.rf_wen_D == y) begin
            $display("rf_wen_D is correct.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); pass();
        end else begin
            $display("rf_wen_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); fail(); $finish();
        end
        assert(DUT.csrr_D == n) begin
            $display("csrr_D is correct.  Expected: %h, Actual: %h", n,DUT.csrr_D); pass();
        end else begin
            $display("csrr_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrr_D); fail(); $finish();
        end
        assert(DUT.csrw_D == n) begin
            $display("csrw_D is correct.  Expected: %h, Actual: %h", n,DUT.csrw_D); pass();
        end else begin
            $display("csrw_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrw_D); fail(); $finish();
        end

        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #4 Test Decode AND
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.
        reset = 1;
        @(negedge clk);
        reset = 0;
        imem_respstream_val = 1'b1; // Simulate imem response ready
        imul_req_rdy_D = 1; // Say imul ready so we don't stall the whole pipeline indefinitely

        $display("");
        $display("Test Decode AND");

        // F
        @(negedge clk);
        assert(DUT.stall_F == n) begin
            $display("stall_F is correct.  Expected: %h, Actual: %h", n,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_F); fail(); $finish();
        end
        assert(DUT.val_D == n) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", n,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", n,DUT.val_D); fail(); $finish();
        end

        // D
        @(negedge clk);
        inst_D = 32'b00000001111111111111111110110011; // and x31, x31, x31
        #1
        assert(DUT.inst_D  == 32'b00000001111111111111111110110011) begin
            $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b00000001111111111111111110110011,DUT.inst_D); pass();
        end else begin
            $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b00000001111111111111111110110011,DUT.inst_D); fail(); $finish();
        end
        assert(DUT.val_D == y) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", y,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.val_D); fail(); $finish();
        end
        assert(DUT.inst_val_D == y) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", y,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.j_type_D == j_na) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.br_type_D == br_na) begin
            $display("br_type_D is correct.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); pass();
        end else begin
            $display("br_type_D is incorrect.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); fail(); $finish();
        end
        assert(DUT.op1_sel_D == bm1_rf) begin
            $display("op1_sel_D is correct.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); pass();
        end else begin
            $display("op1_sel_D is incorrect.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); fail(); $finish();
        end
        assert(DUT.rs1_en_D == y) begin
            $display("rs1_en_D is correct.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); pass();
        end else begin
            $display("rs1_en_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); fail(); $finish();
        end
        assert(DUT.op2_sel_D == bm2_rf) begin
            $display("op2_sel_D is correct.  Expected: %h, Actual: %h", bm2_rf,DUT.op2_sel_D); pass();
        end else begin
            $display("op2_sel_D is incorrect.  Expected: %h, Actual: %h", bm2_rf,DUT.op2_sel_D); fail(); $finish();
        end
        assert(DUT.rs2_en_D == y) begin
            $display("rs2_en_D is correct.  Expected: %h, Actual: %h", y,DUT.rs2_en_D); pass();
        end else begin
            $display("rs2_en_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rs2_en_D); fail(); $finish();
        end
        assert(DUT.alu_fn_D == alu_and) begin
            $display("alu_fn_D is correct.  Expected: %h, Actual: %h", alu_and,DUT.alu_fn_D); pass();
        end else begin
            $display("alu_fn_D is incorrect.  Expected: %h, Actual: %h", alu_and,DUT.alu_fn_D); fail(); $finish();
        end
        assert(DUT.ex_result_sel_D == ex_alu) begin
            $display("ex_result_sel_D is correct.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); pass();
        end else begin
            $display("ex_result_sel_D is incorrect.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); fail(); $finish();
        end
        assert(DUT.mul_D == n) begin
            $display("mul_D is correct.  Expected: %h, Actual: %h", n,DUT.mul_D); pass();
        end else begin
            $display("mul_D is incorrect.  Expected: %h, Actual: %h", n,DUT.mul_D); fail(); $finish();
        end
        assert(DUT.dmem_reqstream_type_D == nr) begin
            $display("dmem_reqstream_type_D is correct.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); pass();
        end else begin
            $display("dmem_reqstream_type_D is incorrect.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); fail(); $finish();
        end
        assert(DUT.wb_result_sel_D == wm_a) begin
            $display("wb_result_sel_D is correct.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); pass();
        end else begin
            $display("wb_result_sel_D is incorrect.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); fail(); $finish();
        end
        assert(DUT.rf_wen_D == y) begin
            $display("rf_wen_D is correct.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); pass();
        end else begin
            $display("rf_wen_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); fail(); $finish();
        end
        assert(DUT.csrr_D == n) begin
            $display("csrr_D is correct.  Expected: %h, Actual: %h", n,DUT.csrr_D); pass();
        end else begin
            $display("csrr_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrr_D); fail(); $finish();
        end
        assert(DUT.csrw_D == n) begin
            $display("csrw_D is correct.  Expected: %h, Actual: %h", n,DUT.csrw_D); pass();
        end else begin
            $display("csrw_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrw_D); fail(); $finish();
        end

        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #5 Test Decode OR
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.
        reset = 1;
        @(negedge clk);
        reset = 0;
        imem_respstream_val = 1'b1; // Simulate imem response ready
        imul_req_rdy_D = 1; // Say imul ready so we don't stall the whole pipeline indefinitely

        $display("");
        $display("Test Decode OR");

        // F
        @(negedge clk);
        assert(DUT.stall_F == n) begin
            $display("stall_F is correct.  Expected: %h, Actual: %h", n,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_F); fail(); $finish();
        end
        assert(DUT.val_D == n) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", n,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", n,DUT.val_D); fail(); $finish();
        end

        // D
        @(negedge clk);
        inst_D = 32'b00000001111111111110111110110011; // or x31, x31, x31
        #1
        assert(DUT.inst_D  == 32'b00000001111111111110111110110011) begin
            $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b00000001111111111110111110110011,DUT.inst_D); pass();
        end else begin
            $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b00000001111111111110111110110011,DUT.inst_D); fail(); $finish();
        end
        assert(DUT.val_D == y) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", y,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.val_D); fail(); $finish();
        end
        assert(DUT.inst_val_D == y) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", y,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.j_type_D == j_na) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.br_type_D == br_na) begin
            $display("br_type_D is correct.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); pass();
        end else begin
            $display("br_type_D is incorrect.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); fail(); $finish();
        end
        assert(DUT.op1_sel_D == bm1_rf) begin
            $display("op1_sel_D is correct.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); pass();
        end else begin
            $display("op1_sel_D is incorrect.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); fail(); $finish();
        end
        assert(DUT.rs1_en_D == y) begin
            $display("rs1_en_D is correct.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); pass();
        end else begin
            $display("rs1_en_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); fail(); $finish();
        end
        assert(DUT.op2_sel_D == bm2_rf) begin
            $display("op2_sel_D is correct.  Expected: %h, Actual: %h", bm2_rf,DUT.op2_sel_D); pass();
        end else begin
            $display("op2_sel_D is incorrect.  Expected: %h, Actual: %h", bm2_rf,DUT.op2_sel_D); fail(); $finish();
        end
        assert(DUT.rs2_en_D == y) begin
            $display("rs2_en_D is correct.  Expected: %h, Actual: %h", y,DUT.rs2_en_D); pass();
        end else begin
            $display("rs2_en_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rs2_en_D); fail(); $finish();
        end
        assert(DUT.alu_fn_D == alu_or) begin
            $display("alu_fn_D is correct.  Expected: %h, Actual: %h", alu_or,DUT.alu_fn_D); pass();
        end else begin
            $display("alu_fn_D is incorrect.  Expected: %h, Actual: %h", alu_or,DUT.alu_fn_D); fail(); $finish();
        end
        assert(DUT.ex_result_sel_D == ex_alu) begin
            $display("ex_result_sel_D is correct.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); pass();
        end else begin
            $display("ex_result_sel_D is incorrect.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); fail(); $finish();
        end
        assert(DUT.mul_D == n) begin
            $display("mul_D is correct.  Expected: %h, Actual: %h", n,DUT.mul_D); pass();
        end else begin
            $display("mul_D is incorrect.  Expected: %h, Actual: %h", n,DUT.mul_D); fail(); $finish();
        end
        assert(DUT.dmem_reqstream_type_D == nr) begin
            $display("dmem_reqstream_type_D is correct.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); pass();
        end else begin
            $display("dmem_reqstream_type_D is incorrect.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); fail(); $finish();
        end
        assert(DUT.wb_result_sel_D == wm_a) begin
            $display("wb_result_sel_D is correct.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); pass();
        end else begin
            $display("wb_result_sel_D is incorrect.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); fail(); $finish();
        end
        assert(DUT.rf_wen_D == y) begin
            $display("rf_wen_D is correct.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); pass();
        end else begin
            $display("rf_wen_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); fail(); $finish();
        end
        assert(DUT.csrr_D == n) begin
            $display("csrr_D is correct.  Expected: %h, Actual: %h", n,DUT.csrr_D); pass();
        end else begin
            $display("csrr_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrr_D); fail(); $finish();
        end
        assert(DUT.csrw_D == n) begin
            $display("csrw_D is correct.  Expected: %h, Actual: %h", n,DUT.csrw_D); pass();
        end else begin
            $display("csrw_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrw_D); fail(); $finish();
        end

        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #6 Test Decode XOR
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.
        reset = 1;
        @(negedge clk);
        reset = 0;
        imem_respstream_val = 1'b1; // Simulate imem response ready
        imul_req_rdy_D = 1; // Say imul ready so we don't stall the whole pipeline indefinitely

        $display("");
        $display("Test Decode XOR");

        // F
        @(negedge clk);
        assert(DUT.stall_F == n) begin
            $display("stall_F is correct.  Expected: %h, Actual: %h", n,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_F); fail(); $finish();
        end
        assert(DUT.val_D == n) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", n,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", n,DUT.val_D); fail(); $finish();
        end

        // D
        @(negedge clk);
        inst_D = 32'b00000001111111111100111110110011; // xor x31, x31, x31
        #1
        assert(DUT.inst_D  == 32'b00000001111111111100111110110011) begin
            $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b00000001111111111100111110110011,DUT.inst_D); pass();
        end else begin
            $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b00000001111111111100111110110011,DUT.inst_D); fail(); $finish();
        end
        assert(DUT.val_D == y) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", y,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.val_D); fail(); $finish();
        end
        assert(DUT.inst_val_D == y) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", y,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.j_type_D == j_na) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.br_type_D == br_na) begin
            $display("br_type_D is correct.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); pass();
        end else begin
            $display("br_type_D is incorrect.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); fail(); $finish();
        end
        assert(DUT.op1_sel_D == bm1_rf) begin
            $display("op1_sel_D is correct.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); pass();
        end else begin
            $display("op1_sel_D is incorrect.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); fail(); $finish();
        end
        assert(DUT.rs1_en_D == y) begin
            $display("rs1_en_D is correct.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); pass();
        end else begin
            $display("rs1_en_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); fail(); $finish();
        end
        assert(DUT.op2_sel_D == bm2_rf) begin
            $display("op2_sel_D is correct.  Expected: %h, Actual: %h", bm2_rf,DUT.op2_sel_D); pass();
        end else begin
            $display("op2_sel_D is incorrect.  Expected: %h, Actual: %h", bm2_rf,DUT.op2_sel_D); fail(); $finish();
        end
        assert(DUT.rs2_en_D == y) begin
            $display("rs2_en_D is correct.  Expected: %h, Actual: %h", y,DUT.rs2_en_D); pass();
        end else begin
            $display("rs2_en_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rs2_en_D); fail(); $finish();
        end
        assert(DUT.alu_fn_D == alu_xor) begin
            $display("alu_fn_D is correct.  Expected: %h, Actual: %h", alu_xor,DUT.alu_fn_D); pass();
        end else begin
            $display("alu_fn_D is incorrect.  Expected: %h, Actual: %h", alu_xor,DUT.alu_fn_D); fail(); $finish();
        end
        assert(DUT.ex_result_sel_D == ex_alu) begin
            $display("ex_result_sel_D is correct.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); pass();
        end else begin
            $display("ex_result_sel_D is incorrect.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); fail(); $finish();
        end
        assert(DUT.mul_D == n) begin
            $display("mul_D is correct.  Expected: %h, Actual: %h", n,DUT.mul_D); pass();
        end else begin
            $display("mul_D is incorrect.  Expected: %h, Actual: %h", n,DUT.mul_D); fail(); $finish();
        end
        assert(DUT.dmem_reqstream_type_D == nr) begin
            $display("dmem_reqstream_type_D is correct.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); pass();
        end else begin
            $display("dmem_reqstream_type_D is incorrect.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); fail(); $finish();
        end
        assert(DUT.wb_result_sel_D == wm_a) begin
            $display("wb_result_sel_D is correct.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); pass();
        end else begin
            $display("wb_result_sel_D is incorrect.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); fail(); $finish();
        end
        assert(DUT.rf_wen_D == y) begin
            $display("rf_wen_D is correct.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); pass();
        end else begin
            $display("rf_wen_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); fail(); $finish();
        end
        assert(DUT.csrr_D == n) begin
            $display("csrr_D is correct.  Expected: %h, Actual: %h", n,DUT.csrr_D); pass();
        end else begin
            $display("csrr_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrr_D); fail(); $finish();
        end
        assert(DUT.csrw_D == n) begin
            $display("csrw_D is correct.  Expected: %h, Actual: %h", n,DUT.csrw_D); pass();
        end else begin
            $display("csrw_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrw_D); fail(); $finish();
        end

        delay( $urandom_range(0, 127) );
        
        //--------------------------------------------------------------------
        // Unit Testing #7 Test Decode SLT
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.
        reset = 1;
        @(negedge clk);
        reset = 0;
        imem_respstream_val = 1'b1; // Simulate imem response ready
        imul_req_rdy_D = 1; // Say imul ready so we don't stall the whole pipeline indefinitely

        $display("");
        $display("Test Decode SLT");

        // F
        @(negedge clk);
        assert(DUT.stall_F == n) begin
            $display("stall_F is correct.  Expected: %h, Actual: %h", n,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_F); fail(); $finish();
        end
        assert(DUT.val_D == n) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", n,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", n,DUT.val_D); fail(); $finish();
        end

        // D
        @(negedge clk);
        inst_D = 32'b00000001111111111010111110110011; // slt x31, x31, x31
        #1
        assert(DUT.inst_D  == 32'b00000001111111111010111110110011) begin
            $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b00000001111111111010111110110011,DUT.inst_D); pass();
        end else begin
            $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b00000001111111111010111110110011,DUT.inst_D); fail(); $finish();
        end
        assert(DUT.val_D == y) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", y,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.val_D); fail(); $finish();
        end
        assert(DUT.inst_val_D == y) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", y,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.j_type_D == j_na) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.br_type_D == br_na) begin
            $display("br_type_D is correct.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); pass();
        end else begin
            $display("br_type_D is incorrect.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); fail(); $finish();
        end
        assert(DUT.op1_sel_D == bm1_rf) begin
            $display("op1_sel_D is correct.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); pass();
        end else begin
            $display("op1_sel_D is incorrect.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); fail(); $finish();
        end
        assert(DUT.rs1_en_D == y) begin
            $display("rs1_en_D is correct.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); pass();
        end else begin
            $display("rs1_en_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); fail(); $finish();
        end
        assert(DUT.op2_sel_D == bm2_rf) begin
            $display("op2_sel_D is correct.  Expected: %h, Actual: %h", bm2_rf,DUT.op2_sel_D); pass();
        end else begin
            $display("op2_sel_D is incorrect.  Expected: %h, Actual: %h", bm2_rf,DUT.op2_sel_D); fail(); $finish();
        end
        assert(DUT.rs2_en_D == y) begin
            $display("rs2_en_D is correct.  Expected: %h, Actual: %h", y,DUT.rs2_en_D); pass();
        end else begin
            $display("rs2_en_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rs2_en_D); fail(); $finish();
        end
        assert(DUT.alu_fn_D == alu_slt) begin
            $display("alu_fn_D is correct.  Expected: %h, Actual: %h", alu_slt,DUT.alu_fn_D); pass();
        end else begin
            $display("alu_fn_D is incorrect.  Expected: %h, Actual: %h", alu_slt,DUT.alu_fn_D); fail(); $finish();
        end
        assert(DUT.ex_result_sel_D == ex_alu) begin
            $display("ex_result_sel_D is correct.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); pass();
        end else begin
            $display("ex_result_sel_D is incorrect.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); fail(); $finish();
        end
        assert(DUT.mul_D == n) begin
            $display("mul_D is correct.  Expected: %h, Actual: %h", n,DUT.mul_D); pass();
        end else begin
            $display("mul_D is incorrect.  Expected: %h, Actual: %h", n,DUT.mul_D); fail(); $finish();
        end
        assert(DUT.dmem_reqstream_type_D == nr) begin
            $display("dmem_reqstream_type_D is correct.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); pass();
        end else begin
            $display("dmem_reqstream_type_D is incorrect.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); fail(); $finish();
        end
        assert(DUT.wb_result_sel_D == wm_a) begin
            $display("wb_result_sel_D is correct.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); pass();
        end else begin
            $display("wb_result_sel_D is incorrect.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); fail(); $finish();
        end
        assert(DUT.rf_wen_D == y) begin
            $display("rf_wen_D is correct.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); pass();
        end else begin
            $display("rf_wen_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); fail(); $finish();
        end
        assert(DUT.csrr_D == n) begin
            $display("csrr_D is correct.  Expected: %h, Actual: %h", n,DUT.csrr_D); pass();
        end else begin
            $display("csrr_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrr_D); fail(); $finish();
        end
        assert(DUT.csrw_D == n) begin
            $display("csrw_D is correct.  Expected: %h, Actual: %h", n,DUT.csrw_D); pass();
        end else begin
            $display("csrw_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrw_D); fail(); $finish();
        end

        delay( $urandom_range(0, 127) );
        
        //--------------------------------------------------------------------
        // Unit Testing #8 Test Decode SLTU
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.
        reset = 1;
        @(negedge clk);
        reset = 0;
        imem_respstream_val = 1'b1; // Simulate imem response ready
        imul_req_rdy_D = 1; // Say imul ready so we don't stall the whole pipeline indefinitely

        $display("");
        $display("Test Decode SLTU");

        // F
        @(negedge clk);
        assert(DUT.stall_F == n) begin
            $display("stall_F is correct.  Expected: %h, Actual: %h", n,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_F); fail(); $finish();
        end
        assert(DUT.val_D == n) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", n,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", n,DUT.val_D); fail(); $finish();
        end

        // D
        @(negedge clk);
        inst_D = 32'b00000001111111111011111110110011; // sltu x31, x31, x31
        #1
        assert(DUT.inst_D  == 32'b00000001111111111011111110110011) begin
            $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b00000001111111111011111110110011,DUT.inst_D); pass();
        end else begin
            $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b00000001111111111011111110110011,DUT.inst_D); fail(); $finish();
        end
        assert(DUT.val_D == y) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", y,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.val_D); fail(); $finish();
        end
        assert(DUT.inst_val_D == y) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", y,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.j_type_D == j_na) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.br_type_D == br_na) begin
            $display("br_type_D is correct.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); pass();
        end else begin
            $display("br_type_D is incorrect.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); fail(); $finish();
        end
        assert(DUT.op1_sel_D == bm1_rf) begin
            $display("op1_sel_D is correct.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); pass();
        end else begin
            $display("op1_sel_D is incorrect.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); fail(); $finish();
        end
        assert(DUT.rs1_en_D == y) begin
            $display("rs1_en_D is correct.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); pass();
        end else begin
            $display("rs1_en_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); fail(); $finish();
        end
        assert(DUT.op2_sel_D == bm2_rf) begin
            $display("op2_sel_D is correct.  Expected: %h, Actual: %h", bm2_rf,DUT.op2_sel_D); pass();
        end else begin
            $display("op2_sel_D is incorrect.  Expected: %h, Actual: %h", bm2_rf,DUT.op2_sel_D); fail(); $finish();
        end
        assert(DUT.rs2_en_D == y) begin
            $display("rs2_en_D is correct.  Expected: %h, Actual: %h", y,DUT.rs2_en_D); pass();
        end else begin
            $display("rs2_en_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rs2_en_D); fail(); $finish();
        end
        assert(DUT.alu_fn_D == alu_sltu) begin
            $display("alu_fn_D is correct.  Expected: %h, Actual: %h", alu_sltu,DUT.alu_fn_D); pass();
        end else begin
            $display("alu_fn_D is incorrect.  Expected: %h, Actual: %h", alu_sltu,DUT.alu_fn_D); fail(); $finish();
        end
        assert(DUT.ex_result_sel_D == ex_alu) begin
            $display("ex_result_sel_D is correct.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); pass();
        end else begin
            $display("ex_result_sel_D is incorrect.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); fail(); $finish();
        end
        assert(DUT.mul_D == n) begin
            $display("mul_D is correct.  Expected: %h, Actual: %h", n,DUT.mul_D); pass();
        end else begin
            $display("mul_D is incorrect.  Expected: %h, Actual: %h", n,DUT.mul_D); fail(); $finish();
        end
        assert(DUT.dmem_reqstream_type_D == nr) begin
            $display("dmem_reqstream_type_D is correct.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); pass();
        end else begin
            $display("dmem_reqstream_type_D is incorrect.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); fail(); $finish();
        end
        assert(DUT.wb_result_sel_D == wm_a) begin
            $display("wb_result_sel_D is correct.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); pass();
        end else begin
            $display("wb_result_sel_D is incorrect.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); fail(); $finish();
        end
        assert(DUT.rf_wen_D == y) begin
            $display("rf_wen_D is correct.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); pass();
        end else begin
            $display("rf_wen_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); fail(); $finish();
        end
        assert(DUT.csrr_D == n) begin
            $display("csrr_D is correct.  Expected: %h, Actual: %h", n,DUT.csrr_D); pass();
        end else begin
            $display("csrr_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrr_D); fail(); $finish();
        end
        assert(DUT.csrw_D == n) begin
            $display("csrw_D is correct.  Expected: %h, Actual: %h", n,DUT.csrw_D); pass();
        end else begin
            $display("csrw_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrw_D); fail(); $finish();
        end

        delay( $urandom_range(0, 127) );
        
        //--------------------------------------------------------------------
        // Unit Testing #9 Test Decode SRA
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.
        reset = 1;
        @(negedge clk);
        reset = 0;
        imem_respstream_val = 1'b1; // Simulate imem response ready
        imul_req_rdy_D = 1; // Say imul ready so we don't stall the whole pipeline indefinitely

        $display("");
        $display("Test Decode SRA");

        // F
        @(negedge clk);
        assert(DUT.stall_F == n) begin
            $display("stall_F is correct.  Expected: %h, Actual: %h", n,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_F); fail(); $finish();
        end
        assert(DUT.val_D == n) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", n,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", n,DUT.val_D); fail(); $finish();
        end

        // D
        @(negedge clk);
        inst_D = 32'b01000001111111111101111110110011; // sra x31, x31, x31
        #1
        assert(DUT.inst_D  == 32'b01000001111111111101111110110011) begin
            $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b01000001111111111101111110110011,DUT.inst_D); pass();
        end else begin
            $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b01000001111111111101111110110011,DUT.inst_D); fail(); $finish();
        end
        assert(DUT.val_D == y) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", y,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.val_D); fail(); $finish();
        end
        assert(DUT.inst_val_D == y) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", y,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.j_type_D == j_na) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.br_type_D == br_na) begin
            $display("br_type_D is correct.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); pass();
        end else begin
            $display("br_type_D is incorrect.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); fail(); $finish();
        end
        assert(DUT.op1_sel_D == bm1_rf) begin
            $display("op1_sel_D is correct.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); pass();
        end else begin
            $display("op1_sel_D is incorrect.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); fail(); $finish();
        end
        assert(DUT.rs1_en_D == y) begin
            $display("rs1_en_D is correct.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); pass();
        end else begin
            $display("rs1_en_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); fail(); $finish();
        end
        assert(DUT.op2_sel_D == bm2_rf) begin
            $display("op2_sel_D is correct.  Expected: %h, Actual: %h", bm2_rf,DUT.op2_sel_D); pass();
        end else begin
            $display("op2_sel_D is incorrect.  Expected: %h, Actual: %h", bm2_rf,DUT.op2_sel_D); fail(); $finish();
        end
        assert(DUT.rs2_en_D == y) begin
            $display("rs2_en_D is correct.  Expected: %h, Actual: %h", y,DUT.rs2_en_D); pass();
        end else begin
            $display("rs2_en_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rs2_en_D); fail(); $finish();
        end
        assert(DUT.alu_fn_D == alu_sra) begin
            $display("alu_fn_D is correct.  Expected: %h, Actual: %h", alu_sra,DUT.alu_fn_D); pass();
        end else begin
            $display("alu_fn_D is incorrect.  Expected: %h, Actual: %h", alu_sra,DUT.alu_fn_D); fail(); $finish();
        end
        assert(DUT.ex_result_sel_D == ex_alu) begin
            $display("ex_result_sel_D is correct.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); pass();
        end else begin
            $display("ex_result_sel_D is incorrect.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); fail(); $finish();
        end
        assert(DUT.mul_D == n) begin
            $display("mul_D is correct.  Expected: %h, Actual: %h", n,DUT.mul_D); pass();
        end else begin
            $display("mul_D is incorrect.  Expected: %h, Actual: %h", n,DUT.mul_D); fail(); $finish();
        end
        assert(DUT.dmem_reqstream_type_D == nr) begin
            $display("dmem_reqstream_type_D is correct.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); pass();
        end else begin
            $display("dmem_reqstream_type_D is incorrect.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); fail(); $finish();
        end
        assert(DUT.wb_result_sel_D == wm_a) begin
            $display("wb_result_sel_D is correct.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); pass();
        end else begin
            $display("wb_result_sel_D is incorrect.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); fail(); $finish();
        end
        assert(DUT.rf_wen_D == y) begin
            $display("rf_wen_D is correct.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); pass();
        end else begin
            $display("rf_wen_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); fail(); $finish();
        end
        assert(DUT.csrr_D == n) begin
            $display("csrr_D is correct.  Expected: %h, Actual: %h", n,DUT.csrr_D); pass();
        end else begin
            $display("csrr_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrr_D); fail(); $finish();
        end
        assert(DUT.csrw_D == n) begin
            $display("csrw_D is correct.  Expected: %h, Actual: %h", n,DUT.csrw_D); pass();
        end else begin
            $display("csrw_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrw_D); fail(); $finish();
        end

        delay( $urandom_range(0, 127) );
        
        //--------------------------------------------------------------------
        // Unit Testing #10 Test Decode SRL
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.
        reset = 1;
        @(negedge clk);
        reset = 0;
        imem_respstream_val = 1'b1; // Simulate imem response ready
        imul_req_rdy_D = 1; // Say imul ready so we don't stall the whole pipeline indefinitely

        $display("");
        $display("Test Decode SRL");

        // F
        @(negedge clk);
        assert(DUT.stall_F == n) begin
            $display("stall_F is correct.  Expected: %h, Actual: %h", n,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_F); fail(); $finish();
        end
        assert(DUT.val_D == n) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", n,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", n,DUT.val_D); fail(); $finish();
        end

        // D
        @(negedge clk);
        inst_D = 32'b00000001111111111101111110110011; // srl x31, x31, x31
        #1
        assert(DUT.inst_D  == 32'b00000001111111111101111110110011) begin
            $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b00000001111111111101111110110011,DUT.inst_D); pass();
        end else begin
            $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b00000001111111111101111110110011,DUT.inst_D); fail(); $finish();
        end
        assert(DUT.val_D == y) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", y,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.val_D); fail(); $finish();
        end
        assert(DUT.inst_val_D == y) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", y,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.j_type_D == j_na) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.br_type_D == br_na) begin
            $display("br_type_D is correct.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); pass();
        end else begin
            $display("br_type_D is incorrect.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); fail(); $finish();
        end
        assert(DUT.op1_sel_D == bm1_rf) begin
            $display("op1_sel_D is correct.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); pass();
        end else begin
            $display("op1_sel_D is incorrect.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); fail(); $finish();
        end
        assert(DUT.rs1_en_D == y) begin
            $display("rs1_en_D is correct.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); pass();
        end else begin
            $display("rs1_en_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); fail(); $finish();
        end
        assert(DUT.op2_sel_D == bm2_rf) begin
            $display("op2_sel_D is correct.  Expected: %h, Actual: %h", bm2_rf,DUT.op2_sel_D); pass();
        end else begin
            $display("op2_sel_D is incorrect.  Expected: %h, Actual: %h", bm2_rf,DUT.op2_sel_D); fail(); $finish();
        end
        assert(DUT.rs2_en_D == y) begin
            $display("rs2_en_D is correct.  Expected: %h, Actual: %h", y,DUT.rs2_en_D); pass();
        end else begin
            $display("rs2_en_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rs2_en_D); fail(); $finish();
        end
        assert(DUT.alu_fn_D == alu_srl) begin
            $display("alu_fn_D is correct.  Expected: %h, Actual: %h", alu_srl,DUT.alu_fn_D); pass();
        end else begin
            $display("alu_fn_D is incorrect.  Expected: %h, Actual: %h", alu_srl,DUT.alu_fn_D); fail(); $finish();
        end
        assert(DUT.ex_result_sel_D == ex_alu) begin
            $display("ex_result_sel_D is correct.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); pass();
        end else begin
            $display("ex_result_sel_D is incorrect.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); fail(); $finish();
        end
        assert(DUT.mul_D == n) begin
            $display("mul_D is correct.  Expected: %h, Actual: %h", n,DUT.mul_D); pass();
        end else begin
            $display("mul_D is incorrect.  Expected: %h, Actual: %h", n,DUT.mul_D); fail(); $finish();
        end
        assert(DUT.dmem_reqstream_type_D == nr) begin
            $display("dmem_reqstream_type_D is correct.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); pass();
        end else begin
            $display("dmem_reqstream_type_D is incorrect.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); fail(); $finish();
        end
        assert(DUT.wb_result_sel_D == wm_a) begin
            $display("wb_result_sel_D is correct.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); pass();
        end else begin
            $display("wb_result_sel_D is incorrect.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); fail(); $finish();
        end
        assert(DUT.rf_wen_D == y) begin
            $display("rf_wen_D is correct.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); pass();
        end else begin
            $display("rf_wen_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); fail(); $finish();
        end
        assert(DUT.csrr_D == n) begin
            $display("csrr_D is correct.  Expected: %h, Actual: %h", n,DUT.csrr_D); pass();
        end else begin
            $display("csrr_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrr_D); fail(); $finish();
        end
        assert(DUT.csrw_D == n) begin
            $display("csrw_D is correct.  Expected: %h, Actual: %h", n,DUT.csrw_D); pass();
        end else begin
            $display("csrw_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrw_D); fail(); $finish();
        end

        delay( $urandom_range(0, 127) );
        
        //--------------------------------------------------------------------
        // Unit Testing #11 Test Decode SLL
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.
        reset = 1;
        @(negedge clk);
        reset = 0;
        imem_respstream_val = 1'b1; // Simulate imem response ready
        imul_req_rdy_D = 1; // Say imul ready so we don't stall the whole pipeline indefinitely

        $display("");
        $display("Test Decode SLL");

        // F
        @(negedge clk);
        assert(DUT.stall_F == n) begin
            $display("stall_F is correct.  Expected: %h, Actual: %h", n,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_F); fail(); $finish();
        end
        assert(DUT.val_D == n) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", n,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", n,DUT.val_D); fail(); $finish();
        end

        // D
        @(negedge clk);
        inst_D = 32'b00000001111111111001111110110011; // sll x31, x31, x31
        #1
        assert(DUT.inst_D  == 32'b00000001111111111001111110110011) begin
            $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b00000001111111111001111110110011,DUT.inst_D); pass();
        end else begin
            $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b00000001111111111001111110110011,DUT.inst_D); fail(); $finish();
        end
        assert(DUT.val_D == y) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", y,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.val_D); fail(); $finish();
        end
        assert(DUT.inst_val_D == y) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", y,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.j_type_D == j_na) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.br_type_D == br_na) begin
            $display("br_type_D is correct.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); pass();
        end else begin
            $display("br_type_D is incorrect.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); fail(); $finish();
        end
        assert(DUT.op1_sel_D == bm1_rf) begin
            $display("op1_sel_D is correct.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); pass();
        end else begin
            $display("op1_sel_D is incorrect.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); fail(); $finish();
        end
        assert(DUT.rs1_en_D == y) begin
            $display("rs1_en_D is correct.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); pass();
        end else begin
            $display("rs1_en_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); fail(); $finish();
        end
        assert(DUT.op2_sel_D == bm2_rf) begin
            $display("op2_sel_D is correct.  Expected: %h, Actual: %h", bm2_rf,DUT.op2_sel_D); pass();
        end else begin
            $display("op2_sel_D is incorrect.  Expected: %h, Actual: %h", bm2_rf,DUT.op2_sel_D); fail(); $finish();
        end
        assert(DUT.rs2_en_D == y) begin
            $display("rs2_en_D is correct.  Expected: %h, Actual: %h", y,DUT.rs2_en_D); pass();
        end else begin
            $display("rs2_en_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rs2_en_D); fail(); $finish();
        end
        assert(DUT.alu_fn_D == alu_sll) begin
            $display("alu_fn_D is correct.  Expected: %h, Actual: %h", alu_sll,DUT.alu_fn_D); pass();
        end else begin
            $display("alu_fn_D is incorrect.  Expected: %h, Actual: %h", alu_sll,DUT.alu_fn_D); fail(); $finish();
        end
        assert(DUT.ex_result_sel_D == ex_alu) begin
            $display("ex_result_sel_D is correct.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); pass();
        end else begin
            $display("ex_result_sel_D is incorrect.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); fail(); $finish();
        end
        assert(DUT.mul_D == n) begin
            $display("mul_D is correct.  Expected: %h, Actual: %h", n,DUT.mul_D); pass();
        end else begin
            $display("mul_D is incorrect.  Expected: %h, Actual: %h", n,DUT.mul_D); fail(); $finish();
        end
        assert(DUT.dmem_reqstream_type_D == nr) begin
            $display("dmem_reqstream_type_D is correct.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); pass();
        end else begin
            $display("dmem_reqstream_type_D is incorrect.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); fail(); $finish();
        end
        assert(DUT.wb_result_sel_D == wm_a) begin
            $display("wb_result_sel_D is correct.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); pass();
        end else begin
            $display("wb_result_sel_D is incorrect.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); fail(); $finish();
        end
        assert(DUT.rf_wen_D == y) begin
            $display("rf_wen_D is correct.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); pass();
        end else begin
            $display("rf_wen_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); fail(); $finish();
        end
        assert(DUT.csrr_D == n) begin
            $display("csrr_D is correct.  Expected: %h, Actual: %h", n,DUT.csrr_D); pass();
        end else begin
            $display("csrr_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrr_D); fail(); $finish();
        end
        assert(DUT.csrw_D == n) begin
            $display("csrw_D is correct.  Expected: %h, Actual: %h", n,DUT.csrw_D); pass();
        end else begin
            $display("csrw_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrw_D); fail(); $finish();
        end

        delay( $urandom_range(0, 127) );
        
        //--------------------------------------------------------------------
        // Unit Testing #12 Test Decode ANDI
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.
        reset = 1;
        @(negedge clk);
        reset = 0;
        imem_respstream_val = 1'b1; // Simulate imem response ready
        imul_req_rdy_D = 1; // Say imul ready so we don't stall the whole pipeline indefinitely

        $display("");
        $display("Test Decode ANDI");

        // F
        @(negedge clk);
        assert(DUT.stall_F == n) begin
            $display("stall_F is correct.  Expected: %h, Actual: %h", n,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_F); fail(); $finish();
        end
        assert(DUT.val_D == n) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", n,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", n,DUT.val_D); fail(); $finish();
        end

        // D
        @(negedge clk);
        inst_D = 32'b11111111111111111111111110010011; // andi x31, x31, -1
        #1
        assert(DUT.inst_D  == 32'b11111111111111111111111110010011) begin
            $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b11111111111111111111111110010011,DUT.inst_D); pass();
        end else begin
            $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b11111111111111111111111110010011,DUT.inst_D); fail(); $finish();
        end
        assert(DUT.val_D == y) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", y,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.val_D); fail(); $finish();
        end
        assert(DUT.inst_val_D == y) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", y,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.j_type_D == j_na) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.br_type_D == br_na) begin
            $display("br_type_D is correct.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); pass();
        end else begin
            $display("br_type_D is incorrect.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); fail(); $finish();
        end
        assert(DUT.op1_sel_D == bm1_rf) begin
            $display("op1_sel_D is correct.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); pass();
        end else begin
            $display("op1_sel_D is incorrect.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); fail(); $finish();
        end
        assert(DUT.rs1_en_D == y) begin
            $display("rs1_en_D is correct.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); pass();
        end else begin
            $display("rs1_en_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); fail(); $finish();
        end
        assert(DUT.op2_sel_D == bm2_imm) begin
            $display("op2_sel_D is correct.  Expected: %h, Actual: %h", bm2_imm,DUT.op2_sel_D); pass();
        end else begin
            $display("op2_sel_D is incorrect.  Expected: %h, Actual: %h", bm2_imm,DUT.op2_sel_D); fail(); $finish();
        end
        assert(DUT.rs2_en_D == n) begin
            $display("rs2_en_D is correct.  Expected: %h, Actual: %h", n,DUT.rs2_en_D); pass();
        end else begin
            $display("rs2_en_D is incorrect.  Expected: %h, Actual: %h", n,DUT.rs2_en_D); fail(); $finish();
        end
        assert(DUT.alu_fn_D == alu_and) begin
            $display("alu_fn_D is correct.  Expected: %h, Actual: %h", alu_and,DUT.alu_fn_D); pass();
        end else begin
            $display("alu_fn_D is incorrect.  Expected: %h, Actual: %h", alu_and,DUT.alu_fn_D); fail(); $finish();
        end
        assert(DUT.ex_result_sel_D == ex_alu) begin
            $display("ex_result_sel_D is correct.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); pass();
        end else begin
            $display("ex_result_sel_D is incorrect.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); fail(); $finish();
        end
        assert(DUT.mul_D == n) begin
            $display("mul_D is correct.  Expected: %h, Actual: %h", n,DUT.mul_D); pass();
        end else begin
            $display("mul_D is incorrect.  Expected: %h, Actual: %h", n,DUT.mul_D); fail(); $finish();
        end
        assert(DUT.dmem_reqstream_type_D == nr) begin
            $display("dmem_reqstream_type_D is correct.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); pass();
        end else begin
            $display("dmem_reqstream_type_D is incorrect.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); fail(); $finish();
        end
        assert(DUT.wb_result_sel_D == wm_a) begin
            $display("wb_result_sel_D is correct.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); pass();
        end else begin
            $display("wb_result_sel_D is incorrect.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); fail(); $finish();
        end
        assert(DUT.rf_wen_D == y) begin
            $display("rf_wen_D is correct.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); pass();
        end else begin
            $display("rf_wen_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); fail(); $finish();
        end
        assert(DUT.csrr_D == n) begin
            $display("csrr_D is correct.  Expected: %h, Actual: %h", n,DUT.csrr_D); pass();
        end else begin
            $display("csrr_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrr_D); fail(); $finish();
        end
        assert(DUT.csrw_D == n) begin
            $display("csrw_D is correct.  Expected: %h, Actual: %h", n,DUT.csrw_D); pass();
        end else begin
            $display("csrw_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrw_D); fail(); $finish();
        end

        delay( $urandom_range(0, 127) );
        
        //--------------------------------------------------------------------
        // Unit Testing #13 Test Decode ORI
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.
        reset = 1;
        @(negedge clk);
        reset = 0;
        imem_respstream_val = 1'b1; // Simulate imem response ready
        imul_req_rdy_D = 1; // Say imul ready so we don't stall the whole pipeline indefinitely

        $display("");
        $display("Test Decode ORI");

        // F
        @(negedge clk);
        assert(DUT.stall_F == n) begin
            $display("stall_F is correct.  Expected: %h, Actual: %h", n,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_F); fail(); $finish();
        end
        assert(DUT.val_D == n) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", n,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", n,DUT.val_D); fail(); $finish();
        end

        // D
        @(negedge clk);
        inst_D = 32'b11111111111111111110111110010011; // ori x31, x31, -1
        #1
        assert(DUT.inst_D  == 32'b11111111111111111110111110010011) begin
            $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b11111111111111111110111110010011,DUT.inst_D); pass();
        end else begin
            $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b11111111111111111110111110010011,DUT.inst_D); fail(); $finish();
        end
        assert(DUT.val_D == y) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", y,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.val_D); fail(); $finish();
        end
        assert(DUT.inst_val_D == y) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", y,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.j_type_D == j_na) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.br_type_D == br_na) begin
            $display("br_type_D is correct.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); pass();
        end else begin
            $display("br_type_D is incorrect.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); fail(); $finish();
        end
        assert(DUT.op1_sel_D == bm1_rf) begin
            $display("op1_sel_D is correct.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); pass();
        end else begin
            $display("op1_sel_D is incorrect.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); fail(); $finish();
        end
        assert(DUT.rs1_en_D == y) begin
            $display("rs1_en_D is correct.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); pass();
        end else begin
            $display("rs1_en_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); fail(); $finish();
        end
        assert(DUT.op2_sel_D == bm2_imm) begin
            $display("op2_sel_D is correct.  Expected: %h, Actual: %h", bm2_imm,DUT.op2_sel_D); pass();
        end else begin
            $display("op2_sel_D is incorrect.  Expected: %h, Actual: %h", bm2_imm,DUT.op2_sel_D); fail(); $finish();
        end
        assert(DUT.rs2_en_D == n) begin
            $display("rs2_en_D is correct.  Expected: %h, Actual: %h", n,DUT.rs2_en_D); pass();
        end else begin
            $display("rs2_en_D is incorrect.  Expected: %h, Actual: %h", n,DUT.rs2_en_D); fail(); $finish();
        end
        assert(DUT.alu_fn_D == alu_or) begin
            $display("alu_fn_D is correct.  Expected: %h, Actual: %h", alu_or,DUT.alu_fn_D); pass();
        end else begin
            $display("alu_fn_D is incorrect.  Expected: %h, Actual: %h", alu_or,DUT.alu_fn_D); fail(); $finish();
        end
        assert(DUT.ex_result_sel_D == ex_alu) begin
            $display("ex_result_sel_D is correct.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); pass();
        end else begin
            $display("ex_result_sel_D is incorrect.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); fail(); $finish();
        end
        assert(DUT.mul_D == n) begin
            $display("mul_D is correct.  Expected: %h, Actual: %h", n,DUT.mul_D); pass();
        end else begin
            $display("mul_D is incorrect.  Expected: %h, Actual: %h", n,DUT.mul_D); fail(); $finish();
        end
        assert(DUT.dmem_reqstream_type_D == nr) begin
            $display("dmem_reqstream_type_D is correct.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); pass();
        end else begin
            $display("dmem_reqstream_type_D is incorrect.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); fail(); $finish();
        end
        assert(DUT.wb_result_sel_D == wm_a) begin
            $display("wb_result_sel_D is correct.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); pass();
        end else begin
            $display("wb_result_sel_D is incorrect.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); fail(); $finish();
        end
        assert(DUT.rf_wen_D == y) begin
            $display("rf_wen_D is correct.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); pass();
        end else begin
            $display("rf_wen_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); fail(); $finish();
        end
        assert(DUT.csrr_D == n) begin
            $display("csrr_D is correct.  Expected: %h, Actual: %h", n,DUT.csrr_D); pass();
        end else begin
            $display("csrr_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrr_D); fail(); $finish();
        end
        assert(DUT.csrw_D == n) begin
            $display("csrw_D is correct.  Expected: %h, Actual: %h", n,DUT.csrw_D); pass();
        end else begin
            $display("csrw_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrw_D); fail(); $finish();
        end

        delay( $urandom_range(0, 127) );
        
        //--------------------------------------------------------------------
        // Unit Testing #14 Test Decode XORI
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.
        reset = 1;
        @(negedge clk);
        reset = 0;
        imem_respstream_val = 1'b1; // Simulate imem response ready
        imul_req_rdy_D = 1; // Say imul ready so we don't stall the whole pipeline indefinitely

        $display("");
        $display("Test Decode XORI");

        // F
        @(negedge clk);
        assert(DUT.stall_F == n) begin
            $display("stall_F is correct.  Expected: %h, Actual: %h", n,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_F); fail(); $finish();
        end
        assert(DUT.val_D == n) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", n,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", n,DUT.val_D); fail(); $finish();
        end

        // D
        @(negedge clk);
        inst_D = 32'b11111111111111111100111110010011; // xori x31, x31, -1
        #1
        assert(DUT.inst_D  == 32'b11111111111111111100111110010011) begin
            $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b11111111111111111100111110010011,DUT.inst_D); pass();
        end else begin
            $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b11111111111111111100111110010011,DUT.inst_D); fail(); $finish();
        end
        assert(DUT.val_D == y) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", y,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.val_D); fail(); $finish();
        end
        assert(DUT.inst_val_D == y) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", y,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.j_type_D == j_na) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.br_type_D == br_na) begin
            $display("br_type_D is correct.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); pass();
        end else begin
            $display("br_type_D is incorrect.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); fail(); $finish();
        end
        assert(DUT.op1_sel_D == bm1_rf) begin
            $display("op1_sel_D is correct.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); pass();
        end else begin
            $display("op1_sel_D is incorrect.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); fail(); $finish();
        end
        assert(DUT.rs1_en_D == y) begin
            $display("rs1_en_D is correct.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); pass();
        end else begin
            $display("rs1_en_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); fail(); $finish();
        end
        assert(DUT.op2_sel_D == bm2_imm) begin
            $display("op2_sel_D is correct.  Expected: %h, Actual: %h", bm2_imm,DUT.op2_sel_D); pass();
        end else begin
            $display("op2_sel_D is incorrect.  Expected: %h, Actual: %h", bm2_imm,DUT.op2_sel_D); fail(); $finish();
        end
        assert(DUT.rs2_en_D == n) begin
            $display("rs2_en_D is correct.  Expected: %h, Actual: %h", n,DUT.rs2_en_D); pass();
        end else begin
            $display("rs2_en_D is incorrect.  Expected: %h, Actual: %h", n,DUT.rs2_en_D); fail(); $finish();
        end
        assert(DUT.alu_fn_D == alu_xor) begin
            $display("alu_fn_D is correct.  Expected: %h, Actual: %h", alu_xor,DUT.alu_fn_D); pass();
        end else begin
            $display("alu_fn_D is incorrect.  Expected: %h, Actual: %h", alu_xor,DUT.alu_fn_D); fail(); $finish();
        end
        assert(DUT.ex_result_sel_D == ex_alu) begin
            $display("ex_result_sel_D is correct.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); pass();
        end else begin
            $display("ex_result_sel_D is incorrect.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); fail(); $finish();
        end
        assert(DUT.mul_D == n) begin
            $display("mul_D is correct.  Expected: %h, Actual: %h", n,DUT.mul_D); pass();
        end else begin
            $display("mul_D is incorrect.  Expected: %h, Actual: %h", n,DUT.mul_D); fail(); $finish();
        end
        assert(DUT.dmem_reqstream_type_D == nr) begin
            $display("dmem_reqstream_type_D is correct.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); pass();
        end else begin
            $display("dmem_reqstream_type_D is incorrect.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); fail(); $finish();
        end
        assert(DUT.wb_result_sel_D == wm_a) begin
            $display("wb_result_sel_D is correct.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); pass();
        end else begin
            $display("wb_result_sel_D is incorrect.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); fail(); $finish();
        end
        assert(DUT.rf_wen_D == y) begin
            $display("rf_wen_D is correct.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); pass();
        end else begin
            $display("rf_wen_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); fail(); $finish();
        end
        assert(DUT.csrr_D == n) begin
            $display("csrr_D is correct.  Expected: %h, Actual: %h", n,DUT.csrr_D); pass();
        end else begin
            $display("csrr_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrr_D); fail(); $finish();
        end
        assert(DUT.csrw_D == n) begin
            $display("csrw_D is correct.  Expected: %h, Actual: %h", n,DUT.csrw_D); pass();
        end else begin
            $display("csrw_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrw_D); fail(); $finish();
        end

        delay( $urandom_range(0, 127) );
        
        //--------------------------------------------------------------------
        // Unit Testing #15 Test Decode SLTI
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.
        reset = 1;
        @(negedge clk);
        reset = 0;
        imem_respstream_val = 1'b1; // Simulate imem response ready
        imul_req_rdy_D = 1; // Say imul ready so we don't stall the whole pipeline indefinitely

        $display("");
        $display("Test Decode SLTI");

        // F
        @(negedge clk);
        assert(DUT.stall_F == n) begin
            $display("stall_F is correct.  Expected: %h, Actual: %h", n,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_F); fail(); $finish();
        end
        assert(DUT.val_D == n) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", n,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", n,DUT.val_D); fail(); $finish();
        end

        // D
        @(negedge clk);
        inst_D = 32'b11111111111111111010111110010011; // slti x31, x31, -1
        #1
        assert(DUT.inst_D  == 32'b11111111111111111010111110010011) begin
            $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b11111111111111111010111110010011,DUT.inst_D); pass();
        end else begin
            $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b11111111111111111010111110010011,DUT.inst_D); fail(); $finish();
        end
        assert(DUT.val_D == y) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", y,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.val_D); fail(); $finish();
        end
        assert(DUT.inst_val_D == y) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", y,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.j_type_D == j_na) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.br_type_D == br_na) begin
            $display("br_type_D is correct.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); pass();
        end else begin
            $display("br_type_D is incorrect.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); fail(); $finish();
        end
        assert(DUT.op1_sel_D == bm1_rf) begin
            $display("op1_sel_D is correct.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); pass();
        end else begin
            $display("op1_sel_D is incorrect.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); fail(); $finish();
        end
        assert(DUT.rs1_en_D == y) begin
            $display("rs1_en_D is correct.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); pass();
        end else begin
            $display("rs1_en_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); fail(); $finish();
        end
        assert(DUT.op2_sel_D == bm2_imm) begin
            $display("op2_sel_D is correct.  Expected: %h, Actual: %h", bm2_imm,DUT.op2_sel_D); pass();
        end else begin
            $display("op2_sel_D is incorrect.  Expected: %h, Actual: %h", bm2_imm,DUT.op2_sel_D); fail(); $finish();
        end
        assert(DUT.rs2_en_D == n) begin
            $display("rs2_en_D is correct.  Expected: %h, Actual: %h", n,DUT.rs2_en_D); pass();
        end else begin
            $display("rs2_en_D is incorrect.  Expected: %h, Actual: %h", n,DUT.rs2_en_D); fail(); $finish();
        end
        assert(DUT.alu_fn_D == alu_slt) begin
            $display("alu_fn_D is correct.  Expected: %h, Actual: %h", alu_slt,DUT.alu_fn_D); pass();
        end else begin
            $display("alu_fn_D is incorrect.  Expected: %h, Actual: %h", alu_slt,DUT.alu_fn_D); fail(); $finish();
        end
        assert(DUT.ex_result_sel_D == ex_alu) begin
            $display("ex_result_sel_D is correct.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); pass();
        end else begin
            $display("ex_result_sel_D is incorrect.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); fail(); $finish();
        end
        assert(DUT.mul_D == n) begin
            $display("mul_D is correct.  Expected: %h, Actual: %h", n,DUT.mul_D); pass();
        end else begin
            $display("mul_D is incorrect.  Expected: %h, Actual: %h", n,DUT.mul_D); fail(); $finish();
        end
        assert(DUT.dmem_reqstream_type_D == nr) begin
            $display("dmem_reqstream_type_D is correct.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); pass();
        end else begin
            $display("dmem_reqstream_type_D is incorrect.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); fail(); $finish();
        end
        assert(DUT.wb_result_sel_D == wm_a) begin
            $display("wb_result_sel_D is correct.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); pass();
        end else begin
            $display("wb_result_sel_D is incorrect.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); fail(); $finish();
        end
        assert(DUT.rf_wen_D == y) begin
            $display("rf_wen_D is correct.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); pass();
        end else begin
            $display("rf_wen_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); fail(); $finish();
        end
        assert(DUT.csrr_D == n) begin
            $display("csrr_D is correct.  Expected: %h, Actual: %h", n,DUT.csrr_D); pass();
        end else begin
            $display("csrr_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrr_D); fail(); $finish();
        end
        assert(DUT.csrw_D == n) begin
            $display("csrw_D is correct.  Expected: %h, Actual: %h", n,DUT.csrw_D); pass();
        end else begin
            $display("csrw_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrw_D); fail(); $finish();
        end

        delay( $urandom_range(0, 127) );
        
        //--------------------------------------------------------------------
        // Unit Testing #16 Test Decode SLTIU
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.
        reset = 1;
        @(negedge clk);
        reset = 0;
        imem_respstream_val = 1'b1; // Simulate imem response ready
        imul_req_rdy_D = 1; // Say imul ready so we don't stall the whole pipeline indefinitely

        $display("");
        $display("Test Decode SLTIU");

        // F
        @(negedge clk);
        assert(DUT.stall_F == n) begin
            $display("stall_F is correct.  Expected: %h, Actual: %h", n,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_F); fail(); $finish();
        end
        assert(DUT.val_D == n) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", n,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", n,DUT.val_D); fail(); $finish();
        end

        // D
        @(negedge clk);
        inst_D = 32'b11111111111111111011111110010011; // sltiu x31, x31, -1
        #1
        assert(DUT.inst_D  == 32'b11111111111111111011111110010011) begin
            $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b11111111111111111011111110010011,DUT.inst_D); pass();
        end else begin
            $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b11111111111111111011111110010011,DUT.inst_D); fail(); $finish();
        end
        assert(DUT.val_D == y) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", y,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.val_D); fail(); $finish();
        end
        assert(DUT.inst_val_D == y) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", y,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.j_type_D == j_na) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.br_type_D == br_na) begin
            $display("br_type_D is correct.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); pass();
        end else begin
            $display("br_type_D is incorrect.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); fail(); $finish();
        end
        assert(DUT.op1_sel_D == bm1_rf) begin
            $display("op1_sel_D is correct.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); pass();
        end else begin
            $display("op1_sel_D is incorrect.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); fail(); $finish();
        end
        assert(DUT.rs1_en_D == y) begin
            $display("rs1_en_D is correct.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); pass();
        end else begin
            $display("rs1_en_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); fail(); $finish();
        end
        assert(DUT.op2_sel_D == bm2_imm) begin
            $display("op2_sel_D is correct.  Expected: %h, Actual: %h", bm2_imm,DUT.op2_sel_D); pass();
        end else begin
            $display("op2_sel_D is incorrect.  Expected: %h, Actual: %h", bm2_imm,DUT.op2_sel_D); fail(); $finish();
        end
        assert(DUT.rs2_en_D == n) begin
            $display("rs2_en_D is correct.  Expected: %h, Actual: %h", n,DUT.rs2_en_D); pass();
        end else begin
            $display("rs2_en_D is incorrect.  Expected: %h, Actual: %h", n,DUT.rs2_en_D); fail(); $finish();
        end
        assert(DUT.alu_fn_D == alu_sltu) begin
            $display("alu_fn_D is correct.  Expected: %h, Actual: %h", alu_sltu,DUT.alu_fn_D); pass();
        end else begin
            $display("alu_fn_D is incorrect.  Expected: %h, Actual: %h", alu_sltu,DUT.alu_fn_D); fail(); $finish();
        end
        assert(DUT.ex_result_sel_D == ex_alu) begin
            $display("ex_result_sel_D is correct.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); pass();
        end else begin
            $display("ex_result_sel_D is incorrect.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); fail(); $finish();
        end
        assert(DUT.mul_D == n) begin
            $display("mul_D is correct.  Expected: %h, Actual: %h", n,DUT.mul_D); pass();
        end else begin
            $display("mul_D is incorrect.  Expected: %h, Actual: %h", n,DUT.mul_D); fail(); $finish();
        end
        assert(DUT.dmem_reqstream_type_D == nr) begin
            $display("dmem_reqstream_type_D is correct.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); pass();
        end else begin
            $display("dmem_reqstream_type_D is incorrect.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); fail(); $finish();
        end
        assert(DUT.wb_result_sel_D == wm_a) begin
            $display("wb_result_sel_D is correct.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); pass();
        end else begin
            $display("wb_result_sel_D is incorrect.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); fail(); $finish();
        end
        assert(DUT.rf_wen_D == y) begin
            $display("rf_wen_D is correct.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); pass();
        end else begin
            $display("rf_wen_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); fail(); $finish();
        end
        assert(DUT.csrr_D == n) begin
            $display("csrr_D is correct.  Expected: %h, Actual: %h", n,DUT.csrr_D); pass();
        end else begin
            $display("csrr_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrr_D); fail(); $finish();
        end
        assert(DUT.csrw_D == n) begin
            $display("csrw_D is correct.  Expected: %h, Actual: %h", n,DUT.csrw_D); pass();
        end else begin
            $display("csrw_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrw_D); fail(); $finish();
        end

        delay( $urandom_range(0, 127) );
        
        //--------------------------------------------------------------------
        // Unit Testing #17 Test Decode SRAI
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.
        reset = 1;
        @(negedge clk);
        reset = 0;
        imem_respstream_val = 1'b1; // Simulate imem response ready
        imul_req_rdy_D = 1; // Say imul ready so we don't stall the whole pipeline indefinitely

        $display("");
        $display("Test Decode SRAI");

        // F
        @(negedge clk);
        assert(DUT.stall_F == n) begin
            $display("stall_F is correct.  Expected: %h, Actual: %h", n,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_F); fail(); $finish();
        end
        assert(DUT.val_D == n) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", n,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", n,DUT.val_D); fail(); $finish();
        end

        // D
        @(negedge clk);
        inst_D = 32'b01000001111111111101111110010011; // srai x31, x31, -1
        #1
        assert(DUT.inst_D  == 32'b01000001111111111101111110010011) begin
            $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b01000001111111111101111110010011,DUT.inst_D); pass();
        end else begin
            $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b01000001111111111101111110010011,DUT.inst_D); fail(); $finish();
        end
        assert(DUT.val_D == y) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", y,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.val_D); fail(); $finish();
        end
        assert(DUT.inst_val_D == y) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", y,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.j_type_D == j_na) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.br_type_D == br_na) begin
            $display("br_type_D is correct.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); pass();
        end else begin
            $display("br_type_D is incorrect.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); fail(); $finish();
        end
        assert(DUT.op1_sel_D == bm1_rf) begin
            $display("op1_sel_D is correct.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); pass();
        end else begin
            $display("op1_sel_D is incorrect.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); fail(); $finish();
        end
        assert(DUT.rs1_en_D == y) begin
            $display("rs1_en_D is correct.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); pass();
        end else begin
            $display("rs1_en_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); fail(); $finish();
        end
        assert(DUT.op2_sel_D == bm2_imm) begin
            $display("op2_sel_D is correct.  Expected: %h, Actual: %h", bm2_imm,DUT.op2_sel_D); pass();
        end else begin
            $display("op2_sel_D is incorrect.  Expected: %h, Actual: %h", bm2_imm,DUT.op2_sel_D); fail(); $finish();
        end
        assert(DUT.rs2_en_D == n) begin
            $display("rs2_en_D is correct.  Expected: %h, Actual: %h", n,DUT.rs2_en_D); pass();
        end else begin
            $display("rs2_en_D is incorrect.  Expected: %h, Actual: %h", n,DUT.rs2_en_D); fail(); $finish();
        end
        assert(DUT.alu_fn_D == alu_sra) begin
            $display("alu_fn_D is correct.  Expected: %h, Actual: %h", alu_sra,DUT.alu_fn_D); pass();
        end else begin
            $display("alu_fn_D is incorrect.  Expected: %h, Actual: %h", alu_sra,DUT.alu_fn_D); fail(); $finish();
        end
        assert(DUT.ex_result_sel_D == ex_alu) begin
            $display("ex_result_sel_D is correct.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); pass();
        end else begin
            $display("ex_result_sel_D is incorrect.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); fail(); $finish();
        end
        assert(DUT.mul_D == n) begin
            $display("mul_D is correct.  Expected: %h, Actual: %h", n,DUT.mul_D); pass();
        end else begin
            $display("mul_D is incorrect.  Expected: %h, Actual: %h", n,DUT.mul_D); fail(); $finish();
        end
        assert(DUT.dmem_reqstream_type_D == nr) begin
            $display("dmem_reqstream_type_D is correct.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); pass();
        end else begin
            $display("dmem_reqstream_type_D is incorrect.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); fail(); $finish();
        end
        assert(DUT.wb_result_sel_D == wm_a) begin
            $display("wb_result_sel_D is correct.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); pass();
        end else begin
            $display("wb_result_sel_D is incorrect.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); fail(); $finish();
        end
        assert(DUT.rf_wen_D == y) begin
            $display("rf_wen_D is correct.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); pass();
        end else begin
            $display("rf_wen_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); fail(); $finish();
        end
        assert(DUT.csrr_D == n) begin
            $display("csrr_D is correct.  Expected: %h, Actual: %h", n,DUT.csrr_D); pass();
        end else begin
            $display("csrr_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrr_D); fail(); $finish();
        end
        assert(DUT.csrw_D == n) begin
            $display("csrw_D is correct.  Expected: %h, Actual: %h", n,DUT.csrw_D); pass();
        end else begin
            $display("csrw_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrw_D); fail(); $finish();
        end

        delay( $urandom_range(0, 127) );
        
        //--------------------------------------------------------------------
        // Unit Testing #18 Test Decode SRLI
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.
        reset = 1;
        @(negedge clk);
        reset = 0;
        imem_respstream_val = 1'b1; // Simulate imem response ready
        imul_req_rdy_D = 1; // Say imul ready so we don't stall the whole pipeline indefinitely

        $display("");
        $display("Test Decode SRLI");

        // F
        @(negedge clk);
        assert(DUT.stall_F == n) begin
            $display("stall_F is correct.  Expected: %h, Actual: %h", n,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_F); fail(); $finish();
        end
        assert(DUT.val_D == n) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", n,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", n,DUT.val_D); fail(); $finish();
        end

        // D
        @(negedge clk);
        inst_D = 32'b00000001111111111101111110010011; // srli x31, x31, -1
        #1
        assert(DUT.inst_D  == 32'b00000001111111111101111110010011) begin
            $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b00000001111111111101111110010011,DUT.inst_D); pass();
        end else begin
            $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b00000001111111111101111110010011,DUT.inst_D); fail(); $finish();
        end
        assert(DUT.val_D == y) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", y,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.val_D); fail(); $finish();
        end
        assert(DUT.inst_val_D == y) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", y,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.j_type_D == j_na) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.br_type_D == br_na) begin
            $display("br_type_D is correct.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); pass();
        end else begin
            $display("br_type_D is incorrect.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); fail(); $finish();
        end
        assert(DUT.op1_sel_D == bm1_rf) begin
            $display("op1_sel_D is correct.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); pass();
        end else begin
            $display("op1_sel_D is incorrect.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); fail(); $finish();
        end
        assert(DUT.rs1_en_D == y) begin
            $display("rs1_en_D is correct.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); pass();
        end else begin
            $display("rs1_en_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); fail(); $finish();
        end
        assert(DUT.op2_sel_D == bm2_imm) begin
            $display("op2_sel_D is correct.  Expected: %h, Actual: %h", bm2_imm,DUT.op2_sel_D); pass();
        end else begin
            $display("op2_sel_D is incorrect.  Expected: %h, Actual: %h", bm2_imm,DUT.op2_sel_D); fail(); $finish();
        end
        assert(DUT.rs2_en_D == n) begin
            $display("rs2_en_D is correct.  Expected: %h, Actual: %h", n,DUT.rs2_en_D); pass();
        end else begin
            $display("rs2_en_D is incorrect.  Expected: %h, Actual: %h", n,DUT.rs2_en_D); fail(); $finish();
        end
        assert(DUT.alu_fn_D == alu_srl) begin
            $display("alu_fn_D is correct.  Expected: %h, Actual: %h", alu_srl,DUT.alu_fn_D); pass();
        end else begin
            $display("alu_fn_D is incorrect.  Expected: %h, Actual: %h", alu_srl,DUT.alu_fn_D); fail(); $finish();
        end
        assert(DUT.ex_result_sel_D == ex_alu) begin
            $display("ex_result_sel_D is correct.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); pass();
        end else begin
            $display("ex_result_sel_D is incorrect.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); fail(); $finish();
        end
        assert(DUT.mul_D == n) begin
            $display("mul_D is correct.  Expected: %h, Actual: %h", n,DUT.mul_D); pass();
        end else begin
            $display("mul_D is incorrect.  Expected: %h, Actual: %h", n,DUT.mul_D); fail(); $finish();
        end
        assert(DUT.dmem_reqstream_type_D == nr) begin
            $display("dmem_reqstream_type_D is correct.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); pass();
        end else begin
            $display("dmem_reqstream_type_D is incorrect.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); fail(); $finish();
        end
        assert(DUT.wb_result_sel_D == wm_a) begin
            $display("wb_result_sel_D is correct.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); pass();
        end else begin
            $display("wb_result_sel_D is incorrect.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); fail(); $finish();
        end
        assert(DUT.rf_wen_D == y) begin
            $display("rf_wen_D is correct.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); pass();
        end else begin
            $display("rf_wen_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); fail(); $finish();
        end
        assert(DUT.csrr_D == n) begin
            $display("csrr_D is correct.  Expected: %h, Actual: %h", n,DUT.csrr_D); pass();
        end else begin
            $display("csrr_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrr_D); fail(); $finish();
        end
        assert(DUT.csrw_D == n) begin
            $display("csrw_D is correct.  Expected: %h, Actual: %h", n,DUT.csrw_D); pass();
        end else begin
            $display("csrw_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrw_D); fail(); $finish();
        end

        delay( $urandom_range(0, 127) );
        
        //--------------------------------------------------------------------
        // Unit Testing #19 Test Decode SLLI
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.
        reset = 1;
        @(negedge clk);
        reset = 0;
        imem_respstream_val = 1'b1; // Simulate imem response ready
        imul_req_rdy_D = 1; // Say imul ready so we don't stall the whole pipeline indefinitely

        $display("");
        $display("Test Decode SLLI");

        // F
        @(negedge clk);
        assert(DUT.stall_F == n) begin
            $display("stall_F is correct.  Expected: %h, Actual: %h", n,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_F); fail(); $finish();
        end
        assert(DUT.val_D == n) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", n,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", n,DUT.val_D); fail(); $finish();
        end

        // D
        @(negedge clk);
        inst_D = 32'b00000001111111111001111110010011; // slli x31, x31, -1
        #1
        assert(DUT.inst_D  == 32'b00000001111111111001111110010011) begin
            $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b00000001111111111001111110010011,DUT.inst_D); pass();
        end else begin
            $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b00000001111111111001111110010011,DUT.inst_D); fail(); $finish();
        end
        assert(DUT.val_D == y) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", y,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.val_D); fail(); $finish();
        end
        assert(DUT.inst_val_D == y) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", y,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.j_type_D == j_na) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.br_type_D == br_na) begin
            $display("br_type_D is correct.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); pass();
        end else begin
            $display("br_type_D is incorrect.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); fail(); $finish();
        end
        assert(DUT.op1_sel_D == bm1_rf) begin
            $display("op1_sel_D is correct.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); pass();
        end else begin
            $display("op1_sel_D is incorrect.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); fail(); $finish();
        end
        assert(DUT.rs1_en_D == y) begin
            $display("rs1_en_D is correct.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); pass();
        end else begin
            $display("rs1_en_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); fail(); $finish();
        end
        assert(DUT.op2_sel_D == bm2_imm) begin
            $display("op2_sel_D is correct.  Expected: %h, Actual: %h", bm2_imm,DUT.op2_sel_D); pass();
        end else begin
            $display("op2_sel_D is incorrect.  Expected: %h, Actual: %h", bm2_imm,DUT.op2_sel_D); fail(); $finish();
        end
        assert(DUT.rs2_en_D == n) begin
            $display("rs2_en_D is correct.  Expected: %h, Actual: %h", n,DUT.rs2_en_D); pass();
        end else begin
            $display("rs2_en_D is incorrect.  Expected: %h, Actual: %h", n,DUT.rs2_en_D); fail(); $finish();
        end
        assert(DUT.alu_fn_D == alu_sll) begin
            $display("alu_fn_D is correct.  Expected: %h, Actual: %h", alu_sll,DUT.alu_fn_D); pass();
        end else begin
            $display("alu_fn_D is incorrect.  Expected: %h, Actual: %h", alu_sll,DUT.alu_fn_D); fail(); $finish();
        end
        assert(DUT.ex_result_sel_D == ex_alu) begin
            $display("ex_result_sel_D is correct.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); pass();
        end else begin
            $display("ex_result_sel_D is incorrect.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); fail(); $finish();
        end
        assert(DUT.mul_D == n) begin
            $display("mul_D is correct.  Expected: %h, Actual: %h", n,DUT.mul_D); pass();
        end else begin
            $display("mul_D is incorrect.  Expected: %h, Actual: %h", n,DUT.mul_D); fail(); $finish();
        end
        assert(DUT.dmem_reqstream_type_D == nr) begin
            $display("dmem_reqstream_type_D is correct.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); pass();
        end else begin
            $display("dmem_reqstream_type_D is incorrect.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); fail(); $finish();
        end
        assert(DUT.wb_result_sel_D == wm_a) begin
            $display("wb_result_sel_D is correct.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); pass();
        end else begin
            $display("wb_result_sel_D is incorrect.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); fail(); $finish();
        end
        assert(DUT.rf_wen_D == y) begin
            $display("rf_wen_D is correct.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); pass();
        end else begin
            $display("rf_wen_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); fail(); $finish();
        end
        assert(DUT.csrr_D == n) begin
            $display("csrr_D is correct.  Expected: %h, Actual: %h", n,DUT.csrr_D); pass();
        end else begin
            $display("csrr_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrr_D); fail(); $finish();
        end
        assert(DUT.csrw_D == n) begin
            $display("csrw_D is correct.  Expected: %h, Actual: %h", n,DUT.csrw_D); pass();
        end else begin
            $display("csrw_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrw_D); fail(); $finish();
        end

        delay( $urandom_range(0, 127) );
        
        //--------------------------------------------------------------------
        // Unit Testing #20 Test Decode LUI
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.
        reset = 1;
        @(negedge clk);
        reset = 0;
        imem_respstream_val = 1'b1; // Simulate imem response ready
        imul_req_rdy_D = 1; // Say imul ready so we don't stall the whole pipeline indefinitely

        $display("");
        $display("Test Decode LUI");

        // F
        @(negedge clk);
        assert(DUT.stall_F == n) begin
            $display("stall_F is correct.  Expected: %h, Actual: %h", n,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_F); fail(); $finish();
        end
        assert(DUT.val_D == n) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", n,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", n,DUT.val_D); fail(); $finish();
        end

        // D
        @(negedge clk);
        inst_D = 32'b00000000000000000001111110110111; // lui x31, 1
        #1
        assert(DUT.inst_D  == 32'b00000000000000000001111110110111) begin
            $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b00000000000000000001111110110111,DUT.inst_D); pass();
        end else begin
            $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b00000000000000000001111110110111,DUT.inst_D); fail(); $finish();
        end
        assert(DUT.imm_type_D  == 3'd3) begin
            $display("imm_type_D is correct.  Expected: %h, Actual: %h", 3'd3,DUT.imm_type_D); pass();
        end else begin
            $display("imm_type_D is incorrect.  Expected: %h, Actual: %h", 3'd3,DUT.imm_type_D); fail(); $finish();
        end
        assert(DUT.val_D == y) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", y,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.val_D); fail(); $finish();
        end
        assert(DUT.inst_val_D == y) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", y,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.j_type_D == j_na) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.br_type_D == br_na) begin
            $display("br_type_D is correct.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); pass();
        end else begin
            $display("br_type_D is incorrect.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); fail(); $finish();
        end
        assert(DUT.rs1_en_D == n) begin
            $display("rs1_en_D is correct.  Expected: %h, Actual: %h",n,DUT.rs1_en_D); pass();
        end else begin
            $display("rs1_en_D is incorrect.  Expected: %h, Actual: %h", n,DUT.rs1_en_D); fail(); $finish();
        end
        assert(DUT.op2_sel_D == bm2_imm) begin
            $display("op2_sel_D is correct.  Expected: %h, Actual: %h", bm2_imm,DUT.op2_sel_D); pass();
        end else begin
            $display("op2_sel_D is incorrect.  Expected: %h, Actual: %h", bm2_imm,DUT.op2_sel_D); fail(); $finish();
        end
        assert(DUT.rs2_en_D == n) begin
            $display("rs2_en_D is correct.  Expected: %h, Actual: %h", n,DUT.rs2_en_D); pass();
        end else begin
            $display("rs2_en_D is incorrect.  Expected: %h, Actual: %h", n,DUT.rs2_en_D); fail(); $finish();
        end
        assert(DUT.alu_fn_D == alu_cp1) begin
            $display("alu_fn_D is correct.  Expected: %h, Actual: %h", alu_cp1,DUT.alu_fn_D); pass();
        end else begin
            $display("alu_fn_D is incorrect.  Expected: %h, Actual: %h", alu_cp1,DUT.alu_fn_D); fail(); $finish();
        end
        assert(DUT.ex_result_sel_D == ex_alu) begin
            $display("ex_result_sel_D is correct.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); pass();
        end else begin
            $display("ex_result_sel_D is incorrect.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); fail(); $finish();
        end
        assert(DUT.mul_D == n) begin
            $display("mul_D is correct.  Expected: %h, Actual: %h", n,DUT.mul_D); pass();
        end else begin
            $display("mul_D is incorrect.  Expected: %h, Actual: %h", n,DUT.mul_D); fail(); $finish();
        end
        assert(DUT.dmem_reqstream_type_D == nr) begin
            $display("dmem_reqstream_type_D is correct.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); pass();
        end else begin
            $display("dmem_reqstream_type_D is incorrect.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); fail(); $finish();
        end
        assert(DUT.wb_result_sel_D == wm_a) begin
            $display("wb_result_sel_D is correct.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); pass();
        end else begin
            $display("wb_result_sel_D is incorrect.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); fail(); $finish();
        end
        assert(DUT.rf_wen_D == y) begin
            $display("rf_wen_D is correct.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); pass();
        end else begin
            $display("rf_wen_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); fail(); $finish();
        end
        assert(DUT.csrr_D == n) begin
            $display("csrr_D is correct.  Expected: %h, Actual: %h", n,DUT.csrr_D); pass();
        end else begin
            $display("csrr_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrr_D); fail(); $finish();
        end
        assert(DUT.csrw_D == n) begin
            $display("csrw_D is correct.  Expected: %h, Actual: %h", n,DUT.csrw_D); pass();
        end else begin
            $display("csrw_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrw_D); fail(); $finish();
        end

        delay( $urandom_range(0, 127) );
        
        //--------------------------------------------------------------------
        // Unit Testing #20 Test Decode LUI
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.
        reset = 1;
        @(negedge clk);
        reset = 0;
        imem_respstream_val = 1'b1; // Simulate imem response ready
        imul_req_rdy_D = 1; // Say imul ready so we don't stall the whole pipeline indefinitely

        $display("");
        $display("Test Decode LUI");

        // F
        @(negedge clk);
        assert(DUT.stall_F == n) begin
            $display("stall_F is correct.  Expected: %h, Actual: %h", n,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_F); fail(); $finish();
        end
        assert(DUT.val_D == n) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", n,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", n,DUT.val_D); fail(); $finish();
        end

        // D
        @(negedge clk);
        inst_D = 32'b00000000000000000001111110110111; // lui x31, 1
        #1
        assert(DUT.inst_D  == 32'b00000000000000000001111110110111) begin
            $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b00000000000000000001111110110111,DUT.inst_D); pass();
        end else begin
            $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b00000000000000000001111110110111,DUT.inst_D); fail(); $finish();
        end
        assert(DUT.imm_type_D  == 3'd3) begin
            $display("imm_type_D is correct.  Expected: %h, Actual: %h", 3'd3,DUT.imm_type_D); pass();
        end else begin
            $display("imm_type_D is incorrect.  Expected: %h, Actual: %h", 3'd3,DUT.imm_type_D); fail(); $finish();
        end
        assert(DUT.val_D == y) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", y,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.val_D); fail(); $finish();
        end
        assert(DUT.inst_val_D == y) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", y,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.j_type_D == j_na) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.br_type_D == br_na) begin
            $display("br_type_D is correct.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); pass();
        end else begin
            $display("br_type_D is incorrect.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); fail(); $finish();
        end
        assert(DUT.rs1_en_D == n) begin
            $display("rs1_en_D is correct.  Expected: %h, Actual: %h",n,DUT.rs1_en_D); pass();
        end else begin
            $display("rs1_en_D is incorrect.  Expected: %h, Actual: %h", n,DUT.rs1_en_D); fail(); $finish();
        end
        assert(DUT.op2_sel_D == bm2_imm) begin
            $display("op2_sel_D is correct.  Expected: %h, Actual: %h", bm2_imm,DUT.op2_sel_D); pass();
        end else begin
            $display("op2_sel_D is incorrect.  Expected: %h, Actual: %h", bm2_imm,DUT.op2_sel_D); fail(); $finish();
        end
        assert(DUT.rs2_en_D == n) begin
            $display("rs2_en_D is correct.  Expected: %h, Actual: %h", n,DUT.rs2_en_D); pass();
        end else begin
            $display("rs2_en_D is incorrect.  Expected: %h, Actual: %h", n,DUT.rs2_en_D); fail(); $finish();
        end
        assert(DUT.alu_fn_D == alu_cp1) begin
            $display("alu_fn_D is correct.  Expected: %h, Actual: %h", alu_cp1,DUT.alu_fn_D); pass();
        end else begin
            $display("alu_fn_D is incorrect.  Expected: %h, Actual: %h", alu_cp1,DUT.alu_fn_D); fail(); $finish();
        end
        assert(DUT.ex_result_sel_D == ex_alu) begin
            $display("ex_result_sel_D is correct.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); pass();
        end else begin
            $display("ex_result_sel_D is incorrect.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); fail(); $finish();
        end
        assert(DUT.mul_D == n) begin
            $display("mul_D is correct.  Expected: %h, Actual: %h", n,DUT.mul_D); pass();
        end else begin
            $display("mul_D is incorrect.  Expected: %h, Actual: %h", n,DUT.mul_D); fail(); $finish();
        end
        assert(DUT.dmem_reqstream_type_D == nr) begin
            $display("dmem_reqstream_type_D is correct.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); pass();
        end else begin
            $display("dmem_reqstream_type_D is incorrect.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); fail(); $finish();
        end
        assert(DUT.wb_result_sel_D == wm_a) begin
            $display("wb_result_sel_D is correct.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); pass();
        end else begin
            $display("wb_result_sel_D is incorrect.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); fail(); $finish();
        end
        assert(DUT.rf_wen_D == y) begin
            $display("rf_wen_D is correct.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); pass();
        end else begin
            $display("rf_wen_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); fail(); $finish();
        end
        assert(DUT.csrr_D == n) begin
            $display("csrr_D is correct.  Expected: %h, Actual: %h", n,DUT.csrr_D); pass();
        end else begin
            $display("csrr_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrr_D); fail(); $finish();
        end
        assert(DUT.csrw_D == n) begin
            $display("csrw_D is correct.  Expected: %h, Actual: %h", n,DUT.csrw_D); pass();
        end else begin
            $display("csrw_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrw_D); fail(); $finish();
        end

        delay( $urandom_range(0, 127) );
        
        //--------------------------------------------------------------------
        // Unit Testing #21 Test Decode AUIPC
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.
        reset = 1;
        @(negedge clk);
        reset = 0;
        imem_respstream_val = 1'b1; // Simulate imem response ready
        imul_req_rdy_D = 1; // Say imul ready so we don't stall the whole pipeline indefinitely

        $display("");
        $display("Test Decode AUIPC");

        // F
        @(negedge clk);
        assert(DUT.stall_F == n) begin
            $display("stall_F is correct.  Expected: %h, Actual: %h", n,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_F); fail(); $finish();
        end
        assert(DUT.val_D == n) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", n,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", n,DUT.val_D); fail(); $finish();
        end

        // D
        @(negedge clk);
        inst_D = 32'b00000000000000000001111110010111; // auipc x31, 1
        #1
        assert(DUT.inst_D  == 32'b00000000000000000001111110010111) begin
            $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b00000000000000000001111110010111,DUT.inst_D); pass();
        end else begin
            $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b00000000000000000001111110010111,DUT.inst_D); fail(); $finish();
        end
        assert(DUT.imm_type_D  == 3'd3) begin
            $display("imm_type_D is correct.  Expected: %h, Actual: %h", 3'd3,DUT.imm_type_D); pass();
        end else begin
            $display("imm_type_D is incorrect.  Expected: %h, Actual: %h", 3'd3,DUT.imm_type_D); fail(); $finish();
        end
        assert(DUT.val_D == y) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", y,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.val_D); fail(); $finish();
        end
        assert(DUT.inst_val_D == y) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", y,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.j_type_D == j_na) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.br_type_D == br_na) begin
            $display("br_type_D is correct.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); pass();
        end else begin
            $display("br_type_D is incorrect.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); fail(); $finish();
        end
        assert(DUT.op1_sel_D == bm1_pc) begin
            $display("op1_sel_D is correct.  Expected: %h, Actual: %h", bm1_pc,DUT.op1_sel_D); pass();
        end else begin
            $display("op1_sel_D is incorrect.  Expected: %h, Actual: %h", bm1_pc,DUT.op1_sel_D); fail(); $finish();
        end
        assert(DUT.rs1_en_D == n) begin
            $display("rs1_en_D is correct.  Expected: %h, Actual: %h",n,DUT.rs1_en_D); pass();
        end else begin
            $display("rs1_en_D is incorrect.  Expected: %h, Actual: %h", n,DUT.rs1_en_D); fail(); $finish();
        end
        assert(DUT.op2_sel_D == bm2_imm) begin
            $display("op2_sel_D is correct.  Expected: %h, Actual: %h", bm2_imm,DUT.op2_sel_D); pass();
        end else begin
            $display("op2_sel_D is incorrect.  Expected: %h, Actual: %h", bm2_imm,DUT.op2_sel_D); fail(); $finish();
        end
        assert(DUT.rs2_en_D == n) begin
            $display("rs2_en_D is correct.  Expected: %h, Actual: %h", n,DUT.rs2_en_D); pass();
        end else begin
            $display("rs2_en_D is incorrect.  Expected: %h, Actual: %h", n,DUT.rs2_en_D); fail(); $finish();
        end
        assert(DUT.alu_fn_D == alu_add) begin
            $display("alu_fn_D is correct.  Expected: %h, Actual: %h", alu_add,DUT.alu_fn_D); pass();
        end else begin
            $display("alu_fn_D is incorrect.  Expected: %h, Actual: %h", alu_add,DUT.alu_fn_D); fail(); $finish();
        end
        assert(DUT.ex_result_sel_D == ex_alu) begin
            $display("ex_result_sel_D is correct.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); pass();
        end else begin
            $display("ex_result_sel_D is incorrect.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); fail(); $finish();
        end
        assert(DUT.mul_D == n) begin
            $display("mul_D is correct.  Expected: %h, Actual: %h", n,DUT.mul_D); pass();
        end else begin
            $display("mul_D is incorrect.  Expected: %h, Actual: %h", n,DUT.mul_D); fail(); $finish();
        end
        assert(DUT.dmem_reqstream_type_D == nr) begin
            $display("dmem_reqstream_type_D is correct.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); pass();
        end else begin
            $display("dmem_reqstream_type_D is incorrect.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); fail(); $finish();
        end
        assert(DUT.wb_result_sel_D == wm_a) begin
            $display("wb_result_sel_D is correct.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); pass();
        end else begin
            $display("wb_result_sel_D is incorrect.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); fail(); $finish();
        end
        assert(DUT.rf_wen_D == y) begin
            $display("rf_wen_D is correct.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); pass();
        end else begin
            $display("rf_wen_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); fail(); $finish();
        end
        assert(DUT.csrr_D == n) begin
            $display("csrr_D is correct.  Expected: %h, Actual: %h", n,DUT.csrr_D); pass();
        end else begin
            $display("csrr_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrr_D); fail(); $finish();
        end
        assert(DUT.csrw_D == n) begin
            $display("csrw_D is correct.  Expected: %h, Actual: %h", n,DUT.csrw_D); pass();
        end else begin
            $display("csrw_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrw_D); fail(); $finish();
        end

        delay( $urandom_range(0, 127) );
        
        //--------------------------------------------------------------------
        // Unit Testing #22 Test MUL with input and output delays
        //--------------------------------------------------------------------
        //Initalize all the signal inital values.
        reset = 1;
        @(negedge clk);
        reset = 0;
        @(negedge clk);
        imem_respstream_val = 1'b1; // Simulate imem response ready
        imul_resp_val_X = 0; // No value ready on imul output
        imul_req_rdy_D = 0; // Simulate imul not ready to receive operands

        $display("");
        $display("Test MUL with I/O Delays");

        // F
        @(negedge clk);
        assert(DUT.stall_F == y) begin // F should be stalling
            $display("stall_F is correct.  Expected: %h, Actual: %h", y,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", y,DUT.stall_F); fail(); $finish();
        end

        delay( $urandom_range(0, 127) ); // Random imul delay
        imul_req_rdy_D = 1; // Simulate imul ready to receive operands

        @(negedge clk);
        assert(DUT.stall_F == n) begin // F should not longer be stalling
            $display("stall_F is correct.  Expected: %h, Actual: %h", n,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_F); fail(); $finish();
        end

        // D
        @(negedge clk);
        inst_D = 32'b00000010001000001000000110110011; // mul x3, x1, x2;
        #1
        assert(DUT.inst_D  == 32'b00000010001000001000000110110011) begin
            $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b00000010001000001000000110110011,DUT.inst_D); pass();
        end else begin
            $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b00000010001000001000000110110011,DUT.inst_D); fail(); $finish();
        end
        assert(DUT.val_D == y) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", y,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.val_D); fail(); $finish();
        end
        assert(DUT.inst_val_D == y) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", y,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.j_type_D == j_na) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.br_type_D == br_na) begin
            $display("br_type_D is correct.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); pass();
        end else begin
            $display("br_type_D is incorrect.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); fail(); $finish();
        end
        assert(DUT.op1_sel_D == bm1_rf) begin
            $display("op1_sel_D is correct.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); pass();
        end else begin
            $display("op1_sel_D is incorrect.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); fail(); $finish();
        end
        assert(DUT.rs1_en_D == y) begin
            $display("rs1_en_D is correct.  Expected: %h, Actual: %h",y,DUT.rs1_en_D); pass();
        end else begin
            $display("rs1_en_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); fail(); $finish();
        end
        assert(DUT.op2_sel_D == bm2_rf) begin
            $display("op2_sel_D is correct.  Expected: %h, Actual: %h", bm2_rf,DUT.op2_sel_D); pass();
        end else begin
            $display("op2_sel_D is incorrect.  Expected: %h, Actual: %h", bm2_rf,DUT.op2_sel_D); fail(); $finish();
        end
        assert(DUT.rs2_en_D == y) begin
            $display("rs2_en_D is correct.  Expected: %h, Actual: %h", y,DUT.rs2_en_D); pass();
        end else begin
            $display("rs2_en_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rs2_en_D); fail(); $finish();
        end
        assert(DUT.ex_result_sel_D == ex_imul) begin
            $display("ex_result_sel_D is correct.  Expected: %h, Actual: %h", ex_imul,DUT.ex_result_sel_D); pass();
        end else begin
            $display("ex_result_sel_D is incorrect.  Expected: %h, Actual: %h", ex_imul,DUT.ex_result_sel_D); fail(); $finish();
        end
        assert(DUT.mul_D == y) begin
            $display("mul_D is correct.  Expected: %h, Actual: %h", y,DUT.mul_D); pass();
        end else begin
            $display("mul_D is incorrect.  Expected: %h, Actual: %h", y,DUT.mul_D); fail(); $finish();
        end
        assert(DUT.dmem_reqstream_type_D == nr) begin
            $display("dmem_reqstream_type_D is correct.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); pass();
        end else begin
            $display("dmem_reqstream_type_D is incorrect.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); fail(); $finish();
        end
        assert(DUT.wb_result_sel_D == wm_a) begin
            $display("wb_result_sel_D is correct.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); pass();
        end else begin
            $display("wb_result_sel_D is incorrect.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); fail(); $finish();
        end
        assert(DUT.rf_wen_D == y) begin
            $display("rf_wen_D is correct.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); pass();
        end else begin
            $display("rf_wen_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); fail(); $finish();
        end
        assert(DUT.csrr_D == n) begin
            $display("csrr_D is correct.  Expected: %h, Actual: %h", n,DUT.csrr_D); pass();
        end else begin
            $display("csrr_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrr_D); fail(); $finish();
        end
        assert(DUT.csrw_D == n) begin
            $display("csrw_D is correct.  Expected: %h, Actual: %h", n,DUT.csrw_D); pass();
        end else begin
            $display("csrw_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrw_D); fail(); $finish();
        end
        assert(DUT.imul_req_val_D == y) begin
            $display("imul_req_val_D is correct.  Expected: %h, Actual: %h", y,DUT.imul_req_val_D); pass();
        end else begin
            $display("imul_req_val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.imul_req_val_D); fail(); $finish();
        end

        // X
        @(negedge clk);
        assert(DUT.stall_F == y) begin // F should be stalling since imul response not ready
            $display("stall_F is correct.  Expected: %h, Actual: %h", y,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", y,DUT.stall_F); fail(); $finish();
        end
        assert(DUT.stall_D == y) begin // D should be stalling since imul response not ready
            $display("stall_D is correct.  Expected: %h, Actual: %h", y,DUT.stall_D); pass();
        end else begin
            $display("stall_D is incorrect.  Expected: %h, Actual: %h", y,DUT.stall_D); fail(); $finish();
        end
        assert(DUT.stall_X == y) begin // X should be stalling since imul response not ready
            $display("stall_X is correct.  Expected: %h, Actual: %h", y,DUT.stall_X); pass();
        end else begin
            $display("stall_X is incorrect.  Expected: %h, Actual: %h", y,DUT.stall_X); fail(); $finish();
        end
        assert(DUT.imul_resp_rdy_X == n) begin // Not ready to receive value bc stalling
            $display("imul_resp_rdy_X is correct.  Expected: %h, Actual: %h", n,DUT.imul_resp_rdy_X); pass();
        end else begin
            $display("imul_resp_rdy_X is incorrect.  Expected: %h, Actual: %h", n,DUT.imul_resp_rdy_X); fail(); $finish();
        end

        delay( $urandom_range(0, 127) ); // Random imul delay
        imul_resp_val_X = 1; // Simulate imul ready to produce operands

        @(negedge clk);
        assert(DUT.stall_F == n) begin // F should no longer be stalling
            $display("stall_F is correct.  Expected: %h, Actual: %h", n,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_F); fail(); $finish();
        end
        assert(DUT.stall_D == n) begin // D should no longer be stalling
            $display("stall_D is correct.  Expected: %h, Actual: %h", n,DUT.stall_D); pass();
        end else begin
            $display("stall_D is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_D); fail(); $finish();
        end
        assert(DUT.stall_X == n) begin // X should no longer be stalling
            $display("stall_X is correct.  Expected: %h, Actual: %h", n,DUT.stall_X); pass();
        end else begin
            $display("stall_X is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_X); fail(); $finish();
        end
        assert(DUT.imul_resp_rdy_X == y) begin // Not ready to receive value bc stalling
            $display("imul_resp_rdy_X is correct.  Expected: %h, Actual: %h", y,DUT.imul_resp_rdy_X); pass();
        end else begin
            $display("imul_resp_rdy_X is incorrect.  Expected: %h, Actual: %h", y,DUT.imul_resp_rdy_X); fail(); $finish();
        end

        delay( $urandom_range(0, 127) );
        
        //--------------------------------------------------------------------
        // Unit Testing #23 Test JAL
        //--------------------------------------------------------------------
        //Initalize all the signal inital values.
        reset = 1;
        @(negedge clk);
        reset = 0;
        imem_respstream_val = 1'b1; // Simulate imem response ready
        imul_req_rdy_D = 1; // Say imul ready so we don't stall the whole pipeline indefinitely

        $display("");
        $display("Test JAL");

        // F
        @(negedge clk);
        assert(DUT.stall_F == n) begin
            $display("stall_F is correct.  Expected: %h, Actual: %h", n,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_F); fail(); $finish();
        end
        assert(DUT.val_D == n) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", n,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", n,DUT.val_D); fail(); $finish();
        end

        // D
        @(negedge clk);
        inst_D = 32'b00000000000000000101000011101111; // jal x1, 5
        #1
        assert(DUT.inst_D  == 32'b00000000000000000101000011101111) begin
            $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b00000000000000000101000011101111,DUT.inst_D); pass();
        end else begin
            $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b00000000000000000101000011101111,DUT.inst_D); fail(); $finish();
        end
        assert(DUT.val_D == y) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", y,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.val_D); fail(); $finish();
        end
        assert(DUT.inst_val_D == y) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", y,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.j_type_D == j_jal) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", j_jal,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", j_jal,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.br_type_D == br_na) begin
            $display("br_type_D is correct.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); pass();
        end else begin
            $display("br_type_D is incorrect.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); fail(); $finish();
        end
        assert(DUT.imm_type_D == imm_j) begin
            $display("imm_type_D is correct.  Expected: %h, Actual: %h", imm_j,DUT.imm_type_D); pass();
        end else begin
            $display("imm_type_D is incorrect.  Expected: %h, Actual: %h", imm_j,DUT.imm_type_D); fail(); $finish();
        end
        assert(DUT.rs1_en_D == n) begin
            $display("rs1_en_D is correct.  Expected: %h, Actual: %h",n,DUT.rs1_en_D); pass();
        end else begin
            $display("rs1_en_D is incorrect.  Expected: %h, Actual: %h", n,DUT.rs1_en_D); fail(); $finish();
        end
        assert(DUT.rs2_en_D == n) begin
            $display("rs2_en_D is correct.  Expected: %h, Actual: %h", n,DUT.rs2_en_D); pass();
        end else begin
            $display("rs2_en_D is incorrect.  Expected: %h, Actual: %h", n,DUT.rs2_en_D); fail(); $finish();
        end
        assert(DUT.ex_result_sel_D == ex_pc) begin
            $display("ex_result_sel_D is correct.  Expected: %h, Actual: %h", ex_pc,DUT.ex_result_sel_D); pass();
        end else begin
            $display("ex_result_sel_D is incorrect.  Expected: %h, Actual: %h", ex_pc,DUT.ex_result_sel_D); fail(); $finish();
        end
        assert(DUT.mul_D == n) begin
            $display("mul_D is correct.  Expected: %h, Actual: %h", n,DUT.mul_D); pass();
        end else begin
            $display("mul_D is incorrect.  Expected: %h, Actual: %h", n,DUT.mul_D); fail(); $finish();
        end
        assert(DUT.dmem_reqstream_type_D == nr) begin
            $display("dmem_reqstream_type_D is correct.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); pass();
        end else begin
            $display("dmem_reqstream_type_D is incorrect.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); fail(); $finish();
        end
        assert(DUT.wb_result_sel_D == wm_a) begin
            $display("wb_result_sel_D is correct.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); pass();
        end else begin
            $display("wb_result_sel_D is incorrect.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); fail(); $finish();
        end
        assert(DUT.rf_wen_D == y) begin
            $display("rf_wen_D is correct.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); pass();
        end else begin
            $display("rf_wen_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); fail(); $finish();
        end
        assert(DUT.csrr_D == n) begin
            $display("csrr_D is correct.  Expected: %h, Actual: %h", n,DUT.csrr_D); pass();
        end else begin
            $display("csrr_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrr_D); fail(); $finish();
        end
        assert(DUT.csrw_D == n) begin
            $display("csrw_D is correct.  Expected: %h, Actual: %h", n,DUT.csrw_D); pass();
        end else begin
            $display("csrw_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrw_D); fail(); $finish();
        end
        assert(DUT.pc_redirect_D == y) begin
            $display("pc_redirect_D is correct.  Expected: %h, Actual: %h", y,DUT.pc_redirect_D); pass();
        end else begin
            $display("pc_redirect_D is incorrect.  Expected: %h, Actual: %h", y,DUT.pc_redirect_D); fail(); $finish();
        end
        assert(DUT.pc_sel_D == 2'd2) begin
            $display("pc_sel_D is correct.  Expected: %h, Actual: %h", 2'd2,DUT.pc_sel_D); pass();
        end else begin
            $display("pc_sel_D is incorrect.  Expected: %h, Actual: %h", 2'd2,DUT.pc_sel_D); fail(); $finish();
        end
        assert(DUT.pc_sel_F == 2'd2) begin
            $display("pc_sel_F is correct.  Expected: %h, Actual: %h", 2'd2,DUT.pc_sel_F); pass();
        end else begin
            $display("pc_sel_F is incorrect.  Expected: %h, Actual: %h", 2'd2,DUT.pc_sel_F); fail(); $finish();
        end
        assert(DUT.pc_sel_F == 2'd2) begin
            $display("pc_sel_F is correct.  Expected: %h, Actual: %h", 2'd2,DUT.pc_sel_F); pass();
        end else begin
            $display("pc_sel_F is incorrect.  Expected: %h, Actual: %h", 2'd2,DUT.pc_sel_F); fail(); $finish();
        end
        assert(DUT.osquash_D == y) begin
            $display("osquash_D is correct.  Expected: %h, Actual: %h", y,DUT.osquash_D); pass();
        end else begin
            $display("osquash_D is incorrect.  Expected: %h, Actual: %h", y,DUT.osquash_D); fail(); $finish();
        end
        assert(DUT.squash_F == y) begin
            $display("squash_F is correct.  Expected: %h, Actual: %h", y,DUT.squash_F); pass();
        end else begin
            $display("squash_F is incorrect.  Expected: %h, Actual: %h", y,DUT.squash_F); fail(); $finish();
        end
        assert(DUT.imem_respstream_drop == y) begin
            $display("imem_respstream_drop is correct.  Expected: %h, Actual: %h", y,DUT.imem_respstream_drop); pass();
        end else begin
            $display("imem_respstream_drop is incorrect.  Expected: %h, Actual: %h", y,DUT.imem_respstream_drop); fail(); $finish();
        end
        assert(DUT.next_val_F == n) begin
            $display("next_val_F is correct.  Expected: %h, Actual: %h", n,DUT.next_val_F); pass();
        end else begin
            $display("next_val_F is incorrect.  Expected: %h, Actual: %h", n,DUT.next_val_F); fail(); $finish();
        end

        delay( $urandom_range(0, 127) );
        
        //--------------------------------------------------------------------
        // Unit Testing #24 Test JALR
        //--------------------------------------------------------------------
        //Initalize all the signal inital values.
        reset = 1;
        @(negedge clk);
        reset = 0;
        imem_respstream_val = 1'b1; // Simulate imem response ready
        imul_req_rdy_D = 1; // Say imul ready so we don't stall the whole pipeline indefinitely

        $display("");
        $display("Test JALR");

        // F
        @(negedge clk);
        assert(DUT.stall_F == n) begin
            $display("stall_F is correct.  Expected: %h, Actual: %h", n,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_F); fail(); $finish();
        end
        assert(DUT.val_D == n) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", n,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", n,DUT.val_D); fail(); $finish();
        end

        // D
        @(negedge clk);
        inst_D = 32'b00000000010100001000000101100111; // jalr x2, x1, 5
        #1
        assert(DUT.inst_D  == 32'b00000000010100001000000101100111) begin
            $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b00000000010100001000000101100111,DUT.inst_D); pass();
        end else begin
            $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b00000000010100001000000101100111,DUT.inst_D); fail(); $finish();
        end
        assert(DUT.rf_waddr_D == 5'd2) begin
            $display("rf_waddr_D is correct.  Expected: %h, Actual: %h", 5'd2,DUT.rf_waddr_D); pass();
        end else begin
            $display("rf_waddr_D is incorrect.  Expected: %h, Actual: %h", 5'd2,DUT.rf_waddr_D); fail(); $finish();
        end
        assert(DUT.val_D == y) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", y,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.val_D); fail(); $finish();
        end
        assert(DUT.inst_val_D == y) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", y,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.j_type_D == j_jalr) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", j_jalr,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", j_jalr,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.br_type_D == br_na) begin
            $display("br_type_D is correct.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); pass();
        end else begin
            $display("br_type_D is incorrect.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); fail(); $finish();
        end
        assert(DUT.imm_type_D == imm_i) begin
            $display("imm_type_D is correct.  Expected: %h, Actual: %h", imm_i,DUT.imm_type_D); pass();
        end else begin
            $display("imm_type_D is incorrect.  Expected: %h, Actual: %h", imm_i,DUT.imm_type_D); fail(); $finish();
        end
        assert(DUT.op1_sel_D == bm1_rf) begin
            $display("op1_sel_D is correct.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); pass();
        end else begin
            $display("op1_sel_D is incorrect.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); fail(); $finish();
        end
        assert(DUT.rs1_en_D == y) begin
            $display("rs1_en_D is correct.  Expected: %h, Actual: %h",y,DUT.rs1_en_D); pass();
        end else begin
            $display("rs1_en_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); fail(); $finish();
        end
        assert(DUT.op2_sel_D == bm2_imm) begin
            $display("op2_sel_D is correct.  Expected: %h, Actual: %h", bm2_imm,DUT.op2_sel_D); pass();
        end else begin
            $display("op2_sel_D is incorrect.  Expected: %h, Actual: %h", bm2_imm,DUT.op2_sel_D); fail(); $finish();
        end
        assert(DUT.rs2_en_D == n) begin
            $display("rs2_en_D is correct.  Expected: %h, Actual: %h", n,DUT.rs2_en_D); pass();
        end else begin
            $display("rs2_en_D is incorrect.  Expected: %h, Actual: %h", n,DUT.rs2_en_D); fail(); $finish();
        end
        assert(DUT.alu_fn_D == alu_add) begin
            $display("alu_fn_D is correct.  Expected: %h, Actual: %h", alu_add,DUT.alu_fn_D); pass();
        end else begin
            $display("alu_fn_D is incorrect.  Expected: %h, Actual: %h", alu_add,DUT.alu_fn_D); fail(); $finish();
        end
        assert(DUT.ex_result_sel_D == ex_pc) begin
            $display("ex_result_sel_D is correct.  Expected: %h, Actual: %h", ex_pc,DUT.ex_result_sel_D); pass();
        end else begin
            $display("ex_result_sel_D is incorrect.  Expected: %h, Actual: %h", ex_pc,DUT.ex_result_sel_D); fail(); $finish();
        end
        assert(DUT.mul_D == n) begin
            $display("mul_D is correct.  Expected: %h, Actual: %h", n,DUT.mul_D); pass();
        end else begin
            $display("mul_D is incorrect.  Expected: %h, Actual: %h", n,DUT.mul_D); fail(); $finish();
        end
        assert(DUT.dmem_reqstream_type_D == nr) begin
            $display("dmem_reqstream_type_D is correct.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); pass();
        end else begin
            $display("dmem_reqstream_type_D is incorrect.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); fail(); $finish();
        end
        assert(DUT.wb_result_sel_D == wm_a) begin
            $display("wb_result_sel_D is correct.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); pass();
        end else begin
            $display("wb_result_sel_D is incorrect.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); fail(); $finish();
        end
        assert(DUT.rf_wen_D == y) begin
            $display("rf_wen_D is correct.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); pass();
        end else begin
            $display("rf_wen_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); fail(); $finish();
        end
        assert(DUT.csrr_D == n) begin
            $display("csrr_D is correct.  Expected: %h, Actual: %h", n,DUT.csrr_D); pass();
        end else begin
            $display("csrr_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrr_D); fail(); $finish();
        end
        assert(DUT.csrw_D == n) begin
            $display("csrw_D is correct.  Expected: %h, Actual: %h", n,DUT.csrw_D); pass();
        end else begin
            $display("csrw_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrw_D); fail(); $finish();
        end

        // X
        @(negedge clk);
        assert(DUT.pc_redirect_X == y) begin
            $display("pc_redirect_X is correct.  Expected: %h, Actual: %h", y,DUT.pc_redirect_X); pass();
        end else begin
            $display("pc_redirect_X is incorrect.  Expected: %h, Actual: %h", y,DUT.pc_redirect_X); fail(); $finish();
        end
        assert(DUT.pc_sel_X == 2'd0) begin
            $display("pc_sel_X is correct.  Expected: %h, Actual: %h", 2'd0,DUT.pc_sel_X); pass();
        end else begin
            $display("pc_sel_X is incorrect.  Expected: %h, Actual: %h", 2'd0,DUT.pc_sel_X); fail(); $finish();
        end
        assert(DUT.pc_sel_F == 2'd0) begin
            $display("pc_sel_F is correct.  Expected: %h, Actual: %h", 2'd0,DUT.pc_sel_F); pass();
        end else begin
            $display("pc_sel_F is incorrect.  Expected: %h, Actual: %h", 2'd0,DUT.pc_sel_F); fail(); $finish();
        end
        assert(DUT.osquash_X == y) begin
            $display("osquash_X is correct.  Expected: %h, Actual: %h", y,DUT.osquash_X); pass();
        end else begin
            $display("osquash_X is incorrect.  Expected: %h, Actual: %h", y,DUT.osquash_X); fail(); $finish();
        end
        assert(DUT.osquash_D == n) begin
            $display("osquash_D is correct.  Expected: %h, Actual: %h", n,DUT.osquash_D); pass();
        end else begin
            $display("osquash_D is incorrect.  Expected: %h, Actual: %h", n,DUT.osquash_D); fail(); $finish();
        end
        assert(DUT.squash_D == y) begin
            $display("squash_D is correct.  Expected: %h, Actual: %h", y,DUT.squash_D); pass();
        end else begin
            $display("squash_D is incorrect.  Expected: %h, Actual: %h", y,DUT.squash_D); fail(); $finish();
        end
        assert(DUT.squash_F == y) begin
            $display("squash_F is correct.  Expected: %h, Actual: %h", y,DUT.squash_F); pass();
        end else begin
            $display("squash_F is incorrect.  Expected: %h, Actual: %h", y,DUT.squash_F); fail(); $finish();
        end
        assert(DUT.imem_respstream_drop == y) begin
            $display("imem_respstream_drop is correct.  Expected: %h, Actual: %h", y,DUT.imem_respstream_drop); pass();
        end else begin
            $display("imem_respstream_drop is incorrect.  Expected: %h, Actual: %h", y,DUT.imem_respstream_drop); fail(); $finish();
        end
        assert(DUT.next_val_F == n) begin
            $display("next_val_F is correct.  Expected: %h, Actual: %h", n,DUT.next_val_F); pass();
        end else begin
            $display("next_val_F is incorrect.  Expected: %h, Actual: %h", n,DUT.next_val_F); fail(); $finish();
        end

        delay( $urandom_range(0, 127) );
        
        //--------------------------------------------------------------------
        // Unit Testing #25 Test BNE
        //--------------------------------------------------------------------
        //Initalize all the signal inital values.
        reset = 1;
        @(negedge clk);
        reset = 0;
        imem_respstream_val = 1'b1; // Simulate imem response ready
        imul_req_rdy_D = 1; // Say imul ready so we don't stall the whole pipeline indefinitely
        br_cond_eq_X = 0; // Say branch is taken (not equal)

        $display("");
        $display("Test BNE");

        // F
        @(negedge clk);
        assert(DUT.stall_F == n) begin
            $display("stall_F is correct.  Expected: %h, Actual: %h", n,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_F); fail(); $finish();
        end
        assert(DUT.val_D == n) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", n,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", n,DUT.val_D); fail(); $finish();
        end

        // D
        @(negedge clk);
        inst_D = 32'b00000000001000001001000011100011; // bne x1, x2, 1
        #1
        assert(DUT.inst_D  == 32'b00000000001000001001000011100011) begin
            $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b00000000001000001001000011100011,DUT.inst_D); pass();
        end else begin
            $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b00000000001000001001000011100011,DUT.inst_D); fail(); $finish();
        end
        assert(DUT.val_D == y) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", y,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.val_D); fail(); $finish();
        end
        assert(DUT.inst_val_D == y) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", y,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.j_type_D == j_na) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.br_type_D == br_bne) begin
            $display("br_type_D is correct.  Expected: %h, Actual: %h", br_bne,DUT.br_type_D); pass();
        end else begin
            $display("br_type_D is incorrect.  Expected: %h, Actual: %h", br_bne,DUT.br_type_D); fail(); $finish();
        end
        assert(DUT.imm_type_D == imm_b) begin
            $display("imm_type_D is correct.  Expected: %h, Actual: %h", imm_b,DUT.imm_type_D); pass();
        end else begin
            $display("imm_type_D is incorrect.  Expected: %h, Actual: %h", imm_b,DUT.imm_type_D); fail(); $finish();
        end
        assert(DUT.op1_sel_D == bm1_rf) begin
            $display("op1_sel_D is correct.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); pass();
        end else begin
            $display("op1_sel_D is incorrect.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); fail(); $finish();
        end
        assert(DUT.rs1_en_D == y) begin
            $display("rs1_en_D is correct.  Expected: %h, Actual: %h",y,DUT.rs1_en_D); pass();
        end else begin
            $display("rs1_en_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); fail(); $finish();
        end
        assert(DUT.op2_sel_D == bm2_rf) begin
            $display("op2_sel_D is correct.  Expected: %h, Actual: %h", bm2_rf,DUT.op2_sel_D); pass();
        end else begin
            $display("op2_sel_D is incorrect.  Expected: %h, Actual: %h", bm2_rf,DUT.op2_sel_D); fail(); $finish();
        end
        assert(DUT.rs2_en_D == y) begin
            $display("rs2_en_D is correct.  Expected: %h, Actual: %h", y,DUT.rs2_en_D); pass();
        end else begin
            $display("rs2_en_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rs2_en_D); fail(); $finish();
        end
        assert(DUT.mul_D == n) begin
            $display("mul_D is correct.  Expected: %h, Actual: %h", n,DUT.mul_D); pass();
        end else begin
            $display("mul_D is incorrect.  Expected: %h, Actual: %h", n,DUT.mul_D); fail(); $finish();
        end
        assert(DUT.dmem_reqstream_type_D == nr) begin
            $display("dmem_reqstream_type_D is correct.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); pass();
        end else begin
            $display("dmem_reqstream_type_D is incorrect.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); fail(); $finish();
        end
        assert(DUT.wb_result_sel_D == wm_a) begin
            $display("wb_result_sel_D is correct.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); pass();
        end else begin
            $display("wb_result_sel_D is incorrect.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); fail(); $finish();
        end
        assert(DUT.rf_wen_D == n) begin
            $display("rf_wen_D is correct.  Expected: %h, Actual: %h", n,DUT.rf_wen_D); pass();
        end else begin
            $display("rf_wen_D is incorrect.  Expected: %h, Actual: %h", n,DUT.rf_wen_D); fail(); $finish();
        end
        assert(DUT.csrr_D == n) begin
            $display("csrr_D is correct.  Expected: %h, Actual: %h", n,DUT.csrr_D); pass();
        end else begin
            $display("csrr_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrr_D); fail(); $finish();
        end
        assert(DUT.csrw_D == n) begin
            $display("csrw_D is correct.  Expected: %h, Actual: %h", n,DUT.csrw_D); pass();
        end else begin
            $display("csrw_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrw_D); fail(); $finish();
        end

        // X
        @(negedge clk);
        assert(DUT.pc_redirect_X == y) begin
            $display("pc_redirect_X is correct.  Expected: %h, Actual: %h", y,DUT.pc_redirect_X); pass();
        end else begin
            $display("pc_redirect_X is incorrect.  Expected: %h, Actual: %h", y,DUT.pc_redirect_X); fail(); $finish();
        end
        assert(DUT.pc_sel_X == 2'd1) begin
            $display("pc_sel_X is correct.  Expected: %h, Actual: %h", 2'd1,DUT.pc_sel_X); pass();
        end else begin
            $display("pc_sel_X is incorrect.  Expected: %h, Actual: %h", 2'd1,DUT.pc_sel_X); fail(); $finish();
        end
        assert(DUT.pc_sel_F == 2'd1) begin
            $display("pc_sel_F is correct.  Expected: %h, Actual: %h", 2'd1,DUT.pc_sel_F); pass();
        end else begin
            $display("pc_sel_F is incorrect.  Expected: %h, Actual: %h", 2'd1,DUT.pc_sel_F); fail(); $finish();
        end
        assert(DUT.osquash_X == y) begin
            $display("osquash_X is correct.  Expected: %h, Actual: %h", y,DUT.osquash_X); pass();
        end else begin
            $display("osquash_X is incorrect.  Expected: %h, Actual: %h", y,DUT.osquash_X); fail(); $finish();
        end
        assert(DUT.osquash_D == n) begin
            $display("osquash_D is correct.  Expected: %h, Actual: %h", n,DUT.osquash_D); pass();
        end else begin
            $display("osquash_D is incorrect.  Expected: %h, Actual: %h", n,DUT.osquash_D); fail(); $finish();
        end
        assert(DUT.squash_D == y) begin
            $display("squash_D is correct.  Expected: %h, Actual: %h", y,DUT.squash_D); pass();
        end else begin
            $display("squash_D is incorrect.  Expected: %h, Actual: %h", y,DUT.squash_D); fail(); $finish();
        end
        assert(DUT.squash_F == y) begin
            $display("squash_F is correct.  Expected: %h, Actual: %h", y,DUT.squash_F); pass();
        end else begin
            $display("squash_F is incorrect.  Expected: %h, Actual: %h", y,DUT.squash_F); fail(); $finish();
        end
        assert(DUT.imem_respstream_drop == y) begin
            $display("imem_respstream_drop is correct.  Expected: %h, Actual: %h", y,DUT.imem_respstream_drop); pass();
        end else begin
            $display("imem_respstream_drop is incorrect.  Expected: %h, Actual: %h", y,DUT.imem_respstream_drop); fail(); $finish();
        end
        assert(DUT.next_val_F == n) begin
            $display("next_val_F is correct.  Expected: %h, Actual: %h", n,DUT.next_val_F); pass();
        end else begin
            $display("next_val_F is incorrect.  Expected: %h, Actual: %h", n,DUT.next_val_F); fail(); $finish();
        end

        delay( $urandom_range(0, 127) );
        
        //--------------------------------------------------------------------
        // Unit Testing #26 Test BEQ
        //--------------------------------------------------------------------
        //Initalize all the signal inital values.
        reset = 1;
        @(negedge clk);
        reset = 0;
        imem_respstream_val = 1'b1; // Simulate imem response ready
        imul_req_rdy_D = 1; // Say imul ready so we don't stall the whole pipeline indefinitely
        br_cond_eq_X = 1; // Say branch is taken (equal)

        $display("");
        $display("Test BEQ");

        // F
        @(negedge clk);
        assert(DUT.stall_F == n) begin
            $display("stall_F is correct.  Expected: %h, Actual: %h", n,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_F); fail(); $finish();
        end
        assert(DUT.val_D == n) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", n,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", n,DUT.val_D); fail(); $finish();
        end

        // D
        @(negedge clk);
        inst_D = 32'b00000000001000001000000011100011; // beq x1, x2, 1
        #1
        assert(DUT.inst_D  == 32'b00000000001000001000000011100011) begin
            $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b00000000001000001000000011100011,DUT.inst_D); pass();
        end else begin
            $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b00000000001000001000000011100011,DUT.inst_D); fail(); $finish();
        end
        assert(DUT.val_D == y) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", y,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.val_D); fail(); $finish();
        end
        assert(DUT.inst_val_D == y) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", y,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.j_type_D == j_na) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.br_type_D == br_beq) begin
            $display("br_type_D is correct.  Expected: %h, Actual: %h", br_beq,DUT.br_type_D); pass();
        end else begin
            $display("br_type_D is incorrect.  Expected: %h, Actual: %h", br_beq,DUT.br_type_D); fail(); $finish();
        end
        assert(DUT.imm_type_D == imm_b) begin
            $display("imm_type_D is correct.  Expected: %h, Actual: %h", imm_b,DUT.imm_type_D); pass();
        end else begin
            $display("imm_type_D is incorrect.  Expected: %h, Actual: %h", imm_b,DUT.imm_type_D); fail(); $finish();
        end
        assert(DUT.op1_sel_D == bm1_rf) begin
            $display("op1_sel_D is correct.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); pass();
        end else begin
            $display("op1_sel_D is incorrect.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); fail(); $finish();
        end
        assert(DUT.rs1_en_D == y) begin
            $display("rs1_en_D is correct.  Expected: %h, Actual: %h",y,DUT.rs1_en_D); pass();
        end else begin
            $display("rs1_en_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); fail(); $finish();
        end
        assert(DUT.op2_sel_D == bm2_rf) begin
            $display("op2_sel_D is correct.  Expected: %h, Actual: %h", bm2_rf,DUT.op2_sel_D); pass();
        end else begin
            $display("op2_sel_D is incorrect.  Expected: %h, Actual: %h", bm2_rf,DUT.op2_sel_D); fail(); $finish();
        end
        assert(DUT.rs2_en_D == y) begin
            $display("rs2_en_D is correct.  Expected: %h, Actual: %h", y,DUT.rs2_en_D); pass();
        end else begin
            $display("rs2_en_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rs2_en_D); fail(); $finish();
        end
        assert(DUT.mul_D == n) begin
            $display("mul_D is correct.  Expected: %h, Actual: %h", n,DUT.mul_D); pass();
        end else begin
            $display("mul_D is incorrect.  Expected: %h, Actual: %h", n,DUT.mul_D); fail(); $finish();
        end
        assert(DUT.dmem_reqstream_type_D == nr) begin
            $display("dmem_reqstream_type_D is correct.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); pass();
        end else begin
            $display("dmem_reqstream_type_D is incorrect.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); fail(); $finish();
        end
        assert(DUT.wb_result_sel_D == wm_a) begin
            $display("wb_result_sel_D is correct.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); pass();
        end else begin
            $display("wb_result_sel_D is incorrect.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); fail(); $finish();
        end
        assert(DUT.rf_wen_D == n) begin
            $display("rf_wen_D is correct.  Expected: %h, Actual: %h", n,DUT.rf_wen_D); pass();
        end else begin
            $display("rf_wen_D is incorrect.  Expected: %h, Actual: %h", n,DUT.rf_wen_D); fail(); $finish();
        end
        assert(DUT.csrr_D == n) begin
            $display("csrr_D is correct.  Expected: %h, Actual: %h", n,DUT.csrr_D); pass();
        end else begin
            $display("csrr_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrr_D); fail(); $finish();
        end
        assert(DUT.csrw_D == n) begin
            $display("csrw_D is correct.  Expected: %h, Actual: %h", n,DUT.csrw_D); pass();
        end else begin
            $display("csrw_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrw_D); fail(); $finish();
        end

        // X
        @(negedge clk);
        assert(DUT.pc_redirect_X == y) begin
            $display("pc_redirect_X is correct.  Expected: %h, Actual: %h", y,DUT.pc_redirect_X); pass();
        end else begin
            $display("pc_redirect_X is incorrect.  Expected: %h, Actual: %h", y,DUT.pc_redirect_X); fail(); $finish();
        end
        assert(DUT.pc_sel_X == 2'd1) begin
            $display("pc_sel_X is correct.  Expected: %h, Actual: %h", 2'd1,DUT.pc_sel_X); pass();
        end else begin
            $display("pc_sel_X is incorrect.  Expected: %h, Actual: %h", 2'd1,DUT.pc_sel_X); fail(); $finish();
        end
        assert(DUT.pc_sel_F == 2'd1) begin
            $display("pc_sel_F is correct.  Expected: %h, Actual: %h", 2'd1,DUT.pc_sel_F); pass();
        end else begin
            $display("pc_sel_F is incorrect.  Expected: %h, Actual: %h", 2'd1,DUT.pc_sel_F); fail(); $finish();
        end
        assert(DUT.osquash_X == y) begin
            $display("osquash_X is correct.  Expected: %h, Actual: %h", y,DUT.osquash_X); pass();
        end else begin
            $display("osquash_X is incorrect.  Expected: %h, Actual: %h", y,DUT.osquash_X); fail(); $finish();
        end
        assert(DUT.osquash_D == n) begin
            $display("osquash_D is correct.  Expected: %h, Actual: %h", n,DUT.osquash_D); pass();
        end else begin
            $display("osquash_D is incorrect.  Expected: %h, Actual: %h", n,DUT.osquash_D); fail(); $finish();
        end
        assert(DUT.squash_D == y) begin
            $display("squash_D is correct.  Expected: %h, Actual: %h", y,DUT.squash_D); pass();
        end else begin
            $display("squash_D is incorrect.  Expected: %h, Actual: %h", y,DUT.squash_D); fail(); $finish();
        end
        assert(DUT.squash_F == y) begin
            $display("squash_F is correct.  Expected: %h, Actual: %h", y,DUT.squash_F); pass();
        end else begin
            $display("squash_F is incorrect.  Expected: %h, Actual: %h", y,DUT.squash_F); fail(); $finish();
        end
        assert(DUT.imem_respstream_drop == y) begin
            $display("imem_respstream_drop is correct.  Expected: %h, Actual: %h", y,DUT.imem_respstream_drop); pass();
        end else begin
            $display("imem_respstream_drop is incorrect.  Expected: %h, Actual: %h", y,DUT.imem_respstream_drop); fail(); $finish();
        end
        assert(DUT.next_val_F == n) begin
            $display("next_val_F is correct.  Expected: %h, Actual: %h", n,DUT.next_val_F); pass();
        end else begin
            $display("next_val_F is incorrect.  Expected: %h, Actual: %h", n,DUT.next_val_F); fail(); $finish();
        end

        delay( $urandom_range(0, 127) );
        
        //--------------------------------------------------------------------
        // Unit Testing #27 Test BLT
        //--------------------------------------------------------------------
        //Initalize all the signal inital values.
        reset = 1;
        @(negedge clk);
        reset = 0;
        imem_respstream_val = 1'b1; // Simulate imem response ready
        imul_req_rdy_D = 1; // Say imul ready so we don't stall the whole pipeline indefinitely
        br_cond_eq_X = 0;
        br_cond_lt_X = 1; // Say branch is taken (less than)

        $display("");
        $display("Test BLT");

        // F
        @(negedge clk);
        assert(DUT.stall_F == n) begin
            $display("stall_F is correct.  Expected: %h, Actual: %h", n,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_F); fail(); $finish();
        end
        assert(DUT.val_D == n) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", n,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", n,DUT.val_D); fail(); $finish();
        end

        // D
        @(negedge clk);
        inst_D = 32'b00000000001000001100000011100011; // blt x1, x2, 1
        #1
        assert(DUT.inst_D  == 32'b00000000001000001100000011100011) begin
            $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b00000000001000001100000011100011,DUT.inst_D); pass();
        end else begin
            $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b00000000001000001100000011100011,DUT.inst_D); fail(); $finish();
        end
        assert(DUT.val_D == y) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", y,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.val_D); fail(); $finish();
        end
        assert(DUT.inst_val_D == y) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", y,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.j_type_D == j_na) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.br_type_D == br_blt) begin
            $display("br_type_D is correct.  Expected: %h, Actual: %h", br_blt,DUT.br_type_D); pass();
        end else begin
            $display("br_type_D is incorrect.  Expected: %h, Actual: %h", br_blt,DUT.br_type_D); fail(); $finish();
        end
        assert(DUT.imm_type_D == imm_b) begin
            $display("imm_type_D is correct.  Expected: %h, Actual: %h", imm_b,DUT.imm_type_D); pass();
        end else begin
            $display("imm_type_D is incorrect.  Expected: %h, Actual: %h", imm_b,DUT.imm_type_D); fail(); $finish();
        end
        assert(DUT.op1_sel_D == bm1_rf) begin
            $display("op1_sel_D is correct.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); pass();
        end else begin
            $display("op1_sel_D is incorrect.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); fail(); $finish();
        end
        assert(DUT.rs1_en_D == y) begin
            $display("rs1_en_D is correct.  Expected: %h, Actual: %h",y,DUT.rs1_en_D); pass();
        end else begin
            $display("rs1_en_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); fail(); $finish();
        end
        assert(DUT.op2_sel_D == bm2_rf) begin
            $display("op2_sel_D is correct.  Expected: %h, Actual: %h", bm2_rf,DUT.op2_sel_D); pass();
        end else begin
            $display("op2_sel_D is incorrect.  Expected: %h, Actual: %h", bm2_rf,DUT.op2_sel_D); fail(); $finish();
        end
        assert(DUT.rs2_en_D == y) begin
            $display("rs2_en_D is correct.  Expected: %h, Actual: %h", y,DUT.rs2_en_D); pass();
        end else begin
            $display("rs2_en_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rs2_en_D); fail(); $finish();
        end
        assert(DUT.mul_D == n) begin
            $display("mul_D is correct.  Expected: %h, Actual: %h", n,DUT.mul_D); pass();
        end else begin
            $display("mul_D is incorrect.  Expected: %h, Actual: %h", n,DUT.mul_D); fail(); $finish();
        end
        assert(DUT.dmem_reqstream_type_D == nr) begin
            $display("dmem_reqstream_type_D is correct.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); pass();
        end else begin
            $display("dmem_reqstream_type_D is incorrect.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); fail(); $finish();
        end
        assert(DUT.wb_result_sel_D == wm_a) begin
            $display("wb_result_sel_D is correct.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); pass();
        end else begin
            $display("wb_result_sel_D is incorrect.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); fail(); $finish();
        end
        assert(DUT.rf_wen_D == n) begin
            $display("rf_wen_D is correct.  Expected: %h, Actual: %h", n,DUT.rf_wen_D); pass();
        end else begin
            $display("rf_wen_D is incorrect.  Expected: %h, Actual: %h", n,DUT.rf_wen_D); fail(); $finish();
        end
        assert(DUT.csrr_D == n) begin
            $display("csrr_D is correct.  Expected: %h, Actual: %h", n,DUT.csrr_D); pass();
        end else begin
            $display("csrr_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrr_D); fail(); $finish();
        end
        assert(DUT.csrw_D == n) begin
            $display("csrw_D is correct.  Expected: %h, Actual: %h", n,DUT.csrw_D); pass();
        end else begin
            $display("csrw_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrw_D); fail(); $finish();
        end

        // X
        @(negedge clk);
        assert(DUT.pc_redirect_X == y) begin
            $display("pc_redirect_X is correct.  Expected: %h, Actual: %h", y,DUT.pc_redirect_X); pass();
        end else begin
            $display("pc_redirect_X is incorrect.  Expected: %h, Actual: %h", y,DUT.pc_redirect_X); fail(); $finish();
        end
        assert(DUT.pc_sel_X == 2'd1) begin
            $display("pc_sel_X is correct.  Expected: %h, Actual: %h", 2'd1,DUT.pc_sel_X); pass();
        end else begin
            $display("pc_sel_X is incorrect.  Expected: %h, Actual: %h", 2'd1,DUT.pc_sel_X); fail(); $finish();
        end
        assert(DUT.pc_sel_F == 2'd1) begin
            $display("pc_sel_F is correct.  Expected: %h, Actual: %h", 2'd1,DUT.pc_sel_F); pass();
        end else begin
            $display("pc_sel_F is incorrect.  Expected: %h, Actual: %h", 2'd1,DUT.pc_sel_F); fail(); $finish();
        end
        assert(DUT.osquash_X == y) begin
            $display("osquash_X is correct.  Expected: %h, Actual: %h", y,DUT.osquash_X); pass();
        end else begin
            $display("osquash_X is incorrect.  Expected: %h, Actual: %h", y,DUT.osquash_X); fail(); $finish();
        end
        assert(DUT.osquash_D == n) begin
            $display("osquash_D is correct.  Expected: %h, Actual: %h", n,DUT.osquash_D); pass();
        end else begin
            $display("osquash_D is incorrect.  Expected: %h, Actual: %h", n,DUT.osquash_D); fail(); $finish();
        end
        assert(DUT.squash_D == y) begin
            $display("squash_D is correct.  Expected: %h, Actual: %h", y,DUT.squash_D); pass();
        end else begin
            $display("squash_D is incorrect.  Expected: %h, Actual: %h", y,DUT.squash_D); fail(); $finish();
        end
        assert(DUT.squash_F == y) begin
            $display("squash_F is correct.  Expected: %h, Actual: %h", y,DUT.squash_F); pass();
        end else begin
            $display("squash_F is incorrect.  Expected: %h, Actual: %h", y,DUT.squash_F); fail(); $finish();
        end
        assert(DUT.imem_respstream_drop == y) begin
            $display("imem_respstream_drop is correct.  Expected: %h, Actual: %h", y,DUT.imem_respstream_drop); pass();
        end else begin
            $display("imem_respstream_drop is incorrect.  Expected: %h, Actual: %h", y,DUT.imem_respstream_drop); fail(); $finish();
        end
        assert(DUT.next_val_F == n) begin
            $display("next_val_F is correct.  Expected: %h, Actual: %h", n,DUT.next_val_F); pass();
        end else begin
            $display("next_val_F is incorrect.  Expected: %h, Actual: %h", n,DUT.next_val_F); fail(); $finish();
        end

        delay( $urandom_range(0, 127) );
        
        //--------------------------------------------------------------------
        // Unit Testing #28 Test BLTU
        //--------------------------------------------------------------------
        //Initalize all the signal inital values.
        reset = 1;
        @(negedge clk);
        reset = 0;
        imem_respstream_val = 1'b1; // Simulate imem response ready
        imul_req_rdy_D = 1; // Say imul ready so we don't stall the whole pipeline indefinitely
        br_cond_eq_X = 0;
        br_cond_lt_X = 0;
        br_cond_ltu_X = 1; // Say branch is taken (less than)

        $display("");
        $display("Test BLTU");

        // F
        @(negedge clk);
        assert(DUT.stall_F == n) begin
            $display("stall_F is correct.  Expected: %h, Actual: %h", n,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_F); fail(); $finish();
        end
        assert(DUT.val_D == n) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", n,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", n,DUT.val_D); fail(); $finish();
        end

        // D
        @(negedge clk);
        inst_D = 32'b00000000001000001110000011100011; // bltu x1, x2, 1
        #1
        assert(DUT.inst_D  == 32'b00000000001000001110000011100011) begin
            $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b00000000001000001110000011100011,DUT.inst_D); pass();
        end else begin
            $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b00000000001000001110000011100011,DUT.inst_D); fail(); $finish();
        end
        assert(DUT.val_D == y) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", y,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.val_D); fail(); $finish();
        end
        assert(DUT.inst_val_D == y) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", y,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.j_type_D == j_na) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.br_type_D == br_bltu) begin
            $display("br_type_D is correct.  Expected: %h, Actual: %h", br_bltu,DUT.br_type_D); pass();
        end else begin
            $display("br_type_D is incorrect.  Expected: %h, Actual: %h", br_bltu,DUT.br_type_D); fail(); $finish();
        end
        assert(DUT.imm_type_D == imm_b) begin
            $display("imm_type_D is correct.  Expected: %h, Actual: %h", imm_b,DUT.imm_type_D); pass();
        end else begin
            $display("imm_type_D is incorrect.  Expected: %h, Actual: %h", imm_b,DUT.imm_type_D); fail(); $finish();
        end
        assert(DUT.op1_sel_D == bm1_rf) begin
            $display("op1_sel_D is correct.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); pass();
        end else begin
            $display("op1_sel_D is incorrect.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); fail(); $finish();
        end
        assert(DUT.rs1_en_D == y) begin
            $display("rs1_en_D is correct.  Expected: %h, Actual: %h",y,DUT.rs1_en_D); pass();
        end else begin
            $display("rs1_en_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); fail(); $finish();
        end
        assert(DUT.op2_sel_D == bm2_rf) begin
            $display("op2_sel_D is correct.  Expected: %h, Actual: %h", bm2_rf,DUT.op2_sel_D); pass();
        end else begin
            $display("op2_sel_D is incorrect.  Expected: %h, Actual: %h", bm2_rf,DUT.op2_sel_D); fail(); $finish();
        end
        assert(DUT.rs2_en_D == y) begin
            $display("rs2_en_D is correct.  Expected: %h, Actual: %h", y,DUT.rs2_en_D); pass();
        end else begin
            $display("rs2_en_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rs2_en_D); fail(); $finish();
        end
        assert(DUT.mul_D == n) begin
            $display("mul_D is correct.  Expected: %h, Actual: %h", n,DUT.mul_D); pass();
        end else begin
            $display("mul_D is incorrect.  Expected: %h, Actual: %h", n,DUT.mul_D); fail(); $finish();
        end
        assert(DUT.dmem_reqstream_type_D == nr) begin
            $display("dmem_reqstream_type_D is correct.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); pass();
        end else begin
            $display("dmem_reqstream_type_D is incorrect.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); fail(); $finish();
        end
        assert(DUT.wb_result_sel_D == wm_a) begin
            $display("wb_result_sel_D is correct.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); pass();
        end else begin
            $display("wb_result_sel_D is incorrect.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); fail(); $finish();
        end
        assert(DUT.rf_wen_D == n) begin
            $display("rf_wen_D is correct.  Expected: %h, Actual: %h", n,DUT.rf_wen_D); pass();
        end else begin
            $display("rf_wen_D is incorrect.  Expected: %h, Actual: %h", n,DUT.rf_wen_D); fail(); $finish();
        end
        assert(DUT.csrr_D == n) begin
            $display("csrr_D is correct.  Expected: %h, Actual: %h", n,DUT.csrr_D); pass();
        end else begin
            $display("csrr_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrr_D); fail(); $finish();
        end
        assert(DUT.csrw_D == n) begin
            $display("csrw_D is correct.  Expected: %h, Actual: %h", n,DUT.csrw_D); pass();
        end else begin
            $display("csrw_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrw_D); fail(); $finish();
        end

        // X
        @(negedge clk);
        assert(DUT.pc_redirect_X == y) begin
            $display("pc_redirect_X is correct.  Expected: %h, Actual: %h", y,DUT.pc_redirect_X); pass();
        end else begin
            $display("pc_redirect_X is incorrect.  Expected: %h, Actual: %h", y,DUT.pc_redirect_X); fail(); $finish();
        end
        assert(DUT.pc_sel_X == 2'd1) begin
            $display("pc_sel_X is correct.  Expected: %h, Actual: %h", 2'd1,DUT.pc_sel_X); pass();
        end else begin
            $display("pc_sel_X is incorrect.  Expected: %h, Actual: %h", 2'd1,DUT.pc_sel_X); fail(); $finish();
        end
        assert(DUT.pc_sel_F == 2'd1) begin
            $display("pc_sel_F is correct.  Expected: %h, Actual: %h", 2'd1,DUT.pc_sel_F); pass();
        end else begin
            $display("pc_sel_F is incorrect.  Expected: %h, Actual: %h", 2'd1,DUT.pc_sel_F); fail(); $finish();
        end
        assert(DUT.osquash_X == y) begin
            $display("osquash_X is correct.  Expected: %h, Actual: %h", y,DUT.osquash_X); pass();
        end else begin
            $display("osquash_X is incorrect.  Expected: %h, Actual: %h", y,DUT.osquash_X); fail(); $finish();
        end
        assert(DUT.osquash_D == n) begin
            $display("osquash_D is correct.  Expected: %h, Actual: %h", n,DUT.osquash_D); pass();
        end else begin
            $display("osquash_D is incorrect.  Expected: %h, Actual: %h", n,DUT.osquash_D); fail(); $finish();
        end
        assert(DUT.squash_D == y) begin
            $display("squash_D is correct.  Expected: %h, Actual: %h", y,DUT.squash_D); pass();
        end else begin
            $display("squash_D is incorrect.  Expected: %h, Actual: %h", y,DUT.squash_D); fail(); $finish();
        end
        assert(DUT.squash_F == y) begin
            $display("squash_F is correct.  Expected: %h, Actual: %h", y,DUT.squash_F); pass();
        end else begin
            $display("squash_F is incorrect.  Expected: %h, Actual: %h", y,DUT.squash_F); fail(); $finish();
        end
        assert(DUT.imem_respstream_drop == y) begin
            $display("imem_respstream_drop is correct.  Expected: %h, Actual: %h", y,DUT.imem_respstream_drop); pass();
        end else begin
            $display("imem_respstream_drop is incorrect.  Expected: %h, Actual: %h", y,DUT.imem_respstream_drop); fail(); $finish();
        end
        assert(DUT.next_val_F == n) begin
            $display("next_val_F is correct.  Expected: %h, Actual: %h", n,DUT.next_val_F); pass();
        end else begin
            $display("next_val_F is incorrect.  Expected: %h, Actual: %h", n,DUT.next_val_F); fail(); $finish();
        end

        delay( $urandom_range(0, 127) );
        
        //--------------------------------------------------------------------
        // Unit Testing #29 Test BGE
        //--------------------------------------------------------------------
        //Initalize all the signal inital values.
        reset = 1;
        @(negedge clk);
        reset = 0;
        imem_respstream_val = 1'b1; // Simulate imem response ready
        imul_req_rdy_D = 1; // Say imul ready so we don't stall the whole pipeline indefinitely
        br_cond_eq_X = 0;
        br_cond_lt_X = 0; // Say branch is taken (not less than)
        br_cond_ltu_X = 0;

        $display("");
        $display("Test BGE");

        // F
        @(negedge clk);
        assert(DUT.stall_F == n) begin
            $display("stall_F is correct.  Expected: %h, Actual: %h", n,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_F); fail(); $finish();
        end
        assert(DUT.val_D == n) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", n,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", n,DUT.val_D); fail(); $finish();
        end

        // D
        @(negedge clk);
        inst_D = 32'b00000000001000001101000011100011; // bge x1, x2, 1
        #1
        assert(DUT.inst_D  == 32'b00000000001000001101000011100011) begin
            $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b00000000001000001101000011100011,DUT.inst_D); pass();
        end else begin
            $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b00000000001000001101000011100011,DUT.inst_D); fail(); $finish();
        end
        assert(DUT.val_D == y) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", y,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.val_D); fail(); $finish();
        end
        assert(DUT.inst_val_D == y) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", y,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.j_type_D == j_na) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.br_type_D == br_bge) begin
            $display("br_type_D is correct.  Expected: %h, Actual: %h", br_bge,DUT.br_type_D); pass();
        end else begin
            $display("br_type_D is incorrect.  Expected: %h, Actual: %h", br_bge,DUT.br_type_D); fail(); $finish();
        end
        assert(DUT.imm_type_D == imm_b) begin
            $display("imm_type_D is correct.  Expected: %h, Actual: %h", imm_b,DUT.imm_type_D); pass();
        end else begin
            $display("imm_type_D is incorrect.  Expected: %h, Actual: %h", imm_b,DUT.imm_type_D); fail(); $finish();
        end
        assert(DUT.op1_sel_D == bm1_rf) begin
            $display("op1_sel_D is correct.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); pass();
        end else begin
            $display("op1_sel_D is incorrect.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); fail(); $finish();
        end
        assert(DUT.rs1_en_D == y) begin
            $display("rs1_en_D is correct.  Expected: %h, Actual: %h",y,DUT.rs1_en_D); pass();
        end else begin
            $display("rs1_en_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); fail(); $finish();
        end
        assert(DUT.op2_sel_D == bm2_rf) begin
            $display("op2_sel_D is correct.  Expected: %h, Actual: %h", bm2_rf,DUT.op2_sel_D); pass();
        end else begin
            $display("op2_sel_D is incorrect.  Expected: %h, Actual: %h", bm2_rf,DUT.op2_sel_D); fail(); $finish();
        end
        assert(DUT.rs2_en_D == y) begin
            $display("rs2_en_D is correct.  Expected: %h, Actual: %h", y,DUT.rs2_en_D); pass();
        end else begin
            $display("rs2_en_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rs2_en_D); fail(); $finish();
        end
        assert(DUT.mul_D == n) begin
            $display("mul_D is correct.  Expected: %h, Actual: %h", n,DUT.mul_D); pass();
        end else begin
            $display("mul_D is incorrect.  Expected: %h, Actual: %h", n,DUT.mul_D); fail(); $finish();
        end
        assert(DUT.dmem_reqstream_type_D == nr) begin
            $display("dmem_reqstream_type_D is correct.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); pass();
        end else begin
            $display("dmem_reqstream_type_D is incorrect.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); fail(); $finish();
        end
        assert(DUT.wb_result_sel_D == wm_a) begin
            $display("wb_result_sel_D is correct.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); pass();
        end else begin
            $display("wb_result_sel_D is incorrect.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); fail(); $finish();
        end
        assert(DUT.rf_wen_D == n) begin
            $display("rf_wen_D is correct.  Expected: %h, Actual: %h", n,DUT.rf_wen_D); pass();
        end else begin
            $display("rf_wen_D is incorrect.  Expected: %h, Actual: %h", n,DUT.rf_wen_D); fail(); $finish();
        end
        assert(DUT.csrr_D == n) begin
            $display("csrr_D is correct.  Expected: %h, Actual: %h", n,DUT.csrr_D); pass();
        end else begin
            $display("csrr_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrr_D); fail(); $finish();
        end
        assert(DUT.csrw_D == n) begin
            $display("csrw_D is correct.  Expected: %h, Actual: %h", n,DUT.csrw_D); pass();
        end else begin
            $display("csrw_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrw_D); fail(); $finish();
        end

        // X
        @(negedge clk);
        assert(DUT.pc_redirect_X == y) begin
            $display("pc_redirect_X is correct.  Expected: %h, Actual: %h", y,DUT.pc_redirect_X); pass();
        end else begin
            $display("pc_redirect_X is incorrect.  Expected: %h, Actual: %h", y,DUT.pc_redirect_X); fail(); $finish();
        end
        assert(DUT.pc_sel_X == 2'd1) begin
            $display("pc_sel_X is correct.  Expected: %h, Actual: %h", 2'd1,DUT.pc_sel_X); pass();
        end else begin
            $display("pc_sel_X is incorrect.  Expected: %h, Actual: %h", 2'd1,DUT.pc_sel_X); fail(); $finish();
        end
        assert(DUT.pc_sel_F == 2'd1) begin
            $display("pc_sel_F is correct.  Expected: %h, Actual: %h", 2'd1,DUT.pc_sel_F); pass();
        end else begin
            $display("pc_sel_F is incorrect.  Expected: %h, Actual: %h", 2'd1,DUT.pc_sel_F); fail(); $finish();
        end
        assert(DUT.osquash_X == y) begin
            $display("osquash_X is correct.  Expected: %h, Actual: %h", y,DUT.osquash_X); pass();
        end else begin
            $display("osquash_X is incorrect.  Expected: %h, Actual: %h", y,DUT.osquash_X); fail(); $finish();
        end
        assert(DUT.osquash_D == n) begin
            $display("osquash_D is correct.  Expected: %h, Actual: %h", n,DUT.osquash_D); pass();
        end else begin
            $display("osquash_D is incorrect.  Expected: %h, Actual: %h", n,DUT.osquash_D); fail(); $finish();
        end
        assert(DUT.squash_D == y) begin
            $display("squash_D is correct.  Expected: %h, Actual: %h", y,DUT.squash_D); pass();
        end else begin
            $display("squash_D is incorrect.  Expected: %h, Actual: %h", y,DUT.squash_D); fail(); $finish();
        end
        assert(DUT.squash_F == y) begin
            $display("squash_F is correct.  Expected: %h, Actual: %h", y,DUT.squash_F); pass();
        end else begin
            $display("squash_F is incorrect.  Expected: %h, Actual: %h", y,DUT.squash_F); fail(); $finish();
        end
        assert(DUT.imem_respstream_drop == y) begin
            $display("imem_respstream_drop is correct.  Expected: %h, Actual: %h", y,DUT.imem_respstream_drop); pass();
        end else begin
            $display("imem_respstream_drop is incorrect.  Expected: %h, Actual: %h", y,DUT.imem_respstream_drop); fail(); $finish();
        end
        assert(DUT.next_val_F == n) begin
            $display("next_val_F is correct.  Expected: %h, Actual: %h", n,DUT.next_val_F); pass();
        end else begin
            $display("next_val_F is incorrect.  Expected: %h, Actual: %h", n,DUT.next_val_F); fail(); $finish();
        end

        delay( $urandom_range(0, 127) );
        
        //--------------------------------------------------------------------
        // Unit Testing #30 Test BGEU
        //--------------------------------------------------------------------
        //Initalize all the signal inital values.
        reset = 1;
        @(negedge clk);
        reset = 0;
        imem_respstream_val = 1'b1; // Simulate imem response ready
        imul_req_rdy_D = 1; // Say imul ready so we don't stall the whole pipeline indefinitely
        br_cond_eq_X = 0;
        br_cond_lt_X = 0;
        br_cond_ltu_X = 0; // Say branch is taken (not less than)

        $display("");
        $display("Test BGEU");

        // F
        @(negedge clk);
        assert(DUT.stall_F == n) begin
            $display("stall_F is correct.  Expected: %h, Actual: %h", n,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_F); fail(); $finish();
        end
        assert(DUT.val_D == n) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", n,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", n,DUT.val_D); fail(); $finish();
        end

        // D
        @(negedge clk);
        inst_D = 32'b00000000001000001111000011100011; // bgeu x1, x2, 1
        #1
        assert(DUT.inst_D  == 32'b00000000001000001111000011100011) begin
            $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b00000000001000001111000011100011,DUT.inst_D); pass();
        end else begin
            $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b00000000001000001111000011100011,DUT.inst_D); fail(); $finish();
        end
        assert(DUT.val_D == y) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", y,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.val_D); fail(); $finish();
        end
        assert(DUT.inst_val_D == y) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", y,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.j_type_D == j_na) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.br_type_D == br_bgeu) begin
            $display("br_type_D is correct.  Expected: %h, Actual: %h", br_bgeu,DUT.br_type_D); pass();
        end else begin
            $display("br_type_D is incorrect.  Expected: %h, Actual: %h", br_bgeu,DUT.br_type_D); fail(); $finish();
        end
        assert(DUT.imm_type_D == imm_b) begin
            $display("imm_type_D is correct.  Expected: %h, Actual: %h", imm_b,DUT.imm_type_D); pass();
        end else begin
            $display("imm_type_D is incorrect.  Expected: %h, Actual: %h", imm_b,DUT.imm_type_D); fail(); $finish();
        end
        assert(DUT.op1_sel_D == bm1_rf) begin
            $display("op1_sel_D is correct.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); pass();
        end else begin
            $display("op1_sel_D is incorrect.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); fail(); $finish();
        end
        assert(DUT.rs1_en_D == y) begin
            $display("rs1_en_D is correct.  Expected: %h, Actual: %h",y,DUT.rs1_en_D); pass();
        end else begin
            $display("rs1_en_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); fail(); $finish();
        end
        assert(DUT.op2_sel_D == bm2_rf) begin
            $display("op2_sel_D is correct.  Expected: %h, Actual: %h", bm2_rf,DUT.op2_sel_D); pass();
        end else begin
            $display("op2_sel_D is incorrect.  Expected: %h, Actual: %h", bm2_rf,DUT.op2_sel_D); fail(); $finish();
        end
        assert(DUT.rs2_en_D == y) begin
            $display("rs2_en_D is correct.  Expected: %h, Actual: %h", y,DUT.rs2_en_D); pass();
        end else begin
            $display("rs2_en_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rs2_en_D); fail(); $finish();
        end
        assert(DUT.mul_D == n) begin
            $display("mul_D is correct.  Expected: %h, Actual: %h", n,DUT.mul_D); pass();
        end else begin
            $display("mul_D is incorrect.  Expected: %h, Actual: %h", n,DUT.mul_D); fail(); $finish();
        end
        assert(DUT.dmem_reqstream_type_D == nr) begin
            $display("dmem_reqstream_type_D is correct.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); pass();
        end else begin
            $display("dmem_reqstream_type_D is incorrect.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); fail(); $finish();
        end
        assert(DUT.wb_result_sel_D == wm_a) begin
            $display("wb_result_sel_D is correct.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); pass();
        end else begin
            $display("wb_result_sel_D is incorrect.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); fail(); $finish();
        end
        assert(DUT.rf_wen_D == n) begin
            $display("rf_wen_D is correct.  Expected: %h, Actual: %h", n,DUT.rf_wen_D); pass();
        end else begin
            $display("rf_wen_D is incorrect.  Expected: %h, Actual: %h", n,DUT.rf_wen_D); fail(); $finish();
        end
        assert(DUT.csrr_D == n) begin
            $display("csrr_D is correct.  Expected: %h, Actual: %h", n,DUT.csrr_D); pass();
        end else begin
            $display("csrr_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrr_D); fail(); $finish();
        end
        assert(DUT.csrw_D == n) begin
            $display("csrw_D is correct.  Expected: %h, Actual: %h", n,DUT.csrw_D); pass();
        end else begin
            $display("csrw_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrw_D); fail(); $finish();
        end

        // X
        @(negedge clk);
        assert(DUT.pc_redirect_X == y) begin
            $display("pc_redirect_X is correct.  Expected: %h, Actual: %h", y,DUT.pc_redirect_X); pass();
        end else begin
            $display("pc_redirect_X is incorrect.  Expected: %h, Actual: %h", y,DUT.pc_redirect_X); fail(); $finish();
        end
        assert(DUT.pc_sel_X == 2'd1) begin
            $display("pc_sel_X is correct.  Expected: %h, Actual: %h", 2'd1,DUT.pc_sel_X); pass();
        end else begin
            $display("pc_sel_X is incorrect.  Expected: %h, Actual: %h", 2'd1,DUT.pc_sel_X); fail(); $finish();
        end
        assert(DUT.pc_sel_F == 2'd1) begin
            $display("pc_sel_F is correct.  Expected: %h, Actual: %h", 2'd1,DUT.pc_sel_F); pass();
        end else begin
            $display("pc_sel_F is incorrect.  Expected: %h, Actual: %h", 2'd1,DUT.pc_sel_F); fail(); $finish();
        end
        assert(DUT.osquash_X == y) begin
            $display("osquash_X is correct.  Expected: %h, Actual: %h", y,DUT.osquash_X); pass();
        end else begin
            $display("osquash_X is incorrect.  Expected: %h, Actual: %h", y,DUT.osquash_X); fail(); $finish();
        end
        assert(DUT.osquash_D == n) begin
            $display("osquash_D is correct.  Expected: %h, Actual: %h", n,DUT.osquash_D); pass();
        end else begin
            $display("osquash_D is incorrect.  Expected: %h, Actual: %h", n,DUT.osquash_D); fail(); $finish();
        end
        assert(DUT.squash_D == y) begin
            $display("squash_D is correct.  Expected: %h, Actual: %h", y,DUT.squash_D); pass();
        end else begin
            $display("squash_D is incorrect.  Expected: %h, Actual: %h", y,DUT.squash_D); fail(); $finish();
        end
        assert(DUT.squash_F == y) begin
            $display("squash_F is correct.  Expected: %h, Actual: %h", y,DUT.squash_F); pass();
        end else begin
            $display("squash_F is incorrect.  Expected: %h, Actual: %h", y,DUT.squash_F); fail(); $finish();
        end
        assert(DUT.imem_respstream_drop == y) begin
            $display("imem_respstream_drop is correct.  Expected: %h, Actual: %h", y,DUT.imem_respstream_drop); pass();
        end else begin
            $display("imem_respstream_drop is incorrect.  Expected: %h, Actual: %h", y,DUT.imem_respstream_drop); fail(); $finish();
        end
        assert(DUT.next_val_F == n) begin
            $display("next_val_F is correct.  Expected: %h, Actual: %h", n,DUT.next_val_F); pass();
        end else begin
            $display("next_val_F is incorrect.  Expected: %h, Actual: %h", n,DUT.next_val_F); fail(); $finish();
        end

        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #31 Test LW with dmem Stall
        //--------------------------------------------------------------------
        //Initalize all the signal inital values.
        reset = 1;
        @(negedge clk);
        reset = 0;
        imem_respstream_val = 1'b1; // Simulate imem response ready
        imul_req_rdy_D = 1; // Say imul ready so we don't stall the whole pipeline indefinitely
        dmem_reqstream_rdy = 0; // dmem not ready yet so need to stall

        $display("");
        $display("Test LW with dmem Stall");

        // F
        @(negedge clk);
        assert(DUT.stall_F == n) begin
            $display("stall_F is correct.  Expected: %h, Actual: %h", n,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_F); fail(); $finish();
        end
        assert(DUT.val_D == n) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", n,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", n,DUT.val_D); fail(); $finish();
        end

        // D
        @(negedge clk);
        inst_D = 32'b00000000001000001010000100000011; // lw x2, 2(x1)
        #1
        assert(DUT.inst_D  == 32'b00000000001000001010000100000011) begin
            $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b00000000001000001010000100000011,DUT.inst_D); pass();
        end else begin
            $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b00000000001000001010000100000011,DUT.inst_D); fail(); $finish();
        end
        assert(DUT.val_D == y) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", y,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.val_D); fail(); $finish();
        end
        assert(DUT.inst_val_D == y) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", y,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.j_type_D == j_na) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.br_type_D == br_na) begin
            $display("br_type_D is correct.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); pass();
        end else begin
            $display("br_type_D is incorrect.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); fail(); $finish();
        end
        assert(DUT.imm_type_D == imm_i) begin
            $display("imm_type_D is correct.  Expected: %h, Actual: %h", imm_i,DUT.imm_type_D); pass();
        end else begin
            $display("imm_type_D is incorrect.  Expected: %h, Actual: %h", imm_i,DUT.imm_type_D); fail(); $finish();
        end
        assert(DUT.op1_sel_D == bm1_rf) begin
            $display("op1_sel_D is correct.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); pass();
        end else begin
            $display("op1_sel_D is incorrect.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); fail(); $finish();
        end
        assert(DUT.rs1_en_D == y) begin
            $display("rs1_en_D is correct.  Expected: %h, Actual: %h",y,DUT.rs1_en_D); pass();
        end else begin
            $display("rs1_en_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); fail(); $finish();
        end
        assert(DUT.op2_sel_D == bm2_imm) begin
            $display("op2_sel_D is correct.  Expected: %h, Actual: %h", bm2_imm,DUT.op2_sel_D); pass();
        end else begin
            $display("op2_sel_D is incorrect.  Expected: %h, Actual: %h", bm2_imm,DUT.op2_sel_D); fail(); $finish();
        end
        assert(DUT.rs2_en_D == n) begin
            $display("rs2_en_D is correct.  Expected: %h, Actual: %h", n,DUT.rs2_en_D); pass();
        end else begin
            $display("rs2_en_D is incorrect.  Expected: %h, Actual: %h", n,DUT.rs2_en_D); fail(); $finish();
        end
        assert(DUT.alu_fn_D == alu_add) begin
            $display("alu_fn_D is correct.  Expected: %h, Actual: %h", alu_add,DUT.alu_fn_D); pass();
        end else begin
            $display("alu_fn_D is incorrect.  Expected: %h, Actual: %h", alu_add,DUT.alu_fn_D); fail(); $finish();
        end
        assert(DUT.ex_result_sel_D == ex_alu) begin
            $display("ex_result_sel_D is correct.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); pass();
        end else begin
            $display("ex_result_sel_D is incorrect.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); fail(); $finish();
        end
        assert(DUT.mul_D == n) begin
            $display("mul_D is correct.  Expected: %h, Actual: %h", n,DUT.mul_D); pass();
        end else begin
            $display("mul_D is incorrect.  Expected: %h, Actual: %h", n,DUT.mul_D); fail(); $finish();
        end
        assert(DUT.dmem_reqstream_type_D == ld) begin
            $display("dmem_reqstream_type_D is correct.  Expected: %h, Actual: %h", ld,DUT.dmem_reqstream_type_D); pass();
        end else begin
            $display("dmem_reqstream_type_D is incorrect.  Expected: %h, Actual: %h", ld,DUT.dmem_reqstream_type_D); fail(); $finish();
        end
        assert(DUT.wb_result_sel_D == wm_m) begin
            $display("wb_result_sel_D is correct.  Expected: %h, Actual: %h", wm_m,DUT.wb_result_sel_D); pass();
        end else begin
            $display("wb_result_sel_D is incorrect.  Expected: %h, Actual: %h", wm_m,DUT.wb_result_sel_D); fail(); $finish();
        end
        assert(DUT.rf_wen_D == y) begin
            $display("rf_wen_D is correct.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); pass();
        end else begin
            $display("rf_wen_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); fail(); $finish();
        end
        assert(DUT.csrr_D == n) begin
            $display("csrr_D is correct.  Expected: %h, Actual: %h", n,DUT.csrr_D); pass();
        end else begin
            $display("csrr_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrr_D); fail(); $finish();
        end
        assert(DUT.csrw_D == n) begin
            $display("csrw_D is correct.  Expected: %h, Actual: %h", n,DUT.csrw_D); pass();
        end else begin
            $display("csrw_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrw_D); fail(); $finish();
        end

        // X
        @(negedge clk);
        assert(DUT.stall_X == y) begin // ostall X bc dmem not ready to receive
            $display("stall_X is correct.  Expected: %h, Actual: %h", y,DUT.stall_X); pass();
        end else begin
            $display("stall_X is incorrect.  Expected: %h, Actual: %h", y,DUT.stall_X); fail(); $finish();
        end
        assert(DUT.stall_D == y) begin // stall D from cascade
            $display("stall_D is correct.  Expected: %h, Actual: %h", y,DUT.stall_D); pass();
        end else begin
            $display("stall_D is incorrect.  Expected: %h, Actual: %h", y,DUT.stall_D); fail(); $finish();
        end
        assert(DUT.stall_F == y) begin // stall F from cascade
            $display("stall_F is correct.  Expected: %h, Actual: %h", y,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", y,DUT.stall_F); fail(); $finish();
        end

        delay( $urandom_range(0, 127) ); // Random dmem stall
        dmem_reqstream_rdy = 1; // dmem ready to receive value
        dmem_respstream_val = 0; // dmem not ready to produce value

        // M
        @(negedge clk);
        assert(DUT.stall_M == y) begin // ostall M from dmem response not ready
            $display("stall_M is correct.  Expected: %h, Actual: %h", y,DUT.stall_M); pass();
        end else begin
            $display("stall_M is incorrect.  Expected: %h, Actual: %h", y,DUT.stall_M); fail(); $finish();
        end
        assert(DUT.stall_X == y) begin // stall X from cascade
            $display("stall_X is correct.  Expected: %h, Actual: %h", y,DUT.stall_X); pass();
        end else begin
            $display("stall_X is incorrect.  Expected: %h, Actual: %h", y,DUT.stall_X); fail(); $finish();
        end
        assert(DUT.stall_D == y) begin // stall D from cascade
            $display("stall_D is correct.  Expected: %h, Actual: %h", y,DUT.stall_D); pass();
        end else begin
            $display("stall_D is incorrect.  Expected: %h, Actual: %h", y,DUT.stall_D); fail(); $finish();
        end
        assert(DUT.stall_F == y) begin // stall F from cascade
            $display("stall_F is correct.  Expected: %h, Actual: %h", y,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", y,DUT.stall_F); fail(); $finish();
        end

        delay( $urandom_range(0, 127) ); // Random dmem stall
        dmem_reqstream_rdy = 1; // dmem ready to receive value
        dmem_respstream_val = 1; // dmem ready to produce value

        // W
        @(negedge clk);
        assert(DUT.stall_M == n) begin // ostall M from dmem response not ready
            $display("stall_M is correct.  Expected: %h, Actual: %h", n,DUT.stall_M); pass();
        end else begin
            $display("stall_M is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_M); fail(); $finish();
        end
        assert(DUT.stall_X == n) begin // stall X from cascade
            $display("stall_X is correct.  Expected: %h, Actual: %h", n,DUT.stall_X); pass();
        end else begin
            $display("stall_X is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_X); fail(); $finish();
        end
        assert(DUT.stall_D == n) begin // stall D from cascade
            $display("stall_D is correct.  Expected: %h, Actual: %h", n,DUT.stall_D); pass();
        end else begin
            $display("stall_D is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_D); fail(); $finish();
        end
        assert(DUT.stall_F == n) begin // stall F from cascade
            $display("stall_F is correct.  Expected: %h, Actual: %h", n,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_F); fail(); $finish();
        end
        assert(DUT.rf_wen_W == y) begin
            $display("stall_F is correct.  Expected: %h, Actual: %h", y,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", y,DUT.stall_F); fail(); $finish();
        end
        assert(DUT.rf_waddr_W == 5'd2) begin
            $display("rf_waddr_W is correct.  Expected: %h, Actual: %h", 5'd2,DUT.rf_waddr_W); pass();
        end else begin
            $display("rf_waddr_W is incorrect.  Expected: %h, Actual: %h", 5'd2,DUT.rf_waddr_W); fail(); $finish();
        end

        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #32 Test SW with dmem Stall
        //--------------------------------------------------------------------
        //Initalize all the signal inital values.
        reset = 1;
        @(negedge clk);
        reset = 0;
        imem_respstream_val = 1'b1; // Simulate imem response ready
        imul_req_rdy_D = 1; // Say imul ready so we don't stall the whole pipeline indefinitely
        dmem_reqstream_rdy = 0; // dmem not ready yet so need to stall

        $display("");
        $display("Test SW with dmem Stall");

        // F
        @(negedge clk);
        assert(DUT.stall_F == n) begin
            $display("stall_F is correct.  Expected: %h, Actual: %h", n,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_F); fail(); $finish();
        end
        assert(DUT.val_D == n) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", n,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", n,DUT.val_D); fail(); $finish();
        end

        // D
        @(negedge clk);
        inst_D = 32'b00000000001000001010000010100011; // sw x2, 2(x1)
        #1
        assert(DUT.inst_D  == 32'b00000000001000001010000010100011) begin
            $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b00000000001000001010000010100011,DUT.inst_D); pass();
        end else begin
            $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b00000000001000001010000010100011,DUT.inst_D); fail(); $finish();
        end
        assert(DUT.val_D == y) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", y,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.val_D); fail(); $finish();
        end
        assert(DUT.inst_val_D == y) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", y,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.j_type_D == j_na) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.br_type_D == br_na) begin
            $display("br_type_D is correct.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); pass();
        end else begin
            $display("br_type_D is incorrect.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); fail(); $finish();
        end
        assert(DUT.imm_type_D == imm_s) begin
            $display("imm_type_D is correct.  Expected: %h, Actual: %h", imm_s,DUT.imm_type_D); pass();
        end else begin
            $display("imm_type_D is incorrect.  Expected: %h, Actual: %h", imm_s,DUT.imm_type_D); fail(); $finish();
        end
        assert(DUT.op1_sel_D == bm1_rf) begin
            $display("op1_sel_D is correct.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); pass();
        end else begin
            $display("op1_sel_D is incorrect.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); fail(); $finish();
        end
        assert(DUT.rs1_en_D == y) begin
            $display("rs1_en_D is correct.  Expected: %h, Actual: %h",y,DUT.rs1_en_D); pass();
        end else begin
            $display("rs1_en_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); fail(); $finish();
        end
        assert(DUT.op2_sel_D == bm2_imm) begin
            $display("op2_sel_D is correct.  Expected: %h, Actual: %h", bm2_imm,DUT.op2_sel_D); pass();
        end else begin
            $display("op2_sel_D is incorrect.  Expected: %h, Actual: %h", bm2_imm,DUT.op2_sel_D); fail(); $finish();
        end
        assert(DUT.rs2_en_D == y) begin
            $display("rs2_en_D is correct.  Expected: %h, Actual: %h", y,DUT.rs2_en_D); pass();
        end else begin
            $display("rs2_en_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rs2_en_D); fail(); $finish();
        end
        assert(DUT.alu_fn_D == alu_add) begin
            $display("alu_fn_D is correct.  Expected: %h, Actual: %h", alu_add,DUT.alu_fn_D); pass();
        end else begin
            $display("alu_fn_D is incorrect.  Expected: %h, Actual: %h", alu_add,DUT.alu_fn_D); fail(); $finish();
        end
        assert(DUT.mul_D == n) begin
            $display("mul_D is correct.  Expected: %h, Actual: %h", n,DUT.mul_D); pass();
        end else begin
            $display("mul_D is incorrect.  Expected: %h, Actual: %h", n,DUT.mul_D); fail(); $finish();
        end
        assert(DUT.dmem_reqstream_type_D == st) begin
            $display("dmem_reqstream_type_D is correct.  Expected: %h, Actual: %h", st,DUT.dmem_reqstream_type_D); pass();
        end else begin
            $display("dmem_reqstream_type_D is incorrect.  Expected: %h, Actual: %h", st,DUT.dmem_reqstream_type_D); fail(); $finish();
        end
        assert(DUT.rf_wen_D == n) begin
            $display("rf_wen_D is correct.  Expected: %h, Actual: %h", n,DUT.rf_wen_D); pass();
        end else begin
            $display("rf_wen_D is incorrect.  Expected: %h, Actual: %h", n,DUT.rf_wen_D); fail(); $finish();
        end
        assert(DUT.csrr_D == n) begin
            $display("csrr_D is correct.  Expected: %h, Actual: %h", n,DUT.csrr_D); pass();
        end else begin
            $display("csrr_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrr_D); fail(); $finish();
        end
        assert(DUT.csrw_D == n) begin
            $display("csrw_D is correct.  Expected: %h, Actual: %h", n,DUT.csrw_D); pass();
        end else begin
            $display("csrw_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrw_D); fail(); $finish();
        end

        // X
        @(negedge clk);
        assert(DUT.stall_X == y) begin // ostall X bc dmem not ready to receive
            $display("stall_X is correct.  Expected: %h, Actual: %h", y,DUT.stall_X); pass();
        end else begin
            $display("stall_X is incorrect.  Expected: %h, Actual: %h", y,DUT.stall_X); fail(); $finish();
        end
        assert(DUT.stall_D == y) begin // stall D from cascade
            $display("stall_D is correct.  Expected: %h, Actual: %h", y,DUT.stall_D); pass();
        end else begin
            $display("stall_D is incorrect.  Expected: %h, Actual: %h", y,DUT.stall_D); fail(); $finish();
        end
        assert(DUT.stall_F == y) begin // stall F from cascade
            $display("stall_F is correct.  Expected: %h, Actual: %h", y,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", y,DUT.stall_F); fail(); $finish();
        end

        delay( $urandom_range(0, 127) ); // Random dmem stall
        dmem_reqstream_rdy = 1; // dmem ready to receive value
        dmem_respstream_val = 0; // dmem not ready to produce value

        // M
        @(negedge clk);
        assert(DUT.stall_M == y) begin // ostall M from dmem response not ready
            $display("stall_M is correct.  Expected: %h, Actual: %h", y,DUT.stall_M); pass();
        end else begin
            $display("stall_M is incorrect.  Expected: %h, Actual: %h", y,DUT.stall_M); fail(); $finish();
        end
        assert(DUT.stall_X == y) begin // stall X from cascade
            $display("stall_X is correct.  Expected: %h, Actual: %h", y,DUT.stall_X); pass();
        end else begin
            $display("stall_X is incorrect.  Expected: %h, Actual: %h", y,DUT.stall_X); fail(); $finish();
        end
        assert(DUT.stall_D == y) begin // stall D from cascade
            $display("stall_D is correct.  Expected: %h, Actual: %h", y,DUT.stall_D); pass();
        end else begin
            $display("stall_D is incorrect.  Expected: %h, Actual: %h", y,DUT.stall_D); fail(); $finish();
        end
        assert(DUT.stall_F == y) begin // stall F from cascade
            $display("stall_F is correct.  Expected: %h, Actual: %h", y,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", y,DUT.stall_F); fail(); $finish();
        end

        delay( $urandom_range(0, 127) ); // Random dmem stall
        dmem_reqstream_rdy = 1; // dmem ready to receive value
        dmem_respstream_val = 1; // dmem ready to produce value

        // W
        @(negedge clk);
        assert(DUT.stall_M == n) begin // ostall M from dmem response not ready
            $display("stall_M is correct.  Expected: %h, Actual: %h", n,DUT.stall_M); pass();
        end else begin
            $display("stall_M is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_M); fail(); $finish();
        end
        assert(DUT.stall_X == n) begin // stall X from cascade
            $display("stall_X is correct.  Expected: %h, Actual: %h", n,DUT.stall_X); pass();
        end else begin
            $display("stall_X is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_X); fail(); $finish();
        end
        assert(DUT.stall_D == n) begin // stall D from cascade
            $display("stall_D is correct.  Expected: %h, Actual: %h", n,DUT.stall_D); pass();
        end else begin
            $display("stall_D is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_D); fail(); $finish();
        end
        assert(DUT.stall_F == n) begin // stall F from cascade
            $display("stall_F is correct.  Expected: %h, Actual: %h", n,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_F); fail(); $finish();
        end
        assert(DUT.rf_wen_W == n) begin
            $display("rf_wen_W is correct.  Expected: %h, Actual: %h", y,DUT.rf_wen_W); pass();
        end else begin
            $display("rf_wen_W is incorrect.  Expected: %h, Actual: %h", y,DUT.rf_wen_W); fail(); $finish();
        end

        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #33 Test CSRR with Stall
        //--------------------------------------------------------------------
        //Initalize all the signal inital values.
        reset = 1;
        @(negedge clk);
        reset = 0;
        imem_respstream_val = 1'b1; // Simulate imem response ready
        imul_req_rdy_D = 1; // Say imul ready so we don't stall the whole pipeline indefinitely
        mngr2proc_val = 0; // mngr not ready yet so need to stall

        $display("");
        $display("Test CSRR with mngr Stall");

        // F
        @(negedge clk);
        assert(DUT.stall_F == n) begin
            $display("stall_F is correct.  Expected: %h, Actual: %h", n,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_F); fail(); $finish();
        end
        assert(DUT.val_D == n) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", n,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", n,DUT.val_D); fail(); $finish();
        end

        // D
        @(negedge clk);
        inst_D = 32'b11111100000000000010000011110011; // csrr x1, 12'hFC0 (mngr2proc)
        #1
        assert(DUT.inst_D  == 32'b11111100000000000010000011110011) begin
            $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b11111100000000000010000011110011,DUT.inst_D); pass();
        end else begin
            $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b11111100000000000010000011110011,DUT.inst_D); fail(); $finish();
        end
        assert(DUT.val_D == y) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", y,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.val_D); fail(); $finish();
        end
        assert(DUT.inst_val_D == y) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", y,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.j_type_D == j_na) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.br_type_D == br_na) begin
            $display("br_type_D is correct.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); pass();
        end else begin
            $display("br_type_D is incorrect.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); fail(); $finish();
        end
        assert(DUT.imm_type_D == imm_i) begin
            $display("imm_type_D is correct.  Expected: %h, Actual: %h", imm_i,DUT.imm_type_D); pass();
        end else begin
            $display("imm_type_D is incorrect.  Expected: %h, Actual: %h", imm_i,DUT.imm_type_D); fail(); $finish();
        end
        assert(DUT.rs1_en_D == n) begin
            $display("rs1_en_D is correct.  Expected: %h, Actual: %h",n,DUT.rs1_en_D); pass();
        end else begin
            $display("rs1_en_D is incorrect.  Expected: %h, Actual: %h", n,DUT.rs1_en_D); fail(); $finish();
        end
        assert(DUT.op2_sel_D == bm2_csr) begin
            $display("op2_sel_D is correct.  Expected: %h, Actual: %h", bm2_csr,DUT.op2_sel_D); pass();
        end else begin
            $display("op2_sel_D is incorrect.  Expected: %h, Actual: %h", bm2_csr,DUT.op2_sel_D); fail(); $finish();
        end
        assert(DUT.rs2_en_D == n) begin
            $display("rs2_en_D is correct.  Expected: %h, Actual: %h", n,DUT.rs2_en_D); pass();
        end else begin
            $display("rs2_en_D is incorrect.  Expected: %h, Actual: %h", n,DUT.rs2_en_D); fail(); $finish();
        end
        assert(DUT.alu_fn_D == alu_cp1) begin
            $display("alu_fn_D is correct.  Expected: %h, Actual: %h", alu_cp1,DUT.alu_fn_D); pass();
        end else begin
            $display("alu_fn_D is incorrect.  Expected: %h, Actual: %h", alu_cp1,DUT.alu_fn_D); fail(); $finish();
        end
        assert(DUT.ex_result_sel_D == ex_alu) begin
            $display("ex_result_sel_D is correct.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); pass();
        end else begin
            $display("ex_result_sel_D is incorrect.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); fail(); $finish();
        end
        assert(DUT.mul_D == n) begin
            $display("mul_D is correct.  Expected: %h, Actual: %h", n,DUT.mul_D); pass();
        end else begin
            $display("mul_D is incorrect.  Expected: %h, Actual: %h", n,DUT.mul_D); fail(); $finish();
        end
        assert(DUT.dmem_reqstream_type_D == nr) begin
            $display("dmem_reqstream_type_D is correct.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); pass();
        end else begin
            $display("dmem_reqstream_type_D is incorrect.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); fail(); $finish();
        end
        assert(DUT.wb_result_sel_D == wm_a) begin
            $display("wb_result_sel_D is correct.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); pass();
        end else begin
            $display("wb_result_sel_D is incorrect.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); fail(); $finish();
        end
        assert(DUT.rf_wen_D == y) begin
            $display("rf_wen_D is correct.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); pass();
        end else begin
            $display("rf_wen_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rf_wen_D); fail(); $finish();
        end
        assert(DUT.csrr_D == y) begin
            $display("csrr_D is correct.  Expected: %h, Actual: %h", y,DUT.csrr_D); pass();
        end else begin
            $display("csrr_D is incorrect.  Expected: %h, Actual: %h", y,DUT.csrr_D); fail(); $finish();
        end
        assert(DUT.csrw_D == n) begin
            $display("csrw_D is correct.  Expected: %h, Actual: %h", n,DUT.csrw_D); pass();
        end else begin
            $display("csrw_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrw_D); fail(); $finish();
        end
        assert(DUT.csrr_sel_D == 2'd0) begin
            $display("csrw_D is correct.  Expected: %h, Actual: %h", 2'd0,DUT.csrw_D); pass();
        end else begin
            $display("csrw_D is incorrect.  Expected: %h, Actual: %h", 2'd0,DUT.csrw_D); fail(); $finish();
        end
        assert(DUT.stall_D == y) begin // ostall D since mngr is not ready to send value
            $display("stall_D is correct.  Expected: %h, Actual: %h", y,DUT.stall_D); pass();
        end else begin
            $display("stall_D is incorrect.  Expected: %h, Actual: %h", y,DUT.stall_D); fail(); $finish();
        end
        assert(DUT.stall_F == y) begin // stall F from cascade
            $display("stall_F is correct.  Expected: %h, Actual: %h", y,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", y,DUT.stall_F); fail(); $finish();
        end
        assert(DUT.mngr2proc_rdy == n) begin
            $display("mngr2proc_rdy is correct.  Expected: %h, Actual: %h", n,DUT.mngr2proc_rdy); pass();
        end else begin
            $display("mngr2proc_rdy is incorrect.  Expected: %h, Actual: %h", n,DUT.mngr2proc_rdy); fail(); $finish();
        end

        delay( $urandom_range(0, 127) ); // Random mngr2proc stall
        mngr2proc_val = 1; // mngr2proc ready to produce value

        // X
        @(negedge clk);
        assert(DUT.stall_D == n) begin // D no longer stalling
            $display("stall_D is correct.  Expected: %h, Actual: %h", n,DUT.stall_D); pass();
        end else begin
            $display("stall_D is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_D); fail(); $finish();
        end
        assert(DUT.stall_F == n) begin // F no longer stalling
            $display("stall_F is correct.  Expected: %h, Actual: %h", n,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_F); fail(); $finish();
        end
        assert(DUT.mngr2proc_rdy == y) begin
            $display("mngr2proc_rdy is correct.  Expected: %h, Actual: %h", y,DUT.mngr2proc_rdy); pass();
        end else begin
            $display("mngr2proc_rdy is incorrect.  Expected: %h, Actual: %h", y,DUT.mngr2proc_rdy); fail(); $finish();
        end

        // M 
        @(negedge clk);

        // W
        @(negedge clk);
        assert(DUT.rf_wen_W == y) begin
            $display("rf_wen_W is correct.  Expected: %h, Actual: %h", y,DUT.rf_wen_W); pass();
        end else begin
            $display("rf_wen_W is incorrect.  Expected: %h, Actual: %h", y,DUT.rf_wen_W); fail(); $finish();
        end
        assert(DUT.rf_waddr_W == 5'd1) begin
            $display("rf_waddr_W is correct.  Expected: %h, Actual: %h", 5'd1,DUT.rf_waddr_W); pass();
        end else begin
            $display("rf_waddr_W is incorrect.  Expected: %h, Actual: %h", 5'd1,DUT.rf_waddr_W); fail(); $finish();
        end

        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #34 Test CSRW with Stall
        //--------------------------------------------------------------------
        //Initalize all the signal inital values.
        reset = 1;
        @(negedge clk);
        reset = 0;
        imem_respstream_val = 1'b1; // Simulate imem response ready
        imul_req_rdy_D = 1; // Say imul ready so we don't stall the whole pipeline indefinitely
        proc2mngr_rdy = 0; // mngr not ready to receive data from processor

        $display("");
        $display("Test CSRW with mngr Stall");

        // F
        @(negedge clk);
        assert(DUT.stall_F == n) begin
            $display("stall_F is correct.  Expected: %h, Actual: %h", n,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_F); fail(); $finish();
        end
        assert(DUT.val_D == n) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", n,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", n,DUT.val_D); fail(); $finish();
        end

        // D
        @(negedge clk);
        inst_D = 32'b01111100000000001001000001110011; // csrw 12'h7C0, x1 (proc2mngr)
        #1
        assert(DUT.inst_D  == 32'b01111100000000001001000001110011) begin
            $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b01111100000000001001000001110011,DUT.inst_D); pass();
        end else begin
            $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b01111100000000001001000001110011,DUT.inst_D); fail(); $finish();
        end
        assert(DUT.val_D == y) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", y,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.val_D); fail(); $finish();
        end
        assert(DUT.inst_val_D == y) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", y,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.j_type_D == j_na) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", j_na,DUT.inst_val_D); fail(); $finish();
        end
        assert(DUT.br_type_D == br_na) begin
            $display("br_type_D is correct.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); pass();
        end else begin
            $display("br_type_D is incorrect.  Expected: %h, Actual: %h", br_na,DUT.br_type_D); fail(); $finish();
        end
        assert(DUT.imm_type_D == imm_i) begin
            $display("imm_type_D is correct.  Expected: %h, Actual: %h", imm_i,DUT.imm_type_D); pass();
        end else begin
            $display("imm_type_D is incorrect.  Expected: %h, Actual: %h", imm_i,DUT.imm_type_D); fail(); $finish();
        end
        assert(DUT.op1_sel_D == bm1_rf) begin
            $display("op1_sel_D is correct.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); pass();
        end else begin
            $display("op1_sel_D is incorrect.  Expected: %h, Actual: %h", bm1_rf,DUT.op1_sel_D); fail(); $finish();
        end
        assert(DUT.rs1_en_D == y) begin
            $display("rs1_en_D is correct.  Expected: %h, Actual: %h",y,DUT.rs1_en_D); pass();
        end else begin
            $display("rs1_en_D is incorrect.  Expected: %h, Actual: %h", y,DUT.rs1_en_D); fail(); $finish();
        end
        assert(DUT.op2_sel_D == bm2_rf) begin
            $display("op2_sel_D is correct.  Expected: %h, Actual: %h", bm2_rf,DUT.op2_sel_D); pass();
        end else begin
            $display("op2_sel_D is incorrect.  Expected: %h, Actual: %h", bm2_rf,DUT.op2_sel_D); fail(); $finish();
        end
        assert(DUT.rs2_en_D == n) begin
            $display("rs2_en_D is correct.  Expected: %h, Actual: %h", n,DUT.rs2_en_D); pass();
        end else begin
            $display("rs2_en_D is incorrect.  Expected: %h, Actual: %h", n,DUT.rs2_en_D); fail(); $finish();
        end
        assert(DUT.alu_fn_D == alu_cp0) begin
            $display("alu_fn_D is correct.  Expected: %h, Actual: %h", alu_cp0,DUT.alu_fn_D); pass();
        end else begin
            $display("alu_fn_D is incorrect.  Expected: %h, Actual: %h", alu_cp0,DUT.alu_fn_D); fail(); $finish();
        end
        assert(DUT.ex_result_sel_D == ex_alu) begin
            $display("ex_result_sel_D is correct.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); pass();
        end else begin
            $display("ex_result_sel_D is incorrect.  Expected: %h, Actual: %h", ex_alu,DUT.ex_result_sel_D); fail(); $finish();
        end
        assert(DUT.mul_D == n) begin
            $display("mul_D is correct.  Expected: %h, Actual: %h", n,DUT.mul_D); pass();
        end else begin
            $display("mul_D is incorrect.  Expected: %h, Actual: %h", n,DUT.mul_D); fail(); $finish();
        end
        assert(DUT.dmem_reqstream_type_D == nr) begin
            $display("dmem_reqstream_type_D is correct.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); pass();
        end else begin
            $display("dmem_reqstream_type_D is incorrect.  Expected: %h, Actual: %h", nr,DUT.dmem_reqstream_type_D); fail(); $finish();
        end
        assert(DUT.wb_result_sel_D == wm_a) begin
            $display("wb_result_sel_D is correct.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); pass();
        end else begin
            $display("wb_result_sel_D is incorrect.  Expected: %h, Actual: %h", wm_a,DUT.wb_result_sel_D); fail(); $finish();
        end
        assert(DUT.rf_wen_D == n) begin
            $display("rf_wen_D is correct.  Expected: %h, Actual: %h", n,DUT.rf_wen_D); pass();
        end else begin
            $display("rf_wen_D is incorrect.  Expected: %h, Actual: %h", n,DUT.rf_wen_D); fail(); $finish();
        end
        assert(DUT.csrr_D == n) begin
            $display("csrr_D is correct.  Expected: %h, Actual: %h", n,DUT.csrr_D); pass();
        end else begin
            $display("csrr_D is incorrect.  Expected: %h, Actual: %h", n,DUT.csrr_D); fail(); $finish();
        end
        assert(DUT.csrw_D == y) begin
            $display("csrw_D is correct.  Expected: %h, Actual: %h", y,DUT.csrw_D); pass();
        end else begin
            $display("csrw_D is incorrect.  Expected: %h, Actual: %h", y,DUT.csrw_D); fail(); $finish();
        end
        assert(DUT.csrr_sel_D == 2'd0) begin
            $display("csrw_D is correct.  Expected: %h, Actual: %h", 2'd0,DUT.csrw_D); pass();
        end else begin
            $display("csrw_D is incorrect.  Expected: %h, Actual: %h", 2'd0,DUT.csrw_D); fail(); $finish();
        end

        // X
        @(negedge clk);

        // M 
        @(negedge clk);

        // W
        @(negedge clk);
        assert(DUT.stall_F == y) begin
            $display("stall_F is correct.  Expected: %h, Actual: %h", y,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", y,DUT.stall_F); fail(); $finish();
        end
        assert(DUT.stall_D == y) begin
            $display("stall_D is correct.  Expected: %h, Actual: %h", y,DUT.stall_D); pass();
        end else begin
            $display("stall_D is incorrect.  Expected: %h, Actual: %h", y,DUT.stall_D); fail(); $finish();
        end
        assert(DUT.stall_X == y) begin
            $display("stall_X is correct.  Expected: %h, Actual: %h", y,DUT.stall_X); pass();
        end else begin
            $display("stall_X is incorrect.  Expected: %h, Actual: %h", y,DUT.stall_X); fail(); $finish();
        end
        assert(DUT.stall_M == y) begin
            $display("stall_M is correct.  Expected: %h, Actual: %h", y,DUT.stall_M); pass();
        end else begin
            $display("stall_M is incorrect.  Expected: %h, Actual: %h", y,DUT.stall_M); fail(); $finish();
        end
        assert(DUT.stall_W == y) begin
            $display("stall_W is correct.  Expected: %h, Actual: %h", y,DUT.stall_W); pass();
        end else begin
            $display("stall_W is incorrect.  Expected: %h, Actual: %h", y,DUT.stall_W); fail(); $finish();
        end
        assert(DUT.rf_wen_W == n) begin
            $display("rf_wen_W is correct.  Expected: %h, Actual: %h", n,DUT.rf_wen_W); pass();
        end else begin
            $display("rf_wen_W is incorrect.  Expected: %h, Actual: %h", n,DUT.rf_wen_W); fail(); $finish();
        end
        assert(DUT.proc2mngr_val == n) begin
            $display("proc2mngr_val is correct.  Expected: %h, Actual: %h", n,DUT.proc2mngr_val); pass();
        end else begin
            $display("proc2mngr_val is incorrect.  Expected: %h, Actual: %h", n,DUT.proc2mngr_val); fail(); $finish();
        end

        delay( $urandom_range(0, 127) ); // Random proc2mngr stall
        proc2mngr_rdy = 1; // mngr ready to receive value

        @(negedge clk);
        assert(DUT.stall_F == n) begin
            $display("stall_F is correct.  Expected: %h, Actual: %h", n,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_F); fail(); $finish();
        end
        assert(DUT.stall_D == n) begin
            $display("stall_D is correct.  Expected: %h, Actual: %h", n,DUT.stall_D); pass();
        end else begin
            $display("stall_D is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_D); fail(); $finish();
        end
        assert(DUT.stall_X == n) begin
            $display("stall_X is correct.  Expected: %h, Actual: %h", n,DUT.stall_X); pass();
        end else begin
            $display("stall_X is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_X); fail(); $finish();
        end
        assert(DUT.stall_M == n) begin
            $display("stall_M is correct.  Expected: %h, Actual: %h", n,DUT.stall_M); pass();
        end else begin
            $display("stall_M is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_M); fail(); $finish();
        end
        assert(DUT.stall_W == n) begin
            $display("stall_W is correct.  Expected: %h, Actual: %h", n,DUT.stall_W); pass();
        end else begin
            $display("stall_W is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_W); fail(); $finish();
        end
        assert(DUT.proc2mngr_val == y) begin
            $display("proc2mngr_val is correct.  Expected: %h, Actual: %h", y,DUT.proc2mngr_val); pass();
        end else begin
            $display("proc2mngr_val is incorrect.  Expected: %h, Actual: %h", y,DUT.proc2mngr_val); fail(); $finish();
        end

        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #35 Test Load-Use Stalling with Bypassing to rs1 and rs2 from M to D
        // 1: lw x3, 2(x1)
        // 2: add x4, x3, x3
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.
        reset = 1;
        @(negedge clk);
        reset = 0;
        imem_respstream_val = 1'b1; // Simulate imem response ready
        imul_req_rdy_D = 1; // Say imul ready so we don't stall the whole pipeline indefinitely

        $display("");
        $display("Test ADD and ADDI with stalling on rs1 and rs2 from X, M, W to D");

        // Cycle 1: F - 1
        @(negedge clk);
        assert(DUT.stall_F == n) begin
            $display("stall_F is correct.  Expected: %h, Actual: %h", n,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_F); fail(); $finish();
        end
        assert(DUT.val_D == n) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", n,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", n,DUT.val_D); fail(); $finish();
        end

        // Cycle 2: F - 2, D = 1
        @(negedge clk);
        inst_D = 32'b00000000001000001010000110000011; // lw x3, 2(x1)
        #1 // Time to propagate inst_D - needed for testbench to work properly but works normally with assembly
        assert(DUT.stall_F == n) begin
            $display("stall_F is correct.  Expected: %h, Actual: %h", n,DUT.stall_F); pass();
        end else begin
            $display("stall_F is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_F); fail(); $finish();
        end
        assert(DUT.val_D == y) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", y,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.val_D); fail(); $finish();
        end
        assert(DUT.stall_D == n) begin
            $display("stall_D is correct.  Expected: %h, Actual: %h", n,DUT.stall_D); pass();
        end else begin
            $display("stall_D is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_D); fail(); $finish();
        end
        assert(DUT.squash_D ==  n) begin
            $display("squash_D is correct.  Expected: %h, Actual: %h", n,DUT.squash_D); pass();
        end else begin
            $display("squash_D is incorrect.  Expected: %h, Actual: %h", n,DUT.squash_D); fail(); $finish();
        end
        assert(DUT.next_val_D  == y) begin
            $display("next_val_D is correct.  Expected: %h, Actual: %h", y,DUT.next_val_D); pass();
        end else begin
            $display("next_val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.next_val_D); fail(); $finish();
        end

        // Cycle 3: D = 2, X = 1
        @(negedge clk);
        inst_D = 32'b00000000001100011000001000110011; // add x4, x3, x3
        #1
        assert(DUT.inst_D  == 32'b00000000001100011000001000110011) begin
            $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b00000000001100011000001000110011,DUT.inst_D); pass();
        end else begin
            $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b00000000001100011000001000110011,DUT.inst_D); fail(); $finish();
        end
        assert(DUT.val_D == y) begin
            $display("val_D is correct.  Expected: %h, Actual: %h", y,DUT.val_D); pass();
        end else begin
            $display("val_D is incorrect.  Expected: %h, Actual: %h", y,DUT.val_D); fail(); $finish();
        end
        assert(DUT.squash_D ==  n) begin
            $display("squash_D is correct.  Expected: %h, Actual: %h", n,DUT.squash_D); pass();
        end else begin
            $display("squash_D is incorrect.  Expected: %h, Actual: %h", n,DUT.squash_D); fail(); $finish();
        end
        assert(DUT.stall_D  == y) begin // D stalling from load use
            $display("stall_D is correct.  Expected: %h, Actual: %h", y,DUT.stall_D); pass();
        end else begin
            $display("stall_D is incorrect.  Expected: %h, Actual: %h", y,DUT.stall_D); fail(); $finish();
        end
        assert(DUT.ostall_load_use_X_rsl_D  == y) begin
            $display("ostall_load_use_X_rsl_D is correct.  Expected: %h, Actual: %h", y,DUT.ostall_load_use_X_rsl_D); pass();
        end else begin
            $display("ostall_load_use_X_rsl_D is incorrect.  Expected: %h, Actual: %h", y,DUT.ostall_load_use_X_rsl_D); fail(); $finish();
        end
        assert(DUT.ostall_load_use_X_rs2_D  == y) begin
            $display("ostall_load_use_X_rs2_D is correct.  Expected: %h, Actual: %h", y,DUT.ostall_load_use_X_rs2_D); pass();
        end else begin
            $display("ostall_load_use_X_rs2_D is incorrect.  Expected: %h, Actual: %h", y,DUT.ostall_load_use_X_rs2_D); fail(); $finish();
        end
        assert(DUT.stall_F  == y) begin // F stalling from cascade
            $display("stall_D is correct.  Expected: %h, Actual: %h", y,DUT.stall_D); pass();
        end else begin
            $display("stall_D is incorrect.  Expected: %h, Actual: %h", y,DUT.stall_D); fail(); $finish();
        end
        assert(DUT.next_val_D  == n) begin // D not valid
            $display("next_val_D is correct.  Expected: %h, Actual: %h", n,DUT.next_val_D); pass();
        end else begin
            $display("next_val_D is incorrect.  Expected: %h, Actual: %h", n,DUT.next_val_D); fail(); $finish();
        end
        assert(DUT.pc_redirect_D  == n) begin
            $display("pc_redirect_D is correct.  Expected: %h, Actual: %h", n,DUT.pc_redirect_D); pass();
        end else begin
            $display("pc_redirect_D is incorrect.  Expected: %h, Actual: %h", n,DUT.pc_redirect_D); fail(); $finish();
        end
        assert(DUT.pc_redirect_X  == n) begin
            $display("pc_redirect_X is correct.  Expected: %h, Actual: %h", n,DUT.pc_redirect_X); pass();
        end else begin
            $display("pc_redirect_X is incorrect.  Expected: %h, Actual: %h", n,DUT.pc_redirect_X); fail(); $finish();
        end
        assert(DUT.pc_sel_X  == 2'd3) begin
            $display("pc_sel_X is correct.  Expected: %h, Actual: %h", 2'd3,DUT.pc_sel_X); pass();
        end else begin
            $display("pc_sel_X is incorrect.  Expected: %h, Actual: %h", 2'd3,DUT.pc_sel_X); fail(); $finish();
        end
        assert(DUT.inst_X  == 32'b00000000001000001010000110000011) begin
            $display("inst_X is correct.  Expected: %h, Actual: %h", 32'b00000000001000001010000110000011,DUT.inst_X); pass();
        end else begin
            $display("inst_X is incorrect.  Expected: %h, Actual: %h", 32'b00000000001000001010000110000011,DUT.inst_X); fail(); $finish();
        end
        assert(DUT.stall_X == n) begin
            $display("stall_X is correct.  Expected: %h, Actual: %h", n,DUT.stall_X); pass();
        end else begin
            $display("stall_X is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_X); fail(); $finish();
        end
        assert(DUT.osquash_X ==  n) begin
            $display("osquash_X is correct.  Expected: %h, Actual: %h", n,DUT.osquash_X); pass();
        end else begin
            $display("osquash_X is incorrect.  Expected: %h, Actual: %h", n,DUT.osquash_X); fail(); $finish();
        end
        assert(DUT.next_val_X  == y) begin
            $display("next_val_X is correct.  Expected: %h, Actual: %h", y,DUT.next_val_X); pass();
        end else begin
            $display("next_val_X is incorrect.  Expected: %h, Actual: %h", y,DUT.next_val_X); fail(); $finish();
        end
        assert(DUT.dmem_reqstream_val == y) begin
            $display("dmem_reqstream_val is correct.  Expected: %h, Actual: %h", y,DUT.dmem_reqstream_val); pass();
        end else begin
            $display("dmem_reqstream_val is incorrect.  Expected: %h, Actual: %h", y,DUT.dmem_reqstream_val); fail(); $finish();
        end

        // Cycle 4: D = 1, X = NOP, M = 1
        @(negedge clk);
        assert(DUT.inst_D  == 32'b00000000001100011000001000110011) begin
            $display("inst_D is correct.  Expected: %h, Actual: %h", 32'b00000000001100011000001000110011,DUT.inst_D); pass();
        end else begin
            $display("inst_D is incorrect.  Expected: %h, Actual: %h", 32'b00000000001100011000001000110011,DUT.inst_D); fail(); $finish();
        end
        assert(DUT.inst_M  == 32'b00000000001000001010000110000011) begin
            $display("inst_M is correct.  Expected: %h, Actual: %h", 32'b00000000001000001010000110000011,DUT.inst_M); pass();
        end else begin
            $display("inst_M is incorrect.  Expected: %h, Actual: %h", 32'b00000000001000001010000110000011,DUT.inst_M); fail(); $finish();
        end
        assert(DUT.stall_M == n) begin
            $display("stall_M is correct.  Expected: %h, Actual: %h", n,DUT.stall_M); pass();
        end else begin
            $display("stall_M is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_M); fail(); $finish();
        end
        assert(DUT.next_val_X  == n) begin
            $display("next_val_X is correct.  Expected: %h, Actual: %h", n,DUT.next_val_X); pass();
        end else begin
            $display("next_val_X is incorrect.  Expected: %h, Actual: %h", n,DUT.next_val_X); fail(); $finish();
        end
        assert(DUT.next_val_M  == y) begin
            $display("next_val_M is correct.  Expected: %h, Actual: %h", y,DUT.next_val_M); pass();
        end else begin
            $display("next_val_M is incorrect.  Expected: %h, Actual: %h", y,DUT.next_val_M); fail(); $finish();
        end
        assert(DUT.bypass_waddr_M_rs1_D == y) begin // rs1 bypassing from X
            $display("bypass_waddr_M_rs1_D is correct.  Expected: %h, Actual: %h", y,DUT.bypass_waddr_M_rs1_D); pass();
        end else begin
            $display("bypass_waddr_M_rs1_D is incorrect.  Expected: %h, Actual: %h", y,DUT.bypass_waddr_M_rs1_D); fail(); $finish();
        end
        assert(DUT.op1_byp_sel_D == 2'd1) begin // rs1 bypassing from X
            $display("op1_byp_sel_D is correct.  Expected: %h, Actual: %h", 2'd1,DUT.op1_byp_sel_D); pass();
        end else begin
            $display("op1_byp_sel_D is incorrect.  Expected: %h, Actual: %h", 2'd1,DUT.op1_byp_sel_D); fail(); $finish();
        end
        assert(DUT.bypass_waddr_M_rs2_D == y) begin // rs2 bypassing from X
            $display("bypass_waddr_M_rs2_D is correct.  Expected: %h, Actual: %h", y,DUT.bypass_waddr_M_rs2_D); pass();
        end else begin
            $display("bypass_waddr_M_rs2_D is incorrect.  Expected: %h, Actual: %h", y,DUT.bypass_waddr_M_rs2_D); fail(); $finish();
        end
        assert(DUT.op2_byp_sel_D == 2'd2) begin // rs1 bypassing from X
            $display("op2_byp_sel_D is correct.  Expected: %h, Actual: %h", 2'd2,DUT.op2_byp_sel_D); pass();
        end else begin
            $display("op2_byp_sel_D is incorrect.  Expected: %h, Actual: %h", 2'd2,DUT.op2_byp_sel_D); fail(); $finish();
        end
        assert(DUT.stall_D == n) begin // D not stalling
            $display("stall_D is correct.  Expected: %h, Actual: %h", n,DUT.stall_D); pass();
        end else begin
            $display("stall_D is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_D); fail(); $finish();
        end
        assert(DUT.ostall_load_use_X_rsl_D  == n) begin // load use on rs1 resolved
            $display("ostall_load_use_X_rsl_D is correct.  Expected: %h, Actual: %h", n,DUT.ostall_load_use_X_rsl_D); pass();
        end else begin
            $display("ostall_load_use_X_rsl_D is incorrect.  Expected: %h, Actual: %h", n,DUT.ostall_load_use_X_rsl_D); fail(); $finish();
        end
        assert(DUT.ostall_load_use_X_rs2_D  == n) begin // load use on rs2 resolved
            $display("ostall_load_use_X_rs2_D is correct.  Expected: %h, Actual: %h", n,DUT.ostall_load_use_X_rs2_D); pass();
        end else begin
            $display("ostall_load_use_X_rs2_D is incorrect.  Expected: %h, Actual: %h", n,DUT.ostall_load_use_X_rs2_D); fail(); $finish();
        end
        assert(DUT.ostall_waddr_X_rs1_D == n) begin // no rs1 RAW from X since bypassing
            $display("ostall_waddr_X_rs1_D is correct.  Expected: %h, Actual: %h", n,DUT.ostall_waddr_X_rs1_D); pass();
        end else begin
            $display("ostall_waddr_X_rs1_D is incorrect.  Expected: %h, Actual: %h", n,DUT.ostall_waddr_X_rs1_D); fail(); $finish();
        end
        assert(DUT.ostall_waddr_X_rs2_D == n) begin // no rs2 RAW from X since bypassing
            $display("ostall_waddr_X_rs2_D is correct.  Expected: %h, Actual: %h", n,DUT.ostall_waddr_X_rs2_D); pass();
        end else begin
            $display("ostall_waddr_X_rs2_D is incorrect.  Expected: %h, Actual: %h", n,DUT.ostall_waddr_X_rs2_D); fail(); $finish();
        end

        // Cycle 5: X = 1, M = NOP, W = 1
        @(negedge clk);
        assert(DUT.inst_X  == 32'b00000000001100011000001000110011) begin
            $display("inst_X is correct.  Expected: %h, Actual: %h", 32'b00000000001100011000001000110011,DUT.inst_X); pass();
        end else begin
            $display("inst_X is incorrect.  Expected: %h, Actual: %h", 32'b00000000001100011000001000110011,DUT.inst_X); fail(); $finish();
        end
        assert(DUT.inst_W  == 32'b00000000001000001010000110000011) begin
            $display("inst_W is correct.  Expected: %h, Actual: %h", 32'b00000000001000001010000110000011,DUT.inst_W); pass();
        end else begin
            $display("inst_W is incorrect.  Expected: %h, Actual: %h", 32'b00000000001000001010000110000011,DUT.inst_W); fail(); $finish();
        end
        assert(DUT.next_val_M  == n) begin
            $display("next_val_M is correct.  Expected: %h, Actual: %h", n,DUT.next_val_M); pass();
        end else begin
            $display("next_val_M is incorrect.  Expected: %h, Actual: %h", n,DUT.next_val_M); fail(); $finish();
        end
        assert(DUT.rf_wen_W  == y) begin
            $display("rf_wen_W is correct.  Expected: %h, Actual: %h", y,DUT.rf_wen_W); pass();
        end else begin
            $display("rf_wen_W is incorrect.  Expected: %h, Actual: %h", y,DUT.rf_wen_W); fail(); $finish();
        end
        assert(DUT.rf_waddr_W  == 5'd3) begin
            $display("rf_waddr_W is correct.  Expected: %h, Actual: %h", 5'd3,DUT.rf_waddr_W); pass();
        end else begin
            $display("rf_waddr_W is incorrect.  Expected: %h, Actual: %h", 5'd3,DUT.rf_waddr_W); fail(); $finish();
        end
        assert(DUT.stall_W == n) begin
            $display("stall_W is correct.  Expected: %h, Actual: %h", n,DUT.stall_W); pass();
        end else begin
            $display("stall_W is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_W); fail(); $finish();
        end

        // Cycle 6: M = 1, W = NOP
        @(negedge clk);
        assert(DUT.inst_M  == 32'b00000000001100011000001000110011) begin
            $display("inst_M is correct.  Expected: %h, Actual: %h", 32'b00000000001100011000001000110011,DUT.inst_M); pass();
        end else begin
            $display("inst_M is incorrect.  Expected: %h, Actual: %h", 32'b00000000001100011000001000110011,DUT.inst_M); fail(); $finish();
        end

        // Cycle 7: W = 1
        @(negedge clk);
        assert(DUT.inst_W  == 32'b00000000001100011000001000110011) begin
            $display("inst_W is correct.  Expected: %h, Actual: %h", 32'b00000000001100011000001000110011,DUT.inst_W); pass();
        end else begin
            $display("inst_W is incorrect.  Expected: %h, Actual: %h", 32'b00000000001100011000001000110011,DUT.inst_W); fail(); $finish();
        end
        assert(DUT.rf_wen_W  == y) begin
            $display("rf_wen_W is correct.  Expected: %h, Actual: %h", y,DUT.rf_wen_W); pass();
        end else begin
            $display("rf_wen_W is incorrect.  Expected: %h, Actual: %h", y,DUT.rf_wen_W); fail(); $finish();
        end
        assert(DUT.rf_waddr_W  == 5'd4) begin
            $display("rf_waddr_W is correct.  Expected: %h, Actual: %h", 5'd4,DUT.rf_waddr_W); pass();
        end else begin
            $display("rf_waddr_W is incorrect.  Expected: %h, Actual: %h", 5'd4,DUT.rf_waddr_W); fail(); $finish();
        end
        assert(DUT.stall_W == n) begin
            $display("stall_W is correct.  Expected: %h, Actual: %h", n,DUT.stall_W); pass();
        end else begin
            $display("stall_W is incorrect.  Expected: %h, Actual: %h", n,DUT.stall_W); fail(); $finish();
        end

        delay( $urandom_range(0, 127) );

        $display();
        $display("All tests passed!");
        $finish();

    end

    task delay( int delay_val );
      begin
          for( int i = 0; i < delay_val; i = i + 1 ) begin
              #1;
          end
      end
    endtask

endmodule

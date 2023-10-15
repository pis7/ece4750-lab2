//========================================================================
// ub_IntMul
//========================================================================
// A basic Verilog test bench for the multiplier

`default_nettype none
`timescale 1ps/1ps

`ifndef DESIGN
  `define DESIGN IntMulBase
`endif

`include `"`DESIGN.v`"
`include "vc/trace.v"

//------------------------------------------------------------------------
// Top-level module
//------------------------------------------------------------------------

module top(  input logic clk, input logic linetrace );

    // TODO: simulate all instructions

    // DUT signals
    logic        clk;
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
    logic [2:0]  mem_action;

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
    lab2_proc_ProcBaseCtrl proc
    (
        .*
    )

    // Line trace
    initial begin 
        while(1) begin
            @(negedge clk);  
                if (linetrace) begin
                    proc.display_trace;
                end
        end 
        $stop;
    end

    // Tests
    initial begin

        $display("Test NOP Outputs")
        inst_D = {{25{1'b0}}, 7'b0010011} // NOP binary

    end

endmodule

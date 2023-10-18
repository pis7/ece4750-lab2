//========================================================================
// utb_ProcBaseCtrl
//========================================================================
// A basic Verilog unit test bench for the Processor Base Control module

`default_nettype none
`timescale 1ps/1ps

`include "ProcBaseCtrl.v"
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
    lab2_proc_ProcBaseCtrl DUT
    (
        .*
    );

    // Tests
    initial begin

        //--------------------------------------------------------------------
        // Unit Testing #1 Test NOP
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.
        reset = 1;
        @(negedge clk);
        reset = 0;
        imem_respstream_val = 1'b1; // Simulate imem response ready
        @(negedge clk);


        $display("");
        $display("Test NOP Outputs");

        // F
        @(negedge clk);

        delay( $urandom_range(0, 127) );

        // D
        @(negedge clk);
        inst_D = 32'b00000000000000000000000000010011;
        assert(DUT.inst_val_D == 1'b1) begin
            $display("inst_val_D is correct.  Expected: %h, Actual: %h", 1'b1,DUT.inst_val_D); pass();
        end else begin
            $display("inst_val_D is incorrect.  Expected: %h, Actual: %h", 1'b1,DUT.inst_val_D); fail(); $finish();
        end

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

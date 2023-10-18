//========================================================================
// utb_immgen
//========================================================================
// A basic Verilog test bench for the datapath immediate generator

`default_nettype none
`timescale 1ps/1ps

`include `"`DESIGN.v`"
`include "vc/trace.v"

//------------------------------------------------------------------------
// Top-level module
//------------------------------------------------------------------------
module top(input logic clk, input logic linetrace);

    // DUT signals
    logic [2:0] imm_type;
    logic [31:0] inst;
    logic [31:0] imm;
    logic [31:0] testImm;

    // DUT
    lab2_proc_ProcDpathImmGen immgen
    (
        .imm_type(imm_type),
        .inst(inst),
        .imm(imm)
    );

    // Tests
    initial begin
        for (int x = 0; x < 100; x++) begin // Test many random signed ints
            for (int i = 0; i < 5; i++) begin
                test_task($random, i[2:0]); // Test all immediate types
            end
        end
        $finish;
    end

    // Task to run tests
    task test_task([31:0] testInst, [2:0] testType);
    begin

        // Set immgen inputs
        inst = testInst;
        imm_type = testType;

        // Check the result
        case (testType)
            3'd0: // I-type
                testImm = { {21{testInst[31]}}, testInst[30:25], testInst[24:21], testInst[20] };

            3'd1: // S-type
                testImm = { {21{testInst[31]}}, testInst[30:25], testInst[11:8], testInst[7] };

            3'd2: // B-type
                testImm = { {20{testInst[31]}}, testInst[7], testInst[30:25], testInst[11:8], 1'b0 };

            3'd3: // U-type
                testImm = { testInst[31], testInst[30:25], testInst[24:21], testInst[20], testInst[19:12], 12'b0};

            3'd4: // J-type
                testImm = { {12{testInst[31]}}, testInst[19:12], testInst[20], testInst[30:25], testInst[24:21], 1'b0};

            default:
                testImm = 32'bx;
        endcase
        #1 // Give time to set immgen inputs before checking outputs
        assert (testImm == imm) begin
            pass(); // Book keeping
            $display("OK: inst = %x, imm = %x vs expImm = %x", inst, imm, testImm);
        end
        else begin
            fail(); // Book keeping
            $display("Failed: inst = %x, imm = %x vs expImm = %x", inst, imm, testImm);
        end
    end
    endtask

endmodule

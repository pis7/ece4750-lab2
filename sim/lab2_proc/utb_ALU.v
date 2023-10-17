//========================================================================
// utb_ALU
//========================================================================
// A basic Verilog test bench for the datapath ALU

`default_nettype none
`timescale 1ps/1ps

`include `"`DESIGN.v`"
`include "vc/trace.v"

//------------------------------------------------------------------------
// Top-level module
//------------------------------------------------------------------------
module top(input logic clk, input logic linetrace);

    // DUT signals
    logic [31:0] in0;
    logic [31:0] in1;
    logic [ 3:0] fn;
    logic [31:0] out;
    logic        ops_eq;
    logic        ops_lt;
    logic        ops_ltu;
    logic [31:0] expOut;

    // DUT
    lab2_proc_ProcDpathAlu alu
    (
        .in0 (in0),
        .in1 (in1),
        .fn  (fn),
        .out (out),
        .ops_eq (ops_eq),
        .ops_lt (ops_lt),
        .ops_ltu (ops_ltu)
    );

    // Tests
    initial begin
        test_task(32'd40, 32'd40, 4'd0);
        for (int x = 0; x < 100; x++) begin // Test many random signed ints
            for (int i = 0; i < 13; i++) begin
                test_task($random, $random, i[3:0]); // Test all functions of ALU
            end
        end
        test_task(32'd40, 32'd40, 4'd1);
        $finish;
    end

    // Task to run tests
    task test_task([31:0] a,  [31:0] b, [3:0] inFn);
    begin

        // Set ALU inputs
        in0 = a;
        in1 = b;
        fn = inFn;

        // Check the result
        case (fn)
            4'd0    : expOut = in0 + in1;                                // ADD
            4'd1    : expOut = in0 - in1;                                // SUB
            4'd2    : expOut = in0 & in1;                                // AND
            4'd3    : expOut = in0 | in1;                                // OR
            4'd4    : expOut = in0 ^ in1;                                // XOR
            4'd5    : expOut = {31'b0, $signed(a) < $signed(b)};         // SLT
            4'd6    : expOut = {31'b0, a < b};                           // SLTU
            4'd7    : expOut = in0 >>> in1[4:0];                         // SRA
            4'd8    : expOut = in0 >> in1[4:0];                          // SRL
            4'd9    : expOut = in0 << in1[4:0];                          // SLL
            4'd11   : expOut = in0;                                      // CP OP0
            4'd12   : expOut = in1;                                      // CP OP1
            default : expOut = 32'b0;
        endcase
        #1 // Give time to set ALU inputs before checking outputs
        assert (expOut == out && 
                (a == b ? ops_eq: 1) &&
                (a < b ? ops_ltu : 1) &&
                ($signed(a) < $signed(b) ? ops_lt : 1)) begin
            pass(); // Book keeping
            $display( "OK: in0 = %d, in1 = %d, out = %d vs expOut = %d, fn = %d, ops_eq = %d, ops_ltu = %d, ops_lt = %d", a, b, out, expOut, fn, ops_eq, ops_ltu, ops_lt);
        end
        else begin
            fail(); // Book keeping
            $error( "Failed: in0 = %d, in1 = %d, out = %d vs expOut = %d, fn = %d, ops_eq = %d, ops_ltu = %d, ops_lt = %d", a, b, out, expOut, fn, ops_eq, ops_ltu, ops_lt);
        end

    end
    endtask

endmodule

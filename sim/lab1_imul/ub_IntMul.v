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

  // DUT signals
  logic        reset;

  logic        istream_val;
  logic        istream_rdy;
  logic [63:0] istream_msg;

  logic        ostream_rdy;
  logic        ostream_val;
  logic [31:0] ostream_msg;

  // Testbench signals
  logic        istream_val_f;
  logic        ostream_rdy_f;

  logic [31:0] istream_msg_a;
  logic [31:0] istream_msg_b;

  // Form istream_msg
  always_comb begin
    istream_msg[63:32] = istream_msg_a;
    istream_msg[31: 0] = istream_msg_b;
  end

  //----------------------------------------------------------------------
  // Module instantiations
  //----------------------------------------------------------------------
  
  // Instantiate the multiplier

  lab1_imul_`DESIGN imul
  (
    .clk   (clk),
    .reset (reset),
    .istream_val(istream_val),
    .istream_rdy(istream_rdy),
    .istream_msg(istream_msg),
    .ostream_val   (ostream_val),
    .ostream_rdy   (ostream_rdy),
    .ostream_msg   (ostream_msg)
  );

  initial begin 
    while(1) begin
      @(negedge clk);  
      if (linetrace) begin
           imul.display_trace;
      end
    end 
    $stop;
   end

  //----------------------------------------------------------------------
  // Run the Test Bench
  //----------------------------------------------------------------------

  initial begin

    $display("Start of Testbench");
    // Send reset and init values of all signals
    reset         = 1;
    istream_msg_a = 0;
    istream_msg_b = 0;
    istream_val   = 0;

    // After a moment, de-assert reset
    #10 
    reset = 0;

     //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // Random Micro-benchmark
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

    $display("Random Test");
    for( integer x = 0; x < 100; x++ ) begin
      test_task( $random, $random );
    end


  //--------------------------------------------------------------------
  // Personal Test Bench
  //--------------------------------------------------------------------
  // This is where Parker and George made our own Test Cases

    // // P_Test #0
    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // // Keep ostream_rdy deasserted until a few clock cycles later
    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    $display("P_Test #0 - Test ostream_rdy control");

    // Reset multiplier
    reset = 1'b1;
    #10
    reset = 1'b0;

    //Set inputs
    istream_msg_a = 32'd2;
    istream_msg_b = 32'd3;
    istream_val   =  1'b1;
    ostream_rdy = 1'b0;
    #200 // delay ostream_rdy for 200 ticks
    ostream_rdy = 1'b1;

    while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
    @(negedge clk); // Move to next cycle.
    
    istream_val = 1'b0; // Deassert ready input
    if(!ostream_val) @(ostream_val);// Wait for response
    @(negedge clk); // read at low clk

    // Check the result
    assert (6 == ostream_msg) begin
      pass(); // Book keeping
      $display( "OK: in0 = %d, in1 = %d, out = %d", 
                istream_msg_a, istream_msg_b, ostream_msg );
    end
    else begin
      fail(); // Book keeping
      $error( "Failed: in0 = %d, in1 = %d, out = %d", 
              istream_msg_a, istream_msg_b, ostream_msg );
    end

    delay( $urandom_range(0, 127) );
    @(negedge clk)

  
    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // // P_Test #1
    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // // Multiplying Numbers with Low Order Bits Masked Off 
    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    $display("P_Test #1 - Numbers with Low Order Bits Masked Off ");

      test_task(7648, 7648);
      test_task(7592, 3832);

    delay( $urandom_range(0, 127) );


    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // // P_Test #2
    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // // Multiplying Numbers with Middle Bits Masked Off
    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    $display("P_Test #2 - Numbers with Middle Bits Masked Off");

      test_task(1927, 3087);
      test_task(14087, 15903);

    delay( $urandom_range(0, 127) );


    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // // P_Test #3
    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // // Multiplying Sparse Numbers with Many Zeros and Few Ones
    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    $display("P_Test #3 - Sparse Numbers with Many Zeros and Few Ones");

      test_task(4096, 2048);
      test_task(10248, 5376);

    delay( $urandom_range(0, 127) );


    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // // P_Test #4
    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // // Multiplying Dense Numbers with Many Ones and Few Zeros
    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    $display("P_Test #4 - Dense Numbers with Many Ones and Few Zeros");

      test_task(16375, 6911);
      test_task(1983, 2047);

    delay( $urandom_range(0, 127) );



    // Finish the testbench

    @(negedge clk);
    $display("Testbench finished at %d cycles", ($time()-10)/2 );

    // Delay for a better waveform
    #10;
    $finish;

  end

  //--------------------------------------------------------------------
  // Delay definition
  //--------------------------------------------------------------------
  // Asserts a random delay between functions instead of using #10
  
  task delay( int delay_val );
      begin
          for( int i = 0; i < delay_val; i = i + 1 ) begin
              #1;
          end
      end
  endtask


  //--------------------------------------------------------------------
  // test_task definition
  //--------------------------------------------------------------------
  // Here is a tasks that test the DUT when given 2 numbers a and b 
  //

  task test_task( [31:0] a,  [31:0] b );
  begin

    // Change inputs at the negedge
    @(negedge clk);

    // Set inputs
    istream_msg_a = a;
    istream_msg_b = b;
    istream_val   = 1'b1;
    ostream_rdy   = 1'b0;

    while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
    @(negedge clk); // Move to next cycle.
    
    istream_val = 1'b0; // No more ready input
    ostream_rdy = 1'b1; // Ready for output

    if(!ostream_val) @(ostream_val);// Wait for response
    
    // Check the result
    assert ( (a * b) == ostream_msg) begin
      pass(); // Book keeping
      $display( "OK: in0 = %d, in1 = %d, out = %d", a, b, ostream_msg );
    end
    else begin
      fail(); // Book keeping
      $error( "Failed: in0 = %d, in1 = %d, out = %d", a, b, ostream_msg );
    end

    @(negedge clk);
  end
  endtask
endmodule

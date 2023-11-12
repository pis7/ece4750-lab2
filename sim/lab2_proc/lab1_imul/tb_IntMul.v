//========================================================================
// tb_IntMul
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

    //--------------------------------------------------------------------
    // Test cases
    //--------------------------------------------------------------------

    // Align test bench with negedge so that it looks better
    #10
    @(negedge clk); 

    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // Test #1
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

    $display("Example Test #1");

    //Set inputs
    istream_msg_a = 32'd2;
    istream_msg_b = 32'd3;
    istream_val   =  1'b1;
    ostream_rdy   =  1'b1;

    while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
    @(negedge clk); // Move to next cycle.
    
    istream_val = 1'b0; // Deassert ready input
    if(!ostream_val) @(ostream_val);// Wait for response
    @(negedge clk); // read at low clk
    
    // Check the result
    assert ( 6 == ostream_msg) begin
      pass(); // Book keeping
      $display( "OK: in0 = %d, in1 = %d, out = %d", 
                istream_msg_a, istream_msg_b, ostream_msg );
    end
    else begin
      fail(); // Book keeping
      $error( "Failed: in0 = %d, in1 = %d, out = %d", 
              istream_msg_a, istream_msg_b, ostream_msg );
    end
   
    #10
    @(negedge clk);

    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // Test #2
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

    $display("Example Test #2");
    
    //Set inputs
    istream_msg_a = 32'd4;
    istream_msg_b = 32'd5;
    istream_val   =  1'b1;
    ostream_rdy   =  1'b1;

    while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
    @(negedge clk); // Move to next cycle.
    
    istream_val = 1'b0; // Deassert ready input
    if(!ostream_val) @(ostream_val);// Wait for response
    @(negedge clk); // read at low clk
    
    // Check the result
    assert ( 20 == ostream_msg) begin
      pass(); // Book keeping
      $display( "OK: in0 = %d, in1 = %d, out = %d", 
                istream_msg_a, istream_msg_b, ostream_msg );
    end
    else begin
      fail(); // Book keeping
      $error( "Failed: in0 = %d, in1 = %d, out = %d", 
              istream_msg_a, istream_msg_b, ostream_msg );
    end
   
    #10
    @(negedge clk);

    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // Test #3
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

    $display("Example Test #3");

    //Set inputs
    istream_msg_a = 32'd3;
    istream_msg_b = 32'd4;
    istream_val   =  1'b1;
    ostream_rdy   =  1'b1;
    
    while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
    @(negedge clk); // Move to next cycle.
    
    istream_val = 1'b0; // Deassert ready input
    if(!ostream_val) @(ostream_val);// Wait for response
    @(negedge clk); // read at low clk
    
    // Check the result
    assert ( 12 == ostream_msg) begin
      pass(); // Book keeping
      $display( "OK: in0 = %d, in1 = %d, out = %d", 
                istream_msg_a, istream_msg_b, ostream_msg );
    end
    else begin
      fail(); // Book keeping
      $error( "Failed: in0 = %d, in1 = %d, out = %d", 
              istream_msg_a, istream_msg_b, ostream_msg );
    end
   
    #10
    @(negedge clk);

    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // Test #4
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

    $display("Example Test #4");

    //Set inputs
    istream_msg_a = 32'd10;
    istream_msg_b = 32'd13;
    istream_val   =  1'b1;
    ostream_rdy   =  1'b1;
    
    while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
    @(negedge clk); // Move to next cycle.
    
    istream_val = 1'b0; // Deassert ready input
    if(!ostream_val) @(ostream_val);// Wait for response
    @(negedge clk); // read at low clk
    
    // Check the result
    assert ( 130 == ostream_msg) begin
      pass(); // Book keeping
      $display( "OK: in0 = %d, in1 = %d, out = %d", 
                istream_msg_a, istream_msg_b, ostream_msg );
    end
    else begin
      fail(); // Book keeping
      $error( "Failed: in0 = %d, in1 = %d, out = %d", 
              istream_msg_a, istream_msg_b, ostream_msg );
    end
   
    #10
    @(negedge clk);

    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // Test #5
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

    $display("Example Test #5");
    
    // We can simplify Testbench with tasks (declared below)
    test_task(8,7);

    #10;

    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // Random Tests
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    
    $display("Random Test");
    for( integer x = 0; x < 5; x++ ) begin
      test_task( $random, $random );
    end

  //end

  //--------------------------------------------------------------------
  // Personal Test Bench!
  //--------------------------------------------------------------------
  // This is where Parker and George made our own Test Cases

    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
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
    // // Combonation Of Multiplying Zero, One, and Negitive One
    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    $display("Start Personal Tests");
    $display("P_Test #1 - Combonation Of Multiplying Zero, One, and Negitive One");
    test_task(0,0);
    test_task(1,0);
    test_task(0,1);
    test_task(-1,0);
    test_task(0,-1);
    test_task(-1,1);
    test_task(1,-1);
    delay( $urandom_range(0, 127) );

    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // // P_Test #2
    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // // Hit each if statement in alt design
    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    $display("P_Test #2 - Every if statement for alt shamt value");
    
    for( integer x = 0; x < 32; x++ ) begin
      test_task(1,2**x);
    end
    delay( $urandom_range(0, 127) );

    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // // P_Test #3
    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // // Multiplying Small Negitive Numbers and Small Positive Numbers
    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    $display("P_Test #3 - Small Negitive Numbers and Small Positive Numbers");
    
    test_task(-10,10);
    test_task(-2010,1581);
    delay( $urandom_range(0, 127) );

    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // // P_Test #4
    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // // Multiplying Small Positive Numbers and Small Negitive Numbers
    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    $display("P_Test #4 - Small Positive Numbers and Small Negitive Numbers");
    
    test_task(2817, -1);
    test_task(732, -92);
    delay( $urandom_range(0, 127) );


    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // // P_Test #5
    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // // Multiplying Small Negitive and Small Negitive Numbers
    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    $display("P_Test #5 - Small Negitive and Small Negitive Numbers");
    
    test_task(-192,-10);
    test_task(-639, -321);
    delay( $urandom_range(0, 127) );

    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // // P_Test #6
    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // // Multiplying Large Positive and Large Positive Numbers
    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    $display("P_Test #6 - Multiplying Large Positive and Large Positive Numbers");
    
    test_task(128341, 513367);
    test_task(1026735, 138605);
    delay( $urandom_range(0, 127) );

    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // // P_Test #7
    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // // Multiplying Large Positive Numbers and Large Negitive Numbers
    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    $display("P_Test #7 - Large Positive Numbers and Large Negitive Numbers");
    
    test_task(262143, -524287);
    test_task(193855, -387711);
    delay( $urandom_range(0, 127) );

    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // // P_Test #8
    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // // Multiplying Large Negitive Numbers and Large Positive Numbers
    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    $display("P_Test #8 - Large Negitive Numbers and Large Positive Numbers");
    
    test_task(-388095, 409281);
    test_task(-1428831, 1378595);
    delay( $urandom_range(0, 127) );

    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // // P_Test #9
    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // // Multiplying Large Negitive Numbers and Large Negitive Numbers
    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    $display("P_Test #9 - Large Negitive Numbers and Large Negitive Numbers");
    
    test_task(-1527823, -86098);
    test_task(-137951, -283812);
    delay( $urandom_range(0, 127) );

    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // // P_Test #10
    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // // Multiplying Numbers with Low Order Bits Masked Off 
    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    $display("P_Test #10 - Numbers with Low Order Bits Masked Off ");
    
    test_task(7648, 7648);
    test_task(7592, 3832);
    delay( $urandom_range(0, 127) );


    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // // P_Test #11
    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // // Multiplying Numbers with Middle Bits Masked Off
    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    $display("P_Test #11 - Numbers with Middle Bits Masked Off");
    
    test_task(1927, 3087);
    test_task(14087, 15903);
    delay( $urandom_range(0, 127) );


    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // // P_Test #12
    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // // Multiplying Sparse Numbers with Many Zeros and Few Ones
    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    $display("P_Test #12 - Sparse Numbers with Many Zeros and Few Ones");
    
    test_task(4096, 2048);
    test_task(10248, 5376);
    delay( $urandom_range(0, 127) );


    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // // P_Test #13
    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // // Multiplying Dense Numbers with Many Ones and Few Zeros
    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    $display("P_Test #13 - Dense Numbers with Many Ones and Few Zeros");
    
    test_task(16375, 6911);
    test_task(1983, 2047);
    delay( $urandom_range(0, 127) );

    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // // P_Test #14
    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // // Corner Case Testing 
    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    $display("P_Test #14 - Corner Case Testing ");
    test_task(65536, 65536);
    test_task(-65536, -65536);
    test_task(2**20, 4);
    test_task(20,-2**18);
    test_task(-2**20, 4);
    delay( $urandom_range(0, 127) );

    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // // P_Test #15
    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // // Random Input and Output Delay
    // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    $display("P_Test #15 - Random Input and Output Delay");
    
    for( integer x = 0; x < 3; x++ ) begin
      test_task(-1 * $random, -1 * $random );
    end

    for( integer x = 0; x < 3; x++ ) begin
      test_task($random, -1 * $random );
    end

    for( integer x = 0; x < 3; x++ ) begin
      test_task(-1 * $random, $random );
    end
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
  // Notice that the functionality is identical to the examples above

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

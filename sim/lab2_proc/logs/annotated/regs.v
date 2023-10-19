//      // verilator_coverage annotation
        //========================================================================
        // Verilog Components: Registers
        //========================================================================
        
        // Note that we place the register output earlier in the port list since
        // this is one place we might actually want to use positional port
        // binding like this:
        //
        //  logic [p_nbits-1:0] result_B;
        //  vc_Reg#(p_nbits) result_AB( clk, result_B, result_A );
        
        `ifndef VC_REGS_V
        `define VC_REGS_V
        
        //------------------------------------------------------------------------
        // Postive-edge triggered flip-flop
        //------------------------------------------------------------------------
        
        module vc_Reg
        #(
          parameter p_nbits = 1
        )(
 008136   input  logic               clk, // Clock input
 000072   output logic [p_nbits-1:0] q,   // Data output
 000072   input  logic [p_nbits-1:0] d    // Data input
        );
        
 004066   always_ff @( posedge clk )
 004066     q <= d;
        
        endmodule
        
        //------------------------------------------------------------------------
        // Postive-edge triggered flip-flop with reset
        //------------------------------------------------------------------------
        
        module vc_ResetReg
        #(
          parameter p_nbits       = 1,
          parameter p_reset_value = 0
        )(
 140934   input  logic               clk,   // Clock input
 000714   input  logic               reset, // Sync reset input
 006670   output logic [p_nbits-1:0] q,     // Data output
 006796   input  logic [p_nbits-1:0] d      // Data input
        );
        
 070110   always_ff @( posedge clk )
 070110     q <= reset ? p_reset_value : d;
        
        endmodule
        
        //------------------------------------------------------------------------
        // Postive-edge triggered flip-flop with enable
        //------------------------------------------------------------------------
        
        module vc_EnReg
        #(
          parameter p_nbits = 1
        )(
 004068   input  logic               clk,   // Clock input
 000030   input  logic               reset, // Sync reset input
 000739   output logic [p_nbits-1:0] q,     // Data output
 001438   input  logic [p_nbits-1:0] d,     // Data input
 000068   input  logic               en     // Enable input
        );
        
 002033   always_ff @( posedge clk )
 000034     if ( en )
 000118       q <= d;
        
          // Assertions
        
          `ifndef SYNTHESIS
        
          /*
          always_ff @( posedge clk )
            if ( !reset )
              `VC_ASSERT_NOT_X( en );
          */
        
          `endif /* SYNTHESIS */
        
        endmodule
        
        //------------------------------------------------------------------------
        // Postive-edge triggered flip-flop with enable and reset
        //------------------------------------------------------------------------
        
        module vc_EnResetReg
        #(
          parameter p_nbits       = 1,
          parameter p_reset_value = 0
        )(
 004068   input  logic               clk,   // Clock input
 000030   input  logic               reset, // Sync reset input
%000000   output logic [p_nbits-1:0] q,     // Data output
 000003   input  logic [p_nbits-1:0] d,     // Data input
 000016   input  logic               en     // Enable input
        );
        
 002033   always_ff @( posedge clk )
 000118     if ( reset || en )
 001915       q <= reset ? p_reset_value : d;
        
          // Assertions
        
          `ifndef SYNTHESIS
        
          /*
          always_ff @( posedge clk )
            if ( !reset )
              `VC_ASSERT_NOT_X( en );
          */
        
          `endif /* SYNTHESIS */
        
        endmodule
        
        `endif /* VC_REGS_V */
        
        

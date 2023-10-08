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
 037592   input  logic               clk, // Clock input
 000512   output logic [p_nbits-1:0] q,   // Data output
 000512   input  logic [p_nbits-1:0] d    // Data input
        );
        
 018770   always_ff @( posedge clk )
 018770     q <= d;
        
        endmodule
        
        //------------------------------------------------------------------------
        // Postive-edge triggered flip-flop with reset
        //------------------------------------------------------------------------
        
        module vc_ResetReg
        #(
          parameter p_nbits       = 1,
          parameter p_reset_value = 0
        )(
 056388   input  logic               clk,   // Clock input
 000078   input  logic               reset, // Sync reset input
 003738   output logic [p_nbits-1:0] q,     // Data output
 003752   input  logic [p_nbits-1:0] d      // Data input
        );
        
 028155   always_ff @( posedge clk )
 028155     q <= reset ? p_reset_value : d;
        
        endmodule
        
        //------------------------------------------------------------------------
        // Postive-edge triggered flip-flop with enable
        //------------------------------------------------------------------------
        
        module vc_EnReg
        #(
          parameter p_nbits = 1
        )(
 018815   input  logic               clk,   // Clock input
 000013   input  logic               reset, // Sync reset input
 000854   output logic [p_nbits-1:0] q,     // Data output
 001422   input  logic [p_nbits-1:0] d,     // Data input
 000030   input  logic               en     // Enable input
        );
        
 009401   always_ff @( posedge clk )
 000015     if ( en )
 000015       q <= d;
        
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
 018796   input  logic               clk,   // Clock input
 000026   input  logic               reset, // Sync reset input
%000000   output logic [p_nbits-1:0] q,     // Data output
%000000   input  logic [p_nbits-1:0] d,     // Data input
 000288   input  logic               en     // Enable input
        );
        
 009385   always_ff @( posedge clk )
 001158     if ( reset || en )
 001158       q <= reset ? p_reset_value : d;
        
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
        
        

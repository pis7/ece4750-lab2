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
 002546   input  logic               clk, // Clock input
 000004   output logic [p_nbits-1:0] q,   // Data output
 000004   input  logic [p_nbits-1:0] d    // Data input
        );
        
 001272   always_ff @( posedge clk )
 001272     q <= d;
        
        endmodule
        
        //------------------------------------------------------------------------
        // Postive-edge triggered flip-flop with reset
        //------------------------------------------------------------------------
        
        module vc_ResetReg
        #(
          parameter p_nbits       = 1,
          parameter p_reset_value = 0
        )(
 138774   input  logic               clk,   // Clock input
 000678   input  logic               reset, // Sync reset input
 006733   output logic [p_nbits-1:0] q,     // Data output
 006850   input  logic [p_nbits-1:0] d      // Data input
        );
        
 069048   always_ff @( posedge clk )
 069048     q <= reset ? p_reset_value : d;
        
        endmodule
        
        //------------------------------------------------------------------------
        // Postive-edge triggered flip-flop with enable
        //------------------------------------------------------------------------
        
        module vc_EnReg
        #(
          parameter p_nbits = 1
        )(
 001273   input  logic               clk,   // Clock input
 000001   input  logic               reset, // Sync reset input
 000858   output logic [p_nbits-1:0] q,     // Data output
 001582   input  logic [p_nbits-1:0] d,     // Data input
 000035   input  logic               en     // Enable input
        );
        
 000636   always_ff @( posedge clk )
 000113     if ( en )
 000113       q <= d;
        
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
 001273   input  logic               clk,   // Clock input
 000001   input  logic               reset, // Sync reset input
%000000   output logic [p_nbits-1:0] q,     // Data output
%000000   input  logic [p_nbits-1:0] d,     // Data input
 000002   input  logic               en     // Enable input
        );
        
 000636   always_ff @( posedge clk )
 000012     if ( reset || en )
 000624       q <= reset ? p_reset_value : d;
        
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
        
        

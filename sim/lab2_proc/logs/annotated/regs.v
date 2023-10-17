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
 004062   input  logic               clk, // Clock input
 000028   output logic [p_nbits-1:0] q,   // Data output
 000028   input  logic [p_nbits-1:0] d    // Data input
        );
        
 002030   always_ff @( posedge clk )
 002030     q <= d;
        
        endmodule
        
        //------------------------------------------------------------------------
        // Postive-edge triggered flip-flop with reset
        //------------------------------------------------------------------------
        
        module vc_ResetReg
        #(
          parameter p_nbits       = 1,
          parameter p_reset_value = 0
        )(
          input  logic               clk,   // Clock input
          input  logic               reset, // Sync reset input
          output logic [p_nbits-1:0] q,     // Data output
          input  logic [p_nbits-1:0] d      // Data input
        );
        
          always_ff @( posedge clk )
            q <= reset ? p_reset_value : d;
        
        endmodule
        
        //------------------------------------------------------------------------
        // Postive-edge triggered flip-flop with enable
        //------------------------------------------------------------------------
        
        module vc_EnReg
        #(
          parameter p_nbits = 1
        )(
 002031   input  logic               clk,   // Clock input
 000001   input  logic               reset, // Sync reset input
 000020   output logic [p_nbits-1:0] q,     // Data output
 000020   input  logic [p_nbits-1:0] d,     // Data input
 000035   input  logic               en     // Enable input
        );
        
 001015   always_ff @( posedge clk )
 000477     if ( en )
 000477       q <= d;
        
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
 002031   input  logic               clk,   // Clock input
 000001   input  logic               reset, // Sync reset input
 000001   output logic [p_nbits-1:0] q,     // Data output
 000001   input  logic [p_nbits-1:0] d,     // Data input
 000006   input  logic               en     // Enable input
        );
        
 001015   always_ff @( posedge clk )
 000049     if ( reset || en )
 000966       q <= reset ? p_reset_value : d;
        
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
        
        

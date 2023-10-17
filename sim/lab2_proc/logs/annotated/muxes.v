//      // verilator_coverage annotation
        //========================================================================
        // Verilog Components: Muxes
        //========================================================================
        
        `ifndef VC_MUXES_V
        `define VC_MUXES_V
        
        //------------------------------------------------------------------------
        // 2 Input Mux
        //------------------------------------------------------------------------
        
        module vc_Mux2
        #(
          parameter p_nbits = 1
        )(
 000016   input  logic [p_nbits-1:0] in0, in1,
 000140   input  logic               sel,
 000040   output logic [p_nbits-1:0] out
        );
        
%000000   always_comb
%000000   begin
%000000     case ( sel )
 004493       1'd0 : out = in0;
 007179       1'd1 : out = in1;
%000000       default : out = {p_nbits{1'bx}};
            endcase
          end
        
        endmodule
        
        //------------------------------------------------------------------------
        // 3 Input Mux
        //------------------------------------------------------------------------
        
        module vc_Mux3
        #(
          parameter p_nbits = 1
        )(
 000022   input  logic [p_nbits-1:0] in0, in1, in2,
 000010   input  logic         [1:0] sel,
 000010   output logic [p_nbits-1:0] out
        );
        
%000000   always_comb
%000000   begin
%000000     case ( sel )
 004864       2'd0 : out = in0;
 004414       2'd1 : out = in1;
 002122       2'd2 : out = in2;
%000000       default : out = {p_nbits{1'bx}};
            endcase
          end
        
        endmodule
        
        //------------------------------------------------------------------------
        // 4 Input Mux
        //------------------------------------------------------------------------
        
        module vc_Mux4
        #(
          parameter p_nbits = 1
        )(
 000001   input  logic [p_nbits-1:0] in0, in1, in2, in3,
 000002   input  logic         [1:0] sel,
 000001   output logic [p_nbits-1:0] out
        );
        
%000000   always_comb
%000000   begin
%000000     case ( sel )
%000000       2'd0 : out = in0;
 000490       2'd1 : out = in1;
 000230       2'd2 : out = in2;
 003080       2'd3 : out = in3;
%000000       default : out = {p_nbits{1'bx}};
            endcase
          end
        
        endmodule
        
        //------------------------------------------------------------------------
        // 5 Input Mux
        //------------------------------------------------------------------------
        
        module vc_Mux5
        #(
         parameter p_nbits = 1
        )(
          input  logic [p_nbits-1:0] in0, in1, in2, in3, in4,
          input  logic         [2:0] sel,
          output logic [p_nbits-1:0] out
        );
        
          always_comb
          begin
            case ( sel )
              3'd0 : out = in0;
              3'd1 : out = in1;
              3'd2 : out = in2;
              3'd3 : out = in3;
              3'd4 : out = in4;
              default : out = {p_nbits{1'bx}};
            endcase
          end
        
        endmodule
        
        //------------------------------------------------------------------------
        // 6 Input Mux
        //------------------------------------------------------------------------
        
        module vc_Mux6
        #(
          parameter p_nbits = 1
        )(
          input  logic [p_nbits-1:0] in0, in1, in2, in3, in4, in5,
          input  logic         [2:0] sel,
          output logic [p_nbits-1:0] out
        );
        
          always_comb
          begin
            case ( sel )
              3'd0 : out = in0;
              3'd1 : out = in1;
              3'd2 : out = in2;
              3'd3 : out = in3;
              3'd4 : out = in4;
              3'd5 : out = in5;
              default : out = {p_nbits{1'bx}};
            endcase
          end
        
        endmodule
        
        //------------------------------------------------------------------------
        // 7 Input Mux
        //------------------------------------------------------------------------
        
        module vc_Mux7
        #(
          parameter p_nbits = 1
        )(
          input  logic [p_nbits-1:0] in0, in1, in2, in3, in4, in5, in6,
          input  logic         [2:0] sel,
          output logic [p_nbits-1:0] out
        );
        
          always_comb
          begin
            case ( sel )
              3'd0 : out = in0;
              3'd1 : out = in1;
              3'd2 : out = in2;
              3'd3 : out = in3;
              3'd4 : out = in4;
              3'd5 : out = in5;
              3'd6 : out = in6;
              default : out = {p_nbits{1'bx}};
            endcase
          end
        
        endmodule
        
        //------------------------------------------------------------------------
        // 8 Input Mux
        //------------------------------------------------------------------------
        
        module vc_Mux8
        #(
          parameter p_nbits = 1
        )(
          input  logic [p_nbits-1:0] in0, in1, in2, in3, in4, in5, in6, in7,
          input  logic         [2:0] sel,
          output logic [p_nbits-1:0] out
        );
        
          always_comb
          begin
            case ( sel )
              3'd0 : out = in0;
              3'd1 : out = in1;
              3'd2 : out = in2;
              3'd3 : out = in3;
              3'd4 : out = in4;
              3'd5 : out = in5;
              3'd6 : out = in6;
              3'd7 : out = in7;
              default : out = {p_nbits{1'bx}};
            endcase
          end
        
        endmodule
        
        `endif /* VC_MUXES_V */
        
        

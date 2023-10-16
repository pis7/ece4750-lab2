//      // verilator_coverage annotation
        //========================================================================
        // Proc Datapath ALU
        //========================================================================
        
        `ifndef LAB2_PROC_PROC_DPATH_ALU_V
        `define LAB2_PROC_PROC_DPATH_ALU_V
        
        `include "vc/arithmetic.v"
        
        module lab2_proc_ProcDpathAlu
        (
 000001   input  logic [31:0] in0,
%000000   input  logic [31:0] in1,
%000000   input  logic [ 3:0] fn,
 000001   output logic [31:0] out,
 000001   output logic        ops_eq,
 000001   output logic        ops_lt,
 000003   output logic        ops_ltu
        );
        
%000000   always_comb begin
        
%000000     case ( fn )
 000030       4'd0    : out = in0 + in1;                                // ADD
%000000       4'd1    : out = in0 - in1;                                // SUB
%000000       4'd2    : out = in0 & in1;                                // AND
%000000       4'd3    : out = in0 | in1;                                // OR
%000000       4'd4    : out = in0 ^ in1;                                // XOR
%000000       4'd5    : out = {31'b0, ops_lt};                          // SLT
%000000       4'd6    : out = {31'b0, ops_ltu};                         // SLTU
%000000       4'd7    : out = in0 >>> in1;                              // SRA
%000000       4'd8    : out = in0 >> in1;                               // SRL
%000000       4'd9    : out = in0 << in1;                               // SLL
%000000       4'd11   : out = in0;                                      // CP OP0
%000000       4'd12   : out = in1;                                      // CP OP1
        
        
              //''' LAB TASK '''''''''''''''''''''''''''''''''''''''''''''''''''''
              // Add more alu function
              //''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
        
%000000       default : out = 32'b0;
            endcase
        
          end
        
          // Calculate equality, zero, negative flags
        
          vc_EqComparator #(32) cond_eq_comp
          (
            .in0  (in0),
            .in1  (in1),
            .out  (ops_eq)
          );
        
          assign ops_lt = $signed(in0) < $signed(in1);
          assign ops_ltu = in0 < in1;
        
        endmodule
        
        `endif /* LAB2_PROC_PROC_DPATH_ALU_V */
        

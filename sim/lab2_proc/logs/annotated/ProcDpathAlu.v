//      // verilator_coverage annotation
        //========================================================================
        // Proc Datapath ALU
        //========================================================================
        
        `ifndef LAB2_PROC_PROC_DPATH_ALU_V
        `define LAB2_PROC_PROC_DPATH_ALU_V
        
        `include "vc/arithmetic.v"
        
        module lab2_proc_ProcDpathAlu
        (
 000002   input  logic [31:0] in0,
 000914   input  logic [31:0] in1,
 001464   input  logic [ 3:0] fn,
 000002   output logic [31:0] out,
 000002   output logic        ops_eq,
 000002   output logic        ops_lt,
 000006   output logic        ops_ltu
        );
        
%000000   always_comb begin
        
%000000     case ( fn )
 000060       4'd0    : out = in0 + in1;                                // ADD
 000061       4'd1    : out = in0 - in1;                                // SUB
 000015       4'd2    : out = in0 & in1;                                // AND
 000025       4'd3    : out = in0 | in1;                                // OR
 000056       4'd4    : out = in0 ^ in1;                                // XOR
 000070       4'd5    : out = {31'b0, ops_lt};                          // SLT
 000040       4'd6    : out = {31'b0, ops_ltu};                         // SLTU
 000050       4'd7    : out = in0 >>> in1;                              // SRA
 000026       4'd8    : out = in0 >> in1;                               // SRL
 000020       4'd9    : out = in0 << in1;                               // SLL
 000846       4'd11   : out = in0;                                      // CP OP0
 008972       4'd12   : out = in1;                                      // CP OP1
        
        
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
        

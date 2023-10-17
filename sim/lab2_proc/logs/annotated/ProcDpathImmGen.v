//      // verilator_coverage annotation
        //========================================================================
        // Proc Datapath Immediate Generation
        //========================================================================
        // Generate intermediate (imm) based on type
        
        `ifndef LAB2_PROC_PROC_DPATH_IMM_GEN_V
        `define LAB2_PROC_PROC_DPATH_IMM_GEN_V
        
        module lab2_proc_ProcDpathImmGen
        (
 000001   input  logic [ 2:0] imm_type,
 000001   input  logic [31:0] inst,
 000002   output logic [31:0] imm
        );
        
%000000   always_comb begin
%000000     case ( imm_type )
 001816       3'd0: // I-type
 001816         imm = { {21{inst[31]}}, inst[30:25], inst[24:21], inst[20] };
        
 000634       3'd1: // S-type
 000634         imm = { {21{inst[31]}}, inst[30:25], inst[11:8], inst[7] };
        
 000634       3'd2: // B-type
 000634         imm = { {20{inst[31]}}, inst[7], inst[30:25], inst[11:8], 1'b0 };
        
%000000       3'd3: // U-type
%000000         imm = { inst[31], inst[30:25], inst[24:21], inst[20], inst[19:12], 12'b0};
        
 000710       3'd4: // J-type
 000710         imm = { {12{inst[31]}}, inst[19:12], inst[20], inst[30:25], inst[24:21], 1'b0};
        
              default: begin
                $stop;
                imm = 32'bx;
              end
        
            endcase
          end
        
        endmodule
        
        `endif /* LAB2_PROC_DPATH_IMM_GEN_V */
        

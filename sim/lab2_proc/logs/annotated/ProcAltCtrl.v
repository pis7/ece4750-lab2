//      // verilator_coverage annotation
        //=========================================================================
        // 5-Stage Simple Pipelined Processor Control
        //=========================================================================
        
        `ifndef LAB2_PROC_PROC_BASE_CTRL_V
        `define LAB2_PROC_PROC_BASE_CTRL_V
        
        `include "vc/trace.v"
        
        `include "tinyrv2_encoding.v"
        
        module lab2_proc_ProcAltCtrl
        (
 008761   input  logic        clk,
 000013   input  logic        reset,
        
          // Instruction Memory Port
        
 002900   output logic        imem_reqstream_val,
%000000   input  logic        imem_reqstream_rdy,
 002564   input  logic        imem_respstream_val,
 002887   output logic        imem_respstream_rdy,
 000256   output logic        imem_respstream_drop,
        
          // Data Memory Port
        
 001162   output logic        dmem_reqstream_val,
 000626   input  logic        dmem_reqstream_rdy,
 001146   input  logic        dmem_respstream_val,
 001146   output logic        dmem_respstream_rdy,
%000000   output logic [2:0]  mem_action,
        
          // mngr communication port
        
 000066   input  logic        mngr2proc_val,
 000066   output logic        mngr2proc_rdy,
 000030   output logic        proc2mngr_val,
 000028   input  logic        proc2mngr_rdy,
        
          // control signals (ctrl->dpath)
        
 002887   output logic        reg_en_F,
 000010   output logic [1:0]  pc_sel_F,
        
 000692   output logic        reg_en_D,
 002044   output logic        op1_sel_D,
 000044   output logic [1:0]  op2_sel_D,
%000000   output logic [1:0]  csrr_sel_D,
 000008   output logic [2:0]  imm_type_D,
 000258   output logic [1:0]  op1_byp_sel_D,
 000192   output logic [1:0]  op2_byp_sel_D,
        
 000306   output logic        reg_en_X,
 000058   output logic [3:0]  alu_fn_X,
 000002   output logic [1:0]  ex_result_sel_X,
        
 000942   output logic        reg_en_M,
 000368   output logic        wb_result_sel_M,
        
 000008   output logic        reg_en_W,
 000050   output logic [4:0]  rf_waddr_W,
 001952   output logic        rf_wen_W,
%000000   output logic        stats_en_wen_W,
        
 000002   output logic        imul_req_val_D,
 000002   output logic        imul_resp_rdy_X,
        
          // status signals (dpath->ctrl)
        
 000002   input  logic [31:0] inst_D,
 000279   input  logic        br_cond_eq_X,
 000046   input  logic        br_cond_lt_X,
 000298   input  logic        br_cond_ltu_X,
        
 000002   input  logic        imul_req_rdy_D,
 000002   input  logic        imul_resp_val_X,
        
          // extra ports
        
 002557   output logic        commit_inst
        );
        
          //----------------------------------------------------------------------
          // Notes
          //----------------------------------------------------------------------
          // We follow this principle to organize code for each pipeline stage in
          // the control unit.  Register enable logics should always at the
          // beginning. It followed by pipeline registers. Then logic that is not
          // dependent on stall or squash signals. Then logic that is dependent
          // on stall or squash signals. At the end there should be signals meant
          // to be passed to the next stage in the pipeline.
        
          //----------------------------------------------------------------------
          // Valid, stall, and squash signals
          //----------------------------------------------------------------------
          // We use valid signal to indicate if the instruction is valid.  An
          // instruction can become invalid because of being squashed or
          // stalled. Notice that invalid instructions are microarchitectural
          // events, they are different from archtectural no-ops. We must be
          // careful about control signals that might change the state of the
          // processor. We should always AND outgoing control signals with valid
          // signal.
        
 000013   logic val_F;
 002108   logic val_D;
 002242   logic val_X;
 002235   logic val_M;
 002553   logic val_W;
        
          // Managing the stall and squash signals is one of the most important,
          // yet also one of the most complex, aspects of designing a pipelined
          // processor. We will carefully use four signals per stage to manage
          // stalling and squashing: ostall_A, osquash_A, stall_A, and squash_A.
          //
          // We denote the stall signals _originating_ from stage A as
          // ostall_A. For example, if stage A can stall due to a pipeline
          // harzard, then ostall_A would need to factor in the stalling
          // condition for this pipeline harzard.
        
 002577   logic ostall_F;  // can ostall due to imem_respstream_val
 000170   logic ostall_D;  // can ostall due to mngr2proc_val or other hazards
 000154   logic ostall_X;  // can ostall due to dmem_reqstream_rdy
 000938   logic ostall_M;  // can ostall due to dmem_respstream_val
 000008   logic ostall_W;  // can ostall due to proc2mngr_rdy
        
          // The stall_A signal should be used to indicate when stage A is indeed
          // stalling. stall_A will be a function of ostall_A and all the ostall
          // signals of stages in front of it in the pipeline.
        
 002743   logic stall_F;
 000692   logic stall_D;
 000306   logic stall_X;
 000942   logic stall_M;
 000008   logic stall_W;
        
          // We denote the squash signals _originating_ from stage A as
          // osquash_A. For example, if stage A needs to squash the stages behind
          // A in the pipeline, then osquash_A would need to factor in this
          // squash condition.
        
 000008   logic osquash_D; // can osquash due to unconditional jumps
 000248   logic osquash_X; // can osquash due to taken branches
        
          // The squash_A signal should be used to indicate when stage A is being
          // squashed. squash_A will _not_ be a function of osquash_A, since
          // osquash_A means to squash the stages _behind_ A in the pipeline, but
          // not to squash A itself.
        
 000256   logic squash_F;
 000068   logic squash_D;
        
          //----------------------------------------------------------------------
          // F stage
          //----------------------------------------------------------------------
        
          // Register enable logic
        
          assign reg_en_F = !stall_F || squash_F;
        
          // Pipeline registers
        
 004374   always_ff @( posedge clk ) begin
 000169     if ( reset )
 000169       val_F <= 1'b0;
 001832     else if ( reg_en_F )
 001832       val_F <= 1'b1;
          end
        
          // forward declaration for PC sel
        
 000248   logic       pc_redirect_X;
 000002   logic [1:0] pc_sel_X;
%000000   logic [1:0] pc_sel_D;
        
          // PC select logic
          // X stage has earlier instruction - so check that first
%000000   always_comb begin
 000124     if ( pc_redirect_X )   // If a branch is taken in X stage
 000124       pc_sel_F = pc_sel_X; // Use pc from X
 000004     else if (pc_redirect_D) begin // If jump in D stage
 000004       pc_sel_F = pc_sel_D; // Use pc from D
 004246     end else begin
 004246       pc_sel_F = 2'd3;     // Use pc+4
            end
          end
        
          // ostall due to the imem response not valid.
        
          assign ostall_F = val_F && !imem_respstream_val;
        
          // stall and squash in F
        
          assign stall_F  = val_F && ( ostall_F  || ostall_D || ostall_X || ostall_M || ostall_W );
          assign squash_F = val_F && ( osquash_D || osquash_X );
        
          // We drop the mem response when we are getting squashed
        
          assign imem_respstream_drop = squash_F;
        
          // imem is very special. Actually imem requests are sent before the F
          // stage. Note that we need to factor in reset to the imem_reqstream_val
          // signal because we don't want to send out imem request when we are
          // resetting.
        
          assign imem_reqstream_val  = ( !stall_F || squash_F ) && !reset;
          assign imem_respstream_rdy = !stall_F || squash_F;
        
          // Valid signal for the next stage (stage D)
        
 002730   logic  next_val_F;
          assign next_val_F = val_F && !stall_F && !squash_F;
        
          //----------------------------------------------------------------------
          // D stage
          //----------------------------------------------------------------------
        
          // Register enable logic
        
          assign reg_en_D = !stall_D || squash_D;
        
          // Pipline registers
        
 004374   always_ff @( posedge clk ) begin
 000169     if ( reset )
 000169       val_D <= 1'b0;
 000732     else if ( reg_en_D )
 003473       val_D <= next_val_F;
          end
        
          // Parse instruction fields
        
 000050   logic   [4:0] inst_rd_D;
 000002   logic   [4:0] inst_rs1_D;
 000364   logic   [4:0] inst_rs2_D;
 000364   logic   [11:0] inst_csr_D;
        
          lab2_proc_tinyrv2_encoding_InstUnpack inst_unpack
          (
            .inst     (inst_D),
            .opcode   (),
            .rd       (inst_rd_D),
            .rs1      (inst_rs1_D),
            .rs2      (inst_rs2_D),
            .funct3   (),
            .funct7   (),
            .csr      (inst_csr_D)
          );
        
          // Generic Parameters -- yes or no
        
          localparam n = 1'd0;
          localparam y = 1'd1;
        
          // Register specifiers
        
          localparam rx = 5'bx;   // don't care
          localparam r0 = 5'd0;   // zero
          localparam rL = 5'd31;  // for jal
        
          // Jump type
        
          localparam j_x      = 2'bx;
          localparam j_na     = 2'b0;
          localparam j_jal    = 2'd1;
          localparam j_jalr   = 2'd2;
        
          // Branch type
        
          localparam br_x     = 3'bx; // Don't care
          localparam br_na    = 3'b0; // No branch
          localparam br_bne   = 3'b1; // bne
          localparam br_beq   = 3'd2; // beq
          localparam br_blt   = 3'd3; // blt
          localparam br_bltu  = 3'd4; // bltu
          localparam br_bge   = 3'd5; // bge
          localparam br_bgeu  = 3'd6; // bgeu
          
          // Operand 1 Mux Select
        
          localparam bm1_x     = 1'bx; // Don't care
          localparam bm1_pc    = 1'b0; // Use PC
          localparam bm1_rf    = 1'b1; // Use data from register file
        
          // Operand 2 Mux Select
        
          localparam bm2_x     = 2'bx; // Don't care
          localparam bm2_imm   = 2'd0; // Use sign-extended immediate
          localparam bm2_rf    = 2'd1; // Use data from register file
          localparam bm2_csr   = 2'd2; // Use from mngr data
        
          // Execute Result Mux Select
        
          localparam ex_x     = 2'bx; // Don't care
          localparam ex_pc    = 2'd0; // Use PC + 4
          localparam ex_alu   = 2'd1; // Use ALU output
          localparam ex_imul  = 2'd2; // Use mutliplier
        
          // ALU Function
        
          localparam alu_x    = 4'bx;
          localparam alu_add  = 4'd0;
          localparam alu_sub  = 4'd1;
          localparam alu_and  = 4'd2;
          localparam alu_or   = 4'd3;
          localparam alu_xor  = 4'd4;
          localparam alu_slt  = 4'd5;
          localparam alu_sltu = 4'd6;
          localparam alu_sra  = 4'd7;
          localparam alu_srl  = 4'd8;
          localparam alu_sll  = 4'd9;
          localparam alu_cp0  = 4'd11;
          localparam alu_cp1  = 4'd12;
        
          // Immediate Type
          localparam imm_x    = 3'bx;
          localparam imm_i    = 3'd0;
          localparam imm_s    = 3'd1;
          localparam imm_b    = 3'd2;
          localparam imm_u    = 3'd3;
          localparam imm_j    = 3'd4;
        
          // Memory Request Type
        
          localparam nr       = 2'd0; // No request
          localparam ld       = 2'd1; // Load
          localparam st       = 2'd2; // Store
        
          // Writeback Mux Select
        
          localparam wm_x     = 1'bx; // Don't care
          localparam wm_a     = 1'b0; // Use ALU output
          localparam wm_m     = 1'b1; // Use data memory response
        
          // Instruction Decode
        
 002152   logic       inst_val_D;
 000002   logic [1:0] j_type_D;
%000000   logic [2:0] br_type_D;
 002044   logic       rs1_en_D;
 000802   logic       rs2_en_D;
 000058   logic [3:0] alu_fn_D;
 000002   logic [1:0] ex_result_sel_D;
 000002   logic       mul_D;
 000352   logic [1:0] dmem_reqstream_type_D;
 000598   logic       wb_result_sel_D;
 001650   logic       rf_wen_D;
 000044   logic       csrr_D;
 000272   logic       csrw_D;
 000272   logic       proc2mngr_val_D;
 000044   logic       mngr2proc_rdy_D;
%000000   logic       stats_en_wen_D;
 000008   logic       pc_redirect_D;
        
 004374   task cs
          (
            input logic       cs_inst_val,
            input logic [1:0] cs_j_type,
            input logic [2:0] cs_br_type,
            input logic [2:0] cs_imm_type,
            input logic       cs_op1_sel,
            input logic       cs_rs1_en,
            input logic [1:0] cs_op2_sel,
            input logic       cs_rs2_en,
            input logic [3:0] cs_alu_fn,
            input logic [1:0] cs_ex_result_sel,
            input logic       cs_mul,
            input logic [1:0] cs_dmem_reqstream_type,
            input logic       cs_wb_result_sel,
            input logic       cs_rf_wen,
            input logic       cs_csrr,
            input logic       cs_csrw
          );
 004374   begin
 004374     inst_val_D            = cs_inst_val;
 004374     j_type_D              = cs_j_type;
 004374     br_type_D             = cs_br_type;
 004374     imm_type_D            = cs_imm_type;
 004374     op1_sel_D             = cs_op1_sel;
 004374     rs1_en_D              = cs_rs1_en;
 004374     op2_sel_D             = cs_op2_sel;
 004374     rs2_en_D              = cs_rs2_en;
 004374     alu_fn_D              = cs_alu_fn;
 004374     ex_result_sel_D       = cs_ex_result_sel;
 004374     mul_D                 = cs_mul;
 004374     dmem_reqstream_type_D = cs_dmem_reqstream_type;
 004374     wb_result_sel_D       = cs_wb_result_sel;
 004374     rf_wen_D              = cs_rf_wen;
 004374     csrr_D                = cs_csrr;
 004374     csrw_D                = cs_csrw;
          end
          endtask
        
          // Control signals table
        
%000000   always_comb begin
        
%000000     casez ( inst_D )
        
              //                            jump     br      imm   rs1   rs1 op2    rs2   alu      Ex       dmm wbmux rf
              //                       val  type    type    type  muxsel en muxsel  en    fn      sel   mul typ sel   wen csrr csrw
 000085       `TINYRV2_INST_NOP     :cs( y, j_na,  br_na,  imm_x, bm1_x, n, bm2_x,   n, alu_x,     ex_x, n, nr, wm_a, n,  n,   n    );
        
              // Reg-Reg
 000447       `TINYRV2_INST_ADD     :cs( y, j_na,  br_na,  imm_x, bm1_rf,y, bm2_rf,  y, alu_add, ex_alu, n, nr, wm_a, y,  n,   n    );
%000000       `TINYRV2_INST_SUB     :cs( y, j_na,  br_na,  imm_x, bm1_rf,y, bm2_rf,  y, alu_sub, ex_alu, n, nr, wm_a, y,  n,   n    );
 000001       `TINYRV2_INST_MUL     :cs( y, j_na,  br_na,  imm_x, bm1_rf,y, bm2_rf,  y, alu_x,   ex_imul,y, nr, wm_a, y,  n,   n    );
%000000       `TINYRV2_INST_AND     :cs( y, j_na,  br_na,  imm_x, bm1_rf,y, bm2_rf,  y, alu_and, ex_alu, n, nr, wm_a, y,  n,   n    );
%000000       `TINYRV2_INST_OR      :cs( y, j_na,  br_na,  imm_x, bm1_rf,y, bm2_rf,  y, alu_or,  ex_alu, n, nr, wm_a, y,  n,   n    );
 000004       `TINYRV2_INST_XOR     :cs( y, j_na,  br_na,  imm_x, bm1_rf,y, bm2_rf,  y, alu_xor, ex_alu, n, nr, wm_a, y,  n,   n    );
%000000       `TINYRV2_INST_SLT     :cs( y, j_na,  br_na,  imm_x, bm1_rf,y, bm2_rf,  y, alu_slt, ex_alu, n, nr, wm_a, y,  n,   n    );
%000000       `TINYRV2_INST_SLTU    :cs( y, j_na,  br_na,  imm_x, bm1_rf,y, bm2_rf,  y, alu_sltu,ex_alu, n, nr, wm_a, y,  n,   n    );
%000000       `TINYRV2_INST_SRA     :cs( y, j_na,  br_na,  imm_x, bm1_rf,y, bm2_rf,  y, alu_sra, ex_alu, n, nr, wm_a, y,  n,   n    );
%000000       `TINYRV2_INST_SRL     :cs( y, j_na,  br_na,  imm_x, bm1_rf,y, bm2_rf,  y, alu_srl, ex_alu, n, nr, wm_a, y,  n,   n    );
%000000       `TINYRV2_INST_SLL     :cs( y, j_na,  br_na,  imm_x, bm1_rf,y, bm2_rf,  y, alu_sll, ex_alu, n, nr, wm_a, y,  n,   n    );
        
              // Reg-Imm
 000636       `TINYRV2_INST_ADDI    :cs( y, j_na,  br_na,  imm_i, bm1_rf,y, bm2_imm, n, alu_add, ex_alu, n, nr, wm_a, y,  n,   n    );
%000000       `TINYRV2_INST_ORI     :cs( y, j_na,  br_na,  imm_i, bm1_rf,y, bm2_imm, n, alu_or,  ex_alu, n, nr, wm_a, y,  n,   n    );
%000000       `TINYRV2_INST_ANDI    :cs( y, j_na,  br_na,  imm_i, bm1_rf,y, bm2_imm, n, alu_and, ex_alu, n, nr, wm_a, y,  n,   n    );
%000000       `TINYRV2_INST_ORI     :cs( y, j_na,  br_na,  imm_i, bm1_rf,y, bm2_imm, n, alu_or,  ex_alu, n, nr, wm_a, y,  n,   n    );
 000002       `TINYRV2_INST_XORI    :cs( y, j_na,  br_na,  imm_i, bm1_rf,y, bm2_imm, n, alu_xor, ex_alu, n, nr, wm_a, y,  n,   n    );
%000000       `TINYRV2_INST_SLTI    :cs( y, j_na,  br_na,  imm_i, bm1_rf,y, bm2_imm, n, alu_slt, ex_alu, n, nr, wm_a, y,  n,   n    );
%000000       `TINYRV2_INST_SLTIU   :cs( y, j_na,  br_na,  imm_i, bm1_rf,y, bm2_imm, n, alu_sltu,ex_alu, n, nr, wm_a, y,  n,   n    );
%000000       `TINYRV2_INST_SRAI    :cs( y, j_na,  br_na,  imm_i, bm1_rf,y, bm2_imm, n, alu_sra, ex_alu, n, nr, wm_a, y,  n,   n    );
%000000       `TINYRV2_INST_SRLI    :cs( y, j_na,  br_na,  imm_i, bm1_rf,y, bm2_imm, n, alu_srl, ex_alu, n, nr, wm_a, y,  n,   n    );
%000000       `TINYRV2_INST_SLLI    :cs( y, j_na,  br_na,  imm_i, bm1_rf,y, bm2_imm, n, alu_sll, ex_alu, n, nr, wm_a, y,  n,   n    );
 000003       `TINYRV2_INST_LUI     :cs( y, j_na,  br_na,  imm_u, bm1_x, n, bm2_imm, n, alu_cp1, ex_alu, n, nr, wm_a, y,  n,   n    );
%000000       `TINYRV2_INST_AUIPC   :cs( y, j_na,  br_na,  imm_u, bm1_pc,n, bm2_imm, n, alu_add, ex_alu, n, nr, wm_a, y,  n,   n    );
        
              // Jump
 000004       `TINYRV2_INST_JAL     :cs( y, j_jal, br_na,  imm_j, bm1_x, n, bm2_x,   n, alu_x,     ex_pc,n, nr, wm_a, y,  n,   n    );
 000001       `TINYRV2_INST_JALR    :cs( y, j_jalr,br_na,  imm_i, bm1_rf,y, bm2_imm, n, alu_add,   ex_pc,n, nr, wm_a, y,  n,   n    );
        
        
              // Branches
 000125       `TINYRV2_INST_BNE     :cs( y, j_na,  br_bne, imm_b, bm1_rf,y, bm2_rf,  y, alu_x,     ex_x, n, nr, wm_a, n,  n,   n    );
%000000       `TINYRV2_INST_BEQ     :cs( y, j_na,  br_beq, imm_b, bm1_rf,y, bm2_rf,  y, alu_x,     ex_x, n, nr, wm_a, n,  n,   n    );
        
              // Load/store
 000644       `TINYRV2_INST_LW      :cs( y, j_na,  br_na,  imm_i, bm1_rf,y, bm2_imm, n, alu_add, ex_alu, n, ld, wm_m, y,  n,   n    );
 000263       `TINYRV2_INST_SW      :cs( y, j_na,  br_na,  imm_s, bm1_rf,y, bm2_imm, y, alu_add,   ex_x, n, st, wm_x, n,  n,   n    );
        
              // Manager
 000255       `TINYRV2_INST_CSRR    :cs( y, j_na,  br_na,  imm_i, bm1_x, n, bm2_csr, n, alu_cp1, ex_alu, n, nr, wm_a, y,  y,   n    );
 000148       `TINYRV2_INST_CSRW    :cs( y, j_na,  br_na,  imm_i, bm1_rf,y, bm2_rf,  n, alu_cp0, ex_alu, n, nr, wm_a, n,  n,   y    );
              
              // Default
 001756       default               :cs( n,  j_x,  br_x,   imm_x, bm1_x, n, bm2_x,   n, alu_x,     ex_x, n, nr, wm_x, n,  n,   n    );
        
            endcase
          end // always_comb
        
 000050   logic [4:0] rf_waddr_D;
          assign rf_waddr_D = inst_rd_D;
        
          // imul val
          assign imul_req_val_D = mul_D;
        
          // csrr and csrw logic
        
%000000   always_comb begin
%000000     proc2mngr_val_D  = 1'b0;
%000000     mngr2proc_rdy_D  = 1'b0;
%000000     csrr_sel_D       = 2'h0;
%000000     stats_en_wen_D   = 1'b0;
        
 000148     if ( csrw_D && inst_csr_D == `TINYRV2_CPR_PROC2MNGR )
 000148       proc2mngr_val_D  = 1'b1;
 000255     if ( csrr_D && inst_csr_D == `TINYRV2_CPR_MNGR2PROC )
 000255       mngr2proc_rdy_D  = 1'b1;
 004374     if ( csrw_D && inst_csr_D == `TINYRV2_CPR_STATS_EN )
%000000       stats_en_wen_D   = 1'b1;
 004374     if ( csrr_D && inst_csr_D == `TINYRV2_CPR_NUMCORES )
%000000       csrr_sel_D       = 2'h1;
 004374     if ( csrr_D && inst_csr_D == `TINYRV2_CPR_COREID )
%000000       csrr_sel_D       = 2'h2;
          end
        
          // JAL logic
        
%000000   always_comb begin
 000004     if (val_D && (j_type_D == j_jal)) begin
 000004       pc_redirect_D = 1'b1;
 000004       pc_sel_D = 2'd2;
            end
 004370     else begin
 004370       pc_redirect_D = 1'b0;
 004370       pc_sel_D = 2'd3;
            end
          end
        
          // bypass mux selects
        
%000000   always_comb begin
 000036     if (bypass_waddr_X_rs1_D) assign op1_byp_sel_D = 2'd2;
 000076     else if (bypass_waddr_M_rs1_D) assign op1_byp_sel_D = 2'd1;
 000096     else if (bypass_waddr_W_rs1_D) assign op1_byp_sel_D = 2'd0;
 004166     else assign op1_byp_sel_D = 2'd3;
          end
        
%000000   always_comb begin
 000077     if (bypass_waddr_X_rs2_D) assign op2_byp_sel_D = 2'd3;
 000208     else if (bypass_waddr_M_rs2_D) assign op2_byp_sel_D = 2'd2;
 000019     else if (bypass_waddr_W_rs2_D) assign op2_byp_sel_D = 2'd1;
 004070     else assign op2_byp_sel_D = 2'd0;
          end
        
          // bypass from X to D
        
 000066   logic  bypass_waddr_X_rs1_D;
          assign bypass_waddr_X_rs1_D
            = val_D && rs1_en_D && val_X && rf_wen_X
            && (inst_rs1_D == rf_waddr_X) && (rf_waddr_X != 0)
            && (dmem_reqstream_type_X != ld);
        
 000154   logic  bypass_waddr_X_rs2_D;
          assign bypass_waddr_X_rs2_D
            = val_D && rs2_en_D && val_X && rf_wen_X
            && (inst_rs2_D == rf_waddr_X) && (rf_waddr_X != 0)
            && (dmem_reqstream_type_X != ld);
        
          // bypass from M to D
        
 000128   logic  bypass_waddr_M_rs1_D;
          assign bypass_waddr_M_rs1_D
            = val_D && rs1_en_D && val_M && rf_wen_M
            && (inst_rs1_D == rf_waddr_M) && (rf_waddr_M != 0);
            
 000218   logic  bypass_waddr_M_rs2_D;
          assign bypass_waddr_M_rs2_D
            = val_D && rs2_en_D && val_M && rf_wen_M
            && (inst_rs2_D == rf_waddr_M) && (rf_waddr_M != 0);
            
          // bypass from W to D
        
 000196   logic  bypass_waddr_W_rs1_D;
          assign bypass_waddr_W_rs1_D
            = val_D && rs1_en_D && val_W && rf_wen_W
            && (inst_rs1_D == rf_waddr_W) && (rf_waddr_W != 0);
            
 000040   logic  bypass_waddr_W_rs2_D;
          assign bypass_waddr_W_rs2_D
            = val_D && rs2_en_D && val_W && rf_wen_W
            && (inst_rs2_D == rf_waddr_W) && (rf_waddr_W != 0);
        
          // ostall from load-use RAW hazard
        
 000002   logic  ostall_load_use_X_rsl_D;
          assign ostall_load_use_X_rsl_D
            = rs1_en_D && val_X && rf_wen_X
            && (inst_rs1_D == rf_waddr_X) && (rf_waddr_X != 0)
            && (dmem_reqstream_type_X == ld);
        
 000132   logic  ostall_load_use_X_rs2_D;
          assign ostall_load_use_X_rs2_D
            = rs2_en_D && val_X && rf_wen_X
            && (inst_rs2_D == rf_waddr_X) && (rf_waddr_X != 0)
            && (dmem_reqstream_type_X == ld);
        
          // mngr2proc_rdy signal for csrr instruction
        
          assign mngr2proc_rdy = val_D && !stall_D && mngr2proc_rdy_D;
        
 000052   logic  ostall_mngr2proc_D;
          assign ostall_mngr2proc_D = val_D && mngr2proc_rdy_D && !mngr2proc_val;
        
          // ostall if write address in X matches rs1 in D
        
 000002   logic  ostall_waddr_X_rs1_D;
          assign ostall_waddr_X_rs1_D
            = rs1_en_D && val_X && rf_wen_X
              && ( inst_rs1_D == rf_waddr_X ) && ( rf_waddr_X != 5'd0 )
              && !bypass_waddr_X_rs1_D;
        
          // ostall if write address in M matches rs1 in D
        
 000020   logic  ostall_waddr_M_rs1_D;
          assign ostall_waddr_M_rs1_D
            = rs1_en_D && val_M && rf_wen_M
              && ( inst_rs1_D == rf_waddr_M ) && ( rf_waddr_M != 5'd0 )
              && !bypass_waddr_M_rs1_D;
        
          // ostall if write address in W matches rs1 in D
        
 000002   logic  ostall_waddr_W_rs1_D;
          assign ostall_waddr_W_rs1_D
            = rs1_en_D && val_W && rf_wen_W
              && ( inst_rs1_D == rf_waddr_W ) && ( rf_waddr_W != 5'd0 )
              && !bypass_waddr_W_rs1_D;
        
          // ostall if write address in X matches rs2 in D
        
 000132   logic  ostall_waddr_X_rs2_D;
          assign ostall_waddr_X_rs2_D
            = rs2_en_D && val_X && rf_wen_X
              && ( inst_rs2_D == rf_waddr_X ) && ( rf_waddr_X != 5'd0 )
              && !bypass_waddr_X_rs2_D;
        
          // ostall if write address in M matches rs2 in D
        
 000024   logic  ostall_waddr_M_rs2_D;
          assign ostall_waddr_M_rs2_D
            = rs2_en_D && val_M && rf_wen_M
              && ( inst_rs2_D == rf_waddr_M ) && ( rf_waddr_M != 5'd0 )
              && !bypass_waddr_M_rs2_D;
        
          // ostall if write address in W matches rs2 in D
        
%000000   logic  ostall_waddr_W_rs2_D;
          assign ostall_waddr_W_rs2_D
            = rs2_en_D && val_W && rf_wen_W
              && ( inst_rs2_D == rf_waddr_W ) && ( rf_waddr_W != 5'd0 )
              && !bypass_waddr_W_rs2_D;
        
          // ostall if imul req_rdy is 0 (not ready)
        
 000002   logic  ostall_imul_req_rdy_D;
          assign ostall_imul_req_rdy_D
            = !imul_req_rdy_D;
        
          // ostall if WAW hazard TODO
        
          // Put together ostall signal due to hazards
        
 000164   logic  ostall_hazard_D;
          assign ostall_hazard_D =
              ostall_waddr_X_rs1_D || ostall_waddr_M_rs1_D || ostall_waddr_W_rs1_D ||
              ostall_waddr_X_rs2_D || ostall_waddr_M_rs2_D || ostall_waddr_W_rs2_D ||
              ostall_imul_req_rdy_D || ostall_load_use_X_rsl_D || ostall_load_use_X_rs2_D;
        
          // Final ostall signal
        
          assign ostall_D = val_D && ( ostall_mngr2proc_D || ostall_hazard_D );
        
          // osquash due to jump instruction in D stage (not implemented yet)
        
          assign osquash_D = val_D && !stall_D && pc_redirect_D;
        
          // stall and squash in D
        
          assign stall_D  = val_D && ( ostall_D || ostall_X || ostall_M || ostall_W );
          assign squash_D = val_D && osquash_X;
        
          // Valid signal for the next stage
        
 002344   logic  next_val_D;
          assign next_val_D = val_D && !stall_D && !squash_D;
        
          //----------------------------------------------------------------------
          // X stage
          //----------------------------------------------------------------------
        
          // Register enable logic
        
          assign reg_en_X = !stall_X;
        
 000002   logic [31:0] inst_X;
 000338   logic [1:0]  dmem_reqstream_type_X;
 000546   logic        wb_result_sel_X;
 001526   logic        rf_wen_X;
 000050   logic [4:0]  rf_waddr_X;
 000272   logic        proc2mngr_val_X;
%000000   logic        stats_en_wen_X;
%000000   logic [2:0]  br_type_X;
 000002   logic [1:0]  j_type_X;
        
          // Pipeline registers
        
 004374   always_ff @( posedge clk )
 000169     if ( reset ) begin
 000169       val_X                 <= 1'b0;
            end
 000230     else if ( reg_en_X ) begin
 003975       val_X                 <= next_val_D;
 003975       rf_wen_X              <= rf_wen_D;
 003975       inst_X                <= inst_D;
 003975       alu_fn_X              <= alu_fn_D;
 003975       rf_waddr_X            <= rf_waddr_D;
 003975       proc2mngr_val_X       <= proc2mngr_val_D;
 003975       dmem_reqstream_type_X <= dmem_reqstream_type_D;
 003975       wb_result_sel_X       <= wb_result_sel_D;
 003975       stats_en_wen_X        <= stats_en_wen_D;
 003975       ex_result_sel_X       <= ex_result_sel_D;
 003975       br_type_X             <= br_type_D;
 003975       j_type_X              <= j_type_D;
            end
        
          // branch logic, redirect PC in F if branch is taken
        
%000000   always_comb begin
 000125     if (val_X && (br_type_X == br_bne)) begin // bne
 000125       pc_redirect_X = !br_cond_eq_X;
 000125       pc_sel_X      = 2'b1; // use branch target
            end
%000000     else if (val_X && (br_type_X == br_beq)) begin // beq
%000000       pc_redirect_X = br_cond_eq_X;
%000000       pc_sel_X      = 2'b1; // use branch target
            end
%000000     else if (val_X && (br_type_X == br_blt)) begin // blt
%000000       pc_redirect_X = br_cond_lt_X;
%000000       pc_sel_X      = 2'b1; // use branch target
            end
%000000     else if (val_X && (br_type_X == br_bltu)) begin // bltu
%000000       pc_redirect_X = br_cond_ltu_X;
%000000       pc_sel_X      = 2'b1; // use branch target
            end
%000000     else if (val_X && (br_type_X == br_bge)) begin // bge
%000000       pc_redirect_X = !br_cond_lt_X;
%000000       pc_sel_X      = 2'b1; // use branch target
            end
%000000     else if (val_X && (br_type_X == br_bgeu)) begin // bgeu
%000000       pc_redirect_X = !br_cond_ltu_X;
%000000       pc_sel_X      = 2'b1; // use branch target
            end
 000001     else if (val_X && (j_type_X == j_jalr)) begin // jalr
 000001       pc_redirect_X = 1'b1; // Will redirect pc always
 000001       pc_sel_X = 2'd0; // Choose upper input - jalr_target_X
            end
 004248     else begin
 004248       pc_redirect_X = 1'b0;
 004248       pc_sel_X      = 2'd3; // use pc+4 - non-branch/jump case
            end
          end
        
          // ostall due to imul not ready to output value (mul in X stage and imul_resp_val_X is false)
        
 000002   logic ostall_imul_resp_val_X;
          assign ostall_imul_resp_val_X = (ex_result_sel_X == 2'd2 && imul_resp_val_X == 0);
        
          // ostall due to dmem_reqstream not ready
        
 000184   logic ostall_dmem_reqstream_X;
          assign ostall_dmem_reqstream_X = ( dmem_reqstream_type_X != nr ) && !dmem_reqstream_rdy;
        
          // Final ostall signal
        
          assign ostall_X = val_X && (ostall_dmem_reqstream_X || ostall_imul_resp_val_X);
        
          // osquash due to taken branch, notice we can't osquash if current
          // stage stalls, otherwise we will send osquash twice.
        
          assign osquash_X = val_X && !stall_X && pc_redirect_X;
        
          // stall and squash used in X stage
        
          assign stall_X = val_X && ( ostall_X || ostall_M || ostall_W );
        
          // set dmem_reqstream_val only if not stalling
        
          assign dmem_reqstream_val = val_X && !stall_X && ( dmem_reqstream_type_X != nr );
          
          // Assign memory action based on instruction
%000000   always_comb begin
 000727     if (dmem_reqstream_type_X == ld) begin
 000727       assign mem_action = 3'd0;
 000284     end else if (dmem_reqstream_type_X == st) begin
 000284       assign mem_action = 3'd1;
 003363     end else begin
 003363       assign mem_action = 3'dx;
            end
          end
        
          // Ready to receive imul response if mul in X stage and X stage is not stalled
        
          assign imul_resp_rdy_X = (ex_result_sel_X == 2'd2) && !stall_X;
        
          // Valid signal for the next stage
        
 002546   logic  next_val_X;
          assign next_val_X = val_X && !stall_X;
        
          //----------------------------------------------------------------------
          // M stage
          //----------------------------------------------------------------------
        
          // Register enable logic
        
          assign reg_en_M  = !stall_M;
        
 000002   logic [31:0] inst_M;
 000284   logic [1:0]  dmem_reqstream_type_M;
 001296   logic        rf_wen_M;
 000050   logic [4:0]  rf_waddr_M;
 000270   logic        proc2mngr_val_M;
%000000   logic        stats_en_wen_M;
        
          // Pipeline register
        
 004374   always_ff @( posedge clk )
 000169     if ( reset ) begin
 000169       val_M                 <= 1'b0;
            end
 000654     else if ( reg_en_M ) begin
 003551       val_M                 <= next_val_X;
 003551       rf_wen_M              <= rf_wen_X;
 003551       inst_M                <= inst_X;
 003551       rf_waddr_M            <= rf_waddr_X;
 003551       proc2mngr_val_M       <= proc2mngr_val_X;
 003551       dmem_reqstream_type_M <= dmem_reqstream_type_X;
 003551       wb_result_sel_M       <= wb_result_sel_X;
 003551       stats_en_wen_M        <= stats_en_wen_X;
            end
        
          // ostall due to dmem_respstream not valid
        
          assign ostall_M = val_M && ( dmem_reqstream_type_M != nr ) && !dmem_respstream_val;
        
          // stall M
        
          assign stall_M = val_M && ( ostall_M || ostall_W );
        
          // Set dmem_respstream_rdy if valid and not stalling and this is a lw/sw
        
          assign dmem_respstream_rdy = val_M && !stall_M && ( dmem_reqstream_type_M != nr );
        
          // Valid signal for the next stage
        
 002567   logic  next_val_M;
          assign next_val_M = val_M && !stall_M;
        
          //----------------------------------------------------------------------
          // W stage
          //----------------------------------------------------------------------
        
          // Register enable logic
        
          assign reg_en_W = !stall_W;
        
 000002   logic [31:0] inst_W;
 000270   logic        proc2mngr_val_W;
 001296   logic        rf_wen_pending_W;
%000000   logic        stats_en_wen_pending_W;
        
          // Pipeline registers
        
 004374   always_ff @( posedge clk ) begin
 000169     if ( reset ) begin
 000169       val_W                  <= 1'b0;
            end
 000028     else if ( reg_en_W ) begin
 004177       val_W                  <= next_val_M;
 004177       rf_wen_pending_W       <= rf_wen_M;
 004177       inst_W                 <= inst_M;
 004177       rf_waddr_W             <= rf_waddr_M;
 004177       proc2mngr_val_W        <= proc2mngr_val_M;
 004177       stats_en_wen_pending_W <= stats_en_wen_M;
            end
          end
        
          // write enable
        
          assign rf_wen_W       = val_W && rf_wen_pending_W;
          assign stats_en_wen_W = val_W && stats_en_wen_pending_W;
        
          // ostall due to proc2mngr
        
          assign ostall_W = val_W && proc2mngr_val_W && !proc2mngr_rdy;
        
          // stall and squash signal used in W stage
        
          assign stall_W = val_W && ostall_W;
        
          // proc2mngr port
        
          assign proc2mngr_val = val_W && !stall_W && proc2mngr_val_W;
        
          assign commit_inst = val_W && !stall_W;
        
        endmodule
        
        `endif /* LAB2_PROC_PROC_BASE_CTRL_V */
        

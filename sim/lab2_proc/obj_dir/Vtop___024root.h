// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vtop___024unit;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtop___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(linetrace,0,0);
        CData/*0:0*/ top__DOT__reset;
        CData/*0:0*/ top__DOT__imem_reqstream_val;
        CData/*0:0*/ top__DOT__imem_reqstream_rdy;
        CData/*0:0*/ top__DOT__imem_respstream_val;
        CData/*0:0*/ top__DOT__imem_respstream_rdy;
        CData/*0:0*/ top__DOT__imem_respstream_drop;
        CData/*0:0*/ top__DOT__dmem_reqstream_val;
        CData/*0:0*/ top__DOT__dmem_reqstream_rdy;
        CData/*0:0*/ top__DOT__dmem_respstream_val;
        CData/*0:0*/ top__DOT__dmem_respstream_rdy;
        CData/*2:0*/ top__DOT__mem_action;
        CData/*0:0*/ top__DOT__mngr2proc_val;
        CData/*0:0*/ top__DOT__mngr2proc_rdy;
        CData/*0:0*/ top__DOT__proc2mngr_val;
        CData/*0:0*/ top__DOT__proc2mngr_rdy;
        CData/*1:0*/ top__DOT__pc_sel_F;
        CData/*0:0*/ top__DOT__reg_en_D;
        CData/*0:0*/ top__DOT__op1_sel_D;
        CData/*1:0*/ top__DOT__op2_sel_D;
        CData/*1:0*/ top__DOT__csrr_sel_D;
        CData/*2:0*/ top__DOT__imm_type_D;
        CData/*3:0*/ top__DOT__alu_fn_X;
        CData/*1:0*/ top__DOT__ex_result_sel_X;
        CData/*0:0*/ top__DOT__wb_result_sel_M;
        CData/*4:0*/ top__DOT__rf_waddr_W;
        CData/*0:0*/ top__DOT__rf_wen_W;
        CData/*0:0*/ top__DOT__stats_en_wen_W;
        CData/*0:0*/ top__DOT__imul_req_val_D;
        CData/*0:0*/ top__DOT__imul_resp_rdy_X;
        CData/*0:0*/ top__DOT__br_cond_eq_X;
        CData/*0:0*/ top__DOT__br_cond_lt_X;
        CData/*0:0*/ top__DOT__br_cond_ltu_X;
        CData/*0:0*/ top__DOT__imul_req_rdy_D;
        CData/*0:0*/ top__DOT__imul_resp_val_X;
        CData/*0:0*/ top__DOT__commit_inst;
        CData/*0:0*/ top__DOT____Vtogcov__clk;
        CData/*0:0*/ top__DOT____Vtogcov__linetrace;
        CData/*0:0*/ top__DOT____Vtogcov__reset;
        CData/*0:0*/ top__DOT____Vtogcov__imem_reqstream_val;
        CData/*0:0*/ top__DOT____Vtogcov__imem_reqstream_rdy;
        CData/*0:0*/ top__DOT____Vtogcov__imem_respstream_val;
        CData/*0:0*/ top__DOT____Vtogcov__imem_respstream_rdy;
        CData/*0:0*/ top__DOT____Vtogcov__imem_respstream_drop;
        CData/*0:0*/ top__DOT____Vtogcov__dmem_reqstream_val;
        CData/*0:0*/ top__DOT____Vtogcov__dmem_reqstream_rdy;
        CData/*0:0*/ top__DOT____Vtogcov__dmem_respstream_val;
        CData/*0:0*/ top__DOT____Vtogcov__dmem_respstream_rdy;
        CData/*2:0*/ top__DOT____Vtogcov__mem_action;
        CData/*0:0*/ top__DOT____Vtogcov__mngr2proc_val;
        CData/*0:0*/ top__DOT____Vtogcov__mngr2proc_rdy;
        CData/*0:0*/ top__DOT____Vtogcov__proc2mngr_val;
        CData/*0:0*/ top__DOT____Vtogcov__proc2mngr_rdy;
        CData/*1:0*/ top__DOT____Vtogcov__pc_sel_F;
        CData/*0:0*/ top__DOT____Vtogcov__reg_en_D;
        CData/*0:0*/ top__DOT____Vtogcov__op1_sel_D;
        CData/*1:0*/ top__DOT____Vtogcov__op2_sel_D;
        CData/*1:0*/ top__DOT____Vtogcov__csrr_sel_D;
        CData/*2:0*/ top__DOT____Vtogcov__imm_type_D;
        CData/*0:0*/ top__DOT____Vtogcov__reg_en_X;
        CData/*3:0*/ top__DOT____Vtogcov__alu_fn_X;
        CData/*1:0*/ top__DOT____Vtogcov__ex_result_sel_X;
        CData/*0:0*/ top__DOT____Vtogcov__reg_en_M;
    };
    struct {
        CData/*0:0*/ top__DOT____Vtogcov__wb_result_sel_M;
        CData/*0:0*/ top__DOT____Vtogcov__reg_en_W;
        CData/*4:0*/ top__DOT____Vtogcov__rf_waddr_W;
        CData/*0:0*/ top__DOT____Vtogcov__rf_wen_W;
        CData/*0:0*/ top__DOT____Vtogcov__stats_en_wen_W;
        CData/*0:0*/ top__DOT____Vtogcov__imul_req_val_D;
        CData/*0:0*/ top__DOT____Vtogcov__imul_resp_rdy_X;
        CData/*0:0*/ top__DOT____Vtogcov__br_cond_eq_X;
        CData/*0:0*/ top__DOT____Vtogcov__br_cond_lt_X;
        CData/*0:0*/ top__DOT____Vtogcov__br_cond_ltu_X;
        CData/*0:0*/ top__DOT____Vtogcov__imul_req_rdy_D;
        CData/*0:0*/ top__DOT____Vtogcov__imul_resp_val_X;
        CData/*0:0*/ top__DOT____Vtogcov__commit_inst;
        CData/*0:0*/ top__DOT__DUT__DOT__val_F;
        CData/*0:0*/ top__DOT__DUT__DOT__val_D;
        CData/*0:0*/ top__DOT__DUT__DOT__val_X;
        CData/*0:0*/ top__DOT__DUT__DOT__val_M;
        CData/*0:0*/ top__DOT__DUT__DOT__val_W;
        CData/*0:0*/ top__DOT__DUT__DOT__ostall_F;
        CData/*0:0*/ top__DOT__DUT__DOT__ostall_D;
        CData/*0:0*/ top__DOT__DUT__DOT__ostall_X;
        CData/*0:0*/ top__DOT__DUT__DOT__ostall_M;
        CData/*0:0*/ top__DOT__DUT__DOT__ostall_W;
        CData/*0:0*/ top__DOT__DUT__DOT__stall_F;
        CData/*0:0*/ top__DOT__DUT__DOT__stall_D;
        CData/*0:0*/ top__DOT__DUT__DOT__stall_X;
        CData/*0:0*/ top__DOT__DUT__DOT__stall_M;
        CData/*0:0*/ top__DOT__DUT__DOT__stall_W;
        CData/*0:0*/ top__DOT__DUT__DOT__osquash_D;
        CData/*0:0*/ top__DOT__DUT__DOT__osquash_X;
        CData/*0:0*/ top__DOT__DUT__DOT__squash_D;
        CData/*0:0*/ top__DOT__DUT__DOT__pc_redirect_X;
        CData/*1:0*/ top__DOT__DUT__DOT__pc_sel_X;
        CData/*1:0*/ top__DOT__DUT__DOT__pc_sel_D;
        CData/*0:0*/ top__DOT__DUT__DOT__next_val_F;
        CData/*0:0*/ top__DOT__DUT__DOT__inst_val_D;
        CData/*1:0*/ top__DOT__DUT__DOT__j_type_D;
        CData/*2:0*/ top__DOT__DUT__DOT__br_type_D;
        CData/*0:0*/ top__DOT__DUT__DOT__rs1_en_D;
        CData/*0:0*/ top__DOT__DUT__DOT__rs2_en_D;
        CData/*3:0*/ top__DOT__DUT__DOT__alu_fn_D;
        CData/*1:0*/ top__DOT__DUT__DOT__ex_result_sel_D;
        CData/*0:0*/ top__DOT__DUT__DOT__mul_D;
        CData/*1:0*/ top__DOT__DUT__DOT__dmem_reqstream_type_D;
        CData/*0:0*/ top__DOT__DUT__DOT__wb_result_sel_D;
        CData/*0:0*/ top__DOT__DUT__DOT__rf_wen_D;
        CData/*0:0*/ top__DOT__DUT__DOT__csrr_D;
        CData/*0:0*/ top__DOT__DUT__DOT__csrw_D;
        CData/*0:0*/ top__DOT__DUT__DOT__proc2mngr_val_D;
        CData/*0:0*/ top__DOT__DUT__DOT__mngr2proc_rdy_D;
        CData/*0:0*/ top__DOT__DUT__DOT__stats_en_wen_D;
        CData/*0:0*/ top__DOT__DUT__DOT__pc_redirect_D;
        CData/*0:0*/ top__DOT__DUT__DOT__ostall_mngr2proc_D;
        CData/*0:0*/ top__DOT__DUT__DOT__ostall_waddr_X_rs1_D;
        CData/*0:0*/ top__DOT__DUT__DOT__ostall_waddr_M_rs1_D;
        CData/*0:0*/ top__DOT__DUT__DOT__ostall_waddr_W_rs1_D;
        CData/*0:0*/ top__DOT__DUT__DOT__ostall_waddr_X_rs2_D;
        CData/*0:0*/ top__DOT__DUT__DOT__ostall_waddr_M_rs2_D;
        CData/*0:0*/ top__DOT__DUT__DOT__ostall_waddr_W_rs2_D;
        CData/*0:0*/ top__DOT__DUT__DOT__ostall_hazard_D;
        CData/*0:0*/ top__DOT__DUT__DOT__next_val_D;
        CData/*1:0*/ top__DOT__DUT__DOT__dmem_reqstream_type_X;
        CData/*0:0*/ top__DOT__DUT__DOT__wb_result_sel_X;
        CData/*0:0*/ top__DOT__DUT__DOT__rf_wen_X;
    };
    struct {
        CData/*4:0*/ top__DOT__DUT__DOT__rf_waddr_X;
        CData/*0:0*/ top__DOT__DUT__DOT__proc2mngr_val_X;
        CData/*0:0*/ top__DOT__DUT__DOT__stats_en_wen_X;
        CData/*2:0*/ top__DOT__DUT__DOT__br_type_X;
        CData/*1:0*/ top__DOT__DUT__DOT__j_type_X;
        CData/*0:0*/ top__DOT__DUT__DOT__ostall_imul_resp_val_X;
        CData/*0:0*/ top__DOT__DUT__DOT__ostall_dmem_reqstream_X;
        CData/*0:0*/ top__DOT__DUT__DOT__next_val_X;
        CData/*1:0*/ top__DOT__DUT__DOT__dmem_reqstream_type_M;
        CData/*0:0*/ top__DOT__DUT__DOT__rf_wen_M;
        CData/*4:0*/ top__DOT__DUT__DOT__rf_waddr_M;
        CData/*0:0*/ top__DOT__DUT__DOT__proc2mngr_val_M;
        CData/*0:0*/ top__DOT__DUT__DOT__stats_en_wen_M;
        CData/*0:0*/ top__DOT__DUT__DOT__next_val_M;
        CData/*0:0*/ top__DOT__DUT__DOT__proc2mngr_val_W;
        CData/*0:0*/ top__DOT__DUT__DOT__rf_wen_pending_W;
        CData/*0:0*/ top__DOT__DUT__DOT__stats_en_wen_pending_W;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__val_F;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__val_D;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__val_X;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__val_M;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__val_W;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__ostall_F;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__ostall_D;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__ostall_X;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__ostall_M;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__ostall_W;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__stall_F;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__stall_D;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__stall_X;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__stall_M;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__stall_W;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__osquash_D;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__osquash_X;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__squash_D;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__pc_redirect_X;
        CData/*1:0*/ top__DOT__DUT__DOT____Vtogcov__pc_sel_X;
        CData/*1:0*/ top__DOT__DUT__DOT____Vtogcov__pc_sel_D;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__next_val_F;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__inst_val_D;
        CData/*1:0*/ top__DOT__DUT__DOT____Vtogcov__j_type_D;
        CData/*2:0*/ top__DOT__DUT__DOT____Vtogcov__br_type_D;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__rs1_en_D;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__rs2_en_D;
        CData/*3:0*/ top__DOT__DUT__DOT____Vtogcov__alu_fn_D;
        CData/*1:0*/ top__DOT__DUT__DOT____Vtogcov__ex_result_sel_D;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__mul_D;
        CData/*1:0*/ top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_D;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__wb_result_sel_D;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__rf_wen_D;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__csrr_D;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__csrw_D;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__proc2mngr_val_D;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__mngr2proc_rdy_D;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__stats_en_wen_D;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__pc_redirect_D;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__ostall_mngr2proc_D;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__ostall_waddr_X_rs1_D;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__ostall_waddr_M_rs1_D;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__ostall_waddr_W_rs1_D;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__ostall_waddr_X_rs2_D;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__ostall_waddr_M_rs2_D;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__ostall_waddr_W_rs2_D;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__ostall_imul_req_rdy_D;
    };
    struct {
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__ostall_hazard_D;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__next_val_D;
        CData/*1:0*/ top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_X;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__wb_result_sel_X;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__rf_wen_X;
        CData/*4:0*/ top__DOT__DUT__DOT____Vtogcov__rf_waddr_X;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__proc2mngr_val_X;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__stats_en_wen_X;
        CData/*2:0*/ top__DOT__DUT__DOT____Vtogcov__br_type_X;
        CData/*1:0*/ top__DOT__DUT__DOT____Vtogcov__j_type_X;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__ostall_imul_resp_val_X;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__ostall_dmem_reqstream_X;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__next_val_X;
        CData/*1:0*/ top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_M;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__rf_wen_M;
        CData/*4:0*/ top__DOT__DUT__DOT____Vtogcov__rf_waddr_M;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__proc2mngr_val_M;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__stats_en_wen_M;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__next_val_M;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__proc2mngr_val_W;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__rf_wen_pending_W;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__stats_en_wen_pending_W;
        CData/*0:0*/ top__DOT__DUT__DOT____VdfgTmp_h699142ba__0;
        CData/*6:0*/ top__DOT__DUT__DOT__inst_unpack__DOT__funct7;
        CData/*6:0*/ top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ top__DOT__inst_D;
        IData/*31:0*/ top__DOT____Vtogcov__inst_D;
        IData/*31:0*/ top__DOT__DUT__DOT__inst_X;
        IData/*31:0*/ top__DOT__DUT__DOT__inst_M;
        IData/*31:0*/ top__DOT__DUT__DOT__inst_W;
        IData/*31:0*/ top__DOT__DUT__DOT____Vtogcov__inst_X;
        IData/*31:0*/ top__DOT__DUT__DOT____Vtogcov__inst_M;
        IData/*31:0*/ top__DOT__DUT__DOT____Vtogcov__inst_W;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*0:0*/, 7> __Vm_traceActivity;
    };
    VlTriggerScheduler __VtrigSched_h3d404bd2__0;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard

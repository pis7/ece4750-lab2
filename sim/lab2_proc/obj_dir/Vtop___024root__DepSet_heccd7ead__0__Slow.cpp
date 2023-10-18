// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("utb_ProcBaseCtrl.v", 16, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->linetrace = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imem_reqstream_val = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imem_reqstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imem_respstream_val = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imem_respstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imem_respstream_drop = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dmem_reqstream_val = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dmem_reqstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dmem_respstream_val = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dmem_respstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mem_action = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__mngr2proc_val = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mngr2proc_rdy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc2mngr_val = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc2mngr_rdy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pc_sel_F = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__reg_en_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__op1_sel_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__op2_sel_D = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__csrr_sel_D = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__imm_type_D = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__alu_fn_X = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__ex_result_sel_X = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__wb_result_sel_M = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__rf_waddr_W = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__rf_wen_W = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__stats_en_wen_W = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul_req_val_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul_resp_rdy_X = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__inst_D = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__br_cond_eq_X = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__br_cond_lt_X = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__br_cond_ltu_X = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul_req_rdy_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul_resp_val_X = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__commit_inst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__linetrace = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__imem_reqstream_val = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__imem_reqstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__imem_respstream_val = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__imem_respstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__imem_respstream_drop = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__dmem_reqstream_val = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__dmem_reqstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__dmem_respstream_val = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__dmem_respstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__mem_action = VL_RAND_RESET_I(3);
    vlSelf->top__DOT____Vtogcov__mngr2proc_val = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__mngr2proc_rdy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__proc2mngr_val = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__proc2mngr_rdy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__pc_sel_F = VL_RAND_RESET_I(2);
    vlSelf->top__DOT____Vtogcov__reg_en_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__op1_sel_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__op2_sel_D = VL_RAND_RESET_I(2);
    vlSelf->top__DOT____Vtogcov__csrr_sel_D = VL_RAND_RESET_I(2);
    vlSelf->top__DOT____Vtogcov__imm_type_D = VL_RAND_RESET_I(3);
    vlSelf->top__DOT____Vtogcov__reg_en_X = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__alu_fn_X = VL_RAND_RESET_I(4);
    vlSelf->top__DOT____Vtogcov__ex_result_sel_X = VL_RAND_RESET_I(2);
    vlSelf->top__DOT____Vtogcov__reg_en_M = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__wb_result_sel_M = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__reg_en_W = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__rf_waddr_W = VL_RAND_RESET_I(5);
    vlSelf->top__DOT____Vtogcov__rf_wen_W = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__stats_en_wen_W = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__imul_req_val_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__imul_resp_rdy_X = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__inst_D = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vtogcov__br_cond_eq_X = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__br_cond_lt_X = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__br_cond_ltu_X = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__imul_req_rdy_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__imul_resp_val_X = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__commit_inst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__val_F = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__val_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__val_X = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__val_M = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__val_W = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__ostall_F = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__ostall_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__ostall_X = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__ostall_M = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__ostall_W = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__stall_F = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__stall_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__stall_X = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__stall_M = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__stall_W = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__osquash_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__osquash_X = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__squash_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__pc_redirect_X = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__pc_sel_X = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__DUT__DOT__pc_sel_D = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__DUT__DOT__next_val_F = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__inst_val_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__j_type_D = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__DUT__DOT__br_type_D = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__DUT__DOT__rs1_en_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__rs2_en_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__alu_fn_D = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__DUT__DOT__mul_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__DUT__DOT__wb_result_sel_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__rf_wen_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__csrr_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__csrw_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__proc2mngr_val_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__mngr2proc_rdy_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__stats_en_wen_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__pc_redirect_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__ostall_mngr2proc_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs1_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs1_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs1_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs2_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs2_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs2_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__ostall_hazard_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__next_val_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__inst_X = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__DUT__DOT__wb_result_sel_X = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__rf_wen_X = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__rf_waddr_X = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__DUT__DOT__proc2mngr_val_X = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__stats_en_wen_X = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__br_type_X = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__DUT__DOT__j_type_X = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__DUT__DOT__ostall_imul_resp_val_X = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__ostall_dmem_reqstream_X = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__next_val_X = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__inst_M = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_M = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__DUT__DOT__rf_wen_M = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__rf_waddr_M = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__DUT__DOT__proc2mngr_val_M = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__stats_en_wen_M = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__next_val_M = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__inst_W = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__proc2mngr_val_W = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__rf_wen_pending_W = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__stats_en_wen_pending_W = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__val_F = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__val_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__val_X = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__val_M = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__val_W = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_F = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_X = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_M = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_W = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_F = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_X = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_M = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_W = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__osquash_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__osquash_X = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__squash_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_redirect_X = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_X = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_D = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__next_val_F = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_val_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__j_type_D = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__rs1_en_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__rs2_en_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_D = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_D = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_sel_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__csrw_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_val_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__mngr2proc_rdy_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_wen_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_redirect_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_mngr2proc_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_X_rs1_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_M_rs1_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_W_rs1_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_X_rs2_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_M_rs2_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_W_rs2_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_imul_req_rdy_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_hazard_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__next_val_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_X = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_sel_X = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_X = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_val_X = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_wen_X = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_X = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__j_type_X = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_imul_resp_val_X = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_dmem_reqstream_X = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__next_val_X = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_M = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_M = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_val_M = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_wen_M = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__next_val_M = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_val_W = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_pending_W = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_wen_pending_W = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____VdfgTmp_h699142ba__0 = 0;
    vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7 = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7 = VL_RAND_RESET_I(7);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    // Body
    Vtop___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
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
                VL_FATAL_MT("utb_ProcBaseDpath.v", 17, "", "Settle region did not converge.");
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
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge clk)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge top.imul_resp_val_X)\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge clk)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge top.imul_resp_val_X)\n");
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
    vlSelf->top__DOT__imem_respstream_msg = VL_RAND_RESET_Q(47);
    vlSelf->top__DOT__imem_respstream_drop = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dmem_reqstream_msg_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dmem_respstream_msg_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mngr2proc_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__reg_en_F = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pc_sel_F = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__reg_en_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__op1_sel_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__op2_sel_D = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__csrr_sel_D = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__imm_type_D = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__reg_en_X = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__alu_fn_X = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__ex_result_sel_X = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__reg_en_M = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__wb_result_sel_M = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__reg_en_W = VL_RAND_RESET_I(1);
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
    vlSelf->top__DOT__core_id = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cur_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__linetrace = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vtogcov__imem_respstream_msg = VL_RAND_RESET_Q(47);
    vlSelf->top__DOT____Vtogcov__imem_respstream_drop = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vtogcov__mngr2proc_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vtogcov__proc2mngr_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vtogcov__reg_en_F = VL_RAND_RESET_I(1);
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
    vlSelf->top__DOT____Vtogcov__core_id = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vtogcov__stats_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__cur_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__pc_F = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__pc_next_F = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__br_target_X = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__jal_target_D = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__alu_result_X = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__pc_D = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__imm_D = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__rf_rdata0_D = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__rf_rdata1_D = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__op1_D = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__op2_D = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__csrr_data_D = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__op1_X = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__op2_X = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__pc_X = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__ex_result_X = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__DUT__DOT__ex_result_M = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__wb_result_M = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__wb_result_W = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__stats_en_W = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__num_cores = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7 = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7 = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__DUT__DOT__pc_plus_imm_D__DOT____Vtogcov__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__imul__DOT__b_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__imul__DOT__a_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__imul__DOT__result_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__imul__DOT__result_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__imul__DOT__add_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__imul__DOT__shamt = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(4096, vlSelf->top__DOT__DUT__DOT__imul__DOT__str);
    vlSelf->top__DOT__DUT__DOT__imul__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__imul__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__a_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__result_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__result_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__add_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__shamt = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__nextState = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT____Vtogcov__state = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT____Vtogcov__nextState = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT____Vtogcov__done = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__unnamedblk1__DOT__temp_shamt = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__unnamedblk1__DOT__temp_done = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__unnamedblk1__DOT__temp_add_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__imul__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__imul__DOT__vc_trace__DOT__len1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__imul__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__imul__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->top__DOT__DUT__DOT__imul__DOT__vc_trace__DOT__storage);
    vlSelf->top__DOT__DUT__DOT__imul__DOT__vc_trace__DOT__cycles_next = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__imul__DOT__vc_trace__DOT__cycles = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DUT__DOT__imul__DOT__vc_trace__DOT__level = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__DUT__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__DUT__DOT__pc_incr_X__DOT____Vtogcov__cout = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_top__DOT__DUT__DOT__imul__DOT__control__DOT__tab__188__t_shamt = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_top__DOT__DUT__DOT__imul__DOT__control__DOT__tab__188__t_add_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_top__DOT__DUT__DOT__imul__DOT__control__DOT__tab__188__t_done = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__imul_resp_val_X__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

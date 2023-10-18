// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->top__DOT__reset));
        bufp->chgBit(oldp+1,(vlSelf->top__DOT__imem_respstream_val));
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__inst_D),32);
        bufp->chgCData(oldp+3,((0x1fU & (vlSelf->top__DOT__inst_D 
                                         >> 7U))),5);
        bufp->chgCData(oldp+4,((0x1fU & (vlSelf->top__DOT__inst_D 
                                         >> 0xfU))),5);
        bufp->chgCData(oldp+5,((0x1fU & (vlSelf->top__DOT__inst_D 
                                         >> 0x14U))),5);
        bufp->chgSData(oldp+6,((vlSelf->top__DOT__inst_D 
                                >> 0x14U)),12);
        bufp->chgCData(oldp+7,((0x7fU & vlSelf->top__DOT__inst_D)),7);
        bufp->chgCData(oldp+8,((7U & (vlSelf->top__DOT__inst_D 
                                      >> 0xcU))),3);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgBit(oldp+9,(vlSelf->top__DOT__op1_sel_D));
        bufp->chgCData(oldp+10,(vlSelf->top__DOT__op2_sel_D),2);
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__csrr_sel_D),2);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__imm_type_D),3);
        bufp->chgBit(oldp+13,(vlSelf->top__DOT__DUT__DOT__inst_val_D));
        bufp->chgCData(oldp+14,(vlSelf->top__DOT__DUT__DOT__j_type_D),2);
        bufp->chgCData(oldp+15,(vlSelf->top__DOT__DUT__DOT__br_type_D),3);
        bufp->chgBit(oldp+16,(vlSelf->top__DOT__DUT__DOT__rs1_en_D));
        bufp->chgBit(oldp+17,(vlSelf->top__DOT__DUT__DOT__rs2_en_D));
        bufp->chgCData(oldp+18,(vlSelf->top__DOT__DUT__DOT__alu_fn_D),4);
        bufp->chgCData(oldp+19,(vlSelf->top__DOT__DUT__DOT__ex_result_sel_D),2);
        bufp->chgBit(oldp+20,(vlSelf->top__DOT__DUT__DOT__mul_D));
        bufp->chgCData(oldp+21,(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D),2);
        bufp->chgBit(oldp+22,(vlSelf->top__DOT__DUT__DOT__wb_result_sel_D));
        bufp->chgBit(oldp+23,(vlSelf->top__DOT__DUT__DOT__rf_wen_D));
        bufp->chgBit(oldp+24,(vlSelf->top__DOT__DUT__DOT__csrr_D));
        bufp->chgBit(oldp+25,(vlSelf->top__DOT__DUT__DOT__csrw_D));
        bufp->chgBit(oldp+26,(vlSelf->top__DOT__DUT__DOT__proc2mngr_val_D));
        bufp->chgBit(oldp+27,(vlSelf->top__DOT__DUT__DOT__mngr2proc_rdy_D));
        bufp->chgBit(oldp+28,(vlSelf->top__DOT__DUT__DOT__stats_en_wen_D));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+29,(vlSelf->top__DOT__imem_reqstream_val));
        bufp->chgBit(oldp+30,(vlSelf->top__DOT__imem_respstream_rdy));
        bufp->chgBit(oldp+31,(vlSelf->top__DOT__imem_respstream_drop));
        bufp->chgBit(oldp+32,(vlSelf->top__DOT__mngr2proc_rdy));
        bufp->chgCData(oldp+33,(vlSelf->top__DOT__pc_sel_F),2);
        bufp->chgBit(oldp+34,(vlSelf->top__DOT__reg_en_D));
        bufp->chgBit(oldp+35,(vlSelf->top__DOT__imul_req_val_D));
        bufp->chgBit(oldp+36,(vlSelf->top__DOT__DUT__DOT__ostall_F));
        bufp->chgBit(oldp+37,(vlSelf->top__DOT__DUT__DOT__ostall_D));
        bufp->chgBit(oldp+38,(vlSelf->top__DOT__DUT__DOT__stall_F));
        bufp->chgBit(oldp+39,(vlSelf->top__DOT__DUT__DOT__stall_D));
        bufp->chgBit(oldp+40,(vlSelf->top__DOT__DUT__DOT__osquash_D));
        bufp->chgCData(oldp+41,(vlSelf->top__DOT__DUT__DOT__pc_sel_D),2);
        bufp->chgBit(oldp+42,(vlSelf->top__DOT__DUT__DOT__next_val_F));
        bufp->chgBit(oldp+43,(vlSelf->top__DOT__DUT__DOT__pc_redirect_D));
        bufp->chgBit(oldp+44,(vlSelf->top__DOT__DUT__DOT__ostall_mngr2proc_D));
        bufp->chgBit(oldp+45,(vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs1_D));
        bufp->chgBit(oldp+46,(vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs1_D));
        bufp->chgBit(oldp+47,(vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs1_D));
        bufp->chgBit(oldp+48,(vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs2_D));
        bufp->chgBit(oldp+49,(vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs2_D));
        bufp->chgBit(oldp+50,(vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs2_D));
        bufp->chgBit(oldp+51,(vlSelf->top__DOT__DUT__DOT__ostall_hazard_D));
        bufp->chgBit(oldp+52,(vlSelf->top__DOT__DUT__DOT__next_val_D));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+53,(vlSelf->top__DOT__dmem_reqstream_val));
        bufp->chgBit(oldp+54,(vlSelf->top__DOT__dmem_respstream_rdy));
        bufp->chgCData(oldp+55,(vlSelf->top__DOT__mem_action),3);
        bufp->chgBit(oldp+56,(vlSelf->top__DOT__proc2mngr_val));
        bufp->chgBit(oldp+57,((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_X)))));
        bufp->chgCData(oldp+58,(vlSelf->top__DOT__alu_fn_X),4);
        bufp->chgCData(oldp+59,(vlSelf->top__DOT__ex_result_sel_X),2);
        bufp->chgBit(oldp+60,((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_M)))));
        bufp->chgBit(oldp+61,(vlSelf->top__DOT__wb_result_sel_M));
        bufp->chgBit(oldp+62,((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_W)))));
        bufp->chgCData(oldp+63,(vlSelf->top__DOT__rf_waddr_W),5);
        bufp->chgBit(oldp+64,(vlSelf->top__DOT__rf_wen_W));
        bufp->chgBit(oldp+65,(vlSelf->top__DOT__stats_en_wen_W));
        bufp->chgBit(oldp+66,(vlSelf->top__DOT__imul_resp_rdy_X));
        bufp->chgBit(oldp+67,(vlSelf->top__DOT__commit_inst));
        bufp->chgBit(oldp+68,(vlSelf->top__DOT__DUT__DOT__val_F));
        bufp->chgBit(oldp+69,(vlSelf->top__DOT__DUT__DOT__val_D));
        bufp->chgBit(oldp+70,(vlSelf->top__DOT__DUT__DOT__val_X));
        bufp->chgBit(oldp+71,(vlSelf->top__DOT__DUT__DOT__val_M));
        bufp->chgBit(oldp+72,(vlSelf->top__DOT__DUT__DOT__val_W));
        bufp->chgBit(oldp+73,(vlSelf->top__DOT__DUT__DOT__ostall_X));
        bufp->chgBit(oldp+74,(vlSelf->top__DOT__DUT__DOT__ostall_M));
        bufp->chgBit(oldp+75,(vlSelf->top__DOT__DUT__DOT__ostall_W));
        bufp->chgBit(oldp+76,(vlSelf->top__DOT__DUT__DOT__stall_X));
        bufp->chgBit(oldp+77,(vlSelf->top__DOT__DUT__DOT__stall_M));
        bufp->chgBit(oldp+78,(vlSelf->top__DOT__DUT__DOT__stall_W));
        bufp->chgBit(oldp+79,(vlSelf->top__DOT__DUT__DOT__osquash_X));
        bufp->chgBit(oldp+80,(vlSelf->top__DOT__DUT__DOT__squash_D));
        bufp->chgBit(oldp+81,(vlSelf->top__DOT__DUT__DOT__pc_redirect_X));
        bufp->chgCData(oldp+82,(vlSelf->top__DOT__DUT__DOT__pc_sel_X),2);
        bufp->chgIData(oldp+83,(vlSelf->top__DOT__DUT__DOT__inst_X),32);
        bufp->chgCData(oldp+84,(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X),2);
        bufp->chgBit(oldp+85,(vlSelf->top__DOT__DUT__DOT__wb_result_sel_X));
        bufp->chgBit(oldp+86,(vlSelf->top__DOT__DUT__DOT__rf_wen_X));
        bufp->chgCData(oldp+87,(vlSelf->top__DOT__DUT__DOT__rf_waddr_X),5);
        bufp->chgBit(oldp+88,(vlSelf->top__DOT__DUT__DOT__proc2mngr_val_X));
        bufp->chgBit(oldp+89,(vlSelf->top__DOT__DUT__DOT__stats_en_wen_X));
        bufp->chgCData(oldp+90,(vlSelf->top__DOT__DUT__DOT__br_type_X),3);
        bufp->chgCData(oldp+91,(vlSelf->top__DOT__DUT__DOT__j_type_X),2);
        bufp->chgBit(oldp+92,(vlSelf->top__DOT__DUT__DOT__ostall_imul_resp_val_X));
        bufp->chgBit(oldp+93,(vlSelf->top__DOT__DUT__DOT__ostall_dmem_reqstream_X));
        bufp->chgBit(oldp+94,(vlSelf->top__DOT__DUT__DOT__next_val_X));
        bufp->chgIData(oldp+95,(vlSelf->top__DOT__DUT__DOT__inst_M),32);
        bufp->chgCData(oldp+96,(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_M),2);
        bufp->chgBit(oldp+97,(vlSelf->top__DOT__DUT__DOT__rf_wen_M));
        bufp->chgCData(oldp+98,(vlSelf->top__DOT__DUT__DOT__rf_waddr_M),5);
        bufp->chgBit(oldp+99,(vlSelf->top__DOT__DUT__DOT__proc2mngr_val_M));
        bufp->chgBit(oldp+100,(vlSelf->top__DOT__DUT__DOT__stats_en_wen_M));
        bufp->chgBit(oldp+101,(vlSelf->top__DOT__DUT__DOT__next_val_M));
        bufp->chgIData(oldp+102,(vlSelf->top__DOT__DUT__DOT__inst_W),32);
        bufp->chgBit(oldp+103,(vlSelf->top__DOT__DUT__DOT__proc2mngr_val_W));
        bufp->chgBit(oldp+104,(vlSelf->top__DOT__DUT__DOT__rf_wen_pending_W));
        bufp->chgBit(oldp+105,(vlSelf->top__DOT__DUT__DOT__stats_en_wen_pending_W));
    }
    bufp->chgBit(oldp+106,(vlSelf->clk));
    bufp->chgBit(oldp+107,(vlSelf->linetrace));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}

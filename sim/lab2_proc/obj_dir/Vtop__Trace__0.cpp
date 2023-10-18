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
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__DUT__DOT__imul__DOT__vc_trace__DOT__cycles_next),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgWData(oldp+1,(vlSelf->top__DOT__DUT__DOT__imul__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+129,(vlSelf->top__DOT__DUT__DOT__imul__DOT__vc_trace__DOT__level),4);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+130,(vlSelf->top__DOT__reset));
        bufp->chgQData(oldp+131,(vlSelf->top__DOT__imem_respstream_msg),47);
        bufp->chgBit(oldp+133,(vlSelf->top__DOT__imem_respstream_drop));
        bufp->chgIData(oldp+134,(vlSelf->top__DOT__dmem_respstream_msg_data),32);
        bufp->chgIData(oldp+135,(vlSelf->top__DOT__mngr2proc_data),32);
        bufp->chgBit(oldp+136,(vlSelf->top__DOT__reg_en_F));
        bufp->chgCData(oldp+137,(vlSelf->top__DOT__pc_sel_F),2);
        bufp->chgBit(oldp+138,(vlSelf->top__DOT__reg_en_D));
        bufp->chgBit(oldp+139,(vlSelf->top__DOT__op1_sel_D));
        bufp->chgCData(oldp+140,(vlSelf->top__DOT__op2_sel_D),2);
        bufp->chgCData(oldp+141,(vlSelf->top__DOT__csrr_sel_D),2);
        bufp->chgCData(oldp+142,(vlSelf->top__DOT__imm_type_D),3);
        bufp->chgCData(oldp+143,(vlSelf->top__DOT__op1_byp_sel_D),2);
        bufp->chgCData(oldp+144,(vlSelf->top__DOT__op2_byp_sel_D),2);
        bufp->chgBit(oldp+145,(vlSelf->top__DOT__reg_en_X));
        bufp->chgCData(oldp+146,(vlSelf->top__DOT__alu_fn_X),4);
        bufp->chgCData(oldp+147,(vlSelf->top__DOT__ex_result_sel_X),2);
        bufp->chgBit(oldp+148,(vlSelf->top__DOT__reg_en_M));
        bufp->chgBit(oldp+149,(vlSelf->top__DOT__wb_result_sel_M));
        bufp->chgBit(oldp+150,(vlSelf->top__DOT__reg_en_W));
        bufp->chgCData(oldp+151,(vlSelf->top__DOT__rf_waddr_W),5);
        bufp->chgBit(oldp+152,(vlSelf->top__DOT__rf_wen_W));
        bufp->chgBit(oldp+153,(vlSelf->top__DOT__stats_en_wen_W));
        bufp->chgBit(oldp+154,(vlSelf->top__DOT__imul_req_val_D));
        bufp->chgBit(oldp+155,(vlSelf->top__DOT__imul_resp_rdy_X));
        bufp->chgIData(oldp+156,(vlSelf->top__DOT__core_id),32);
        bufp->chgIData(oldp+157,(vlSelf->top__DOT__cur_pc),32);
        bufp->chgIData(oldp+158,((IData)(vlSelf->top__DOT__imem_respstream_msg)),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgIData(oldp+159,(vlSelf->top__DOT__DUT__DOT__pc_next_F),32);
        bufp->chgIData(oldp+160,(vlSelf->top__DOT__DUT__DOT__alu_result_X),32);
        bufp->chgIData(oldp+161,(vlSelf->top__DOT__DUT__DOT__jal_target_D),32);
        bufp->chgIData(oldp+162,(vlSelf->top__DOT__DUT__DOT__imm_D),32);
        bufp->chgIData(oldp+163,(vlSelf->top__DOT__DUT__DOT__op1_byp_out_D),32);
        bufp->chgIData(oldp+164,(vlSelf->top__DOT__DUT__DOT__op2_byp_out_D),32);
        bufp->chgIData(oldp+165,(vlSelf->top__DOT__DUT__DOT__op1_D),32);
        bufp->chgIData(oldp+166,(vlSelf->top__DOT__DUT__DOT__op2_D),32);
        bufp->chgIData(oldp+167,(vlSelf->top__DOT__DUT__DOT__ex_result_X),32);
        bufp->chgIData(oldp+168,(vlSelf->top__DOT__DUT__DOT__wb_result_M),32);
        bufp->chgQData(oldp+169,(vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg),64);
        bufp->chgCData(oldp+171,(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__nextState),2);
        bufp->chgIData(oldp+172,(vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out),32);
        bufp->chgIData(oldp+173,(vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out),32);
        bufp->chgIData(oldp+174,((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__alu_result_X)),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+175,(vlSelf->top__DOT__dmem_reqstream_msg_data),32);
        bufp->chgIData(oldp+176,(vlSelf->top__DOT__DUT__DOT__wb_result_W),32);
        bufp->chgIData(oldp+177,(vlSelf->top__DOT__inst_D),32);
        bufp->chgBit(oldp+178,(vlSelf->top__DOT__br_cond_eq_X));
        bufp->chgBit(oldp+179,(vlSelf->top__DOT__br_cond_lt_X));
        bufp->chgBit(oldp+180,(vlSelf->top__DOT__br_cond_ltu_X));
        bufp->chgBit(oldp+181,(vlSelf->top__DOT__imul_req_rdy_D));
        bufp->chgBit(oldp+182,(vlSelf->top__DOT__imul_resp_val_X));
        bufp->chgBit(oldp+183,((0U != vlSelf->top__DOT__DUT__DOT__stats_en_W)));
        bufp->chgIData(oldp+184,(vlSelf->top__DOT__DUT__DOT__pc_F),32);
        bufp->chgIData(oldp+185,(((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F)),32);
        bufp->chgIData(oldp+186,(vlSelf->top__DOT__DUT__DOT__br_target_X),32);
        bufp->chgIData(oldp+187,(vlSelf->top__DOT__DUT__DOT__pc_D),32);
        bufp->chgCData(oldp+188,((0x1fU & (vlSelf->top__DOT__inst_D 
                                           >> 7U))),5);
        bufp->chgCData(oldp+189,((0x1fU & (vlSelf->top__DOT__inst_D 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+190,((0x1fU & (vlSelf->top__DOT__inst_D 
                                           >> 0x14U))),5);
        bufp->chgIData(oldp+191,(vlSelf->top__DOT__DUT__DOT__rf_rdata0_D),32);
        bufp->chgIData(oldp+192,(vlSelf->top__DOT__DUT__DOT__rf_rdata1_D),32);
        bufp->chgIData(oldp+193,(vlSelf->top__DOT__DUT__DOT__op1_X),32);
        bufp->chgIData(oldp+194,(vlSelf->top__DOT__DUT__DOT__op2_X),32);
        bufp->chgIData(oldp+195,(vlSelf->top__DOT__DUT__DOT__pc_X),32);
        bufp->chgIData(oldp+196,(vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out),32);
        bufp->chgIData(oldp+197,(((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X)),32);
        bufp->chgIData(oldp+198,(vlSelf->top__DOT__DUT__DOT__ex_result_M),32);
        bufp->chgIData(oldp+199,(vlSelf->top__DOT__DUT__DOT__stats_en_W),32);
        bufp->chgBit(oldp+200,(vlSelf->top__DOT__DUT__DOT__imul__DOT__b_mux_sel));
        bufp->chgBit(oldp+201,(vlSelf->top__DOT__DUT__DOT__imul__DOT__a_mux_sel));
        bufp->chgBit(oldp+202,(vlSelf->top__DOT__DUT__DOT__imul__DOT__result_mux_sel));
        bufp->chgBit(oldp+203,(vlSelf->top__DOT__DUT__DOT__imul__DOT__result_en));
        bufp->chgBit(oldp+204,(vlSelf->top__DOT__DUT__DOT__imul__DOT__add_mux_sel));
        bufp->chgIData(oldp+205,(vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out),32);
        bufp->chgCData(oldp+206,(vlSelf->top__DOT__DUT__DOT__imul__DOT__shamt),5);
        bufp->chgCData(oldp+207,(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__state),2);
        bufp->chgBit(oldp+208,(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__done));
        bufp->chgCData(oldp+209,(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__unnamedblk1__DOT__temp_shamt),5);
        bufp->chgBit(oldp+210,(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__unnamedblk1__DOT__temp_done));
        bufp->chgBit(oldp+211,(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__unnamedblk1__DOT__temp_add_mux_sel));
        bufp->chgIData(oldp+212,(vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out),32);
        bufp->chgIData(oldp+213,(vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out),32);
        bufp->chgIData(oldp+214,(vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out),32);
        bufp->chgIData(oldp+215,(vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out),32);
        bufp->chgIData(oldp+216,(vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out),32);
        bufp->chgIData(oldp+217,(vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out),32);
        bufp->chgIData(oldp+218,(vlSelf->top__DOT__DUT__DOT__imul__DOT__vc_trace__DOT__cycles),32);
        bufp->chgCData(oldp+219,((0x7fU & vlSelf->top__DOT__inst_D)),7);
        bufp->chgCData(oldp+220,((7U & (vlSelf->top__DOT__inst_D 
                                        >> 0xcU))),3);
        bufp->chgSData(oldp+221,((vlSelf->top__DOT__inst_D 
                                  >> 0x14U)),12);
        bufp->chgBit(oldp+222,((1U & (IData)((1ULL 
                                              & ((4ULL 
                                                  + (QData)((IData)(vlSelf->top__DOT__DUT__DOT__pc_X))) 
                                                 >> 0x20U))))));
        bufp->chgIData(oldp+223,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0),32);
        bufp->chgIData(oldp+224,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1),32);
        bufp->chgIData(oldp+225,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[0]),32);
        bufp->chgIData(oldp+226,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[1]),32);
        bufp->chgIData(oldp+227,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[2]),32);
        bufp->chgIData(oldp+228,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[3]),32);
        bufp->chgIData(oldp+229,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[4]),32);
        bufp->chgIData(oldp+230,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[5]),32);
        bufp->chgIData(oldp+231,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[6]),32);
        bufp->chgIData(oldp+232,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[7]),32);
        bufp->chgIData(oldp+233,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[8]),32);
        bufp->chgIData(oldp+234,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[9]),32);
        bufp->chgIData(oldp+235,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[10]),32);
        bufp->chgIData(oldp+236,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[11]),32);
        bufp->chgIData(oldp+237,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[12]),32);
        bufp->chgIData(oldp+238,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[13]),32);
        bufp->chgIData(oldp+239,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[14]),32);
        bufp->chgIData(oldp+240,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[15]),32);
        bufp->chgIData(oldp+241,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[16]),32);
        bufp->chgIData(oldp+242,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[17]),32);
        bufp->chgIData(oldp+243,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[18]),32);
        bufp->chgIData(oldp+244,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[19]),32);
        bufp->chgIData(oldp+245,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[20]),32);
        bufp->chgIData(oldp+246,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[21]),32);
        bufp->chgIData(oldp+247,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[22]),32);
        bufp->chgIData(oldp+248,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[23]),32);
        bufp->chgIData(oldp+249,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[24]),32);
        bufp->chgIData(oldp+250,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[25]),32);
        bufp->chgIData(oldp+251,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[26]),32);
        bufp->chgIData(oldp+252,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[27]),32);
        bufp->chgIData(oldp+253,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[28]),32);
        bufp->chgIData(oldp+254,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[29]),32);
        bufp->chgIData(oldp+255,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[30]),32);
        bufp->chgIData(oldp+256,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[31]),32);
    }
    bufp->chgBit(oldp+257,(vlSelf->clk));
    bufp->chgBit(oldp+258,(vlSelf->linetrace));
    bufp->chgIData(oldp+259,(vlSelf->top__DOT__DUT__DOT__csrr_data_D),32);
    bufp->chgBit(oldp+260,((1U & (IData)((1ULL & (((QData)((IData)(vlSelf->top__DOT__DUT__DOT__pc_D)) 
                                                   + (QData)((IData)(vlSelf->top__DOT__DUT__DOT__imm_D))) 
                                                  >> 0x20U))))));
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
}

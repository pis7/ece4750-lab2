// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->top__DOT__DUT__DOT__imul__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[1602].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__imul__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[1603].fetch_add(1, std::memory_order_relaxed);
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    if ((1U & (~ vlSelf->top__DOT__DUT__DOT____Vtogcov__num_cores))) {
        vlSymsp->__Vcoverage[732].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__num_cores 
            = (1U | vlSelf->top__DOT__DUT__DOT____Vtogcov__num_cores);
    }
    if ((2U & vlSelf->top__DOT__DUT__DOT____Vtogcov__num_cores)) {
        vlSymsp->__Vcoverage[733].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__num_cores 
            = (0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__num_cores);
    }
    vlSymsp->__Vcoverage[1029].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1048].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1119].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1124].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1129].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1159].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1525].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1530].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1535].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1542].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1561].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1601].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1634].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1641].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__DUT__DOT__imul__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__DUT__DOT__imul__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__DUT__DOT__imul__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[1608].fetch_add(1, std::memory_order_relaxed);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ ((IData)(vlSelf->top__DOT__pc_sel_F) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->top__DOT__pc_sel_F))) {
            vlSymsp->__Vcoverage[1025].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__pc_sel_F)))) {
            vlSymsp->__Vcoverage[1024].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__imm_type_D) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->top__DOT__imm_type_D))) {
            if ((1U & (IData)(vlSelf->top__DOT__imm_type_D))) {
                vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__imm_type_D)))) {
                vlSymsp->__Vcoverage[1045].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__imm_type_D) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->top__DOT__imm_type_D))) {
                vlSymsp->__Vcoverage[1044].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__imm_type_D)))) {
                vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__op1_sel_D)))) {
        vlSymsp->__Vcoverage[1116].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0U != (IData)(vlSelf->top__DOT__csrr_sel_D))) {
        if ((1U == (IData)(vlSelf->top__DOT__csrr_sel_D))) {
            vlSymsp->__Vcoverage[1121].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U != (IData)(vlSelf->top__DOT__csrr_sel_D))) {
            if ((2U == (IData)(vlSelf->top__DOT__csrr_sel_D))) {
                vlSymsp->__Vcoverage[1122].fetch_add(1, std::memory_order_relaxed);
            }
            if ((2U != (IData)(vlSelf->top__DOT__csrr_sel_D))) {
                vlSymsp->__Vcoverage[1123].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if ((0U != (IData)(vlSelf->top__DOT__op2_sel_D))) {
        if ((1U != (IData)(vlSelf->top__DOT__op2_sel_D))) {
            if ((2U == (IData)(vlSelf->top__DOT__op2_sel_D))) {
                vlSymsp->__Vcoverage[1127].fetch_add(1, std::memory_order_relaxed);
            }
            if ((2U != (IData)(vlSelf->top__DOT__op2_sel_D))) {
                vlSymsp->__Vcoverage[1128].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U == (IData)(vlSelf->top__DOT__op2_sel_D))) {
            vlSymsp->__Vcoverage[1126].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__alu_fn_X) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__alu_fn_X) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__alu_fn_X) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top__DOT__alu_fn_X))) {
                    vlSymsp->__Vcoverage[1147].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__alu_fn_X)))) {
                    vlSymsp->__Vcoverage[1146].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((2U & (IData)(vlSelf->top__DOT__alu_fn_X))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__alu_fn_X)))) {
                    vlSymsp->__Vcoverage[1148].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (IData)(vlSelf->top__DOT__alu_fn_X))) {
                    vlSymsp->__Vcoverage[1149].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
        if ((4U & (IData)(vlSelf->top__DOT__alu_fn_X))) {
            if ((2U & (IData)(vlSelf->top__DOT__alu_fn_X))) {
                if ((1U & (IData)(vlSelf->top__DOT__alu_fn_X))) {
                    vlSymsp->__Vcoverage[1153].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__alu_fn_X)))) {
                    vlSymsp->__Vcoverage[1152].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((1U & (~ ((IData)(vlSelf->top__DOT__alu_fn_X) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top__DOT__alu_fn_X))) {
                    vlSymsp->__Vcoverage[1151].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__alu_fn_X)))) {
                    vlSymsp->__Vcoverage[1150].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    if ((0U != (IData)(vlSelf->top__DOT__ex_result_sel_X))) {
        if ((1U != (IData)(vlSelf->top__DOT__ex_result_sel_X))) {
            if ((2U == (IData)(vlSelf->top__DOT__ex_result_sel_X))) {
                vlSymsp->__Vcoverage[1632].fetch_add(1, std::memory_order_relaxed);
            }
            if ((2U != (IData)(vlSelf->top__DOT__ex_result_sel_X))) {
                vlSymsp->__Vcoverage[1633].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U == (IData)(vlSelf->top__DOT__ex_result_sel_X))) {
            vlSymsp->__Vcoverage[1631].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__wb_result_sel_M)))) {
        vlSymsp->__Vcoverage[1638].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->top__DOT____Vtogcov__clk))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->linetrace) ^ (IData)(vlSelf->top__DOT____Vtogcov__linetrace))) {
        vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__linetrace = vlSelf->linetrace;
    }
    if (((IData)(vlSelf->top__DOT__reset) ^ (IData)(vlSelf->top__DOT____Vtogcov__reset))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reset = vlSelf->top__DOT__reset;
    }
    if (((IData)(vlSelf->top__DOT__imem_respstream_drop) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_respstream_drop))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_drop 
            = vlSelf->top__DOT__imem_respstream_drop;
    }
    if (((IData)(vlSelf->top__DOT__reg_en_F) ^ (IData)(vlSelf->top__DOT____Vtogcov__reg_en_F))) {
        vlSymsp->__Vcoverage[243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reg_en_F = vlSelf->top__DOT__reg_en_F;
    }
    if (((IData)(vlSelf->top__DOT__reg_en_D) ^ (IData)(vlSelf->top__DOT____Vtogcov__reg_en_D))) {
        vlSymsp->__Vcoverage[246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reg_en_D = vlSelf->top__DOT__reg_en_D;
    }
    if (((IData)(vlSelf->top__DOT__op1_sel_D) ^ (IData)(vlSelf->top__DOT____Vtogcov__op1_sel_D))) {
        vlSymsp->__Vcoverage[247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__op1_sel_D = vlSelf->top__DOT__op1_sel_D;
    }
    if (((IData)(vlSelf->top__DOT__reg_en_X) ^ (IData)(vlSelf->top__DOT____Vtogcov__reg_en_X))) {
        vlSymsp->__Vcoverage[255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reg_en_X = vlSelf->top__DOT__reg_en_X;
    }
    if (((IData)(vlSelf->top__DOT__reg_en_M) ^ (IData)(vlSelf->top__DOT____Vtogcov__reg_en_M))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reg_en_M = vlSelf->top__DOT__reg_en_M;
    }
    if (((IData)(vlSelf->top__DOT__wb_result_sel_M) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__wb_result_sel_M))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__wb_result_sel_M 
            = vlSelf->top__DOT__wb_result_sel_M;
    }
    if (((IData)(vlSelf->top__DOT__reg_en_W) ^ (IData)(vlSelf->top__DOT____Vtogcov__reg_en_W))) {
        vlSymsp->__Vcoverage[264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reg_en_W = vlSelf->top__DOT__reg_en_W;
    }
    if (((IData)(vlSelf->top__DOT__rf_wen_W) ^ (IData)(vlSelf->top__DOT____Vtogcov__rf_wen_W))) {
        vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rf_wen_W = vlSelf->top__DOT__rf_wen_W;
    }
    if (((IData)(vlSelf->top__DOT__stats_en_wen_W) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__stats_en_wen_W))) {
        vlSymsp->__Vcoverage[271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__stats_en_wen_W 
            = vlSelf->top__DOT__stats_en_wen_W;
    }
    if (((IData)(vlSelf->top__DOT__imul_req_val_D) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imul_req_val_D))) {
        vlSymsp->__Vcoverage[272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imul_req_val_D 
            = vlSelf->top__DOT__imul_req_val_D;
    }
    if (((IData)(vlSelf->top__DOT__imul_resp_rdy_X) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imul_resp_rdy_X))) {
        vlSymsp->__Vcoverage[273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imul_resp_rdy_X 
            = vlSelf->top__DOT__imul_resp_rdy_X;
    }
    if (((0U != vlSelf->top__DOT__DUT__DOT__stats_en_W) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__stats_en))) {
        vlSymsp->__Vcoverage[343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__stats_en = (0U 
                                                 != vlSelf->top__DOT__DUT__DOT__stats_en_W);
    }
    if ((1U & ((IData)((1ULL & ((4ULL + (QData)((IData)(vlSelf->top__DOT__DUT__DOT__pc_X))) 
                                >> 0x20U))) ^ (IData)(vlSelf->top__DOT__DUT__DOT__pc_incr_X__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[1629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__pc_incr_X__DOT____Vtogcov__cout 
            = (1U & (IData)((1ULL & ((4ULL + (QData)((IData)(vlSelf->top__DOT__DUT__DOT__pc_X))) 
                                     >> 0x20U))));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__pc_sel_F) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__pc_sel_F)))) {
        vlSymsp->__Vcoverage[244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc_sel_F = ((2U 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__pc_sel_F)) 
                                                 | (1U 
                                                    & (IData)(vlSelf->top__DOT__pc_sel_F)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__pc_sel_F) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__pc_sel_F)))) {
        vlSymsp->__Vcoverage[245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc_sel_F = ((1U 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__pc_sel_F)) 
                                                 | (2U 
                                                    & (IData)(vlSelf->top__DOT__pc_sel_F)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__op2_sel_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__op2_sel_D)))) {
        vlSymsp->__Vcoverage[248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__op2_sel_D = ((2U 
                                                   & (IData)(vlSelf->top__DOT____Vtogcov__op2_sel_D)) 
                                                  | (1U 
                                                     & (IData)(vlSelf->top__DOT__op2_sel_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__op2_sel_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__op2_sel_D)))) {
        vlSymsp->__Vcoverage[249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__op2_sel_D = ((1U 
                                                   & (IData)(vlSelf->top__DOT____Vtogcov__op2_sel_D)) 
                                                  | (2U 
                                                     & (IData)(vlSelf->top__DOT__op2_sel_D)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__csrr_sel_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__csrr_sel_D)))) {
        vlSymsp->__Vcoverage[250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__csrr_sel_D = (
                                                   (2U 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__csrr_sel_D)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->top__DOT__csrr_sel_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__csrr_sel_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__csrr_sel_D)))) {
        vlSymsp->__Vcoverage[251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__csrr_sel_D = (
                                                   (1U 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__csrr_sel_D)) 
                                                   | (2U 
                                                      & (IData)(vlSelf->top__DOT__csrr_sel_D)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__ex_result_sel_X) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__ex_result_sel_X)))) {
        vlSymsp->__Vcoverage[260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ex_result_sel_X 
            = ((2U & (IData)(vlSelf->top__DOT____Vtogcov__ex_result_sel_X)) 
               | (1U & (IData)(vlSelf->top__DOT__ex_result_sel_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__ex_result_sel_X) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__ex_result_sel_X)))) {
        vlSymsp->__Vcoverage[261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ex_result_sel_X 
            = ((1U & (IData)(vlSelf->top__DOT____Vtogcov__ex_result_sel_X)) 
               | (2U & (IData)(vlSelf->top__DOT__ex_result_sel_X)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__state) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT____Vtogcov__state)))) {
        vlSymsp->__Vcoverage[1543].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT____Vtogcov__state 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT____Vtogcov__state)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__state)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__state) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT____Vtogcov__state)))) {
        vlSymsp->__Vcoverage[1544].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT____Vtogcov__state 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT____Vtogcov__state)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__state)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imm_type_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__imm_type_D)))) {
        vlSymsp->__Vcoverage[252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm_type_D = (
                                                   (6U 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__imm_type_D)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->top__DOT__imm_type_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__imm_type_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__imm_type_D)))) {
        vlSymsp->__Vcoverage[253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm_type_D = (
                                                   (5U 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__imm_type_D)) 
                                                   | (2U 
                                                      & (IData)(vlSelf->top__DOT__imm_type_D)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__imm_type_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__imm_type_D)))) {
        vlSymsp->__Vcoverage[254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm_type_D = (
                                                   (3U 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__imm_type_D)) 
                                                   | (4U 
                                                      & (IData)(vlSelf->top__DOT__imm_type_D)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__alu_fn_X) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_fn_X)))) {
        vlSymsp->__Vcoverage[256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__alu_fn_X = ((0xeU 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__alu_fn_X)) 
                                                 | (1U 
                                                    & (IData)(vlSelf->top__DOT__alu_fn_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__alu_fn_X) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_fn_X)))) {
        vlSymsp->__Vcoverage[257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__alu_fn_X = ((0xdU 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__alu_fn_X)) 
                                                 | (2U 
                                                    & (IData)(vlSelf->top__DOT__alu_fn_X)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__alu_fn_X) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_fn_X)))) {
        vlSymsp->__Vcoverage[258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__alu_fn_X = ((0xbU 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__alu_fn_X)) 
                                                 | (4U 
                                                    & (IData)(vlSelf->top__DOT__alu_fn_X)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__alu_fn_X) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_fn_X)))) {
        vlSymsp->__Vcoverage[259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__alu_fn_X = ((7U 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__alu_fn_X)) 
                                                 | (8U 
                                                    & (IData)(vlSelf->top__DOT__alu_fn_X)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[1604].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[1605].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[1606].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[1607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__rf_waddr_W) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rf_waddr_W = (
                                                   (0x1eU 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->top__DOT__rf_waddr_W)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__rf_waddr_W) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rf_waddr_W = (
                                                   (0x1dU 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)) 
                                                   | (2U 
                                                      & (IData)(vlSelf->top__DOT__rf_waddr_W)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__rf_waddr_W) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rf_waddr_W = (
                                                   (0x1bU 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)) 
                                                   | (4U 
                                                      & (IData)(vlSelf->top__DOT__rf_waddr_W)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__rf_waddr_W) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rf_waddr_W = (
                                                   (0x17U 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)) 
                                                   | (8U 
                                                      & (IData)(vlSelf->top__DOT__rf_waddr_W)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__rf_waddr_W) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rf_waddr_W = (
                                                   (0xfU 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)) 
                                                   | (0x10U 
                                                      & (IData)(vlSelf->top__DOT__rf_waddr_W)));
    }
    vlSelf->top__DOT__br_cond_eq_X = (vlSelf->top__DOT__DUT__DOT__op1_X 
                                      == vlSelf->top__DOT__DUT__DOT__op2_X);
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[1036].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x7eU & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[1037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x7dU & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[1038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x7bU & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[1039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x77U & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[1040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x6fU & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x5fU & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x3fU & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7)));
    }
    if ((2U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F) 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F) 
               | (2U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F)));
    }
    if ((4U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F) 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F) 
               | (4U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F)));
    }
    if ((8U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F) 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F) 
               | (8U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F)));
    }
    if ((0x10U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F) 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F) 
               | (0x10U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F)));
    }
    if ((0x20U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F) 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F) 
               | (0x20U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F)));
    }
    if ((0x40U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F) 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F) 
               | (0x40U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F)));
    }
    if ((0x80U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F) 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F) 
               | (0x80U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F)));
    }
    if ((0x100U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F) 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F) 
               | (0x100U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F)));
    }
    if ((0x200U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F) 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F) 
               | (0x200U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F)));
    }
    if ((0x400U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F) 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F) 
               | (0x400U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F)));
    }
    if ((0x800U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F) 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F) 
               | (0x800U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F)));
    }
    if ((0x1000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F) 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F) 
               | (0x1000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F)));
    }
    if ((0x2000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F) 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F) 
               | (0x2000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F)));
    }
    if ((0x4000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F) 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F) 
               | (0x4000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F)));
    }
    if ((0x8000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F) 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F) 
               | (0x8000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F)));
    }
    if ((0x10000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F) 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F) 
               | (0x10000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F)));
    }
    if ((0x20000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F) 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F) 
               | (0x20000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F)));
    }
    if ((0x40000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F) 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F) 
               | (0x40000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F)));
    }
    if ((0x80000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F) 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F) 
               | (0x80000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F)));
    }
    if ((0x100000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F) 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F) 
               | (0x100000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F)));
    }
    if ((0x200000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F) 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F) 
               | (0x200000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F)));
    }
    if ((0x400000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F) 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F) 
               | (0x400000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F)));
    }
    if ((0x800000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F) 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F) 
               | (0x800000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F)));
    }
    if ((0x1000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F) 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F) 
               | (0x1000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F)));
    }
    if ((0x2000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F) 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F) 
               | (0x2000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F)));
    }
    if ((0x4000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F) 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F) 
               | (0x4000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F)));
    }
    if ((0x8000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F) 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F) 
               | (0x8000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F)));
    }
    if ((0x10000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F) 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F) 
               | (0x10000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F)));
    }
    if ((0x20000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F) 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F) 
               | (0x20000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F)));
    }
    if ((0x40000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F) 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F) 
               | (0x40000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F)));
    }
    if (((((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F) 
          ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_F) 
               | (0x80000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F)));
    }
    if ((2U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X) 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X) 
               | (2U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X)));
    }
    if ((4U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X) 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X) 
               | (4U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X)));
    }
    if ((8U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X) 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X) 
               | (8U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X)));
    }
    if ((0x10U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X) 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X) 
               | (0x10U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X)));
    }
    if ((0x20U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X) 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X) 
               | (0x20U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X)));
    }
    if ((0x40U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X) 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X) 
               | (0x40U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X)));
    }
    if ((0x80U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X) 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X) 
               | (0x80U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X)));
    }
    if ((0x100U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X) 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X) 
               | (0x100U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X)));
    }
    if ((0x200U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X) 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[902].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X) 
               | (0x200U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X)));
    }
    if ((0x400U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X) 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[903].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X) 
               | (0x400U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X)));
    }
    if ((0x800U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X) 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[904].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X) 
               | (0x800U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X)));
    }
    if ((0x1000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X) 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[905].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X) 
               | (0x1000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X)));
    }
    if ((0x2000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X) 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[906].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X) 
               | (0x2000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X)));
    }
    if ((0x4000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X) 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[907].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X) 
               | (0x4000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X)));
    }
    if ((0x8000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X) 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[908].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X) 
               | (0x8000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X)));
    }
    if ((0x10000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X) 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[909].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X) 
               | (0x10000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X)));
    }
    if ((0x20000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X) 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[910].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X) 
               | (0x20000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X)));
    }
    if ((0x40000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X) 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[911].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X) 
               | (0x40000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X)));
    }
    if ((0x80000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X) 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[912].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X) 
               | (0x80000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X)));
    }
    if ((0x100000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X) 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[913].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X) 
               | (0x100000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X)));
    }
    if ((0x200000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X) 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[914].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X) 
               | (0x200000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X)));
    }
    if ((0x400000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X) 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[915].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X) 
               | (0x400000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X)));
    }
    if ((0x800000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X) 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[916].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X) 
               | (0x800000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X)));
    }
    if ((0x1000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X) 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[917].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X) 
               | (0x1000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X)));
    }
    if ((0x2000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X) 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[918].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X) 
               | (0x2000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X)));
    }
    if ((0x4000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X) 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[919].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X) 
               | (0x4000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X)));
    }
    if ((0x8000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X) 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[920].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X) 
               | (0x8000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X)));
    }
    if ((0x10000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X) 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[921].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X) 
               | (0x10000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X)));
    }
    if ((0x20000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X) 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[922].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X) 
               | (0x20000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X)));
    }
    if ((0x40000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X) 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[923].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X) 
               | (0x40000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X)));
    }
    if (((((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X) 
          ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[924].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_plus4_X) 
               | (0x80000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X)));
    }
    if ((1U & (vlSelf->top__DOT__dmem_reqstream_msg_data 
               ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data))) {
        vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data) 
               | (1U & vlSelf->top__DOT__dmem_reqstream_msg_data));
    }
    if ((2U & (vlSelf->top__DOT__dmem_reqstream_msg_data 
               ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data))) {
        vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data) 
               | (2U & vlSelf->top__DOT__dmem_reqstream_msg_data));
    }
    if ((4U & (vlSelf->top__DOT__dmem_reqstream_msg_data 
               ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data))) {
        vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data) 
               | (4U & vlSelf->top__DOT__dmem_reqstream_msg_data));
    }
    if ((8U & (vlSelf->top__DOT__dmem_reqstream_msg_data 
               ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data))) {
        vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data) 
               | (8U & vlSelf->top__DOT__dmem_reqstream_msg_data));
    }
    if ((0x10U & (vlSelf->top__DOT__dmem_reqstream_msg_data 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data))) {
        vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data) 
               | (0x10U & vlSelf->top__DOT__dmem_reqstream_msg_data));
    }
    if ((0x20U & (vlSelf->top__DOT__dmem_reqstream_msg_data 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data))) {
        vlSymsp->__Vcoverage[120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data) 
               | (0x20U & vlSelf->top__DOT__dmem_reqstream_msg_data));
    }
    if ((0x40U & (vlSelf->top__DOT__dmem_reqstream_msg_data 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data))) {
        vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data) 
               | (0x40U & vlSelf->top__DOT__dmem_reqstream_msg_data));
    }
    if ((0x80U & (vlSelf->top__DOT__dmem_reqstream_msg_data 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data))) {
        vlSymsp->__Vcoverage[122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data) 
               | (0x80U & vlSelf->top__DOT__dmem_reqstream_msg_data));
    }
    if ((0x100U & (vlSelf->top__DOT__dmem_reqstream_msg_data 
                   ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data))) {
        vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data) 
               | (0x100U & vlSelf->top__DOT__dmem_reqstream_msg_data));
    }
    if ((0x200U & (vlSelf->top__DOT__dmem_reqstream_msg_data 
                   ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data))) {
        vlSymsp->__Vcoverage[124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data) 
               | (0x200U & vlSelf->top__DOT__dmem_reqstream_msg_data));
    }
    if ((0x400U & (vlSelf->top__DOT__dmem_reqstream_msg_data 
                   ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data))) {
        vlSymsp->__Vcoverage[125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data) 
               | (0x400U & vlSelf->top__DOT__dmem_reqstream_msg_data));
    }
    if ((0x800U & (vlSelf->top__DOT__dmem_reqstream_msg_data 
                   ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data))) {
        vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data) 
               | (0x800U & vlSelf->top__DOT__dmem_reqstream_msg_data));
    }
    if ((0x1000U & (vlSelf->top__DOT__dmem_reqstream_msg_data 
                    ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data))) {
        vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data) 
               | (0x1000U & vlSelf->top__DOT__dmem_reqstream_msg_data));
    }
    if ((0x2000U & (vlSelf->top__DOT__dmem_reqstream_msg_data 
                    ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data))) {
        vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data) 
               | (0x2000U & vlSelf->top__DOT__dmem_reqstream_msg_data));
    }
    if ((0x4000U & (vlSelf->top__DOT__dmem_reqstream_msg_data 
                    ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data))) {
        vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data) 
               | (0x4000U & vlSelf->top__DOT__dmem_reqstream_msg_data));
    }
    if ((0x8000U & (vlSelf->top__DOT__dmem_reqstream_msg_data 
                    ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data))) {
        vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data) 
               | (0x8000U & vlSelf->top__DOT__dmem_reqstream_msg_data));
    }
    if ((0x10000U & (vlSelf->top__DOT__dmem_reqstream_msg_data 
                     ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data))) {
        vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data) 
               | (0x10000U & vlSelf->top__DOT__dmem_reqstream_msg_data));
    }
    if ((0x20000U & (vlSelf->top__DOT__dmem_reqstream_msg_data 
                     ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data))) {
        vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data) 
               | (0x20000U & vlSelf->top__DOT__dmem_reqstream_msg_data));
    }
    if ((0x40000U & (vlSelf->top__DOT__dmem_reqstream_msg_data 
                     ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data))) {
        vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data) 
               | (0x40000U & vlSelf->top__DOT__dmem_reqstream_msg_data));
    }
    if ((0x80000U & (vlSelf->top__DOT__dmem_reqstream_msg_data 
                     ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data))) {
        vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data) 
               | (0x80000U & vlSelf->top__DOT__dmem_reqstream_msg_data));
    }
    if ((0x100000U & (vlSelf->top__DOT__dmem_reqstream_msg_data 
                      ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data))) {
        vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data) 
               | (0x100000U & vlSelf->top__DOT__dmem_reqstream_msg_data));
    }
    if ((0x200000U & (vlSelf->top__DOT__dmem_reqstream_msg_data 
                      ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data))) {
        vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data) 
               | (0x200000U & vlSelf->top__DOT__dmem_reqstream_msg_data));
    }
    if ((0x400000U & (vlSelf->top__DOT__dmem_reqstream_msg_data 
                      ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data))) {
        vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data) 
               | (0x400000U & vlSelf->top__DOT__dmem_reqstream_msg_data));
    }
    if ((0x800000U & (vlSelf->top__DOT__dmem_reqstream_msg_data 
                      ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data))) {
        vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data) 
               | (0x800000U & vlSelf->top__DOT__dmem_reqstream_msg_data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__dmem_reqstream_msg_data 
                       ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data))) {
        vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data) 
               | (0x1000000U & vlSelf->top__DOT__dmem_reqstream_msg_data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__dmem_reqstream_msg_data 
                       ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data))) {
        vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data) 
               | (0x2000000U & vlSelf->top__DOT__dmem_reqstream_msg_data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__dmem_reqstream_msg_data 
                       ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data))) {
        vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data) 
               | (0x4000000U & vlSelf->top__DOT__dmem_reqstream_msg_data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__dmem_reqstream_msg_data 
                       ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data))) {
        vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data) 
               | (0x8000000U & vlSelf->top__DOT__dmem_reqstream_msg_data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__dmem_reqstream_msg_data 
                        ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data))) {
        vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data) 
               | (0x10000000U & vlSelf->top__DOT__dmem_reqstream_msg_data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__dmem_reqstream_msg_data 
                        ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data))) {
        vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data) 
               | (0x20000000U & vlSelf->top__DOT__dmem_reqstream_msg_data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__dmem_reqstream_msg_data 
                        ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data))) {
        vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data) 
               | (0x40000000U & vlSelf->top__DOT__dmem_reqstream_msg_data));
    }
    if (((vlSelf->top__DOT__dmem_reqstream_msg_data 
          ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_data) 
               | (0x80000000U & vlSelf->top__DOT__dmem_reqstream_msg_data));
    }
    if ((1U & (vlSelf->top__DOT__dmem_respstream_msg_data 
               ^ vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (1U & vlSelf->top__DOT__dmem_respstream_msg_data));
    }
    if ((2U & (vlSelf->top__DOT__dmem_respstream_msg_data 
               ^ vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (2U & vlSelf->top__DOT__dmem_respstream_msg_data));
    }
    if ((4U & (vlSelf->top__DOT__dmem_respstream_msg_data 
               ^ vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (4U & vlSelf->top__DOT__dmem_respstream_msg_data));
    }
    if ((8U & (vlSelf->top__DOT__dmem_respstream_msg_data 
               ^ vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (8U & vlSelf->top__DOT__dmem_respstream_msg_data));
    }
    if ((0x10U & (vlSelf->top__DOT__dmem_respstream_msg_data 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x10U & vlSelf->top__DOT__dmem_respstream_msg_data));
    }
    if ((0x20U & (vlSelf->top__DOT__dmem_respstream_msg_data 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x20U & vlSelf->top__DOT__dmem_respstream_msg_data));
    }
    if ((0x40U & (vlSelf->top__DOT__dmem_respstream_msg_data 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x40U & vlSelf->top__DOT__dmem_respstream_msg_data));
    }
    if ((0x80U & (vlSelf->top__DOT__dmem_respstream_msg_data 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x80U & vlSelf->top__DOT__dmem_respstream_msg_data));
    }
    if ((0x100U & (vlSelf->top__DOT__dmem_respstream_msg_data 
                   ^ vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x100U & vlSelf->top__DOT__dmem_respstream_msg_data));
    }
    if ((0x200U & (vlSelf->top__DOT__dmem_respstream_msg_data 
                   ^ vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x200U & vlSelf->top__DOT__dmem_respstream_msg_data));
    }
    if ((0x400U & (vlSelf->top__DOT__dmem_respstream_msg_data 
                   ^ vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x400U & vlSelf->top__DOT__dmem_respstream_msg_data));
    }
    if ((0x800U & (vlSelf->top__DOT__dmem_respstream_msg_data 
                   ^ vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x800U & vlSelf->top__DOT__dmem_respstream_msg_data));
    }
    if ((0x1000U & (vlSelf->top__DOT__dmem_respstream_msg_data 
                    ^ vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x1000U & vlSelf->top__DOT__dmem_respstream_msg_data));
    }
    if ((0x2000U & (vlSelf->top__DOT__dmem_respstream_msg_data 
                    ^ vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x2000U & vlSelf->top__DOT__dmem_respstream_msg_data));
    }
    if ((0x4000U & (vlSelf->top__DOT__dmem_respstream_msg_data 
                    ^ vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x4000U & vlSelf->top__DOT__dmem_respstream_msg_data));
    }
    if ((0x8000U & (vlSelf->top__DOT__dmem_respstream_msg_data 
                    ^ vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x8000U & vlSelf->top__DOT__dmem_respstream_msg_data));
    }
    if ((0x10000U & (vlSelf->top__DOT__dmem_respstream_msg_data 
                     ^ vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x10000U & vlSelf->top__DOT__dmem_respstream_msg_data));
    }
    if ((0x20000U & (vlSelf->top__DOT__dmem_respstream_msg_data 
                     ^ vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x20000U & vlSelf->top__DOT__dmem_respstream_msg_data));
    }
    if ((0x40000U & (vlSelf->top__DOT__dmem_respstream_msg_data 
                     ^ vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x40000U & vlSelf->top__DOT__dmem_respstream_msg_data));
    }
    if ((0x80000U & (vlSelf->top__DOT__dmem_respstream_msg_data 
                     ^ vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x80000U & vlSelf->top__DOT__dmem_respstream_msg_data));
    }
    if ((0x100000U & (vlSelf->top__DOT__dmem_respstream_msg_data 
                      ^ vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x100000U & vlSelf->top__DOT__dmem_respstream_msg_data));
    }
    if ((0x200000U & (vlSelf->top__DOT__dmem_respstream_msg_data 
                      ^ vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x200000U & vlSelf->top__DOT__dmem_respstream_msg_data));
    }
    if ((0x400000U & (vlSelf->top__DOT__dmem_respstream_msg_data 
                      ^ vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x400000U & vlSelf->top__DOT__dmem_respstream_msg_data));
    }
    if ((0x800000U & (vlSelf->top__DOT__dmem_respstream_msg_data 
                      ^ vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x800000U & vlSelf->top__DOT__dmem_respstream_msg_data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__dmem_respstream_msg_data 
                       ^ vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x1000000U & vlSelf->top__DOT__dmem_respstream_msg_data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__dmem_respstream_msg_data 
                       ^ vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x2000000U & vlSelf->top__DOT__dmem_respstream_msg_data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__dmem_respstream_msg_data 
                       ^ vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x4000000U & vlSelf->top__DOT__dmem_respstream_msg_data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__dmem_respstream_msg_data 
                       ^ vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x8000000U & vlSelf->top__DOT__dmem_respstream_msg_data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__dmem_respstream_msg_data 
                        ^ vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x10000000U & vlSelf->top__DOT__dmem_respstream_msg_data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__dmem_respstream_msg_data 
                        ^ vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x20000000U & vlSelf->top__DOT__dmem_respstream_msg_data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__dmem_respstream_msg_data 
                        ^ vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x40000000U & vlSelf->top__DOT__dmem_respstream_msg_data));
    }
    if (((vlSelf->top__DOT__dmem_respstream_msg_data 
          ^ vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x80000000U & vlSelf->top__DOT__dmem_respstream_msg_data));
    }
    if ((1U & (vlSelf->top__DOT__mngr2proc_data ^ vlSelf->top__DOT____Vtogcov__mngr2proc_data))) {
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_data 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__mngr2proc_data) 
               | (1U & vlSelf->top__DOT__mngr2proc_data));
    }
    if ((2U & (vlSelf->top__DOT__mngr2proc_data ^ vlSelf->top__DOT____Vtogcov__mngr2proc_data))) {
        vlSymsp->__Vcoverage[180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_data 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__mngr2proc_data) 
               | (2U & vlSelf->top__DOT__mngr2proc_data));
    }
    if ((4U & (vlSelf->top__DOT__mngr2proc_data ^ vlSelf->top__DOT____Vtogcov__mngr2proc_data))) {
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_data 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__mngr2proc_data) 
               | (4U & vlSelf->top__DOT__mngr2proc_data));
    }
    if ((8U & (vlSelf->top__DOT__mngr2proc_data ^ vlSelf->top__DOT____Vtogcov__mngr2proc_data))) {
        vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_data 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__mngr2proc_data) 
               | (8U & vlSelf->top__DOT__mngr2proc_data));
    }
    if ((0x10U & (vlSelf->top__DOT__mngr2proc_data 
                  ^ vlSelf->top__DOT____Vtogcov__mngr2proc_data))) {
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_data 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__mngr2proc_data) 
               | (0x10U & vlSelf->top__DOT__mngr2proc_data));
    }
    if ((0x20U & (vlSelf->top__DOT__mngr2proc_data 
                  ^ vlSelf->top__DOT____Vtogcov__mngr2proc_data))) {
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_data 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__mngr2proc_data) 
               | (0x20U & vlSelf->top__DOT__mngr2proc_data));
    }
    if ((0x40U & (vlSelf->top__DOT__mngr2proc_data 
                  ^ vlSelf->top__DOT____Vtogcov__mngr2proc_data))) {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_data 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__mngr2proc_data) 
               | (0x40U & vlSelf->top__DOT__mngr2proc_data));
    }
    if ((0x80U & (vlSelf->top__DOT__mngr2proc_data 
                  ^ vlSelf->top__DOT____Vtogcov__mngr2proc_data))) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_data 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__mngr2proc_data) 
               | (0x80U & vlSelf->top__DOT__mngr2proc_data));
    }
    if ((0x100U & (vlSelf->top__DOT__mngr2proc_data 
                   ^ vlSelf->top__DOT____Vtogcov__mngr2proc_data))) {
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_data 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__mngr2proc_data) 
               | (0x100U & vlSelf->top__DOT__mngr2proc_data));
    }
    if ((0x200U & (vlSelf->top__DOT__mngr2proc_data 
                   ^ vlSelf->top__DOT____Vtogcov__mngr2proc_data))) {
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_data 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__mngr2proc_data) 
               | (0x200U & vlSelf->top__DOT__mngr2proc_data));
    }
    if ((0x400U & (vlSelf->top__DOT__mngr2proc_data 
                   ^ vlSelf->top__DOT____Vtogcov__mngr2proc_data))) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_data 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__mngr2proc_data) 
               | (0x400U & vlSelf->top__DOT__mngr2proc_data));
    }
    if ((0x800U & (vlSelf->top__DOT__mngr2proc_data 
                   ^ vlSelf->top__DOT____Vtogcov__mngr2proc_data))) {
        vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_data 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__mngr2proc_data) 
               | (0x800U & vlSelf->top__DOT__mngr2proc_data));
    }
    if ((0x1000U & (vlSelf->top__DOT__mngr2proc_data 
                    ^ vlSelf->top__DOT____Vtogcov__mngr2proc_data))) {
        vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_data 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__mngr2proc_data) 
               | (0x1000U & vlSelf->top__DOT__mngr2proc_data));
    }
    if ((0x2000U & (vlSelf->top__DOT__mngr2proc_data 
                    ^ vlSelf->top__DOT____Vtogcov__mngr2proc_data))) {
        vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_data 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__mngr2proc_data) 
               | (0x2000U & vlSelf->top__DOT__mngr2proc_data));
    }
    if ((0x4000U & (vlSelf->top__DOT__mngr2proc_data 
                    ^ vlSelf->top__DOT____Vtogcov__mngr2proc_data))) {
        vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_data 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__mngr2proc_data) 
               | (0x4000U & vlSelf->top__DOT__mngr2proc_data));
    }
    if ((0x8000U & (vlSelf->top__DOT__mngr2proc_data 
                    ^ vlSelf->top__DOT____Vtogcov__mngr2proc_data))) {
        vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_data 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__mngr2proc_data) 
               | (0x8000U & vlSelf->top__DOT__mngr2proc_data));
    }
    if ((0x10000U & (vlSelf->top__DOT__mngr2proc_data 
                     ^ vlSelf->top__DOT____Vtogcov__mngr2proc_data))) {
        vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_data 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_data) 
               | (0x10000U & vlSelf->top__DOT__mngr2proc_data));
    }
    if ((0x20000U & (vlSelf->top__DOT__mngr2proc_data 
                     ^ vlSelf->top__DOT____Vtogcov__mngr2proc_data))) {
        vlSymsp->__Vcoverage[196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_data 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_data) 
               | (0x20000U & vlSelf->top__DOT__mngr2proc_data));
    }
    if ((0x40000U & (vlSelf->top__DOT__mngr2proc_data 
                     ^ vlSelf->top__DOT____Vtogcov__mngr2proc_data))) {
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_data 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_data) 
               | (0x40000U & vlSelf->top__DOT__mngr2proc_data));
    }
    if ((0x80000U & (vlSelf->top__DOT__mngr2proc_data 
                     ^ vlSelf->top__DOT____Vtogcov__mngr2proc_data))) {
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_data 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_data) 
               | (0x80000U & vlSelf->top__DOT__mngr2proc_data));
    }
    if ((0x100000U & (vlSelf->top__DOT__mngr2proc_data 
                      ^ vlSelf->top__DOT____Vtogcov__mngr2proc_data))) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_data 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_data) 
               | (0x100000U & vlSelf->top__DOT__mngr2proc_data));
    }
    if ((0x200000U & (vlSelf->top__DOT__mngr2proc_data 
                      ^ vlSelf->top__DOT____Vtogcov__mngr2proc_data))) {
        vlSymsp->__Vcoverage[200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_data 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_data) 
               | (0x200000U & vlSelf->top__DOT__mngr2proc_data));
    }
    if ((0x400000U & (vlSelf->top__DOT__mngr2proc_data 
                      ^ vlSelf->top__DOT____Vtogcov__mngr2proc_data))) {
        vlSymsp->__Vcoverage[201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_data 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_data) 
               | (0x400000U & vlSelf->top__DOT__mngr2proc_data));
    }
    if ((0x800000U & (vlSelf->top__DOT__mngr2proc_data 
                      ^ vlSelf->top__DOT____Vtogcov__mngr2proc_data))) {
        vlSymsp->__Vcoverage[202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_data 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_data) 
               | (0x800000U & vlSelf->top__DOT__mngr2proc_data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mngr2proc_data 
                       ^ vlSelf->top__DOT____Vtogcov__mngr2proc_data))) {
        vlSymsp->__Vcoverage[203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_data 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_data) 
               | (0x1000000U & vlSelf->top__DOT__mngr2proc_data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mngr2proc_data 
                       ^ vlSelf->top__DOT____Vtogcov__mngr2proc_data))) {
        vlSymsp->__Vcoverage[204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_data 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_data) 
               | (0x2000000U & vlSelf->top__DOT__mngr2proc_data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mngr2proc_data 
                       ^ vlSelf->top__DOT____Vtogcov__mngr2proc_data))) {
        vlSymsp->__Vcoverage[205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_data 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_data) 
               | (0x4000000U & vlSelf->top__DOT__mngr2proc_data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mngr2proc_data 
                       ^ vlSelf->top__DOT____Vtogcov__mngr2proc_data))) {
        vlSymsp->__Vcoverage[206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_data 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_data) 
               | (0x8000000U & vlSelf->top__DOT__mngr2proc_data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mngr2proc_data 
                        ^ vlSelf->top__DOT____Vtogcov__mngr2proc_data))) {
        vlSymsp->__Vcoverage[207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_data 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_data) 
               | (0x10000000U & vlSelf->top__DOT__mngr2proc_data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mngr2proc_data 
                        ^ vlSelf->top__DOT____Vtogcov__mngr2proc_data))) {
        vlSymsp->__Vcoverage[208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_data 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_data) 
               | (0x20000000U & vlSelf->top__DOT__mngr2proc_data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mngr2proc_data 
                        ^ vlSelf->top__DOT____Vtogcov__mngr2proc_data))) {
        vlSymsp->__Vcoverage[209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_data 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_data) 
               | (0x40000000U & vlSelf->top__DOT__mngr2proc_data));
    }
    if (((vlSelf->top__DOT__mngr2proc_data ^ vlSelf->top__DOT____Vtogcov__mngr2proc_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_data 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_data) 
               | (0x80000000U & vlSelf->top__DOT__mngr2proc_data));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__wb_result_W 
               ^ vlSelf->top__DOT____Vtogcov__proc2mngr_data))) {
        vlSymsp->__Vcoverage[211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_data 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__proc2mngr_data) 
               | (1U & vlSelf->top__DOT__DUT__DOT__wb_result_W));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__wb_result_W 
               ^ vlSelf->top__DOT____Vtogcov__proc2mngr_data))) {
        vlSymsp->__Vcoverage[212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_data 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__proc2mngr_data) 
               | (2U & vlSelf->top__DOT__DUT__DOT__wb_result_W));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__wb_result_W 
               ^ vlSelf->top__DOT____Vtogcov__proc2mngr_data))) {
        vlSymsp->__Vcoverage[213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_data 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__proc2mngr_data) 
               | (4U & vlSelf->top__DOT__DUT__DOT__wb_result_W));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__wb_result_W 
               ^ vlSelf->top__DOT____Vtogcov__proc2mngr_data))) {
        vlSymsp->__Vcoverage[214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_data 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__proc2mngr_data) 
               | (8U & vlSelf->top__DOT__DUT__DOT__wb_result_W));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__wb_result_W 
                  ^ vlSelf->top__DOT____Vtogcov__proc2mngr_data))) {
        vlSymsp->__Vcoverage[215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_data 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__proc2mngr_data) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__wb_result_W));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__wb_result_W 
                  ^ vlSelf->top__DOT____Vtogcov__proc2mngr_data))) {
        vlSymsp->__Vcoverage[216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_data 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__proc2mngr_data) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__wb_result_W));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__wb_result_W 
                  ^ vlSelf->top__DOT____Vtogcov__proc2mngr_data))) {
        vlSymsp->__Vcoverage[217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_data 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__proc2mngr_data) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__wb_result_W));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__wb_result_W 
                  ^ vlSelf->top__DOT____Vtogcov__proc2mngr_data))) {
        vlSymsp->__Vcoverage[218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_data 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__proc2mngr_data) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__wb_result_W));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__wb_result_W 
                   ^ vlSelf->top__DOT____Vtogcov__proc2mngr_data))) {
        vlSymsp->__Vcoverage[219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_data 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__proc2mngr_data) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__wb_result_W));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__wb_result_W 
                   ^ vlSelf->top__DOT____Vtogcov__proc2mngr_data))) {
        vlSymsp->__Vcoverage[220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_data 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__proc2mngr_data) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__wb_result_W));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__wb_result_W 
                   ^ vlSelf->top__DOT____Vtogcov__proc2mngr_data))) {
        vlSymsp->__Vcoverage[221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_data 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__proc2mngr_data) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__wb_result_W));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__wb_result_W 
                   ^ vlSelf->top__DOT____Vtogcov__proc2mngr_data))) {
        vlSymsp->__Vcoverage[222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_data 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__proc2mngr_data) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__wb_result_W));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__wb_result_W 
                    ^ vlSelf->top__DOT____Vtogcov__proc2mngr_data))) {
        vlSymsp->__Vcoverage[223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_data 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__proc2mngr_data) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__wb_result_W));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__wb_result_W 
                    ^ vlSelf->top__DOT____Vtogcov__proc2mngr_data))) {
        vlSymsp->__Vcoverage[224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_data 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__proc2mngr_data) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__wb_result_W));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__wb_result_W 
                    ^ vlSelf->top__DOT____Vtogcov__proc2mngr_data))) {
        vlSymsp->__Vcoverage[225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_data 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__proc2mngr_data) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__wb_result_W));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__wb_result_W 
                    ^ vlSelf->top__DOT____Vtogcov__proc2mngr_data))) {
        vlSymsp->__Vcoverage[226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_data 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__proc2mngr_data) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__wb_result_W));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__wb_result_W 
                     ^ vlSelf->top__DOT____Vtogcov__proc2mngr_data))) {
        vlSymsp->__Vcoverage[227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_data 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__proc2mngr_data) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__wb_result_W));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__wb_result_W 
                     ^ vlSelf->top__DOT____Vtogcov__proc2mngr_data))) {
        vlSymsp->__Vcoverage[228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_data 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__proc2mngr_data) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__wb_result_W));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__wb_result_W 
                     ^ vlSelf->top__DOT____Vtogcov__proc2mngr_data))) {
        vlSymsp->__Vcoverage[229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_data 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__proc2mngr_data) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__wb_result_W));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__wb_result_W 
                     ^ vlSelf->top__DOT____Vtogcov__proc2mngr_data))) {
        vlSymsp->__Vcoverage[230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_data 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__proc2mngr_data) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__wb_result_W));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__wb_result_W 
                      ^ vlSelf->top__DOT____Vtogcov__proc2mngr_data))) {
        vlSymsp->__Vcoverage[231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_data 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__proc2mngr_data) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__wb_result_W));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__wb_result_W 
                      ^ vlSelf->top__DOT____Vtogcov__proc2mngr_data))) {
        vlSymsp->__Vcoverage[232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_data 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__proc2mngr_data) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__wb_result_W));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__wb_result_W 
                      ^ vlSelf->top__DOT____Vtogcov__proc2mngr_data))) {
        vlSymsp->__Vcoverage[233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_data 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__proc2mngr_data) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__wb_result_W));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__wb_result_W 
                      ^ vlSelf->top__DOT____Vtogcov__proc2mngr_data))) {
        vlSymsp->__Vcoverage[234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_data 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__proc2mngr_data) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__wb_result_W));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__wb_result_W 
                       ^ vlSelf->top__DOT____Vtogcov__proc2mngr_data))) {
        vlSymsp->__Vcoverage[235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_data 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__proc2mngr_data) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__wb_result_W));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__wb_result_W 
                       ^ vlSelf->top__DOT____Vtogcov__proc2mngr_data))) {
        vlSymsp->__Vcoverage[236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_data 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__proc2mngr_data) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__wb_result_W));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__wb_result_W 
                       ^ vlSelf->top__DOT____Vtogcov__proc2mngr_data))) {
        vlSymsp->__Vcoverage[237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_data 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__proc2mngr_data) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__wb_result_W));
    }
    if (vlSelf->top__DOT__wb_result_sel_M) {
        if (vlSelf->top__DOT__wb_result_sel_M) {
            vlSymsp->__Vcoverage[1639].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__wb_result_M 
                = vlSelf->top__DOT__dmem_respstream_msg_data;
        } else {
            vlSelf->top__DOT__DUT__DOT__wb_result_M = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__wb_result_sel_M)))) {
            vlSymsp->__Vcoverage[1640].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->top__DOT__DUT__DOT__wb_result_M = vlSelf->top__DOT__DUT__DOT__ex_result_M;
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__wb_result_W 
                       ^ vlSelf->top__DOT____Vtogcov__proc2mngr_data))) {
        vlSymsp->__Vcoverage[238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_data 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__proc2mngr_data) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__wb_result_W));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__wb_result_W 
                        ^ vlSelf->top__DOT____Vtogcov__proc2mngr_data))) {
        vlSymsp->__Vcoverage[239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_data 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__proc2mngr_data) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__wb_result_W));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__wb_result_W 
                        ^ vlSelf->top__DOT____Vtogcov__proc2mngr_data))) {
        vlSymsp->__Vcoverage[240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_data 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__proc2mngr_data) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__wb_result_W));
    }
    if ((0U == (IData)(vlSelf->top__DOT__csrr_sel_D))) {
        vlSymsp->__Vcoverage[1120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__csrr_data_D = vlSelf->top__DOT__mngr2proc_data;
    } else {
        vlSelf->top__DOT__DUT__DOT__csrr_data_D = (
                                                   (1U 
                                                    == (IData)(vlSelf->top__DOT__csrr_sel_D))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->top__DOT__csrr_sel_D))
                                                     ? vlSelf->top__DOT__core_id
                                                     : 0U));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__wb_result_W 
                        ^ vlSelf->top__DOT____Vtogcov__proc2mngr_data))) {
        vlSymsp->__Vcoverage[241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_data 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__proc2mngr_data) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__wb_result_W));
    }
    if (((vlSelf->top__DOT__DUT__DOT__wb_result_W ^ vlSelf->top__DOT____Vtogcov__proc2mngr_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_data 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__proc2mngr_data) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__wb_result_W));
    }
    if ((1U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffffffeU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (1U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((2U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffffffdU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (2U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((4U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffffffbU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (4U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((8U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffffff7U 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (8U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x10U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffffffefU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x10U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x20U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffffffdfU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x20U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x40U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffffffbfU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x40U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x80U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffffff7fU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x80U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x100U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffffeffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x100U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x200U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffffdffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x200U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x400U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffffbffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x400U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x800U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffff7ffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x800U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffffefffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x1000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffffdfffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x2000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffffbfffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x4000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffff7fffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x8000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffeffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x10000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffdffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x20000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffbffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x40000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfff7ffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x80000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffefffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x100000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffdfffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x200000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffbfffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x400000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xff7fffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x800000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfeffffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x1000000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfdffffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x2000000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfbffffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x4000000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xf7ffffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x8000000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xefffffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x10000000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xdfffffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x20000000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xbfffffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x40000000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if (((vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0x7fffffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x80000000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((1U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffffffeU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (1U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((2U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffffffdU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (2U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((4U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffffffbU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (4U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((8U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffffff7U 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (8U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x10U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffffffefU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x10U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x20U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffffffdfU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x20U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x40U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffffffbfU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x40U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x80U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffffff7fU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x80U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x100U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffffeffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x100U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x200U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffffdffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x200U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x400U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffffbffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x400U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x800U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffff7ffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x800U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x1000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffffefffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x1000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x2000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffffdfffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x2000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x4000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffffbfffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x4000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x8000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffff7fffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x8000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x10000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffeffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x10000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x20000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffdffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x20000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x40000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffbffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x40000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x80000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfff7ffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x80000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x100000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffefffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x100000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x200000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffdfffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x200000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x400000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffbfffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x400000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x800000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xff7fffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x800000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x1000000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfeffffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x1000000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x2000000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfdffffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x2000000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x4000000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfbffffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x4000000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x8000000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xf7ffffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x8000000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x10000000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xefffffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x10000000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x20000000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xdfffffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x20000000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x40000000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xbfffffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x40000000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if (((vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0x7fffffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x80000000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((1U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xfffffffeU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (1U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((2U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xfffffffdU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (2U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((4U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xfffffffbU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (4U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((8U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xfffffff7U 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (8U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x10U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xffffffefU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x10U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x20U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xffffffdfU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x20U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x40U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xffffffbfU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x40U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x80U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xffffff7fU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x80U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x100U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xfffffeffU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x100U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x200U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xfffffdffU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x200U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x400U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xfffffbffU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x400U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x800U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xfffff7ffU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x800U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x1000U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xffffefffU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x1000U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x2000U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xffffdfffU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x2000U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x4000U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xffffbfffU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x4000U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x8000U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xffff7fffU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x8000U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x10000U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xfffeffffU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x10000U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x20000U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xfffdffffU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x20000U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x40000U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xfffbffffU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x40000U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x80000U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xfff7ffffU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x80000U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x100000U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xffefffffU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x100000U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x200000U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xffdfffffU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x200000U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x400000U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xffbfffffU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x400000U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x800000U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xff7fffffU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x800000U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xfeffffffU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x1000000U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xfdffffffU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x2000000U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xfbffffffU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x4000000U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xf7ffffffU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x8000000U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xefffffffU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x10000000U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xdfffffffU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x20000000U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xbfffffffU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x40000000U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if (((vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0x7fffffffU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x80000000U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__pc_F ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F) 
               | (1U & vlSelf->top__DOT__DUT__DOT__pc_F));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__pc_F ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F) 
               | (2U & vlSelf->top__DOT__DUT__DOT__pc_F));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__pc_F ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F) 
               | (4U & vlSelf->top__DOT__DUT__DOT__pc_F));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__pc_F ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F) 
               | (8U & vlSelf->top__DOT__DUT__DOT__pc_F));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__pc_F 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__pc_F));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__pc_F 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__pc_F));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__pc_F 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__pc_F));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__pc_F 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__pc_F));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__pc_F 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__pc_F));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__pc_F 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__pc_F));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__pc_F 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__pc_F));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__pc_F 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__pc_F));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__pc_F 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__pc_F));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__pc_F 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__pc_F));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__pc_F 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__pc_F));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__pc_F 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__pc_F));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__pc_F 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__pc_F));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__pc_F 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__pc_F));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__pc_F 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__pc_F));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__pc_F 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__pc_F));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__pc_F 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__pc_F));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__pc_F 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__pc_F));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__pc_F 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[403].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__pc_F));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__pc_F 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[404].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__pc_F));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__pc_F 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[405].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__pc_F));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__pc_F 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__pc_F));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__pc_F 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__pc_F));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__pc_F 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__pc_F));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__pc_F 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__pc_F));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__pc_F 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__pc_F));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__pc_F 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__pc_F));
    }
    if (((vlSelf->top__DOT__DUT__DOT__pc_F ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_F) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__pc_F));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__br_target_X 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X) 
               | (1U & vlSelf->top__DOT__DUT__DOT__br_target_X));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__br_target_X 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X) 
               | (2U & vlSelf->top__DOT__DUT__DOT__br_target_X));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__br_target_X 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X) 
               | (4U & vlSelf->top__DOT__DUT__DOT__br_target_X));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__br_target_X 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X) 
               | (8U & vlSelf->top__DOT__DUT__DOT__br_target_X));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__br_target_X 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__br_target_X));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__br_target_X 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__br_target_X));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__br_target_X 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__br_target_X));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__br_target_X 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__br_target_X));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__br_target_X 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__br_target_X));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__br_target_X 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__br_target_X));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__br_target_X 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__br_target_X));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__br_target_X 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__br_target_X));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__br_target_X 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__br_target_X));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__br_target_X 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__br_target_X));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__br_target_X 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__br_target_X));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__br_target_X 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__br_target_X));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__br_target_X 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__br_target_X));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__br_target_X 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__br_target_X));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__br_target_X 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__br_target_X));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__br_target_X 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__br_target_X));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__br_target_X 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__br_target_X));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__br_target_X 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__br_target_X));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__br_target_X 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__br_target_X));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__br_target_X 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__br_target_X));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__br_target_X 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__br_target_X));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__br_target_X 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__br_target_X));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__br_target_X 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__br_target_X));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__br_target_X 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__br_target_X));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__br_target_X 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__br_target_X));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__br_target_X 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__br_target_X));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__br_target_X 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__br_target_X));
    }
    if (((vlSelf->top__DOT__DUT__DOT__br_target_X ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__br_target_X) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__br_target_X));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__pc_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__pc_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__pc_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__pc_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__pc_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__pc_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__pc_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__pc_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__pc_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[512].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__pc_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__pc_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[513].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__pc_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__pc_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[514].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__pc_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__pc_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[515].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__pc_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__pc_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[516].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__pc_D));
    }
    if ((4U & (IData)(vlSelf->top__DOT__imm_type_D))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__imm_type_D) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__imm_type_D)))) {
                vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__pc_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[517].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__pc_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__pc_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[518].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__pc_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__pc_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[519].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__pc_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__pc_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[520].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__pc_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__pc_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[521].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__pc_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__pc_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[522].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__pc_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__pc_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[523].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__pc_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__pc_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[524].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__pc_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__pc_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[525].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__pc_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__pc_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[526].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__pc_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__pc_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[527].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__pc_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__pc_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[528].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__pc_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__pc_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[529].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__pc_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__pc_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[530].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__pc_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__pc_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[531].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__pc_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__pc_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[532].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__pc_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__pc_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[533].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__pc_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__pc_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[534].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__pc_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__pc_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[535].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__pc_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__pc_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[536].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__pc_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__pc_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[537].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__pc_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__pc_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[538].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__pc_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__pc_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[539].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__pc_D));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__op1_X ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[734].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X) 
               | (1U & vlSelf->top__DOT__DUT__DOT__op1_X));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__op1_X ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[735].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X) 
               | (2U & vlSelf->top__DOT__DUT__DOT__op1_X));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__op1_X ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[736].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X) 
               | (4U & vlSelf->top__DOT__DUT__DOT__op1_X));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__op1_X ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[737].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X) 
               | (8U & vlSelf->top__DOT__DUT__DOT__op1_X));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__op1_X 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[738].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__op1_X));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__op1_X 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[739].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__op1_X));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__op1_X 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[740].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__op1_X));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__op1_X 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[741].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__op1_X));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__op1_X 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[742].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__op1_X));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__op1_X 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[743].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__op1_X));
    }
    if ((8U & (IData)(vlSelf->top__DOT__alu_fn_X))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__alu_fn_X) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__alu_fn_X) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__alu_fn_X)))) {
                    vlSymsp->__Vcoverage[1154].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (IData)(vlSelf->top__DOT__alu_fn_X))) {
                    vlSymsp->__Vcoverage[1155].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((2U & (IData)(vlSelf->top__DOT__alu_fn_X))) {
                if ((1U & (IData)(vlSelf->top__DOT__alu_fn_X))) {
                    vlSymsp->__Vcoverage[1156].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__alu_fn_X)))) {
                    vlSymsp->__Vcoverage[1158].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
        if ((4U & (IData)(vlSelf->top__DOT__alu_fn_X))) {
            if ((2U & (IData)(vlSelf->top__DOT__alu_fn_X))) {
                vlSymsp->__Vcoverage[1158].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ ((IData)(vlSelf->top__DOT__alu_fn_X) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top__DOT__alu_fn_X))) {
                    vlSymsp->__Vcoverage[1158].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__alu_fn_X)))) {
                    vlSymsp->__Vcoverage[1157].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__op1_X 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__op1_X));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__op1_X 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[745].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__op1_X));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__op1_X 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[746].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__op1_X));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__op1_X 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[747].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__op1_X));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__op1_X 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[748].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__op1_X));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__op1_X 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[749].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__op1_X));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__op1_X 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[750].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__op1_X));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__op1_X 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[751].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__op1_X));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__op1_X 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[752].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__op1_X));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__op1_X 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[753].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__op1_X));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__op1_X 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[754].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__op1_X));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__op1_X 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[755].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__op1_X));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__op1_X 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[756].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__op1_X));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__op1_X 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[757].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__op1_X));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__op1_X 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[758].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__op1_X));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__op1_X 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[759].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__op1_X));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__op1_X 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[760].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__op1_X));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__op1_X 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[761].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__op1_X));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__op1_X 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[762].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__op1_X));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__op1_X 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[763].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__op1_X));
    }
    if ((2U & (IData)(vlSelf->top__DOT__pc_sel_F))) {
        if ((1U & (IData)(vlSelf->top__DOT__pc_sel_F))) {
            vlSymsp->__Vcoverage[1027].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__pc_sel_F)))) {
            vlSymsp->__Vcoverage[1026].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__op1_X 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[764].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__op1_X));
    }
    if (((vlSelf->top__DOT__DUT__DOT__op1_X ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[765].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_X) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__op1_X));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__op2_X ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[766].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X) 
               | (1U & vlSelf->top__DOT__DUT__DOT__op2_X));
    }
    if (vlSelf->top__DOT__op1_sel_D) {
        if (vlSelf->top__DOT__op1_sel_D) {
            vlSymsp->__Vcoverage[1117].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__op1_sel_D)))) {
            vlSymsp->__Vcoverage[1118].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__op2_X ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[767].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X) 
               | (2U & vlSelf->top__DOT__DUT__DOT__op2_X));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__op2_X ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[768].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X) 
               | (4U & vlSelf->top__DOT__DUT__DOT__op2_X));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__op2_X ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[769].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X) 
               | (8U & vlSelf->top__DOT__DUT__DOT__op2_X));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__op2_X 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[770].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__op2_X));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__op2_X 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[771].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__op2_X));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__op2_X 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[772].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__op2_X));
    }
    if ((0U == (IData)(vlSelf->top__DOT__op2_sel_D))) {
        vlSymsp->__Vcoverage[1125].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__op2_X 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[773].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__op2_X));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__op2_X 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[774].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__op2_X));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__op2_X 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[775].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__op2_X));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__op2_X 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[776].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__op2_X));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__op2_X 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[777].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__op2_X));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__op2_X 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[778].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__op2_X));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__op2_X 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[779].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__op2_X));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__op2_X 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[780].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__op2_X));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__op2_X 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[781].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__op2_X));
    }
    if ((0U != (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__state))) {
            if ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__state))) {
                vlSymsp->__Vcoverage[1560].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[1600].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__state))) {
            vlSymsp->__Vcoverage[1557].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[1599].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((0U == (IData)(vlSelf->top__DOT__ex_result_sel_X))) {
        vlSymsp->__Vcoverage[1630].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0U != (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__state))) {
                vlSymsp->__Vcoverage[1548].fetch_add(1, std::memory_order_relaxed);
            }
            if ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__state))) {
                vlSymsp->__Vcoverage[1548].fetch_add(1, std::memory_order_relaxed);
                if ((1U & (~ (IData)(vlSelf->top__DOT__imul_resp_rdy_X)))) {
                    vlSymsp->__Vcoverage[1559].fetch_add(1, std::memory_order_relaxed);
                }
                if (vlSelf->top__DOT__imul_resp_rdy_X) {
                    vlSymsp->__Vcoverage[1558].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
        if ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__state))) {
            vlSymsp->__Vcoverage[1548].fetch_add(1, std::memory_order_relaxed);
            if ((1U & (~ (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                          >> 1U)))) {
                if ((1U & (~ (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                              >> 2U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                      >> 4U)))) {
                            if ((1U & (~ (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                          >> 5U)))) {
                                if ((1U & (~ (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                              >> 6U)))) {
                                    if ((1U & (~ (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                  >> 7U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                    >> 8U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                     >> 9U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                         >> 0xaU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                             >> 0xbU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                 >> 0xcU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                     >> 0xdU)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                         >> 0xeU)))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                             >> 0xfU)))) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                                >> 0x10U)))) {
                                                                            if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                                >> 0x11U)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                                >> 0x12U)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                                >> 0x13U)))) {
                                                                                if (
                                                                                (0x100000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                                vlSymsp->__Vcoverage[1575].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                                >> 0x14U)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                                >> 0x15U)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                                >> 0x16U)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                                >> 0x17U)))) {
                                                                                if (
                                                                                (0x1000000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                                vlSymsp->__Vcoverage[1571].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                                >> 0x18U)))) {
                                                                                if (
                                                                                (0x2000000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                                vlSymsp->__Vcoverage[1570].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                                >> 0x19U)))) {
                                                                                if (
                                                                                (0x4000000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                                vlSymsp->__Vcoverage[1569].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                                >> 0x1aU)))) {
                                                                                if (
                                                                                (0x8000000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                                vlSymsp->__Vcoverage[1568].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                                >> 0x1bU)))) {
                                                                                if (
                                                                                (0x10000000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                                vlSymsp->__Vcoverage[1567].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                                >> 0x1cU)))) {
                                                                                if (
                                                                                (0x20000000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                                vlSymsp->__Vcoverage[1566].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                                >> 0x1dU)))) {
                                                                                if (
                                                                                (0x40000000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                                vlSymsp->__Vcoverage[1565].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                                >> 0x1eU)))) {
                                                                                if (
                                                                                (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                                >> 0x1fU)) {
                                                                                vlSymsp->__Vcoverage[1563].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                                >> 0x1fU)))) {
                                                                                vlSymsp->__Vcoverage[1564].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x800000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                                vlSymsp->__Vcoverage[1572].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x400000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                                vlSymsp->__Vcoverage[1573].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x200000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                                vlSymsp->__Vcoverage[1574].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x80000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                                vlSymsp->__Vcoverage[1576].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x40000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                                vlSymsp->__Vcoverage[1577].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                            }
                                                                            if (
                                                                                (0x20000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                                vlSymsp->__Vcoverage[1578].fetch_add(1, std::memory_order_relaxed);
                                                                            }
                                                                        }
                                                                        if (
                                                                            (0x10000U 
                                                                             & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                            vlSymsp->__Vcoverage[1579].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                    if (
                                                                        (0x8000U 
                                                                         & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                        vlSymsp->__Vcoverage[1580].fetch_add(1, std::memory_order_relaxed);
                                                                    }
                                                                }
                                                                if (
                                                                    (0x4000U 
                                                                     & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                    vlSymsp->__Vcoverage[1581].fetch_add(1, std::memory_order_relaxed);
                                                                }
                                                            }
                                                            if (
                                                                (0x2000U 
                                                                 & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                vlSymsp->__Vcoverage[1582].fetch_add(1, std::memory_order_relaxed);
                                                            }
                                                        }
                                                        if (
                                                            (0x1000U 
                                                             & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                            vlSymsp->__Vcoverage[1583].fetch_add(1, std::memory_order_relaxed);
                                                        }
                                                    }
                                                    if (
                                                        (0x800U 
                                                         & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                        vlSymsp->__Vcoverage[1584].fetch_add(1, std::memory_order_relaxed);
                                                    }
                                                }
                                                if (
                                                    (0x400U 
                                                     & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                    vlSymsp->__Vcoverage[1585].fetch_add(1, std::memory_order_relaxed);
                                                }
                                            }
                                            if ((0x200U 
                                                 & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                vlSymsp->__Vcoverage[1586].fetch_add(1, std::memory_order_relaxed);
                                            }
                                        }
                                        if ((0x100U 
                                             & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                            vlSymsp->__Vcoverage[1587].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    }
                                    if ((0x80U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                        vlSymsp->__Vcoverage[1588].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                                if ((0x40U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                    vlSymsp->__Vcoverage[1589].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((0x20U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                vlSymsp->__Vcoverage[1590].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((0x10U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                            vlSymsp->__Vcoverage[1591].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((8U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                        vlSymsp->__Vcoverage[1592].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((4U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                    vlSymsp->__Vcoverage[1593].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((2U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                vlSymsp->__Vcoverage[1594].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                vlSymsp->__Vcoverage[1598].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out))) {
                if ((0U == vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                    vlSymsp->__Vcoverage[1595].fetch_add(1, std::memory_order_relaxed);
                }
                if ((0U != vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                    vlSymsp->__Vcoverage[1596].fetch_add(1, std::memory_order_relaxed);
                }
                vlSymsp->__Vcoverage[1597].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__op2_X 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[782].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__op2_X));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__op2_X 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[783].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__op2_X));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__op2_X 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[784].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__op2_X));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__op2_X 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[785].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__op2_X));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__op2_X 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[786].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__op2_X));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__op2_X 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[787].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__op2_X));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__op2_X 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[788].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__op2_X));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__op2_X 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[789].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__op2_X));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__op2_X 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[790].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__op2_X));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__op2_X 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[791].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__op2_X));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__op2_X 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[792].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__op2_X));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__op2_X 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[793].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__op2_X));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__op2_X 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[794].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__op2_X));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__op2_X 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[795].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__op2_X));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__op2_X 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[796].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__op2_X));
    }
    if (((vlSelf->top__DOT__DUT__DOT__op2_X ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[797].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_X) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__op2_X));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__pc_X ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[798].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X) 
               | (1U & vlSelf->top__DOT__DUT__DOT__pc_X));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__pc_X ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[799].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X) 
               | (2U & vlSelf->top__DOT__DUT__DOT__pc_X));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__pc_X ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[800].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X) 
               | (4U & vlSelf->top__DOT__DUT__DOT__pc_X));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__pc_X ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[801].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X) 
               | (8U & vlSelf->top__DOT__DUT__DOT__pc_X));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__pc_X 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[802].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__pc_X));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__pc_X 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[803].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__pc_X));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__pc_X 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[804].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__pc_X));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__pc_X 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[805].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__pc_X));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__pc_X 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[806].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__pc_X));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__pc_X 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[807].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__pc_X));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__pc_X 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[808].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__pc_X));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__pc_X 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[809].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__pc_X));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__pc_X 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[810].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__pc_X));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__pc_X 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[811].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__pc_X));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__pc_X 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[812].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__pc_X));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__pc_X 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[813].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__pc_X));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__pc_X 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[814].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__pc_X));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__pc_X 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[815].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__pc_X));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__pc_X 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[816].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__pc_X));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__pc_X 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[817].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__pc_X));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__pc_X 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[818].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__pc_X));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__pc_X 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[819].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__pc_X));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__pc_X 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[820].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__pc_X));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__pc_X 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[821].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__pc_X));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__pc_X 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[822].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__pc_X));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__pc_X 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__pc_X));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__pc_X 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[824].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__pc_X));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__pc_X 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__pc_X));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__pc_X 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__pc_X));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__pc_X 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__pc_X));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__pc_X 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__pc_X));
    }
    if (((vlSelf->top__DOT__DUT__DOT__pc_X ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_X) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__pc_X));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[862].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X) 
               | (1U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X) 
               | (2U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X) 
               | (4U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X) 
               | (8U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[866].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[867].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[870].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[871].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[872].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[873].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[874].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[876].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[877].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[878].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[879].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[880].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[882].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[883].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if (((vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out 
          ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_result_X) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__ex_result_M 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[925].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M) 
               | (1U & vlSelf->top__DOT__DUT__DOT__ex_result_M));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__ex_result_M 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[926].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M) 
               | (2U & vlSelf->top__DOT__DUT__DOT__ex_result_M));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__ex_result_M 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[927].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M) 
               | (4U & vlSelf->top__DOT__DUT__DOT__ex_result_M));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__ex_result_M 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[928].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M) 
               | (8U & vlSelf->top__DOT__DUT__DOT__ex_result_M));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__ex_result_M 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[929].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__ex_result_M));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__ex_result_M 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[930].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__ex_result_M));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__ex_result_M 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[931].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__ex_result_M));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__ex_result_M 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[932].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__ex_result_M));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__ex_result_M 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[933].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__ex_result_M));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__ex_result_M 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[934].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__ex_result_M));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__ex_result_M 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[935].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__ex_result_M));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__ex_result_M 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[936].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__ex_result_M));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__ex_result_M 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[937].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__ex_result_M));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__ex_result_M 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[938].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__ex_result_M));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__ex_result_M 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[939].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__ex_result_M));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__ex_result_M 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[940].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__ex_result_M));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__ex_result_M 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[941].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__ex_result_M));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__ex_result_M 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[942].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__ex_result_M));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__ex_result_M 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__ex_result_M));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__ex_result_M 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[944].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__ex_result_M));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__ex_result_M 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[945].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__ex_result_M));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__ex_result_M 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[946].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__ex_result_M));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__ex_result_M 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[947].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__ex_result_M));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__ex_result_M 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[948].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__ex_result_M));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__ex_result_M 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[949].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__ex_result_M));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__ex_result_M 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[950].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__ex_result_M));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__ex_result_M 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[951].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__ex_result_M));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__ex_result_M 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[952].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__ex_result_M));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__ex_result_M 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[953].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__ex_result_M));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__ex_result_M 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[954].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__ex_result_M));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__ex_result_M 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[955].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__ex_result_M));
    }
    if (((vlSelf->top__DOT__DUT__DOT__ex_result_M ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[956].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_M) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__ex_result_M));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__stats_en_W 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[989].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W) 
               | (1U & vlSelf->top__DOT__DUT__DOT__stats_en_W));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__stats_en_W 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[990].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W) 
               | (2U & vlSelf->top__DOT__DUT__DOT__stats_en_W));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__stats_en_W 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[991].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W) 
               | (4U & vlSelf->top__DOT__DUT__DOT__stats_en_W));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__stats_en_W 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[992].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W) 
               | (8U & vlSelf->top__DOT__DUT__DOT__stats_en_W));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__stats_en_W 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[993].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__stats_en_W));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__stats_en_W 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[994].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__stats_en_W));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__stats_en_W 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[995].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__stats_en_W));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__stats_en_W 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[996].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__stats_en_W));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__stats_en_W 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[997].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__stats_en_W));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__stats_en_W 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[998].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__stats_en_W));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__stats_en_W 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[999].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__stats_en_W));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__stats_en_W 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[1000].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__stats_en_W));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__stats_en_W 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[1001].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__stats_en_W));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__stats_en_W 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[1002].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__stats_en_W));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__stats_en_W 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[1003].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__stats_en_W));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__stats_en_W 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[1004].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__stats_en_W));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__stats_en_W 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[1005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__stats_en_W));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__stats_en_W 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[1006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__stats_en_W));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__stats_en_W 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[1007].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__stats_en_W));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__stats_en_W 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[1008].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__stats_en_W));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__stats_en_W 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[1009].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__stats_en_W));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__stats_en_W 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[1010].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__stats_en_W));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__stats_en_W 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[1011].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__stats_en_W));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__stats_en_W 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[1012].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__stats_en_W));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__stats_en_W 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[1013].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__stats_en_W));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__stats_en_W 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[1014].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__stats_en_W));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__stats_en_W 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[1015].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__stats_en_W));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__stats_en_W 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[1016].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__stats_en_W));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__stats_en_W 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[1017].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__stats_en_W));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__stats_en_W 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[1018].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__stats_en_W));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__stats_en_W 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[1019].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__stats_en_W));
    }
    if (((vlSelf->top__DOT__DUT__DOT__stats_en_W ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1020].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_W) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__stats_en_W));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
               ^ vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[1229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (1U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
               ^ vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[1230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (2U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
               ^ vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[1231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (4U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
               ^ vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[1232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (8U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                  ^ vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[1233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                  ^ vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[1234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                  ^ vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[1235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                  ^ vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[1236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                   ^ vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[1237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                   ^ vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[1238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                   ^ vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[1239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                   ^ vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[1240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                    ^ vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[1241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                    ^ vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[1242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                    ^ vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[1243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                    ^ vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[1244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                     ^ vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[1245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                     ^ vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[1246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                     ^ vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[1247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                     ^ vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[1248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                      ^ vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[1249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                      ^ vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[1250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                      ^ vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[1251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                      ^ vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[1252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                       ^ vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[1253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                       ^ vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[1254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                       ^ vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[1255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                       ^ vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[1256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                        ^ vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[1257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                        ^ vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[1258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                        ^ vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[1259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if (((vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
          ^ vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out 
               ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[1362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (1U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out 
               ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[1363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (2U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out 
               ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[1364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (4U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out 
               ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[1365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (8U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out 
                  ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[1366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out 
                  ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[1367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out 
                  ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[1368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out 
                  ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[1369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out 
                   ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[1370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out 
                   ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[1371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out 
                   ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[1372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out 
                   ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[1373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out 
                    ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[1374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out 
                    ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[1375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out 
                    ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[1376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out 
                    ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[1377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out 
                     ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[1378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out 
                     ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[1379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out 
                     ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[1380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out 
                     ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[1381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out 
                      ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[1382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out 
                      ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[1383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out 
                      ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[1384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out 
                      ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[1385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out 
                       ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[1386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out 
                       ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[1387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out 
                       ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[1388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out 
                       ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[1389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out 
                        ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[1390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out 
                        ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[1391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out 
                        ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[1392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if (((vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out 
          ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x6fffffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x5fffffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__imem_respstream_msg 
                  ^ vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x3fffffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fefffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7effffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7dffffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7bffffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x77ffffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imem_respstream_msg) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_respstream_msg)))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__imem_respstream_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffffffefULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffffefffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffefffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffefffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out 
        = (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out 
           + vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out);
    vlSelf->top__DOT__br_cond_lt_X = VL_LTS_III(32, vlSelf->top__DOT__DUT__DOT__op1_X, vlSelf->top__DOT__DUT__DOT__op2_X);
    vlSelf->top__DOT__br_cond_ltu_X = (vlSelf->top__DOT__DUT__DOT__op1_X 
                                       < vlSelf->top__DOT__DUT__DOT__op2_X);
    vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0 
        = vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile
        [(0x1fU & (vlSelf->top__DOT__inst_D >> 0xfU))];
    vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1 
        = vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile
        [(0x1fU & (vlSelf->top__DOT__inst_D >> 0x14U))];
    if ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__state))) {
        vlSymsp->__Vcoverage[1554].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1562].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1548].fetch_add(1, std::memory_order_relaxed);
        if ((1U & (~ (IData)(vlSelf->top__DOT__imul_req_val_D)))) {
            vlSymsp->__Vcoverage[1553].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__imul_req_val_D) {
            vlSymsp->__Vcoverage[1552].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((4U & (IData)(vlSelf->top__DOT__imm_type_D))) {
        if (VL_UNLIKELY((2U & (IData)(vlSelf->top__DOT__imm_type_D)))) {
            VL_STOP_MT("ProcDpathImmGen.v", 34, "");
            vlSelf->top__DOT__DUT__DOT__imm_D = 0U;
        } else if (VL_UNLIKELY((1U & (IData)(vlSelf->top__DOT__imm_type_D)))) {
            VL_STOP_MT("ProcDpathImmGen.v", 34, "");
            vlSelf->top__DOT__DUT__DOT__imm_D = 0U;
        } else {
            vlSelf->top__DOT__DUT__DOT__imm_D = (((- (IData)(
                                                             (vlSelf->top__DOT__inst_D 
                                                              >> 0x1fU))) 
                                                  << 0x14U) 
                                                 | ((0xff000U 
                                                     & vlSelf->top__DOT__inst_D) 
                                                    | ((0x800U 
                                                        & (vlSelf->top__DOT__inst_D 
                                                           >> 9U)) 
                                                       | ((0x7e0U 
                                                           & (vlSelf->top__DOT__inst_D 
                                                              >> 0x14U)) 
                                                          | (0x1eU 
                                                             & (vlSelf->top__DOT__inst_D 
                                                                >> 0x14U))))));
        }
    } else {
        vlSelf->top__DOT__DUT__DOT__imm_D = ((2U & (IData)(vlSelf->top__DOT__imm_type_D))
                                              ? ((1U 
                                                  & (IData)(vlSelf->top__DOT__imm_type_D))
                                                  ? 
                                                 (0xfffff000U 
                                                  & vlSelf->top__DOT__inst_D)
                                                  : 
                                                 (((- (IData)(
                                                              (vlSelf->top__DOT__inst_D 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | ((0x800U 
                                                      & (vlSelf->top__DOT__inst_D 
                                                         << 4U)) 
                                                     | ((0x7e0U 
                                                         & (vlSelf->top__DOT__inst_D 
                                                            >> 0x14U)) 
                                                        | (0x1eU 
                                                           & (vlSelf->top__DOT__inst_D 
                                                              >> 7U))))))
                                              : ((1U 
                                                  & (IData)(vlSelf->top__DOT__imm_type_D))
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelf->top__DOT__inst_D 
                                                               >> 0x1fU))) 
                                                   << 0xbU) 
                                                  | ((0x7e0U 
                                                      & (vlSelf->top__DOT__inst_D 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlSelf->top__DOT__inst_D 
                                                           >> 7U))))
                                                  : 
                                                 (((- (IData)(
                                                              (vlSelf->top__DOT__inst_D 
                                                               >> 0x1fU))) 
                                                   << 0xbU) 
                                                  | (0x7ffU 
                                                     & (vlSelf->top__DOT__inst_D 
                                                        >> 0x14U)))));
    }
    if ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__state))) {
        vlSelf->top__DOT__DUT__DOT__imul__DOT__a_mux_sel = 1U;
        vlSelf->top__DOT__DUT__DOT__imul__DOT__b_mux_sel = 1U;
        vlSelf->top__DOT__DUT__DOT__imul__DOT__shamt = 0U;
        vlSelf->top__DOT__DUT__DOT__imul__DOT__result_mux_sel = 1U;
        vlSelf->top__DOT__DUT__DOT__imul__DOT__result_en = 1U;
        vlSelf->top__DOT__DUT__DOT__imul__DOT__add_mux_sel = 1U;
        vlSelf->top__DOT__imul_req_rdy_D = 1U;
        vlSelf->top__DOT__imul_resp_val_X = 0U;
        vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__done = 0U;
    } else if ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__state))) {
        vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__unnamedblk1__DOT__temp_shamt 
            = ((2U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)
                ? 1U : ((4U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)
                         ? 2U : ((8U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                  ? 3U : ((0x10U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                           ? 4U : (
                                                   (0x20U 
                                                    & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                    ? 5U
                                                    : 
                                                   ((0x40U 
                                                     & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                     ? 6U
                                                     : 
                                                    ((0x80U 
                                                      & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                      ? 7U
                                                      : 
                                                     ((0x100U 
                                                       & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                       ? 8U
                                                       : 
                                                      ((0x200U 
                                                        & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                        ? 9U
                                                        : 
                                                       ((0x400U 
                                                         & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                         ? 0xaU
                                                         : 
                                                        ((0x800U 
                                                          & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                          ? 0xbU
                                                          : 
                                                         ((0x1000U 
                                                           & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                           ? 0xcU
                                                           : 
                                                          ((0x2000U 
                                                            & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                            ? 0xdU
                                                            : 
                                                           ((0x4000U 
                                                             & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                             ? 0xeU
                                                             : 
                                                            ((0x8000U 
                                                              & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                              ? 0xfU
                                                              : 
                                                             ((0x10000U 
                                                               & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                               ? 0x10U
                                                               : 
                                                              ((0x20000U 
                                                                & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                                ? 0x11U
                                                                : 
                                                               ((0x40000U 
                                                                 & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                                 ? 0x12U
                                                                 : 
                                                                ((0x80000U 
                                                                  & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                                  ? 0x13U
                                                                  : 
                                                                 ((0x100000U 
                                                                   & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                                   ? 0x14U
                                                                   : 
                                                                  ((0x200000U 
                                                                    & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                                    ? 0x15U
                                                                    : 
                                                                   ((0x400000U 
                                                                     & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                                     ? 0x16U
                                                                     : 
                                                                    ((0x800000U 
                                                                      & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                                      ? 0x17U
                                                                      : 
                                                                     ((0x1000000U 
                                                                       & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                                       ? 0x18U
                                                                       : 
                                                                      ((0x2000000U 
                                                                        & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                                        ? 0x19U
                                                                        : 
                                                                       ((0x4000000U 
                                                                         & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                                         ? 0x1aU
                                                                         : 
                                                                        ((0x8000000U 
                                                                          & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                                          ? 0x1bU
                                                                          : 
                                                                         ((0x10000000U 
                                                                           & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                                           ? 0x1cU
                                                                           : 
                                                                          ((0x20000000U 
                                                                            & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                                            ? 0x1dU
                                                                            : 
                                                                           ((0x40000000U 
                                                                             & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                                             ? 0x1eU
                                                                             : 
                                                                            ((vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                              >> 0x1fU)
                                                                              ? 0x1fU
                                                                              : 1U)))))))))))))))))))))))))))))));
        if ((1U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
            vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__unnamedblk1__DOT__temp_add_mux_sel = 0U;
            vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__unnamedblk1__DOT__temp_done = 0U;
        } else {
            vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__unnamedblk1__DOT__temp_add_mux_sel = 1U;
            vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__unnamedblk1__DOT__temp_done 
                = (0U == vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out);
        }
        vlSelf->__Vtask_top__DOT__DUT__DOT__imul__DOT__control__DOT__tab__192__t_done 
            = vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__unnamedblk1__DOT__temp_done;
        vlSelf->__Vtask_top__DOT__DUT__DOT__imul__DOT__control__DOT__tab__192__t_shamt 
            = vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__unnamedblk1__DOT__temp_shamt;
        vlSelf->top__DOT__DUT__DOT__imul__DOT__a_mux_sel = 0U;
        vlSelf->top__DOT__DUT__DOT__imul__DOT__b_mux_sel = 0U;
        vlSelf->top__DOT__DUT__DOT__imul__DOT__result_mux_sel = 0U;
        vlSelf->top__DOT__DUT__DOT__imul__DOT__result_en = 1U;
        vlSelf->top__DOT__imul_req_rdy_D = 0U;
        vlSelf->top__DOT__imul_resp_val_X = 0U;
        vlSelf->__Vtask_top__DOT__DUT__DOT__imul__DOT__control__DOT__tab__192__t_add_mux_sel 
            = vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__unnamedblk1__DOT__temp_add_mux_sel;
        vlSelf->top__DOT__DUT__DOT__imul__DOT__shamt 
            = vlSelf->__Vtask_top__DOT__DUT__DOT__imul__DOT__control__DOT__tab__192__t_shamt;
        vlSelf->top__DOT__DUT__DOT__imul__DOT__add_mux_sel 
            = vlSelf->__Vtask_top__DOT__DUT__DOT__imul__DOT__control__DOT__tab__192__t_add_mux_sel;
        vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__done 
            = vlSelf->__Vtask_top__DOT__DUT__DOT__imul__DOT__control__DOT__tab__192__t_done;
    } else if (VL_LIKELY((2U == (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__state)))) {
        vlSelf->top__DOT__DUT__DOT__imul__DOT__a_mux_sel = 1U;
        vlSelf->top__DOT__DUT__DOT__imul__DOT__b_mux_sel = 1U;
        vlSelf->top__DOT__DUT__DOT__imul__DOT__shamt = 0U;
        vlSelf->top__DOT__DUT__DOT__imul__DOT__result_mux_sel = 0U;
        vlSelf->top__DOT__DUT__DOT__imul__DOT__result_en = 0U;
        vlSelf->top__DOT__DUT__DOT__imul__DOT__add_mux_sel = 1U;
        vlSelf->top__DOT__imul_req_rdy_D = 0U;
        vlSelf->top__DOT__imul_resp_val_X = 1U;
        vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__done = 0U;
    } else {
        VL_STOP_MT("../lab1_imul/IntMulAlt.v", 394, "");
        vlSelf->top__DOT__DUT__DOT__imul__DOT__a_mux_sel = 1U;
        vlSelf->top__DOT__DUT__DOT__imul__DOT__b_mux_sel = 1U;
        vlSelf->top__DOT__DUT__DOT__imul__DOT__shamt = 0U;
        vlSelf->top__DOT__DUT__DOT__imul__DOT__result_mux_sel = 1U;
        vlSelf->top__DOT__DUT__DOT__imul__DOT__result_en = 0U;
        vlSelf->top__DOT__DUT__DOT__imul__DOT__add_mux_sel = 1U;
        vlSelf->top__DOT__imul_req_rdy_D = 1U;
        vlSelf->top__DOT__imul_resp_val_X = 0U;
        vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__done = 0U;
    }
    if ((0U != (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__state))) {
        if ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__done)))) {
                vlSymsp->__Vcoverage[1556].fetch_add(1, std::memory_order_relaxed);
            }
            if (vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__done) {
                vlSymsp->__Vcoverage[1555].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    vlSelf->top__DOT__DUT__DOT__alu_result_X = ((8U 
                                                 & (IData)(vlSelf->top__DOT__alu_fn_X))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelf->top__DOT__alu_fn_X))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->top__DOT__alu_fn_X))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__alu_fn_X))
                                                    ? 0U
                                                    : vlSelf->top__DOT__DUT__DOT__op2_X))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->top__DOT__alu_fn_X))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__alu_fn_X))
                                                    ? vlSelf->top__DOT__DUT__DOT__op1_X
                                                    : 0U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__alu_fn_X))
                                                    ? 
                                                   (vlSelf->top__DOT__DUT__DOT__op1_X 
                                                    << 
                                                    (0x1fU 
                                                     & vlSelf->top__DOT__DUT__DOT__op2_X))
                                                    : 
                                                   (vlSelf->top__DOT__DUT__DOT__op1_X 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->top__DOT__DUT__DOT__op2_X)))))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelf->top__DOT__alu_fn_X))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->top__DOT__alu_fn_X))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__alu_fn_X))
                                                    ? 
                                                   (vlSelf->top__DOT__DUT__DOT__op1_X 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->top__DOT__DUT__DOT__op2_X))
                                                    : (IData)(vlSelf->top__DOT__br_cond_ltu_X))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__alu_fn_X))
                                                    ? (IData)(vlSelf->top__DOT__br_cond_lt_X)
                                                    : 
                                                   (vlSelf->top__DOT__DUT__DOT__op1_X 
                                                    ^ vlSelf->top__DOT__DUT__DOT__op2_X)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->top__DOT__alu_fn_X))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__alu_fn_X))
                                                    ? 
                                                   (vlSelf->top__DOT__DUT__DOT__op1_X 
                                                    | vlSelf->top__DOT__DUT__DOT__op2_X)
                                                    : 
                                                   (vlSelf->top__DOT__DUT__DOT__op1_X 
                                                    & vlSelf->top__DOT__DUT__DOT__op2_X))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__alu_fn_X))
                                                    ? 
                                                   (vlSelf->top__DOT__DUT__DOT__op1_X 
                                                    - vlSelf->top__DOT__DUT__DOT__op2_X)
                                                    : 
                                                   (vlSelf->top__DOT__DUT__DOT__op1_X 
                                                    + vlSelf->top__DOT__DUT__DOT__op2_X)))));
    if (((IData)(vlSelf->top__DOT__br_cond_eq_X) ^ (IData)(vlSelf->top__DOT____Vtogcov__br_cond_eq_X))) {
        vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__br_cond_eq_X = vlSelf->top__DOT__br_cond_eq_X;
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[957].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (1U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[958].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (2U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[959].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (4U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[960].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (8U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[961].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[962].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[963].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[964].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[965].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[966].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[967].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[968].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[970].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[971].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[972].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[973].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[974].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[975].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[976].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[977].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[978].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[980].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[981].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[982].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[983].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[984].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[985].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[986].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[987].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if (((vlSelf->top__DOT__DUT__DOT__wb_result_M ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[988].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out 
               ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[1458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (1U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out 
               ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[1459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (2U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out 
               ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[1460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (4U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out 
               ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[1461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (8U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out 
                  ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[1462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out 
                  ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[1463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out 
                  ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[1464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out 
                  ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[1465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out 
                   ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[1466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out 
                   ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[1467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out 
                   ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[1468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out 
                   ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[1469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out 
                    ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[1470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out 
                    ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[1471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out 
                    ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[1472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out 
                    ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[1473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out 
                     ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[1474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out 
                     ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[1475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out 
                     ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[1476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out 
                     ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[1477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out 
                      ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[1478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out 
                      ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[1479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out 
                      ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[1480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out 
                      ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[1481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out 
                       ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[1482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out 
                       ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[1483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out 
                       ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[1484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out 
                       ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[1485].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out 
                        ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[1486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out 
                        ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[1487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out 
                        ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[1488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if (((vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out 
          ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if (((IData)(vlSelf->top__DOT__br_cond_lt_X) ^ (IData)(vlSelf->top__DOT____Vtogcov__br_cond_lt_X))) {
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__br_cond_lt_X = vlSelf->top__DOT__br_cond_lt_X;
    }
    if (((IData)(vlSelf->top__DOT__br_cond_ltu_X) ^ (IData)(vlSelf->top__DOT____Vtogcov__br_cond_ltu_X))) {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__br_cond_ltu_X 
            = vlSelf->top__DOT__br_cond_ltu_X;
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[700].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[701].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[702].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[704].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[705].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[706].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[707].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[708].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[709].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[711].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[712].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[713].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[714].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[715].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[716].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[717].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[718].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[719].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[720].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[721].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[722].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[723].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[724].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[725].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[726].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[727].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[728].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[729].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[730].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__csrr_data_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[731].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0 
               ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[1049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (1U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0 
               ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[1050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (2U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0 
               ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[1051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (4U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0 
               ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[1052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (8U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0 
                  ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[1053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0 
                  ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[1054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0 
                  ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[1055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0 
                  ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[1056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0 
                   ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[1057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0 
                   ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[1058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0 
                   ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[1059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0 
                   ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[1060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0 
                    ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[1061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0 
                    ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[1062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0 
                    ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[1063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0 
                    ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[1064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0 
                     ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[1065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0 
                     ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[1066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0 
                     ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0 
                     ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[1068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0 
                      ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[1069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0 
                      ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[1070].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0 
                      ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[1071].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0 
                      ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[1072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0 
                       ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[1073].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0 
                       ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[1074].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0 
                       ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[1075].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0 
                       ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[1076].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0 
                        ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0 
                        ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[1078].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0 
                        ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[1079].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0));
    }
    if (((vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0 
          ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1080].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0));
    }
    vlSelf->top__DOT__DUT__DOT__rf_rdata0_D = ((0U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__inst_D 
                                                    >> 0xfU)))
                                                ? 0U
                                                : vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0);
    if ((1U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1 
               ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[1081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (1U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1 
               ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[1082].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (2U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1 
               ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[1083].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (4U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1 
               ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[1084].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (8U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1 
                  ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[1085].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1 
                  ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[1086].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1 
                  ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[1087].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1 
                  ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[1088].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1 
                   ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[1089].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1 
                   ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[1090].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1 
                   ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[1091].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1 
                   ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[1092].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1 
                    ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[1093].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1 
                    ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[1094].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1 
                    ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[1095].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1 
                    ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[1096].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1 
                     ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[1097].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1 
                     ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[1098].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1 
                     ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[1099].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1 
                     ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[1100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1 
                      ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[1101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1 
                      ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[1102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1 
                      ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[1103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1 
                      ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[1104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1 
                       ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[1105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1 
                       ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[1106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1 
                       ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[1107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1 
                       ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[1108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1 
                        ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[1109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1 
                        ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[1110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1 
                        ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1));
    }
    if (((vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1 
          ^ vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1));
    }
    vlSelf->top__DOT__DUT__DOT__rf_rdata1_D = ((0U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__inst_D 
                                                    >> 0x14U)))
                                                ? 0U
                                                : vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1);
    if ((1U & ((IData)((1ULL & (((QData)((IData)(vlSelf->top__DOT__DUT__DOT__pc_D)) 
                                 + (QData)((IData)(vlSelf->top__DOT__DUT__DOT__imm_D))) 
                                >> 0x20U))) ^ (IData)(vlSelf->top__DOT__DUT__DOT__pc_plus_imm_D__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[1130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__pc_plus_imm_D__DOT____Vtogcov__cout 
            = (1U & (IData)((1ULL & (((QData)((IData)(vlSelf->top__DOT__DUT__DOT__pc_D)) 
                                      + (QData)((IData)(vlSelf->top__DOT__DUT__DOT__imm_D))) 
                                     >> 0x20U))));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__imm_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[540].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__imm_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[541].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__imm_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[542].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__imm_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[543].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[544].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[545].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[546].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[547].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[548].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[549].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[550].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[551].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[552].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[553].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[554].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[555].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[556].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[557].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[558].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[559].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[560].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[561].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[562].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[563].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[564].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[565].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[566].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[567].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[568].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[569].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[570].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__imm_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[571].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    vlSelf->top__DOT__DUT__DOT__jal_target_D = (vlSelf->top__DOT__DUT__DOT__pc_D 
                                                + vlSelf->top__DOT__DUT__DOT__imm_D);
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__result_en) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__result_en))) {
        vlSymsp->__Vcoverage[1227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__result_en 
            = vlSelf->top__DOT__DUT__DOT__imul__DOT__result_en;
    }
    if (((IData)(vlSelf->top__DOT__imul_req_rdy_D) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imul_req_rdy_D))) {
        vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imul_req_rdy_D 
            = vlSelf->top__DOT__imul_req_rdy_D;
    }
    if (((IData)(vlSelf->top__DOT__imul_resp_val_X) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imul_resp_val_X))) {
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imul_resp_val_X 
            = vlSelf->top__DOT__imul_resp_val_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__done) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT____Vtogcov__done))) {
        vlSymsp->__Vcoverage[1547].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT____Vtogcov__done 
            = vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__done;
    }
    if ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__state))) {
        vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__nextState 
            = ((IData)(vlSelf->top__DOT__imul_req_val_D)
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__state))) {
        vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__nextState 
            = ((IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__done)
                ? 2U : 1U);
    } else if (VL_LIKELY((2U == (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__state)))) {
        vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__nextState 
            = ((IData)(vlSelf->top__DOT__imul_resp_rdy_X)
                ? 0U : 2U);
    } else {
        VL_STOP_MT("../lab1_imul/IntMulAlt.v", 315, "");
        vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__nextState = 0U;
    }
    vlSelf->top__DOT__DUT__DOT__pc_next_F = ((2U & (IData)(vlSelf->top__DOT__pc_sel_F))
                                              ? ((1U 
                                                  & (IData)(vlSelf->top__DOT__pc_sel_F))
                                                  ? 
                                                 ((IData)(4U) 
                                                  + vlSelf->top__DOT__DUT__DOT__pc_F)
                                                  : vlSelf->top__DOT__DUT__DOT__jal_target_D)
                                              : ((1U 
                                                  & (IData)(vlSelf->top__DOT__pc_sel_F))
                                                  ? vlSelf->top__DOT__DUT__DOT__br_target_X
                                                  : 
                                                 (0xfffffffeU 
                                                  & vlSelf->top__DOT__DUT__DOT__alu_result_X)));
    vlSelf->top__DOT__DUT__DOT__op2_D = ((0U == (IData)(vlSelf->top__DOT__op2_sel_D))
                                          ? vlSelf->top__DOT__DUT__DOT__imm_D
                                          : ((1U == (IData)(vlSelf->top__DOT__op2_sel_D))
                                              ? vlSelf->top__DOT__DUT__DOT__rf_rdata1_D
                                              : ((2U 
                                                  == (IData)(vlSelf->top__DOT__op2_sel_D))
                                                  ? vlSelf->top__DOT__DUT__DOT__csrr_data_D
                                                  : 0U)));
    vlSelf->top__DOT__DUT__DOT__op1_D = ((IData)(vlSelf->top__DOT__op1_sel_D)
                                          ? ((IData)(vlSelf->top__DOT__op1_sel_D)
                                              ? vlSelf->top__DOT__DUT__DOT__rf_rdata0_D
                                              : 0U)
                                          : vlSelf->top__DOT__DUT__DOT__pc_D);
    vlSelf->top__DOT__DUT__DOT__ex_result_X = ((0U 
                                                == (IData)(vlSelf->top__DOT__ex_result_sel_X))
                                                ? ((IData)(4U) 
                                                   + vlSelf->top__DOT__DUT__DOT__pc_X)
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->top__DOT__ex_result_sel_X))
                                                    ? vlSelf->top__DOT__DUT__DOT__alu_result_X
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->top__DOT__ex_result_sel_X))
                                                     ? vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out
                                                     : 0U)));
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__result_mux_sel)))) {
        vlSymsp->__Vcoverage[1532].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__result_mux_sel) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__result_mux_sel))) {
        vlSymsp->__Vcoverage[1226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__result_mux_sel 
            = vlSelf->top__DOT__DUT__DOT__imul__DOT__result_mux_sel;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__a_mux_sel)))) {
        vlSymsp->__Vcoverage[1527].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__a_mux_sel) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__a_mux_sel))) {
        vlSymsp->__Vcoverage[1225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__a_mux_sel 
            = vlSelf->top__DOT__DUT__DOT__imul__DOT__a_mux_sel;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__b_mux_sel)))) {
        vlSymsp->__Vcoverage[1522].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__b_mux_sel) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_mux_sel))) {
        vlSymsp->__Vcoverage[1224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_mux_sel 
            = vlSelf->top__DOT__DUT__DOT__imul__DOT__b_mux_sel;
    }
    if (vlSelf->top__DOT__DUT__DOT__imul__DOT__add_mux_sel) {
        if (vlSelf->top__DOT__DUT__DOT__imul__DOT__add_mux_sel) {
            vlSymsp->__Vcoverage[1540].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out 
                = vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out;
        } else {
            vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__add_mux_sel)))) {
            vlSymsp->__Vcoverage[1541].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out 
            = vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out;
    }
    if (vlSelf->top__DOT__DUT__DOT__imul__DOT__result_mux_sel) {
        if (vlSelf->top__DOT__DUT__DOT__imul__DOT__result_mux_sel) {
            vlSymsp->__Vcoverage[1533].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__result_mux_sel)))) {
            vlSymsp->__Vcoverage[1534].fetch_add(1, std::memory_order_relaxed);
        }
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out = 0U;
    } else {
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out 
            = vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__add_mux_sel)))) {
        vlSymsp->__Vcoverage[1539].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__add_mux_sel) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__add_mux_sel))) {
        vlSymsp->__Vcoverage[1228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__add_mux_sel 
            = vlSelf->top__DOT__DUT__DOT__imul__DOT__add_mux_sel;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__shamt) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__shamt)))) {
        vlSymsp->__Vcoverage[1261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__shamt 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__shamt)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__shamt)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__shamt) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__shamt)))) {
        vlSymsp->__Vcoverage[1262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__shamt 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__shamt)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__shamt)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__shamt) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__shamt)))) {
        vlSymsp->__Vcoverage[1263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__shamt 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__shamt)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__shamt)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__shamt) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__shamt)))) {
        vlSymsp->__Vcoverage[1264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__shamt 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__shamt)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__shamt)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__shamt) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__shamt)))) {
        vlSymsp->__Vcoverage[1265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__shamt 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__shamt)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__shamt)));
    }
    vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out 
        = (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out 
           >> (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__shamt));
    if (vlSelf->top__DOT__DUT__DOT__imul__DOT__b_mux_sel) {
        if (vlSelf->top__DOT__DUT__DOT__imul__DOT__b_mux_sel) {
            vlSymsp->__Vcoverage[1523].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                = vlSelf->top__DOT__DUT__DOT__op2_D;
        } else {
            vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__b_mux_sel)))) {
            vlSymsp->__Vcoverage[1524].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
            = vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out;
    }
    vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out 
        = (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out 
           << (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__shamt));
    if (vlSelf->top__DOT__DUT__DOT__imul__DOT__a_mux_sel) {
        if (vlSelf->top__DOT__DUT__DOT__imul__DOT__a_mux_sel) {
            vlSymsp->__Vcoverage[1528].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                = vlSelf->top__DOT__DUT__DOT__op1_D;
        } else {
            vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__a_mux_sel)))) {
            vlSymsp->__Vcoverage[1529].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
            = vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out;
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__alu_result_X 
               ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr) 
               | (1U & vlSelf->top__DOT__DUT__DOT__alu_result_X));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__alu_result_X 
               ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr) 
               | (2U & vlSelf->top__DOT__DUT__DOT__alu_result_X));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__alu_result_X 
               ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr) 
               | (4U & vlSelf->top__DOT__DUT__DOT__alu_result_X));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__alu_result_X 
               ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr) 
               | (8U & vlSelf->top__DOT__DUT__DOT__alu_result_X));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__alu_result_X 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__alu_result_X));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__alu_result_X 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__alu_result_X));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__alu_result_X 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__alu_result_X));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__alu_result_X 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__alu_result_X));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__alu_result_X 
                   ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__alu_result_X));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__alu_result_X 
                   ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__alu_result_X));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__alu_result_X 
                   ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__alu_result_X));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__alu_result_X 
                   ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__alu_result_X));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__alu_result_X 
                    ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__alu_result_X));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__alu_result_X 
                    ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__alu_result_X));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__alu_result_X 
                    ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__alu_result_X));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__alu_result_X 
                    ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__alu_result_X));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__alu_result_X 
                     ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__alu_result_X));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__alu_result_X 
                     ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__alu_result_X));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__alu_result_X 
                     ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__alu_result_X));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__alu_result_X 
                     ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__alu_result_X));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__alu_result_X 
                      ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__alu_result_X));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__alu_result_X 
                      ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__alu_result_X));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__alu_result_X 
                      ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__alu_result_X));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__alu_result_X 
                      ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__alu_result_X));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__alu_result_X 
                       ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__alu_result_X));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__alu_result_X 
                       ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__alu_result_X));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__alu_result_X 
                       ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__alu_result_X));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__alu_result_X 
                       ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__alu_result_X));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__alu_result_X 
                        ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__alu_result_X));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__alu_result_X 
                        ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__alu_result_X));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__alu_result_X 
                        ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__alu_result_X));
    }
    if (((vlSelf->top__DOT__DUT__DOT__alu_result_X 
          ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_addr) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__alu_result_X));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__rf_rdata0_D 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[572].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__rf_rdata0_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__rf_rdata0_D 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[573].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__rf_rdata0_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__rf_rdata0_D 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[574].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__rf_rdata0_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__rf_rdata0_D 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[575].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__rf_rdata0_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__rf_rdata0_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[576].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__rf_rdata0_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__rf_rdata0_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[577].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__rf_rdata0_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__rf_rdata0_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[578].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__rf_rdata0_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__rf_rdata0_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[579].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__rf_rdata0_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__rf_rdata0_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[580].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__rf_rdata0_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__rf_rdata0_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[581].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__rf_rdata0_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__rf_rdata0_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[582].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__rf_rdata0_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__rf_rdata0_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[583].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__rf_rdata0_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__rf_rdata0_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[584].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__rf_rdata0_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__rf_rdata0_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[585].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__rf_rdata0_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__rf_rdata0_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[586].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__rf_rdata0_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__rf_rdata0_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[587].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__rf_rdata0_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__rf_rdata0_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[588].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__rf_rdata0_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__rf_rdata0_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[589].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__rf_rdata0_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__rf_rdata0_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[590].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__rf_rdata0_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__rf_rdata0_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[591].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__rf_rdata0_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__rf_rdata0_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[592].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__rf_rdata0_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__rf_rdata0_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[593].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__rf_rdata0_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__rf_rdata0_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[594].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__rf_rdata0_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__rf_rdata0_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[595].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__rf_rdata0_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__rf_rdata0_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[596].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__rf_rdata0_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__rf_rdata0_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[597].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__rf_rdata0_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__rf_rdata0_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[598].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__rf_rdata0_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__rf_rdata0_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[599].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__rf_rdata0_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__rf_rdata0_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[600].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__rf_rdata0_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__rf_rdata0_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[601].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__rf_rdata0_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__rf_rdata0_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[602].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__rf_rdata0_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__rf_rdata0_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[603].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__rf_rdata0_D));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__rf_rdata1_D 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[604].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__rf_rdata1_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__rf_rdata1_D 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[605].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__rf_rdata1_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__rf_rdata1_D 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[606].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__rf_rdata1_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__rf_rdata1_D 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__rf_rdata1_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__rf_rdata1_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[608].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__rf_rdata1_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__rf_rdata1_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[609].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__rf_rdata1_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__rf_rdata1_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[610].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__rf_rdata1_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__rf_rdata1_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[611].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__rf_rdata1_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__rf_rdata1_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[612].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__rf_rdata1_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__rf_rdata1_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[613].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__rf_rdata1_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__rf_rdata1_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[614].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__rf_rdata1_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__rf_rdata1_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[615].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__rf_rdata1_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__rf_rdata1_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[616].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__rf_rdata1_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__rf_rdata1_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__rf_rdata1_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__rf_rdata1_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__rf_rdata1_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__rf_rdata1_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[619].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__rf_rdata1_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__rf_rdata1_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[620].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__rf_rdata1_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__rf_rdata1_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[621].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__rf_rdata1_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__rf_rdata1_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[622].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__rf_rdata1_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__rf_rdata1_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[623].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__rf_rdata1_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__rf_rdata1_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[624].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__rf_rdata1_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__rf_rdata1_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[625].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__rf_rdata1_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__rf_rdata1_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[626].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__rf_rdata1_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__rf_rdata1_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__rf_rdata1_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__rf_rdata1_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__rf_rdata1_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__rf_rdata1_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__rf_rdata1_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__rf_rdata1_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__rf_rdata1_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__rf_rdata1_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__rf_rdata1_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__rf_rdata1_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__rf_rdata1_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__rf_rdata1_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__rf_rdata1_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__rf_rdata1_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__rf_rdata1_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__rf_rdata1_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__rf_rdata1_D));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[485].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__jal_target_D 
          ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__nextState) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT____Vtogcov__nextState)))) {
        vlSymsp->__Vcoverage[1545].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT____Vtogcov__nextState 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT____Vtogcov__nextState)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__nextState)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__nextState) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT____Vtogcov__nextState)))) {
        vlSymsp->__Vcoverage[1546].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT____Vtogcov__nextState 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT____Vtogcov__nextState)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__nextState)));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[1490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (1U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[1491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (2U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[1492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (4U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[1493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (8U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[1494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[1495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[1496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[1497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[1498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[1499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[1500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[1501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[1502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[1503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[1504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[1505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[1506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[1507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[1508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[1509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[1510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[1511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[1512].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[1513].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[1514].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[1515].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[1516].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[1517].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[1518].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[1519].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[1520].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if (((vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out 
          ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1521].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out 
               ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out))) {
        vlSymsp->__Vcoverage[1298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out) 
               | (1U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out 
               ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out))) {
        vlSymsp->__Vcoverage[1299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out) 
               | (2U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out 
               ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out))) {
        vlSymsp->__Vcoverage[1300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out) 
               | (4U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out 
               ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out))) {
        vlSymsp->__Vcoverage[1301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out) 
               | (8U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out 
                  ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out))) {
        vlSymsp->__Vcoverage[1302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out 
                  ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out))) {
        vlSymsp->__Vcoverage[1303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out 
                  ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out))) {
        vlSymsp->__Vcoverage[1304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out 
                  ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out))) {
        vlSymsp->__Vcoverage[1305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out 
                   ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out))) {
        vlSymsp->__Vcoverage[1306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out 
                   ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out))) {
        vlSymsp->__Vcoverage[1307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out 
                   ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out))) {
        vlSymsp->__Vcoverage[1308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out 
                   ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out))) {
        vlSymsp->__Vcoverage[1309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out 
                    ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out))) {
        vlSymsp->__Vcoverage[1310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out 
                    ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out))) {
        vlSymsp->__Vcoverage[1311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out 
                    ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out))) {
        vlSymsp->__Vcoverage[1312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out 
                    ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out))) {
        vlSymsp->__Vcoverage[1313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out 
                     ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out))) {
        vlSymsp->__Vcoverage[1314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out 
                     ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out))) {
        vlSymsp->__Vcoverage[1315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out 
                     ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out))) {
        vlSymsp->__Vcoverage[1316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out 
                     ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out))) {
        vlSymsp->__Vcoverage[1317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out 
                      ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out))) {
        vlSymsp->__Vcoverage[1318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out 
                      ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out))) {
        vlSymsp->__Vcoverage[1319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out 
                      ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out))) {
        vlSymsp->__Vcoverage[1320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out 
                      ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out))) {
        vlSymsp->__Vcoverage[1321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out 
                       ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out))) {
        vlSymsp->__Vcoverage[1322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out 
                       ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out))) {
        vlSymsp->__Vcoverage[1323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out 
                       ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out))) {
        vlSymsp->__Vcoverage[1324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out 
                       ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out))) {
        vlSymsp->__Vcoverage[1325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out 
                        ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out))) {
        vlSymsp->__Vcoverage[1326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out 
                        ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out))) {
        vlSymsp->__Vcoverage[1327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out 
                        ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out))) {
        vlSymsp->__Vcoverage[1328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out));
    }
    if (((vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out 
          ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out 
               ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out))) {
        vlSymsp->__Vcoverage[1394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out) 
               | (1U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out 
               ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out))) {
        vlSymsp->__Vcoverage[1395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out) 
               | (2U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out 
               ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out))) {
        vlSymsp->__Vcoverage[1396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out) 
               | (4U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out 
               ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out))) {
        vlSymsp->__Vcoverage[1397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out) 
               | (8U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out 
                  ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out))) {
        vlSymsp->__Vcoverage[1398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out 
                  ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out))) {
        vlSymsp->__Vcoverage[1399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out 
                  ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out))) {
        vlSymsp->__Vcoverage[1400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out 
                  ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out))) {
        vlSymsp->__Vcoverage[1401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out 
                   ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out))) {
        vlSymsp->__Vcoverage[1402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out 
                   ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out))) {
        vlSymsp->__Vcoverage[1403].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out 
                   ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out))) {
        vlSymsp->__Vcoverage[1404].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out 
                   ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out))) {
        vlSymsp->__Vcoverage[1405].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out 
                    ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out))) {
        vlSymsp->__Vcoverage[1406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out 
                    ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out))) {
        vlSymsp->__Vcoverage[1407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out 
                    ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out))) {
        vlSymsp->__Vcoverage[1408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out 
                    ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out))) {
        vlSymsp->__Vcoverage[1409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out 
                     ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out))) {
        vlSymsp->__Vcoverage[1410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out 
                     ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out))) {
        vlSymsp->__Vcoverage[1411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out 
                     ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out))) {
        vlSymsp->__Vcoverage[1412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out 
                     ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out))) {
        vlSymsp->__Vcoverage[1413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out 
                      ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out))) {
        vlSymsp->__Vcoverage[1414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out 
                      ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out))) {
        vlSymsp->__Vcoverage[1415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out 
                      ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out))) {
        vlSymsp->__Vcoverage[1416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out 
                      ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out))) {
        vlSymsp->__Vcoverage[1417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out 
                       ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out))) {
        vlSymsp->__Vcoverage[1418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out 
                       ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out))) {
        vlSymsp->__Vcoverage[1419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out 
                       ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out))) {
        vlSymsp->__Vcoverage[1420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out 
                       ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out))) {
        vlSymsp->__Vcoverage[1421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out 
                        ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out))) {
        vlSymsp->__Vcoverage[1422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out 
                        ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out))) {
        vlSymsp->__Vcoverage[1423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out 
                        ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out))) {
        vlSymsp->__Vcoverage[1424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out));
    }
    if (((vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out 
          ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (1U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (2U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (4U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (8U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[859].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if (((vlSelf->top__DOT__DUT__DOT__ex_result_X ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__op1_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__op1_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__op1_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__op1_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__op1_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__op2_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__op2_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__op2_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__op2_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[683].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[684].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[687].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[692].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[693].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[694].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[695].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[696].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[697].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[698].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__op2_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[699].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
        = (((QData)((IData)(vlSelf->top__DOT__DUT__DOT__op1_D)) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__DUT__DOT__op2_D)));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__pc_next_F 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (1U & vlSelf->top__DOT__DUT__DOT__pc_next_F));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__pc_next_F 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (2U & vlSelf->top__DOT__DUT__DOT__pc_next_F));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__pc_next_F 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (4U & vlSelf->top__DOT__DUT__DOT__pc_next_F));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__pc_next_F 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (8U & vlSelf->top__DOT__DUT__DOT__pc_next_F));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__pc_next_F 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__pc_next_F));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__pc_next_F 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__pc_next_F));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__pc_next_F 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__pc_next_F));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__pc_next_F 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__pc_next_F));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__pc_next_F 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__pc_next_F));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__pc_next_F 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__pc_next_F));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__pc_next_F 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__pc_next_F));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__pc_next_F 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__pc_next_F));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__pc_next_F 
                    ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__pc_next_F));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__pc_next_F 
                    ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__pc_next_F));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__pc_next_F 
                    ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__pc_next_F));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__pc_next_F 
                    ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__pc_next_F));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__pc_next_F 
                     ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__pc_next_F));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__pc_next_F 
                     ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__pc_next_F));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__pc_next_F 
                     ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__pc_next_F));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__pc_next_F 
                     ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__pc_next_F));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__pc_next_F 
                      ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__pc_next_F));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__pc_next_F 
                      ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__pc_next_F));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__pc_next_F 
                      ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__pc_next_F));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__pc_next_F 
                      ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__pc_next_F));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__pc_next_F 
                       ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__pc_next_F));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__pc_next_F 
                       ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__pc_next_F));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__pc_next_F 
                       ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__pc_next_F));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__pc_next_F 
                       ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__pc_next_F));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__pc_next_F 
                        ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__pc_next_F));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__pc_next_F 
                        ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__pc_next_F));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__pc_next_F 
                        ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__pc_next_F));
    }
    if (((vlSelf->top__DOT__DUT__DOT__pc_next_F ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__pc_next_F));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[1426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (1U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[1427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (2U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[1428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (4U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[1429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (8U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[1430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[1431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[1432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[1433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[1434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[1435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[1436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[1437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[1438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[1439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[1440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[1441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[1442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[1443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[1444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[1445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[1446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[1447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[1448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[1449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[1450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[1451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[1452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[1453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[1454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[1455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[1456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if (((vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out 
          ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (1U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (2U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (4U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (8U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if (((vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
          ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (1U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (2U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (4U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (8U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if (((vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
          ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg)))) {
        vlSymsp->__Vcoverage[1160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[1161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[1162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[1163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[1164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[1165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[1166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[1167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[1168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[1169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[1170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[1171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[1172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[1173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[1174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[1175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[1176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[1177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[1178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[1179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[1180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[1181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[1182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[1183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[1184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[1185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[1186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[1187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[1188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[1189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[1190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[1191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[1192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[1193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[1194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[1195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[1196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[1197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[1198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[1199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[1200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[1201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[1202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[1203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[1204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[1205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x2eU))))) {
        vlSymsp->__Vcoverage[1206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x2fU))))) {
        vlSymsp->__Vcoverage[1207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x30U))))) {
        vlSymsp->__Vcoverage[1208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x31U))))) {
        vlSymsp->__Vcoverage[1209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x32U))))) {
        vlSymsp->__Vcoverage[1210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x33U))))) {
        vlSymsp->__Vcoverage[1211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x34U))))) {
        vlSymsp->__Vcoverage[1212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x35U))))) {
        vlSymsp->__Vcoverage[1213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x36U))))) {
        vlSymsp->__Vcoverage[1214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x37U))))) {
        vlSymsp->__Vcoverage[1215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x38U))))) {
        vlSymsp->__Vcoverage[1216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x39U))))) {
        vlSymsp->__Vcoverage[1217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x3aU))))) {
        vlSymsp->__Vcoverage[1218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x3bU))))) {
        vlSymsp->__Vcoverage[1219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x3cU))))) {
        vlSymsp->__Vcoverage[1220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x3dU))))) {
        vlSymsp->__Vcoverage[1221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x3eU))))) {
        vlSymsp->__Vcoverage[1222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                  ^ vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[1223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
}

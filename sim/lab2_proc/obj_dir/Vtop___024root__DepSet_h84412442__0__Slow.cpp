// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSymsp->__Vcoverage[120].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[202].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[273].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[279].fetch_add(1, std::memory_order_relaxed);
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
    // Init
    CData/*0:0*/ top__DOT__DUT__DOT____VdfgTmp_hb2b31c42__0;
    top__DOT__DUT__DOT____VdfgTmp_hb2b31c42__0 = 0;
    CData/*0:0*/ top__DOT__DUT__DOT____VdfgTmp_h8245d87c__0;
    top__DOT__DUT__DOT____VdfgTmp_h8245d87c__0 = 0;
    CData/*0:0*/ top__DOT__DUT__DOT____VdfgTmp_hb97078a9__0;
    top__DOT__DUT__DOT____VdfgTmp_hb97078a9__0 = 0;
    // Body
    if ((1U & (~ ((((((((0x13U == vlSelf->top__DOT__inst_D) 
                        | (0x33U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
                       | (0x40000033U == (0xfe00707fU 
                                          & vlSelf->top__DOT__inst_D))) 
                      | (0x2000033U == (0xfe00707fU 
                                        & vlSelf->top__DOT__inst_D))) 
                     | (0x7033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
                    | (0x6033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
                   | (0x4033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
                  | (0x2033U == (0xfe00707fU & vlSelf->top__DOT__inst_D)))))) {
        if ((1U & (~ ((((((((0x3033U == (0xfe00707fU 
                                         & vlSelf->top__DOT__inst_D)) 
                            | (0x40005033U == (0xfe00707fU 
                                               & vlSelf->top__DOT__inst_D))) 
                           | (0x5033U == (0xfe00707fU 
                                          & vlSelf->top__DOT__inst_D))) 
                          | (0x1033U == (0xfe00707fU 
                                         & vlSelf->top__DOT__inst_D))) 
                         | (0x13U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                        | (0x7013U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                       | (0x6013U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                      | (0x4013U == (0x707fU & vlSelf->top__DOT__inst_D)))))) {
            if (((((((((0x2013U == (0x707fU & vlSelf->top__DOT__inst_D)) 
                       | (0x3013U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                      | (0x40005013U == (0xfe00707fU 
                                         & vlSelf->top__DOT__inst_D))) 
                     | (0x5013U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
                    | (0x1013U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
                   | (0x37U == (0x7fU & vlSelf->top__DOT__inst_D))) 
                  | (0x17U == (0x7fU & vlSelf->top__DOT__inst_D))) 
                 | (0x6fU == (0x7fU & vlSelf->top__DOT__inst_D)))) {
                if ((0x2013U != (0x707fU & vlSelf->top__DOT__inst_D))) {
                    if ((0x3013U != (0x707fU & vlSelf->top__DOT__inst_D))) {
                        if ((0x40005013U != (0xfe00707fU 
                                             & vlSelf->top__DOT__inst_D))) {
                            if ((0x5013U != (0xfe00707fU 
                                             & vlSelf->top__DOT__inst_D))) {
                                if ((0x1013U != (0xfe00707fU 
                                                 & vlSelf->top__DOT__inst_D))) {
                                    if ((0x37U != (0x7fU 
                                                   & vlSelf->top__DOT__inst_D))) {
                                        if ((0x17U 
                                             != (0x7fU 
                                                 & vlSelf->top__DOT__inst_D))) {
                                            vlSymsp->__Vcoverage[175].fetch_add(1, std::memory_order_relaxed);
                                            vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
                                        }
                                        if ((0x17U 
                                             == (0x7fU 
                                                 & vlSelf->top__DOT__inst_D))) {
                                            vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
                                            vlSymsp->__Vcoverage[174].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    }
                                    if ((0x37U == (0x7fU 
                                                   & vlSelf->top__DOT__inst_D))) {
                                        vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
                                        vlSymsp->__Vcoverage[173].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                                if ((0x1013U == (0xfe00707fU 
                                                 & vlSelf->top__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[172].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((0x5013U == (0xfe00707fU 
                                             & vlSelf->top__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[171].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((0x40005013U == (0xfe00707fU 
                                             & vlSelf->top__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[170].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((0x3013U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[169].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((0x2013U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                    vlSymsp->__Vcoverage[168].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((1U & (~ ((((((((0x2013U == (0x707fU 
                                             & vlSelf->top__DOT__inst_D)) 
                                | (0x3013U == (0x707fU 
                                               & vlSelf->top__DOT__inst_D))) 
                               | (0x40005013U == (0xfe00707fU 
                                                  & vlSelf->top__DOT__inst_D))) 
                              | (0x5013U == (0xfe00707fU 
                                             & vlSelf->top__DOT__inst_D))) 
                             | (0x1013U == (0xfe00707fU 
                                            & vlSelf->top__DOT__inst_D))) 
                            | (0x37U == (0x7fU & vlSelf->top__DOT__inst_D))) 
                           | (0x17U == (0x7fU & vlSelf->top__DOT__inst_D))) 
                          | (0x6fU == (0x7fU & vlSelf->top__DOT__inst_D)))))) {
                if (((((((((0x67U == (0x707fU & vlSelf->top__DOT__inst_D)) 
                           | (0x1063U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                          | (0x63U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                         | (0x4063U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                        | (0x6063U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                       | (0x5063U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                      | (0x7063U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                     | (0x2003U == (0x707fU & vlSelf->top__DOT__inst_D)))) {
                    if ((0x67U != (0x707fU & vlSelf->top__DOT__inst_D))) {
                        if ((0x1063U != (0x707fU & vlSelf->top__DOT__inst_D))) {
                            if ((0x63U != (0x707fU 
                                           & vlSelf->top__DOT__inst_D))) {
                                if ((0x4063U != (0x707fU 
                                                 & vlSelf->top__DOT__inst_D))) {
                                    if ((0x6063U != 
                                         (0x707fU & vlSelf->top__DOT__inst_D))) {
                                        if ((0x5063U 
                                             != (0x707fU 
                                                 & vlSelf->top__DOT__inst_D))) {
                                            if ((0x7063U 
                                                 != 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__inst_D))) {
                                                vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
                                                vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
                                            }
                                            if ((0x7063U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__inst_D))) {
                                                vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
                                                vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
                                            }
                                        }
                                        if ((0x5063U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__inst_D))) {
                                            vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
                                            vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    }
                                    if ((0x6063U == 
                                         (0x707fU & vlSelf->top__DOT__inst_D))) {
                                        vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
                                        vlSymsp->__Vcoverage[180].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                                if ((0x4063U == (0x707fU 
                                                 & vlSelf->top__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((0x63U == (0x707fU 
                                           & vlSelf->top__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[178].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((0x1063U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[177].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((0x67U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[176].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((1U & (~ ((((((((0x67U == (0x707fU 
                                               & vlSelf->top__DOT__inst_D)) 
                                    | (0x1063U == (0x707fU 
                                                   & vlSelf->top__DOT__inst_D))) 
                                   | (0x63U == (0x707fU 
                                                & vlSelf->top__DOT__inst_D))) 
                                  | (0x4063U == (0x707fU 
                                                 & vlSelf->top__DOT__inst_D))) 
                                 | (0x6063U == (0x707fU 
                                                & vlSelf->top__DOT__inst_D))) 
                                | (0x5063U == (0x707fU 
                                               & vlSelf->top__DOT__inst_D))) 
                               | (0x7063U == (0x707fU 
                                              & vlSelf->top__DOT__inst_D))) 
                              | (0x2003U == (0x707fU 
                                             & vlSelf->top__DOT__inst_D)))))) {
                    if ((0x2023U != (0x707fU & vlSelf->top__DOT__inst_D))) {
                        if ((0x2073U != (0x707fU & vlSelf->top__DOT__inst_D))) {
                            if ((0x1073U == (0x707fU 
                                             & vlSelf->top__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((0x1073U != (0x707fU 
                                             & vlSelf->top__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((0x2073U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((0x2023U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
                    }
                }
            }
        }
        if (((((((((0x3033U == (0xfe00707fU & vlSelf->top__DOT__inst_D)) 
                   | (0x40005033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
                  | (0x5033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
                 | (0x1033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
                | (0x13U == (0x707fU & vlSelf->top__DOT__inst_D))) 
               | (0x7013U == (0x707fU & vlSelf->top__DOT__inst_D))) 
              | (0x6013U == (0x707fU & vlSelf->top__DOT__inst_D))) 
             | (0x4013U == (0x707fU & vlSelf->top__DOT__inst_D)))) {
            if ((0x3033U != (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                if ((0x40005033U != (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                    if ((0x5033U != (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                        if ((0x1033U != (0xfe00707fU 
                                         & vlSelf->top__DOT__inst_D))) {
                            if ((0x13U != (0x707fU 
                                           & vlSelf->top__DOT__inst_D))) {
                                if ((0x7013U != (0x707fU 
                                                 & vlSelf->top__DOT__inst_D))) {
                                    if ((0x6013U != 
                                         (0x707fU & vlSelf->top__DOT__inst_D))) {
                                        vlSymsp->__Vcoverage[167].fetch_add(1, std::memory_order_relaxed);
                                        vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    if ((0x6013U == 
                                         (0x707fU & vlSelf->top__DOT__inst_D))) {
                                        vlSymsp->__Vcoverage[166].fetch_add(1, std::memory_order_relaxed);
                                        vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                                if ((0x7013U == (0x707fU 
                                                 & vlSelf->top__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[165].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((0x13U == (0x707fU 
                                           & vlSelf->top__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[164].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((0x1033U == (0xfe00707fU 
                                         & vlSelf->top__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[163].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((0x5033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[162].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((0x40005033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[161].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((0x3033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                vlSymsp->__Vcoverage[160].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if (((((((((0x13U == vlSelf->top__DOT__inst_D) 
               | (0x33U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
              | (0x40000033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
             | (0x2000033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
            | (0x7033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
           | (0x6033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
          | (0x4033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
         | (0x2033U == (0xfe00707fU & vlSelf->top__DOT__inst_D)))) {
        if ((0x13U != vlSelf->top__DOT__inst_D)) {
            if ((0x33U != (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                if ((0x40000033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
                }
                if ((0x40000033U != (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                    if ((0x2000033U != (0xfe00707fU 
                                        & vlSelf->top__DOT__inst_D))) {
                        if ((0x7033U != (0xfe00707fU 
                                         & vlSelf->top__DOT__inst_D))) {
                            if ((0x6033U == (0xfe00707fU 
                                             & vlSelf->top__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((0x6033U != (0xfe00707fU 
                                             & vlSelf->top__DOT__inst_D))) {
                                if ((0x4033U == (0xfe00707fU 
                                                 & vlSelf->top__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[158].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((0x4033U != (0xfe00707fU 
                                                 & vlSelf->top__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[159].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                        }
                        if ((0x7033U == (0xfe00707fU 
                                         & vlSelf->top__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[156].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((0x2000033U == (0xfe00707fU 
                                        & vlSelf->top__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
                    }
                }
            }
            if ((0x33U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((0x13U == vlSelf->top__DOT__inst_D)) {
            vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 0U;
            vlSelf->top__DOT__op2_sel_D = 0U;
            vlSelf->top__DOT__DUT__DOT__alu_fn_D = 0U;
        } else {
            if ((0x33U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 1U;
                vlSelf->top__DOT__DUT__DOT__alu_fn_D = 0U;
            } else if ((0x40000033U == (0xfe00707fU 
                                        & vlSelf->top__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 1U;
                vlSelf->top__DOT__DUT__DOT__alu_fn_D = 1U;
            } else if ((0x2000033U == (0xfe00707fU 
                                       & vlSelf->top__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 2U;
                vlSelf->top__DOT__DUT__DOT__alu_fn_D = 0U;
            } else {
                vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 1U;
                vlSelf->top__DOT__DUT__DOT__alu_fn_D 
                    = ((0x7033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))
                        ? 2U : ((0x6033U == (0xfe00707fU 
                                             & vlSelf->top__DOT__inst_D))
                                 ? 3U : ((0x4033U == 
                                          (0xfe00707fU 
                                           & vlSelf->top__DOT__inst_D))
                                          ? 4U : 5U)));
            }
            vlSelf->top__DOT__op2_sel_D = 1U;
        }
        vlSelf->top__DOT__DUT__DOT__rf_wen_D = (0x13U 
                                                != vlSelf->top__DOT__inst_D);
        vlSelf->top__DOT__op1_sel_D = (0x13U != vlSelf->top__DOT__inst_D);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D = 0U;
        vlSelf->top__DOT__DUT__DOT__br_type_D = 0U;
        vlSelf->top__DOT__imm_type_D = 0U;
        vlSelf->top__DOT__DUT__DOT__j_type_D = 0U;
        vlSelf->top__DOT__DUT__DOT__rs2_en_D = (0x13U 
                                                != vlSelf->top__DOT__inst_D);
        vlSelf->top__DOT__DUT__DOT__rs1_en_D = (0x13U 
                                                != vlSelf->top__DOT__inst_D);
    } else {
        vlSelf->top__DOT__DUT__DOT__rf_wen_D = ((((
                                                   (((((0x3033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__inst_D)) 
                                                       | (0x40005033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__inst_D))) 
                                                      | (0x5033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__inst_D))) 
                                                     | (0x1033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__inst_D))) 
                                                    | (0x13U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__inst_D))) 
                                                   | (0x7013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__inst_D))) 
                                                  | (0x6013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__inst_D))) 
                                                 | (0x4013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__inst_D))) 
                                                | (((((((((0x2013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__inst_D)) 
                                                          | (0x3013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__inst_D))) 
                                                         | (0x40005013U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->top__DOT__inst_D))) 
                                                        | (0x5013U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->top__DOT__inst_D))) 
                                                       | (0x1013U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__inst_D))) 
                                                      | (0x37U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->top__DOT__inst_D))) 
                                                     | (0x17U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->top__DOT__inst_D))) 
                                                    | (0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->top__DOT__inst_D))) 
                                                   | (((((((((0x67U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__inst_D)) 
                                                             | (0x1063U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__inst_D))) 
                                                            | (0x63U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top__DOT__inst_D))) 
                                                           | (0x4063U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__inst_D))) 
                                                          | (0x6063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__inst_D))) 
                                                         | (0x5063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__inst_D))) 
                                                        | (0x7063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__inst_D))) 
                                                       | (0x2003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__inst_D)))
                                                       ? 
                                                      ((0x67U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__inst_D)) 
                                                       | ((0x1063U 
                                                           != 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__inst_D)) 
                                                          & ((0x63U 
                                                              != 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__inst_D)) 
                                                             & ((0x4063U 
                                                                 != 
                                                                 (0x707fU 
                                                                  & vlSelf->top__DOT__inst_D)) 
                                                                & ((0x6063U 
                                                                    != 
                                                                    (0x707fU 
                                                                     & vlSelf->top__DOT__inst_D)) 
                                                                   & ((0x5063U 
                                                                       != 
                                                                       (0x707fU 
                                                                        & vlSelf->top__DOT__inst_D)) 
                                                                      & (0x7063U 
                                                                         != 
                                                                         (0x707fU 
                                                                          & vlSelf->top__DOT__inst_D))))))))
                                                       : 
                                                      ((0x2023U 
                                                        != 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__inst_D)) 
                                                       & (0x2073U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__inst_D))))));
        vlSelf->top__DOT__op1_sel_D = (((((((((0x3033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->top__DOT__inst_D)) 
                                              | (0x40005033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->top__DOT__inst_D))) 
                                             | (0x5033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->top__DOT__inst_D))) 
                                            | (0x1033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->top__DOT__inst_D))) 
                                           | (0x13U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__inst_D))) 
                                          | (0x7013U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__inst_D))) 
                                         | (0x6013U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__inst_D))) 
                                        | (0x4013U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_D))) 
                                       | (((((((((0x2013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__inst_D)) 
                                                 | (0x3013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__inst_D))) 
                                                | (0x40005013U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->top__DOT__inst_D))) 
                                               | (0x5013U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->top__DOT__inst_D))) 
                                              | (0x1013U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->top__DOT__inst_D))) 
                                             | (0x37U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->top__DOT__inst_D))) 
                                            | (0x17U 
                                               == (0x7fU 
                                                   & vlSelf->top__DOT__inst_D))) 
                                           | (0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->top__DOT__inst_D)))
                                           ? ((0x2013U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__inst_D)) 
                                              | ((0x3013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__inst_D)) 
                                                 | ((0x40005013U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->top__DOT__inst_D)) 
                                                    | ((0x5013U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__inst_D)) 
                                                       | (0x1013U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__inst_D))))))
                                           : ((((((
                                                   (((0x67U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__inst_D)) 
                                                     | (0x1063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__inst_D))) 
                                                    | (0x63U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__inst_D))) 
                                                   | (0x4063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__inst_D))) 
                                                  | (0x6063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__inst_D))) 
                                                 | (0x5063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__inst_D))) 
                                                | (0x7063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__inst_D))) 
                                               | (0x2003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__inst_D))) 
                                              | ((0x2023U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__inst_D)) 
                                                 | ((0x2073U 
                                                     != 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__inst_D)) 
                                                    & (0x1073U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__inst_D)))))));
        if (((((((((0x3033U == (0xfe00707fU & vlSelf->top__DOT__inst_D)) 
                   | (0x40005033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
                  | (0x5033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
                 | (0x1033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
                | (0x13U == (0x707fU & vlSelf->top__DOT__inst_D))) 
               | (0x7013U == (0x707fU & vlSelf->top__DOT__inst_D))) 
              | (0x6013U == (0x707fU & vlSelf->top__DOT__inst_D))) 
             | (0x4013U == (0x707fU & vlSelf->top__DOT__inst_D)))) {
            vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 1U;
            vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D = 0U;
            if ((0x3033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                vlSelf->top__DOT__op2_sel_D = 1U;
                vlSelf->top__DOT__DUT__DOT__alu_fn_D = 6U;
            } else if ((0x40005033U == (0xfe00707fU 
                                        & vlSelf->top__DOT__inst_D))) {
                vlSelf->top__DOT__op2_sel_D = 1U;
                vlSelf->top__DOT__DUT__DOT__alu_fn_D = 7U;
            } else if ((0x5033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                vlSelf->top__DOT__op2_sel_D = 1U;
                vlSelf->top__DOT__DUT__DOT__alu_fn_D = 8U;
            } else if ((0x1033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                vlSelf->top__DOT__op2_sel_D = 1U;
                vlSelf->top__DOT__DUT__DOT__alu_fn_D = 9U;
            } else {
                vlSelf->top__DOT__op2_sel_D = 0U;
                vlSelf->top__DOT__DUT__DOT__alu_fn_D 
                    = ((0x13U == (0x707fU & vlSelf->top__DOT__inst_D))
                        ? 0U : ((0x7013U == (0x707fU 
                                             & vlSelf->top__DOT__inst_D))
                                 ? 2U : ((0x6013U == 
                                          (0x707fU 
                                           & vlSelf->top__DOT__inst_D))
                                          ? 3U : 4U)));
            }
            vlSelf->top__DOT__DUT__DOT__br_type_D = 0U;
            vlSelf->top__DOT__imm_type_D = 0U;
            vlSelf->top__DOT__DUT__DOT__j_type_D = 0U;
            vlSelf->top__DOT__DUT__DOT__rs2_en_D = 
                ((0x3033U == (0xfe00707fU & vlSelf->top__DOT__inst_D)) 
                 | ((0x40005033U == (0xfe00707fU & vlSelf->top__DOT__inst_D)) 
                    | ((0x5033U == (0xfe00707fU & vlSelf->top__DOT__inst_D)) 
                       | (0x1033U == (0xfe00707fU & vlSelf->top__DOT__inst_D)))));
        } else {
            if (((((((((0x2013U == (0x707fU & vlSelf->top__DOT__inst_D)) 
                       | (0x3013U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                      | (0x40005013U == (0xfe00707fU 
                                         & vlSelf->top__DOT__inst_D))) 
                     | (0x5013U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
                    | (0x1013U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
                   | (0x37U == (0x7fU & vlSelf->top__DOT__inst_D))) 
                  | (0x17U == (0x7fU & vlSelf->top__DOT__inst_D))) 
                 | (0x6fU == (0x7fU & vlSelf->top__DOT__inst_D)))) {
                if ((0x2013U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                    vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 1U;
                    vlSelf->top__DOT__imm_type_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__alu_fn_D = 5U;
                    vlSelf->top__DOT__DUT__DOT__j_type_D = 0U;
                } else if ((0x3013U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                    vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 1U;
                    vlSelf->top__DOT__imm_type_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__alu_fn_D = 6U;
                    vlSelf->top__DOT__DUT__DOT__j_type_D = 0U;
                } else if ((0x40005013U == (0xfe00707fU 
                                            & vlSelf->top__DOT__inst_D))) {
                    vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 1U;
                    vlSelf->top__DOT__imm_type_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__alu_fn_D = 7U;
                    vlSelf->top__DOT__DUT__DOT__j_type_D = 0U;
                } else if ((0x5013U == (0xfe00707fU 
                                        & vlSelf->top__DOT__inst_D))) {
                    vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 1U;
                    vlSelf->top__DOT__imm_type_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__alu_fn_D = 8U;
                    vlSelf->top__DOT__DUT__DOT__j_type_D = 0U;
                } else if ((0x1013U == (0xfe00707fU 
                                        & vlSelf->top__DOT__inst_D))) {
                    vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 1U;
                    vlSelf->top__DOT__imm_type_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__alu_fn_D = 9U;
                    vlSelf->top__DOT__DUT__DOT__j_type_D = 0U;
                } else if ((0x37U == (0x7fU & vlSelf->top__DOT__inst_D))) {
                    vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 1U;
                    vlSelf->top__DOT__imm_type_D = 3U;
                    vlSelf->top__DOT__DUT__DOT__alu_fn_D = 0xcU;
                    vlSelf->top__DOT__DUT__DOT__j_type_D = 0U;
                } else {
                    if ((0x17U == (0x7fU & vlSelf->top__DOT__inst_D))) {
                        vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 1U;
                        vlSelf->top__DOT__imm_type_D = 3U;
                        vlSelf->top__DOT__DUT__DOT__j_type_D = 0U;
                    } else {
                        vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 0U;
                        vlSelf->top__DOT__imm_type_D = 4U;
                        vlSelf->top__DOT__DUT__DOT__j_type_D = 1U;
                    }
                    vlSelf->top__DOT__DUT__DOT__alu_fn_D = 0U;
                }
                vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D = 0U;
                vlSelf->top__DOT__op2_sel_D = 0U;
                vlSelf->top__DOT__DUT__DOT__br_type_D = 0U;
            } else if (((((((((0x67U == (0x707fU & vlSelf->top__DOT__inst_D)) 
                              | (0x1063U == (0x707fU 
                                             & vlSelf->top__DOT__inst_D))) 
                             | (0x63U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                            | (0x4063U == (0x707fU 
                                           & vlSelf->top__DOT__inst_D))) 
                           | (0x6063U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                          | (0x5063U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                         | (0x7063U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                        | (0x2003U == (0x707fU & vlSelf->top__DOT__inst_D)))) {
                if ((0x67U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                    vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D = 0U;
                    vlSelf->top__DOT__op2_sel_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__br_type_D = 0U;
                    vlSelf->top__DOT__imm_type_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__j_type_D = 2U;
                } else {
                    if ((0x1063U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                        vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 0U;
                        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D = 0U;
                        vlSelf->top__DOT__op2_sel_D = 1U;
                        vlSelf->top__DOT__DUT__DOT__br_type_D = 1U;
                        vlSelf->top__DOT__imm_type_D = 2U;
                    } else if ((0x63U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                        vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 0U;
                        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D = 0U;
                        vlSelf->top__DOT__op2_sel_D = 1U;
                        vlSelf->top__DOT__DUT__DOT__br_type_D = 2U;
                        vlSelf->top__DOT__imm_type_D = 2U;
                    } else if ((0x4063U == (0x707fU 
                                            & vlSelf->top__DOT__inst_D))) {
                        vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 0U;
                        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D = 0U;
                        vlSelf->top__DOT__op2_sel_D = 1U;
                        vlSelf->top__DOT__DUT__DOT__br_type_D = 3U;
                        vlSelf->top__DOT__imm_type_D = 2U;
                    } else if ((0x6063U == (0x707fU 
                                            & vlSelf->top__DOT__inst_D))) {
                        vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 0U;
                        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D = 0U;
                        vlSelf->top__DOT__op2_sel_D = 1U;
                        vlSelf->top__DOT__DUT__DOT__br_type_D = 4U;
                        vlSelf->top__DOT__imm_type_D = 2U;
                    } else if ((0x5063U == (0x707fU 
                                            & vlSelf->top__DOT__inst_D))) {
                        vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 0U;
                        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D = 0U;
                        vlSelf->top__DOT__op2_sel_D = 1U;
                        vlSelf->top__DOT__DUT__DOT__br_type_D = 5U;
                        vlSelf->top__DOT__imm_type_D = 2U;
                    } else if ((0x7063U == (0x707fU 
                                            & vlSelf->top__DOT__inst_D))) {
                        vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 0U;
                        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D = 0U;
                        vlSelf->top__DOT__op2_sel_D = 1U;
                        vlSelf->top__DOT__DUT__DOT__br_type_D = 6U;
                        vlSelf->top__DOT__imm_type_D = 2U;
                    } else {
                        vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 1U;
                        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D = 1U;
                        vlSelf->top__DOT__op2_sel_D = 0U;
                        vlSelf->top__DOT__DUT__DOT__br_type_D = 0U;
                        vlSelf->top__DOT__imm_type_D = 0U;
                    }
                    vlSelf->top__DOT__DUT__DOT__j_type_D = 0U;
                }
                vlSelf->top__DOT__DUT__DOT__alu_fn_D = 0U;
            } else {
                if ((0x2023U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                    vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D = 2U;
                    vlSelf->top__DOT__op2_sel_D = 0U;
                    vlSelf->top__DOT__imm_type_D = 1U;
                    vlSelf->top__DOT__DUT__DOT__alu_fn_D = 0U;
                } else {
                    if ((0x2073U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                        vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 1U;
                        vlSelf->top__DOT__op2_sel_D = 2U;
                        vlSelf->top__DOT__DUT__DOT__alu_fn_D = 0xcU;
                    } else if ((0x1073U == (0x707fU 
                                            & vlSelf->top__DOT__inst_D))) {
                        vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 1U;
                        vlSelf->top__DOT__op2_sel_D = 1U;
                        vlSelf->top__DOT__DUT__DOT__alu_fn_D = 0xbU;
                    } else {
                        vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 0U;
                        vlSelf->top__DOT__op2_sel_D = 0U;
                        vlSelf->top__DOT__DUT__DOT__alu_fn_D = 0U;
                    }
                    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D = 0U;
                    vlSelf->top__DOT__imm_type_D = 0U;
                }
                vlSelf->top__DOT__DUT__DOT__br_type_D = 0U;
                vlSelf->top__DOT__DUT__DOT__j_type_D = 0U;
            }
            vlSelf->top__DOT__DUT__DOT__rs2_en_D = 
                ((~ ((((((((0x2013U == (0x707fU & vlSelf->top__DOT__inst_D)) 
                           | (0x3013U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                          | (0x40005013U == (0xfe00707fU 
                                             & vlSelf->top__DOT__inst_D))) 
                         | (0x5013U == (0xfe00707fU 
                                        & vlSelf->top__DOT__inst_D))) 
                        | (0x1013U == (0xfe00707fU 
                                       & vlSelf->top__DOT__inst_D))) 
                       | (0x37U == (0x7fU & vlSelf->top__DOT__inst_D))) 
                      | (0x17U == (0x7fU & vlSelf->top__DOT__inst_D))) 
                     | (0x6fU == (0x7fU & vlSelf->top__DOT__inst_D)))) 
                 & (((((((((0x67U == (0x707fU & vlSelf->top__DOT__inst_D)) 
                           | (0x1063U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                          | (0x63U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                         | (0x4063U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                        | (0x6063U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                       | (0x5063U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                      | (0x7063U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                     | (0x2003U == (0x707fU & vlSelf->top__DOT__inst_D)))
                     ? ((0x67U != (0x707fU & vlSelf->top__DOT__inst_D)) 
                        & ((0x1063U == (0x707fU & vlSelf->top__DOT__inst_D)) 
                           | ((0x63U == (0x707fU & vlSelf->top__DOT__inst_D)) 
                              | ((0x4063U == (0x707fU 
                                              & vlSelf->top__DOT__inst_D)) 
                                 | ((0x6063U == (0x707fU 
                                                 & vlSelf->top__DOT__inst_D)) 
                                    | ((0x5063U == 
                                        (0x707fU & vlSelf->top__DOT__inst_D)) 
                                       | (0x7063U == 
                                          (0x707fU 
                                           & vlSelf->top__DOT__inst_D))))))))
                     : (0x2023U == (0x707fU & vlSelf->top__DOT__inst_D))));
        }
        vlSelf->top__DOT__DUT__DOT__rs1_en_D = ((((
                                                   (((((0x3033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__inst_D)) 
                                                       | (0x40005033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__inst_D))) 
                                                      | (0x5033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__inst_D))) 
                                                     | (0x1033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__inst_D))) 
                                                    | (0x13U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__inst_D))) 
                                                   | (0x7013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__inst_D))) 
                                                  | (0x6013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__inst_D))) 
                                                 | (0x4013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__inst_D))) 
                                                | (((((((((0x2013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__inst_D)) 
                                                          | (0x3013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__inst_D))) 
                                                         | (0x40005013U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->top__DOT__inst_D))) 
                                                        | (0x5013U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->top__DOT__inst_D))) 
                                                       | (0x1013U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__inst_D))) 
                                                      | (0x37U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->top__DOT__inst_D))) 
                                                     | (0x17U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->top__DOT__inst_D))) 
                                                    | (0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->top__DOT__inst_D)))
                                                    ? 
                                                   ((0x2013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__inst_D)) 
                                                    | ((0x3013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__inst_D)) 
                                                       | ((0x40005013U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->top__DOT__inst_D)) 
                                                          | ((0x5013U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->top__DOT__inst_D)) 
                                                             | (0x1013U 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlSelf->top__DOT__inst_D))))))
                                                    : 
                                                   (((((((((0x67U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__inst_D)) 
                                                           | (0x1063U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__inst_D))) 
                                                          | (0x63U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__inst_D))) 
                                                         | (0x4063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__inst_D))) 
                                                        | (0x6063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__inst_D))) 
                                                       | (0x5063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__inst_D))) 
                                                      | (0x7063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__inst_D))) 
                                                     | (0x2003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__inst_D))) 
                                                    | ((0x2023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__inst_D)) 
                                                       | ((0x2073U 
                                                           != 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__inst_D)) 
                                                          & (0x1073U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__inst_D)))))));
    }
    if ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X))) {
        vlSymsp->__Vcoverage[278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem_action = 0U;
    } else {
        vlSelf->top__DOT__mem_action = ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X))
                                         ? 1U : 0U);
    }
    if ((1U != (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X))) {
        if ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X))) {
            vlSymsp->__Vcoverage[276].fetch_add(1, std::memory_order_relaxed);
        }
        if ((2U != (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X))) {
            vlSymsp->__Vcoverage[277].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                  & (1U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                      & (2U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))))) {
            if (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                 & (3U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))) {
                vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                          & (3U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))))) {
                if (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                     & (4U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))) {
                    vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                              & (4U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))))) {
                    if (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                         & (5U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))) {
                        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                  & (5U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))))) {
                        if (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                             & (6U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))) {
                            vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                      & (6U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))))) {
                            if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                          & (2U == (IData)(vlSelf->top__DOT__DUT__DOT__j_type_X)))))) {
                                vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
                            }
                            if (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                 & (2U == (IData)(vlSelf->top__DOT__DUT__DOT__j_type_X)))) {
                                vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
        }
        if (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
             & (2U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))) {
            vlSymsp->__Vcoverage[271].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
         & (1U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))) {
        vlSymsp->__Vcoverage[272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__pc_sel_X = 1U;
        vlSelf->top__DOT__DUT__DOT__pc_redirect_X = 
            (1U & (~ (IData)(vlSelf->top__DOT__br_cond_eq_X)));
    } else if (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                & (2U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))) {
        vlSelf->top__DOT__DUT__DOT__pc_sel_X = 1U;
        vlSelf->top__DOT__DUT__DOT__pc_redirect_X = 
            (1U & (IData)(vlSelf->top__DOT__br_cond_eq_X));
    } else if (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                & (3U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))) {
        vlSelf->top__DOT__DUT__DOT__pc_sel_X = 1U;
        vlSelf->top__DOT__DUT__DOT__pc_redirect_X = 
            (1U & (IData)(vlSelf->top__DOT__br_cond_lt_X));
    } else if (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                & (4U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))) {
        vlSelf->top__DOT__DUT__DOT__pc_sel_X = 1U;
        vlSelf->top__DOT__DUT__DOT__pc_redirect_X = 
            (1U & (IData)(vlSelf->top__DOT__br_cond_ltu_X));
    } else if (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                & (5U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))) {
        vlSelf->top__DOT__DUT__DOT__pc_sel_X = 1U;
        vlSelf->top__DOT__DUT__DOT__pc_redirect_X = 
            (1U & (~ (IData)(vlSelf->top__DOT__br_cond_lt_X)));
    } else if (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                & (6U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))) {
        vlSelf->top__DOT__DUT__DOT__pc_sel_X = 1U;
        vlSelf->top__DOT__DUT__DOT__pc_redirect_X = 
            (1U & (~ (IData)(vlSelf->top__DOT__br_cond_ltu_X)));
    } else if (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                & (2U == (IData)(vlSelf->top__DOT__DUT__DOT__j_type_X)))) {
        vlSelf->top__DOT__DUT__DOT__pc_sel_X = 0U;
        vlSelf->top__DOT__DUT__DOT__pc_redirect_X = 1U;
    } else {
        vlSelf->top__DOT__DUT__DOT__pc_sel_X = 3U;
        vlSelf->top__DOT__DUT__DOT__pc_redirect_X = 0U;
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
    if (((IData)(vlSelf->top__DOT__imem_reqstream_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_reqstream_rdy))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_rdy 
            = vlSelf->top__DOT__imem_reqstream_rdy;
    }
    if (((IData)(vlSelf->top__DOT__imem_respstream_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_respstream_val))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_val 
            = vlSelf->top__DOT__imem_respstream_val;
    }
    if (((IData)(vlSelf->top__DOT__dmem_reqstream_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__dmem_reqstream_rdy))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_rdy 
            = vlSelf->top__DOT__dmem_reqstream_rdy;
    }
    if (((IData)(vlSelf->top__DOT__dmem_respstream_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__dmem_respstream_val))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_val 
            = vlSelf->top__DOT__dmem_respstream_val;
    }
    if (((IData)(vlSelf->top__DOT__mngr2proc_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__mngr2proc_val))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_val 
            = vlSelf->top__DOT__mngr2proc_val;
    }
    if (((IData)(vlSelf->top__DOT__proc2mngr_rdy) ^ (IData)(vlSelf->top__DOT____Vtogcov__proc2mngr_rdy))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_rdy 
            = vlSelf->top__DOT__proc2mngr_rdy;
    }
    if (((IData)(vlSelf->top__DOT__wb_result_sel_M) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__wb_result_sel_M))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__wb_result_sel_M 
            = vlSelf->top__DOT__wb_result_sel_M;
    }
    if (((IData)(vlSelf->top__DOT__br_cond_eq_X) ^ (IData)(vlSelf->top__DOT____Vtogcov__br_cond_eq_X))) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__br_cond_eq_X = vlSelf->top__DOT__br_cond_eq_X;
    }
    if (((IData)(vlSelf->top__DOT__br_cond_lt_X) ^ (IData)(vlSelf->top__DOT____Vtogcov__br_cond_lt_X))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__br_cond_lt_X = vlSelf->top__DOT__br_cond_lt_X;
    }
    if (((IData)(vlSelf->top__DOT__br_cond_ltu_X) ^ (IData)(vlSelf->top__DOT____Vtogcov__br_cond_ltu_X))) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__br_cond_ltu_X 
            = vlSelf->top__DOT__br_cond_ltu_X;
    }
    if (((IData)(vlSelf->top__DOT__imul_req_rdy_D) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imul_req_rdy_D))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imul_req_rdy_D 
            = vlSelf->top__DOT__imul_req_rdy_D;
    }
    if (((IData)(vlSelf->top__DOT__imul_resp_val_X) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imul_resp_val_X))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imul_resp_val_X 
            = vlSelf->top__DOT__imul_resp_val_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__val_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__val_F))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__val_F 
            = vlSelf->top__DOT__DUT__DOT__val_F;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__val_D))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__val_D 
            = vlSelf->top__DOT__DUT__DOT__val_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__val_X))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__val_X 
            = vlSelf->top__DOT__DUT__DOT__val_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__val_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__val_M))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__val_M 
            = vlSelf->top__DOT__DUT__DOT__val_M;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__val_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__val_W))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__val_W 
            = vlSelf->top__DOT__DUT__DOT__val_W;
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__imul_req_rdy_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_imul_req_rdy_D)))) {
        vlSymsp->__Vcoverage[210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_imul_req_rdy_D 
            = (1U & (~ (IData)(vlSelf->top__DOT__imul_req_rdy_D)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__wb_result_sel_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_sel_X))) {
        vlSymsp->__Vcoverage[247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_sel_X 
            = vlSelf->top__DOT__DUT__DOT__wb_result_sel_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_X))) {
        vlSymsp->__Vcoverage[248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_X 
            = vlSelf->top__DOT__DUT__DOT__rf_wen_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_val_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_val_X))) {
        vlSymsp->__Vcoverage[254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_val_X 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_val_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stats_en_wen_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_wen_X))) {
        vlSymsp->__Vcoverage[255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_wen_X 
            = vlSelf->top__DOT__DUT__DOT__stats_en_wen_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_M))) {
        vlSymsp->__Vcoverage[315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_M 
            = vlSelf->top__DOT__DUT__DOT__rf_wen_M;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_val_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_val_M))) {
        vlSymsp->__Vcoverage[321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_val_M 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_val_M;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stats_en_wen_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_wen_M))) {
        vlSymsp->__Vcoverage[322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_wen_M 
            = vlSelf->top__DOT__DUT__DOT__stats_en_wen_M;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_val_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_val_W))) {
        vlSymsp->__Vcoverage[360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_val_W 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_val_W;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_pending_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_pending_W))) {
        vlSymsp->__Vcoverage[361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_pending_W 
            = vlSelf->top__DOT__DUT__DOT__rf_wen_pending_W;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stats_en_wen_pending_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_wen_pending_W))) {
        vlSymsp->__Vcoverage[362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_wen_pending_W 
            = vlSelf->top__DOT__DUT__DOT__stats_en_wen_pending_W;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__ex_result_sel_X) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__ex_result_sel_X)))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ex_result_sel_X 
            = ((2U & (IData)(vlSelf->top__DOT____Vtogcov__ex_result_sel_X)) 
               | (1U & (IData)(vlSelf->top__DOT__ex_result_sel_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__ex_result_sel_X) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__ex_result_sel_X)))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ex_result_sel_X 
            = ((1U & (IData)(vlSelf->top__DOT____Vtogcov__ex_result_sel_X)) 
               | (2U & (IData)(vlSelf->top__DOT__ex_result_sel_X)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_X)))) {
        vlSymsp->__Vcoverage[245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_X 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_X)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_X)))) {
        vlSymsp->__Vcoverage[246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_X 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_X)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__j_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__j_type_X)))) {
        vlSymsp->__Vcoverage[259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__j_type_X 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__j_type_X)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__j_type_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__j_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__j_type_X)))) {
        vlSymsp->__Vcoverage[260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__j_type_X 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__j_type_X)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__j_type_X)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_M)))) {
        vlSymsp->__Vcoverage[313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_M 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_M)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_M)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_M)))) {
        vlSymsp->__Vcoverage[314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_M 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_M)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_M)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__br_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_X)))) {
        vlSymsp->__Vcoverage[256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_X 
            = ((6U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_X)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__br_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_X)))) {
        vlSymsp->__Vcoverage[257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_X 
            = ((5U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_X)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__br_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_X)))) {
        vlSymsp->__Vcoverage[258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_X 
            = ((3U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_X)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__alu_fn_X) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_fn_X)))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__alu_fn_X = ((0xeU 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__alu_fn_X)) 
                                                 | (1U 
                                                    & (IData)(vlSelf->top__DOT__alu_fn_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__alu_fn_X) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_fn_X)))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__alu_fn_X = ((0xdU 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__alu_fn_X)) 
                                                 | (2U 
                                                    & (IData)(vlSelf->top__DOT__alu_fn_X)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__alu_fn_X) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_fn_X)))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__alu_fn_X = ((0xbU 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__alu_fn_X)) 
                                                 | (4U 
                                                    & (IData)(vlSelf->top__DOT__alu_fn_X)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__alu_fn_X) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_fn_X)))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__alu_fn_X = ((7U 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__alu_fn_X)) 
                                                 | (8U 
                                                    & (IData)(vlSelf->top__DOT__alu_fn_X)));
    }
    vlSelf->top__DOT__DUT__DOT__wb_result_sel_D = (
                                                   (~ 
                                                    ((((((((0x13U 
                                                            == vlSelf->top__DOT__inst_D) 
                                                           | (0x33U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->top__DOT__inst_D))) 
                                                          | (0x40000033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->top__DOT__inst_D))) 
                                                         | (0x2000033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->top__DOT__inst_D))) 
                                                        | (0x7033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->top__DOT__inst_D))) 
                                                       | (0x6033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__inst_D))) 
                                                      | (0x4033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__inst_D))) 
                                                     | (0x2033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__inst_D)))) 
                                                   & ((~ 
                                                       ((((((((0x3033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->top__DOT__inst_D)) 
                                                              | (0x40005033U 
                                                                 == 
                                                                 (0xfe00707fU 
                                                                  & vlSelf->top__DOT__inst_D))) 
                                                             | (0x5033U 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlSelf->top__DOT__inst_D))) 
                                                            | (0x1033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->top__DOT__inst_D))) 
                                                           | (0x13U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__inst_D))) 
                                                          | (0x7013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__inst_D))) 
                                                         | (0x6013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__inst_D))) 
                                                        | (0x4013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__inst_D)))) 
                                                      & ((~ 
                                                          ((((((((0x2013U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->top__DOT__inst_D)) 
                                                                 | (0x3013U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->top__DOT__inst_D))) 
                                                                | (0x40005013U 
                                                                   == 
                                                                   (0xfe00707fU 
                                                                    & vlSelf->top__DOT__inst_D))) 
                                                               | (0x5013U 
                                                                  == 
                                                                  (0xfe00707fU 
                                                                   & vlSelf->top__DOT__inst_D))) 
                                                              | (0x1013U 
                                                                 == 
                                                                 (0xfe00707fU 
                                                                  & vlSelf->top__DOT__inst_D))) 
                                                             | (0x37U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->top__DOT__inst_D))) 
                                                            | (0x17U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->top__DOT__inst_D))) 
                                                           | (0x6fU 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->top__DOT__inst_D)))) 
                                                         & (((((((((0x67U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->top__DOT__inst_D)) 
                                                                   | (0x1063U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->top__DOT__inst_D))) 
                                                                  | (0x63U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelf->top__DOT__inst_D))) 
                                                                 | (0x4063U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->top__DOT__inst_D))) 
                                                                | (0x6063U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->top__DOT__inst_D))) 
                                                               | (0x5063U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->top__DOT__inst_D))) 
                                                              | (0x7063U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->top__DOT__inst_D))) 
                                                             | (0x2003U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__inst_D))) 
                                                            & ((0x67U 
                                                                != 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__inst_D)) 
                                                               & ((0x1063U 
                                                                   != 
                                                                   (0x707fU 
                                                                    & vlSelf->top__DOT__inst_D)) 
                                                                  & ((0x63U 
                                                                      != 
                                                                      (0x707fU 
                                                                       & vlSelf->top__DOT__inst_D)) 
                                                                     & ((0x4063U 
                                                                         != 
                                                                         (0x707fU 
                                                                          & vlSelf->top__DOT__inst_D)) 
                                                                        & ((0x6063U 
                                                                            != 
                                                                            (0x707fU 
                                                                             & vlSelf->top__DOT__inst_D)) 
                                                                           & ((0x5063U 
                                                                               != 
                                                                               (0x707fU 
                                                                                & vlSelf->top__DOT__inst_D)) 
                                                                              & (0x7063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->top__DOT__inst_D))))))))))));
    vlSelf->top__DOT__DUT__DOT__inst_val_D = ((((((
                                                   (((0x13U 
                                                      == vlSelf->top__DOT__inst_D) 
                                                     | (0x33U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__inst_D))) 
                                                    | (0x40000033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->top__DOT__inst_D))) 
                                                   | (0x2000033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->top__DOT__inst_D))) 
                                                  | (0x7033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->top__DOT__inst_D))) 
                                                 | (0x6033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->top__DOT__inst_D))) 
                                                | (0x4033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->top__DOT__inst_D))) 
                                               | (0x2033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->top__DOT__inst_D))) 
                                              | (((((((((0x3033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__inst_D)) 
                                                        | (0x40005033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->top__DOT__inst_D))) 
                                                       | (0x5033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__inst_D))) 
                                                      | (0x1033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__inst_D))) 
                                                     | (0x13U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__inst_D))) 
                                                    | (0x7013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__inst_D))) 
                                                   | (0x6013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__inst_D))) 
                                                  | (0x4013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__inst_D))) 
                                                 | (((((((((0x2013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__inst_D)) 
                                                           | (0x3013U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__inst_D))) 
                                                          | (0x40005013U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->top__DOT__inst_D))) 
                                                         | (0x5013U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->top__DOT__inst_D))) 
                                                        | (0x1013U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->top__DOT__inst_D))) 
                                                       | (0x37U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->top__DOT__inst_D))) 
                                                      | (0x17U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->top__DOT__inst_D))) 
                                                     | (0x6fU 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->top__DOT__inst_D))) 
                                                    | (((((((((0x67U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top__DOT__inst_D)) 
                                                              | (0x1063U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->top__DOT__inst_D))) 
                                                             | (0x63U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__inst_D))) 
                                                            | (0x4063U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top__DOT__inst_D))) 
                                                           | (0x6063U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__inst_D))) 
                                                          | (0x5063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__inst_D))) 
                                                         | (0x7063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__inst_D))) 
                                                        | (0x2003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__inst_D))) 
                                                       | ((0x2023U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__inst_D)) 
                                                          | ((0x2073U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__inst_D)) 
                                                             | (0x1073U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__inst_D))))))));
    if ((1U & ((IData)(vlSelf->top__DOT__rf_waddr_W) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rf_waddr_W = (
                                                   (0x1eU 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->top__DOT__rf_waddr_W)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__rf_waddr_W) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rf_waddr_W = (
                                                   (0x1dU 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)) 
                                                   | (2U 
                                                      & (IData)(vlSelf->top__DOT__rf_waddr_W)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__rf_waddr_W) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rf_waddr_W = (
                                                   (0x1bU 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)) 
                                                   | (4U 
                                                      & (IData)(vlSelf->top__DOT__rf_waddr_W)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__rf_waddr_W) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rf_waddr_W = (
                                                   (0x17U 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)) 
                                                   | (8U 
                                                      & (IData)(vlSelf->top__DOT__rf_waddr_W)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__rf_waddr_W) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rf_waddr_W = (
                                                   (0xfU 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)) 
                                                   | (0x10U 
                                                      & (IData)(vlSelf->top__DOT__rf_waddr_W)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M)));
    }
    vlSelf->top__DOT__stats_en_wen_W = ((IData)(vlSelf->top__DOT__DUT__DOT__stats_en_wen_pending_W) 
                                        & (IData)(vlSelf->top__DOT__DUT__DOT__val_W));
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x7eU & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x7dU & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x7bU & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x77U & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x6fU & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x5fU & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x3fU & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7)));
    }
    vlSelf->top__DOT__DUT__DOT__mul_D = (((((((((0x13U 
                                                 == vlSelf->top__DOT__inst_D) 
                                                | (0x33U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->top__DOT__inst_D))) 
                                               | (0x40000033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->top__DOT__inst_D))) 
                                              | (0x2000033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->top__DOT__inst_D))) 
                                             | (0x7033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->top__DOT__inst_D))) 
                                            | (0x6033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->top__DOT__inst_D))) 
                                           | (0x4033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->top__DOT__inst_D))) 
                                          | (0x2033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->top__DOT__inst_D))) 
                                         & ((0x13U 
                                             != vlSelf->top__DOT__inst_D) 
                                            & ((0x33U 
                                                != 
                                                (0xfe00707fU 
                                                 & vlSelf->top__DOT__inst_D)) 
                                               & ((0x40000033U 
                                                   != 
                                                   (0xfe00707fU 
                                                    & vlSelf->top__DOT__inst_D)) 
                                                  & (0x2000033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->top__DOT__inst_D))))));
    vlSelf->top__DOT__DUT__DOT__csrw_D = ((~ ((((((
                                                   ((0x13U 
                                                     == vlSelf->top__DOT__inst_D) 
                                                    | (0x33U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->top__DOT__inst_D))) 
                                                   | (0x40000033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->top__DOT__inst_D))) 
                                                  | (0x2000033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->top__DOT__inst_D))) 
                                                 | (0x7033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->top__DOT__inst_D))) 
                                                | (0x6033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->top__DOT__inst_D))) 
                                               | (0x4033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->top__DOT__inst_D))) 
                                              | (0x2033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->top__DOT__inst_D)))) 
                                          & ((~ (((
                                                   (((((0x3033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__inst_D)) 
                                                       | (0x40005033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__inst_D))) 
                                                      | (0x5033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__inst_D))) 
                                                     | (0x1033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__inst_D))) 
                                                    | (0x13U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__inst_D))) 
                                                   | (0x7013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__inst_D))) 
                                                  | (0x6013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__inst_D))) 
                                                 | (0x4013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__inst_D)))) 
                                             & ((~ 
                                                 ((((((((0x2013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__inst_D)) 
                                                        | (0x3013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__inst_D))) 
                                                       | (0x40005013U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__inst_D))) 
                                                      | (0x5013U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__inst_D))) 
                                                     | (0x1013U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__inst_D))) 
                                                    | (0x37U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->top__DOT__inst_D))) 
                                                   | (0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->top__DOT__inst_D))) 
                                                  | (0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->top__DOT__inst_D)))) 
                                                & ((~ 
                                                    ((((((((0x67U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__inst_D)) 
                                                           | (0x1063U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__inst_D))) 
                                                          | (0x63U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__inst_D))) 
                                                         | (0x4063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__inst_D))) 
                                                        | (0x6063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__inst_D))) 
                                                       | (0x5063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__inst_D))) 
                                                      | (0x7063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__inst_D))) 
                                                     | (0x2003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__inst_D)))) 
                                                   & ((0x2023U 
                                                       != 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__inst_D)) 
                                                      & ((0x2073U 
                                                          != 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__inst_D)) 
                                                         & (0x1073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__inst_D))))))));
    if ((1U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffffffeU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (1U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((2U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffffffdU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (2U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((4U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffffffbU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (4U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((8U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffffff7U 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (8U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x10U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffffffefU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x10U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x20U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffffffdfU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x20U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x40U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffffffbfU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x40U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x80U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffffff7fU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x80U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x100U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffffeffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x100U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x200U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffffdffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x200U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x400U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffffbffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x400U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x800U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffff7ffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x800U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffffefffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x1000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffffdfffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x2000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffffbfffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x4000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffff7fffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x8000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffeffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x10000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffdffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x20000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffbffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x40000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfff7ffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x80000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffefffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x100000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffdfffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x200000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffbfffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x400000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xff7fffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x800000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfeffffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x1000000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfdffffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x2000000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfbffffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x4000000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xf7ffffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x8000000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xefffffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x10000000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xdfffffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x20000000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xbfffffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x40000000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if (((vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0x7fffffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x80000000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__inst_X ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (1U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__inst_X ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (2U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__inst_X ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (4U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__inst_X ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (8U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if (((vlSelf->top__DOT__DUT__DOT__inst_X ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__inst_M ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (1U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__inst_M ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (2U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__inst_M ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (4U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__inst_M ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (8U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if (((vlSelf->top__DOT__DUT__DOT__inst_M ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__inst_W ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (1U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__inst_W ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (2U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__inst_W ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (4U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__inst_W ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (8U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if (((vlSelf->top__DOT__DUT__DOT__inst_W ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    vlSelf->top__DOT__DUT__DOT__ostall_F = ((~ (IData)(vlSelf->top__DOT__imem_respstream_val)) 
                                            & (IData)(vlSelf->top__DOT__DUT__DOT__val_F));
    vlSelf->top__DOT__DUT__DOT__csrr_D = ((~ ((((((
                                                   ((0x13U 
                                                     == vlSelf->top__DOT__inst_D) 
                                                    | (0x33U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->top__DOT__inst_D))) 
                                                   | (0x40000033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->top__DOT__inst_D))) 
                                                  | (0x2000033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->top__DOT__inst_D))) 
                                                 | (0x7033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->top__DOT__inst_D))) 
                                                | (0x6033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->top__DOT__inst_D))) 
                                               | (0x4033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->top__DOT__inst_D))) 
                                              | (0x2033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->top__DOT__inst_D)))) 
                                          & ((~ (((
                                                   (((((0x3033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__inst_D)) 
                                                       | (0x40005033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__inst_D))) 
                                                      | (0x5033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__inst_D))) 
                                                     | (0x1033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__inst_D))) 
                                                    | (0x13U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__inst_D))) 
                                                   | (0x7013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__inst_D))) 
                                                  | (0x6013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__inst_D))) 
                                                 | (0x4013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__inst_D)))) 
                                             & ((~ 
                                                 ((((((((0x2013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__inst_D)) 
                                                        | (0x3013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__inst_D))) 
                                                       | (0x40005013U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__inst_D))) 
                                                      | (0x5013U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__inst_D))) 
                                                     | (0x1013U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__inst_D))) 
                                                    | (0x37U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->top__DOT__inst_D))) 
                                                   | (0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->top__DOT__inst_D))) 
                                                  | (0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->top__DOT__inst_D)))) 
                                                & ((~ 
                                                    ((((((((0x67U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__inst_D)) 
                                                           | (0x1063U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__inst_D))) 
                                                          | (0x63U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__inst_D))) 
                                                         | (0x4063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__inst_D))) 
                                                        | (0x6063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__inst_D))) 
                                                       | (0x5063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__inst_D))) 
                                                      | (0x7063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__inst_D))) 
                                                     | (0x2003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__inst_D)))) 
                                                   & ((0x2023U 
                                                       != 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__inst_D)) 
                                                      & (0x2073U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__inst_D)))))));
    vlSelf->top__DOT__DUT__DOT__ostall_imul_resp_val_X 
        = ((~ (IData)(vlSelf->top__DOT__imul_resp_val_X)) 
           & (2U == (IData)(vlSelf->top__DOT__ex_result_sel_X)));
    vlSelf->top__DOT__DUT__DOT__ostall_dmem_reqstream_X 
        = ((~ (IData)(vlSelf->top__DOT__dmem_reqstream_rdy)) 
           & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X)));
    vlSelf->top__DOT__DUT__DOT__ostall_M = ((IData)(vlSelf->top__DOT__DUT__DOT__val_M) 
                                            & ((~ (IData)(vlSelf->top__DOT__dmem_respstream_val)) 
                                               & (0U 
                                                  != (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_M))));
    vlSelf->top__DOT__DUT__DOT__ostall_W = ((IData)(vlSelf->top__DOT__DUT__DOT__val_W) 
                                            & ((~ (IData)(vlSelf->top__DOT__proc2mngr_rdy)) 
                                               & (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_val_W)));
    vlSelf->top__DOT__rf_wen_W = ((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_pending_W) 
                                  & (IData)(vlSelf->top__DOT__DUT__DOT__val_W));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__wb_result_sel_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_sel_D))) {
        vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_sel_D 
            = vlSelf->top__DOT__DUT__DOT__wb_result_sel_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__inst_val_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_val_D))) {
        vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_val_D 
            = vlSelf->top__DOT__DUT__DOT__inst_val_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_D))) {
        vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_D 
            = vlSelf->top__DOT__DUT__DOT__rf_wen_D;
    }
    if (((IData)(vlSelf->top__DOT__op1_sel_D) ^ (IData)(vlSelf->top__DOT____Vtogcov__op1_sel_D))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__op1_sel_D = vlSelf->top__DOT__op1_sel_D;
    }
    if (((IData)(vlSelf->top__DOT__stats_en_wen_W) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__stats_en_wen_W))) {
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__stats_en_wen_W 
            = vlSelf->top__DOT__stats_en_wen_W;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_D)))) {
        vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_D 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_D)))) {
        vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_D 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_D)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_D)))) {
        vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_D 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_D)))) {
        vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_D 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__op2_sel_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__op2_sel_D)))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__op2_sel_D = ((2U 
                                                   & (IData)(vlSelf->top__DOT____Vtogcov__op2_sel_D)) 
                                                  | (1U 
                                                     & (IData)(vlSelf->top__DOT__op2_sel_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__op2_sel_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__op2_sel_D)))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__op2_sel_D = ((1U 
                                                   & (IData)(vlSelf->top__DOT____Vtogcov__op2_sel_D)) 
                                                  | (2U 
                                                     & (IData)(vlSelf->top__DOT__op2_sel_D)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__mul_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_D))) {
        vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_D 
            = vlSelf->top__DOT__DUT__DOT__mul_D;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__br_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D)))) {
        vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D 
            = ((6U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__br_type_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__br_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D)))) {
        vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D 
            = ((5U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__br_type_D)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__br_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D)))) {
        vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D 
            = ((3U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__br_type_D)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imm_type_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__imm_type_D)))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm_type_D = (
                                                   (6U 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__imm_type_D)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->top__DOT__imm_type_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__imm_type_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__imm_type_D)))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm_type_D = (
                                                   (5U 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__imm_type_D)) 
                                                   | (2U 
                                                      & (IData)(vlSelf->top__DOT__imm_type_D)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__imm_type_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__imm_type_D)))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm_type_D = (
                                                   (3U 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__imm_type_D)) 
                                                   | (4U 
                                                      & (IData)(vlSelf->top__DOT__imm_type_D)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem_action) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__mem_action)))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mem_action = (
                                                   (6U 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__mem_action)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->top__DOT__mem_action)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem_action) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__mem_action)))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mem_action = (
                                                   (5U 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__mem_action)) 
                                                   | (2U 
                                                      & (IData)(vlSelf->top__DOT__mem_action)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem_action) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__mem_action)))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mem_action = (
                                                   (3U 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__mem_action)) 
                                                   | (4U 
                                                      & (IData)(vlSelf->top__DOT__mem_action)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D)))) {
        vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D)))) {
        vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_D)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D)))) {
        vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_D)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D)))) {
        vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_D)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_X)))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_X 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_X)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_X)))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_X 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_X)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_X)));
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__csrw_D) 
                  & (0x7c1U == (vlSelf->top__DOT__inst_D 
                                >> 0x14U)))))) {
        vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__csrw_D) 
                  & (0x7c0U == (vlSelf->top__DOT__inst_D 
                                >> 0x14U)))))) {
        vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__csrw_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__csrw_D))) {
        vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrw_D 
            = vlSelf->top__DOT__DUT__DOT__csrw_D;
    }
    vlSelf->top__DOT__DUT__DOT__stats_en_wen_D = 0U;
    if (((IData)(vlSelf->top__DOT__DUT__DOT__csrw_D) 
         & (0x7c1U == (vlSelf->top__DOT__inst_D >> 0x14U)))) {
        vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__stats_en_wen_D = 1U;
    }
    vlSelf->top__DOT__DUT__DOT__proc2mngr_val_D = 0U;
    if (((IData)(vlSelf->top__DOT__DUT__DOT__csrw_D) 
         & (0x7c0U == (vlSelf->top__DOT__inst_D >> 0x14U)))) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_val_D = 1U;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_F))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_F 
            = vlSelf->top__DOT__DUT__DOT__ostall_F;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__pc_redirect_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_redirect_X))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_redirect_X 
            = vlSelf->top__DOT__DUT__DOT__pc_redirect_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
         & (1U == (IData)(vlSelf->top__DOT__DUT__DOT__j_type_D)))) {
        vlSymsp->__Vcoverage[200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__pc_sel_D = 2U;
    } else {
        vlSelf->top__DOT__DUT__DOT__pc_sel_D = 3U;
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                  & (1U == (IData)(vlSelf->top__DOT__DUT__DOT__j_type_D)))))) {
        vlSymsp->__Vcoverage[201].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__j_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__j_type_D)))) {
        vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__j_type_D 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__j_type_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__j_type_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__j_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__j_type_D)))) {
        vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__j_type_D 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__j_type_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__j_type_D)));
    }
    vlSelf->top__DOT__DUT__DOT__pc_redirect_D = ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                                                 & (1U 
                                                    == (IData)(vlSelf->top__DOT__DUT__DOT__j_type_D)));
    if (vlSelf->top__DOT__DUT__DOT__pc_redirect_X) {
        vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__pc_sel_F = vlSelf->top__DOT__DUT__DOT__pc_sel_X;
    } else {
        vlSelf->top__DOT__pc_sel_F = ((IData)(vlSelf->top__DOT__DUT__DOT__pc_redirect_D)
                                       ? (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_D)
                                       : 3U);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__csrr_D) 
                  & (0xfc0U == (vlSelf->top__DOT__inst_D 
                                >> 0x14U)))))) {
        vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__csrr_D) 
                  & (0xfc1U == (vlSelf->top__DOT__inst_D 
                                >> 0x14U)))))) {
        vlSymsp->__Vcoverage[196].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__csrr_D) 
                  & (0xf14U == (vlSelf->top__DOT__inst_D 
                                >> 0x14U)))))) {
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__csrr_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_D))) {
        vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_D 
            = vlSelf->top__DOT__DUT__DOT__csrr_D;
    }
    vlSelf->top__DOT__csrr_sel_D = 0U;
    if (((IData)(vlSelf->top__DOT__DUT__DOT__csrr_D) 
         & (0xfc1U == (vlSelf->top__DOT__inst_D >> 0x14U)))) {
        vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__csrr_sel_D = 1U;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__csrr_D) 
         & (0xf14U == (vlSelf->top__DOT__inst_D >> 0x14U)))) {
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__csrr_sel_D = 2U;
    }
    vlSelf->top__DOT__DUT__DOT__mngr2proc_rdy_D = 0U;
    if (((IData)(vlSelf->top__DOT__DUT__DOT__csrr_D) 
         & (0xfc0U == (vlSelf->top__DOT__inst_D >> 0x14U)))) {
        vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mngr2proc_rdy_D = 1U;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_imul_resp_val_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_imul_resp_val_X))) {
        vlSymsp->__Vcoverage[274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_imul_resp_val_X 
            = vlSelf->top__DOT__DUT__DOT__ostall_imul_resp_val_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_dmem_reqstream_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_dmem_reqstream_X))) {
        vlSymsp->__Vcoverage[275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_dmem_reqstream_X 
            = vlSelf->top__DOT__DUT__DOT__ostall_dmem_reqstream_X;
    }
    vlSelf->top__DOT__DUT__DOT__ostall_X = ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                            & ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_dmem_reqstream_X) 
                                               | (IData)(vlSelf->top__DOT__DUT__DOT__ostall_imul_resp_val_X)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_M))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_M 
            = vlSelf->top__DOT__DUT__DOT__ostall_M;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_W))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_W 
            = vlSelf->top__DOT__DUT__DOT__ostall_W;
    }
    vlSelf->top__DOT__DUT__DOT__stall_W = ((IData)(vlSelf->top__DOT__DUT__DOT__val_W) 
                                           & (IData)(vlSelf->top__DOT__DUT__DOT__ostall_W));
    top__DOT__DUT__DOT____VdfgTmp_hb97078a9__0 = ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_M) 
                                                  | (IData)(vlSelf->top__DOT__DUT__DOT__ostall_W));
    if (((IData)(vlSelf->top__DOT__rf_wen_W) ^ (IData)(vlSelf->top__DOT____Vtogcov__rf_wen_W))) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rf_wen_W = vlSelf->top__DOT__rf_wen_W;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__rs2_en_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rs2_en_D))) {
        vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rs2_en_D 
            = vlSelf->top__DOT__DUT__DOT__rs2_en_D;
    }
    vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs2_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__rs2_en_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
              & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_X) 
                 & (((0x1fU & (vlSelf->top__DOT__inst_D 
                               >> 0x14U)) == (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X)) 
                    & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X))))));
    vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs2_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__rs2_en_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__val_M) 
              & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_M) 
                 & (((0x1fU & (vlSelf->top__DOT__inst_D 
                               >> 0x14U)) == (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M)) 
                    & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M))))));
    vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs2_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__rs2_en_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__val_W) 
              & ((IData)(vlSelf->top__DOT__rf_wen_W) 
                 & (((0x1fU & (vlSelf->top__DOT__inst_D 
                               >> 0x14U)) == (IData)(vlSelf->top__DOT__rf_waddr_W)) 
                    & (0U != (IData)(vlSelf->top__DOT__rf_waddr_W))))));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__rs1_en_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rs1_en_D))) {
        vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rs1_en_D 
            = vlSelf->top__DOT__DUT__DOT__rs1_en_D;
    }
    vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs1_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__rs1_en_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
              & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_X) 
                 & (((0x1fU & (vlSelf->top__DOT__inst_D 
                               >> 0xfU)) == (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X)) 
                    & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X))))));
    vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs1_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__rs1_en_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__val_M) 
              & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_M) 
                 & (((0x1fU & (vlSelf->top__DOT__inst_D 
                               >> 0xfU)) == (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M)) 
                    & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M))))));
    vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs1_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__rs1_en_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__val_W) 
              & ((IData)(vlSelf->top__DOT__rf_wen_W) 
                 & (((0x1fU & (vlSelf->top__DOT__inst_D 
                               >> 0xfU)) == (IData)(vlSelf->top__DOT__rf_waddr_W)) 
                    & (0U != (IData)(vlSelf->top__DOT__rf_waddr_W))))));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stats_en_wen_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_wen_D))) {
        vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_wen_D 
            = vlSelf->top__DOT__DUT__DOT__stats_en_wen_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_val_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_val_D))) {
        vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_val_D 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_val_D;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_D)))) {
        vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_D 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_D)))) {
        vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_D 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_D)));
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__pc_redirect_X)))) {
        if (vlSelf->top__DOT__DUT__DOT__pc_redirect_D) {
            vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__pc_redirect_D)))) {
            vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__pc_redirect_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_redirect_D))) {
        vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_redirect_D 
            = vlSelf->top__DOT__DUT__DOT__pc_redirect_D;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__csrr_sel_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__csrr_sel_D)))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__csrr_sel_D = (
                                                   (2U 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__csrr_sel_D)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->top__DOT__csrr_sel_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__csrr_sel_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__csrr_sel_D)))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__csrr_sel_D = (
                                                   (1U 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__csrr_sel_D)) 
                                                   | (2U 
                                                      & (IData)(vlSelf->top__DOT__csrr_sel_D)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__mngr2proc_rdy_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__mngr2proc_rdy_D))) {
        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mngr2proc_rdy_D 
            = vlSelf->top__DOT__DUT__DOT__mngr2proc_rdy_D;
    }
    vlSelf->top__DOT__DUT__DOT__ostall_mngr2proc_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
           & ((~ (IData)(vlSelf->top__DOT__mngr2proc_val)) 
              & (IData)(vlSelf->top__DOT__DUT__DOT__mngr2proc_rdy_D)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_X))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_X 
            = vlSelf->top__DOT__DUT__DOT__ostall_X;
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__stall_W) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__reg_en_W)))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reg_en_W = (1U 
                                                 & (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_W)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stall_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_W))) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_W 
            = vlSelf->top__DOT__DUT__DOT__stall_W;
    }
    vlSelf->top__DOT__commit_inst = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_W)) 
                                     & (IData)(vlSelf->top__DOT__DUT__DOT__val_W));
    vlSelf->top__DOT__DUT__DOT__stall_M = ((IData)(vlSelf->top__DOT__DUT__DOT__val_M) 
                                           & (IData)(top__DOT__DUT__DOT____VdfgTmp_hb97078a9__0));
    vlSelf->top__DOT__DUT__DOT____VdfgTmp_h699142ba__0 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_X) 
           | (IData)(top__DOT__DUT__DOT____VdfgTmp_hb97078a9__0));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs2_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_X_rs2_D))) {
        vlSymsp->__Vcoverage[207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_X_rs2_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs2_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs2_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_M_rs2_D))) {
        vlSymsp->__Vcoverage[208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_M_rs2_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs2_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs2_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_W_rs2_D))) {
        vlSymsp->__Vcoverage[209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_W_rs2_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs2_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs1_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_X_rs1_D))) {
        vlSymsp->__Vcoverage[204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_X_rs1_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs1_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs1_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_M_rs1_D))) {
        vlSymsp->__Vcoverage[205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_M_rs1_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs1_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs1_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_W_rs1_D))) {
        vlSymsp->__Vcoverage[206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_W_rs1_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs1_D;
    }
    vlSelf->top__DOT__DUT__DOT__ostall_hazard_D = (1U 
                                                   & ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs1_D) 
                                                      | ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs1_D) 
                                                         | ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs1_D) 
                                                            | ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs2_D) 
                                                               | ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs2_D) 
                                                                  | ((~ (IData)(vlSelf->top__DOT__imul_req_rdy_D)) 
                                                                     | (IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs2_D))))))));
    if ((1U & ((IData)(vlSelf->top__DOT__pc_sel_F) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__pc_sel_F)))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc_sel_F = ((2U 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__pc_sel_F)) 
                                                 | (1U 
                                                    & (IData)(vlSelf->top__DOT__pc_sel_F)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__pc_sel_F) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__pc_sel_F)))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc_sel_F = ((1U 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__pc_sel_F)) 
                                                 | (2U 
                                                    & (IData)(vlSelf->top__DOT__pc_sel_F)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_mngr2proc_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_mngr2proc_D))) {
        vlSymsp->__Vcoverage[203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_mngr2proc_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_mngr2proc_D;
    }
    if (((IData)(vlSelf->top__DOT__commit_inst) ^ (IData)(vlSelf->top__DOT____Vtogcov__commit_inst))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__commit_inst = vlSelf->top__DOT__commit_inst;
    }
    vlSelf->top__DOT__proc2mngr_val = ((IData)(vlSelf->top__DOT__commit_inst) 
                                       & (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_val_W));
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__stall_M) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__reg_en_M)))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reg_en_M = (1U 
                                                 & (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_M)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stall_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_M))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_M 
            = vlSelf->top__DOT__DUT__DOT__stall_M;
    }
    vlSelf->top__DOT__DUT__DOT__next_val_M = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_M)) 
                                              & (IData)(vlSelf->top__DOT__DUT__DOT__val_M));
    vlSelf->top__DOT__DUT__DOT__stall_X = ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                           & (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h699142ba__0));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_hazard_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_hazard_D))) {
        vlSymsp->__Vcoverage[211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_hazard_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_hazard_D;
    }
    vlSelf->top__DOT__DUT__DOT__ostall_D = ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                                            & ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_mngr2proc_D) 
                                               | (IData)(vlSelf->top__DOT__DUT__DOT__ostall_hazard_D)));
    if (((IData)(vlSelf->top__DOT__proc2mngr_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__proc2mngr_val))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_val 
            = vlSelf->top__DOT__proc2mngr_val;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__next_val_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__next_val_M))) {
        vlSymsp->__Vcoverage[327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__next_val_M 
            = vlSelf->top__DOT__DUT__DOT__next_val_M;
    }
    vlSelf->top__DOT__dmem_respstream_rdy = ((IData)(vlSelf->top__DOT__DUT__DOT__next_val_M) 
                                             & (0U 
                                                != (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_M)));
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__stall_X) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__reg_en_X)))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reg_en_X = (1U 
                                                 & (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_X)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stall_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_X))) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_X 
            = vlSelf->top__DOT__DUT__DOT__stall_X;
    }
    vlSelf->top__DOT__DUT__DOT__next_val_X = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_X)) 
                                              & (IData)(vlSelf->top__DOT__DUT__DOT__val_X));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_D))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_D;
    }
    top__DOT__DUT__DOT____VdfgTmp_h8245d87c__0 = ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_D) 
                                                  | (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h699142ba__0));
    if (((IData)(vlSelf->top__DOT__dmem_respstream_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__dmem_respstream_rdy))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_rdy 
            = vlSelf->top__DOT__dmem_respstream_rdy;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__next_val_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__next_val_X))) {
        vlSymsp->__Vcoverage[280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__next_val_X 
            = vlSelf->top__DOT__DUT__DOT__next_val_X;
    }
    vlSelf->top__DOT__dmem_reqstream_val = ((IData)(vlSelf->top__DOT__DUT__DOT__next_val_X) 
                                            & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X)));
    vlSelf->top__DOT__imul_resp_rdy_X = ((IData)(vlSelf->top__DOT__DUT__DOT__next_val_X) 
                                         & (2U == (IData)(vlSelf->top__DOT__ex_result_sel_X)));
    vlSelf->top__DOT__DUT__DOT__osquash_X = ((IData)(vlSelf->top__DOT__DUT__DOT__next_val_X) 
                                             & (IData)(vlSelf->top__DOT__DUT__DOT__pc_redirect_X));
    vlSelf->top__DOT__DUT__DOT__stall_F = ((IData)(vlSelf->top__DOT__DUT__DOT__val_F) 
                                           & ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_F) 
                                              | (IData)(top__DOT__DUT__DOT____VdfgTmp_h8245d87c__0)));
    vlSelf->top__DOT__DUT__DOT__stall_D = ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                                           & (IData)(top__DOT__DUT__DOT____VdfgTmp_h8245d87c__0));
    if (((IData)(vlSelf->top__DOT__dmem_reqstream_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__dmem_reqstream_val))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_val 
            = vlSelf->top__DOT__dmem_reqstream_val;
    }
    if (((IData)(vlSelf->top__DOT__imul_resp_rdy_X) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imul_resp_rdy_X))) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imul_resp_rdy_X 
            = vlSelf->top__DOT__imul_resp_rdy_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__osquash_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__osquash_X))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__osquash_X 
            = vlSelf->top__DOT__DUT__DOT__osquash_X;
    }
    vlSelf->top__DOT__DUT__DOT__squash_D = ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                                            & (IData)(vlSelf->top__DOT__DUT__DOT__osquash_X));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stall_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_F))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_F 
            = vlSelf->top__DOT__DUT__DOT__stall_F;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stall_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_D))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_D 
            = vlSelf->top__DOT__DUT__DOT__stall_D;
    }
    top__DOT__DUT__DOT____VdfgTmp_hb2b31c42__0 = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_D)) 
                                                  & (IData)(vlSelf->top__DOT__DUT__DOT__val_D));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__squash_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__squash_D))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__squash_D 
            = vlSelf->top__DOT__DUT__DOT__squash_D;
    }
    vlSelf->top__DOT__reg_en_D = (1U & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_D)) 
                                        | (IData)(vlSelf->top__DOT__DUT__DOT__squash_D)));
    vlSelf->top__DOT__mngr2proc_rdy = ((IData)(top__DOT__DUT__DOT____VdfgTmp_hb2b31c42__0) 
                                       & (IData)(vlSelf->top__DOT__DUT__DOT__mngr2proc_rdy_D));
    vlSelf->top__DOT__DUT__DOT__next_val_D = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__squash_D)) 
                                              & (IData)(top__DOT__DUT__DOT____VdfgTmp_hb2b31c42__0));
    vlSelf->top__DOT__DUT__DOT__osquash_D = ((IData)(top__DOT__DUT__DOT____VdfgTmp_hb2b31c42__0) 
                                             & (IData)(vlSelf->top__DOT__DUT__DOT__pc_redirect_D));
    if (((IData)(vlSelf->top__DOT__reg_en_D) ^ (IData)(vlSelf->top__DOT____Vtogcov__reg_en_D))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reg_en_D = vlSelf->top__DOT__reg_en_D;
    }
    if (((IData)(vlSelf->top__DOT__mngr2proc_rdy) ^ (IData)(vlSelf->top__DOT____Vtogcov__mngr2proc_rdy))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_rdy 
            = vlSelf->top__DOT__mngr2proc_rdy;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__next_val_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__next_val_D))) {
        vlSymsp->__Vcoverage[212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__next_val_D 
            = vlSelf->top__DOT__DUT__DOT__next_val_D;
    }
    vlSelf->top__DOT__imul_req_val_D = ((IData)(vlSelf->top__DOT__DUT__DOT__next_val_D) 
                                        & (IData)(vlSelf->top__DOT__DUT__DOT__mul_D));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__osquash_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__osquash_D))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__osquash_D 
            = vlSelf->top__DOT__DUT__DOT__osquash_D;
    }
    vlSelf->top__DOT__imem_respstream_drop = ((IData)(vlSelf->top__DOT__DUT__DOT__val_F) 
                                              & ((IData)(vlSelf->top__DOT__DUT__DOT__osquash_D) 
                                                 | (IData)(vlSelf->top__DOT__DUT__DOT__osquash_X)));
    if (((IData)(vlSelf->top__DOT__imul_req_val_D) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imul_req_val_D))) {
        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imul_req_val_D 
            = vlSelf->top__DOT__imul_req_val_D;
    }
    if (((IData)(vlSelf->top__DOT__imem_respstream_drop) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_respstream_drop))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_drop 
            = vlSelf->top__DOT__imem_respstream_drop;
    }
    vlSelf->top__DOT__DUT__DOT__next_val_F = ((IData)(vlSelf->top__DOT__DUT__DOT__val_F) 
                                              & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_F)) 
                                                 & (~ (IData)(vlSelf->top__DOT__imem_respstream_drop))));
    vlSelf->top__DOT__imem_respstream_rdy = (1U & (
                                                   (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_F)) 
                                                   | (IData)(vlSelf->top__DOT__imem_respstream_drop)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__next_val_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__next_val_F))) {
        vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__next_val_F 
            = vlSelf->top__DOT__DUT__DOT__next_val_F;
    }
    if (((IData)(vlSelf->top__DOT__imem_respstream_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_respstream_rdy))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_rdy 
            = vlSelf->top__DOT__imem_respstream_rdy;
    }
    vlSelf->top__DOT__imem_reqstream_val = ((~ (IData)(vlSelf->top__DOT__reset)) 
                                            & (IData)(vlSelf->top__DOT__imem_respstream_rdy));
    if (((IData)(vlSelf->top__DOT__imem_reqstream_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_reqstream_val))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_val 
            = vlSelf->top__DOT__imem_reqstream_val;
    }
}

VL_ATTR_COLD void Vtop___024root___configure_coverage(Vtop___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "utb_ProcBaseCtrl.v", 16, 26, ".top", "v_toggle/top", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "utb_ProcBaseCtrl.v", 16, 43, ".top", "v_toggle/top", "linetrace", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "utb_ProcBaseCtrl.v", 19, 18, ".top", "v_toggle/top", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "utb_ProcBaseCtrl.v", 23, 18, ".top", "v_toggle/top", "imem_reqstream_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "utb_ProcBaseCtrl.v", 24, 18, ".top", "v_toggle/top", "imem_reqstream_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "utb_ProcBaseCtrl.v", 25, 18, ".top", "v_toggle/top", "imem_respstream_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "utb_ProcBaseCtrl.v", 26, 18, ".top", "v_toggle/top", "imem_respstream_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "utb_ProcBaseCtrl.v", 27, 18, ".top", "v_toggle/top", "imem_respstream_drop", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "utb_ProcBaseCtrl.v", 31, 18, ".top", "v_toggle/top", "dmem_reqstream_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "utb_ProcBaseCtrl.v", 32, 18, ".top", "v_toggle/top", "dmem_reqstream_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "utb_ProcBaseCtrl.v", 33, 18, ".top", "v_toggle/top", "dmem_respstream_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "utb_ProcBaseCtrl.v", 34, 18, ".top", "v_toggle/top", "dmem_respstream_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "utb_ProcBaseCtrl.v", 35, 18, ".top", "v_toggle/top", "mem_action[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "utb_ProcBaseCtrl.v", 35, 18, ".top", "v_toggle/top", "mem_action[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "utb_ProcBaseCtrl.v", 35, 18, ".top", "v_toggle/top", "mem_action[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "utb_ProcBaseCtrl.v", 39, 18, ".top", "v_toggle/top", "mngr2proc_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "utb_ProcBaseCtrl.v", 40, 18, ".top", "v_toggle/top", "mngr2proc_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "utb_ProcBaseCtrl.v", 41, 18, ".top", "v_toggle/top", "proc2mngr_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "utb_ProcBaseCtrl.v", 42, 18, ".top", "v_toggle/top", "proc2mngr_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "utb_ProcBaseCtrl.v", 46, 18, ".top", "v_toggle/top", "reg_en_F", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "utb_ProcBaseCtrl.v", 47, 18, ".top", "v_toggle/top", "pc_sel_F[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "utb_ProcBaseCtrl.v", 47, 18, ".top", "v_toggle/top", "pc_sel_F[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "utb_ProcBaseCtrl.v", 49, 18, ".top", "v_toggle/top", "reg_en_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "utb_ProcBaseCtrl.v", 50, 18, ".top", "v_toggle/top", "op1_sel_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "utb_ProcBaseCtrl.v", 51, 18, ".top", "v_toggle/top", "op2_sel_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "utb_ProcBaseCtrl.v", 51, 18, ".top", "v_toggle/top", "op2_sel_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "utb_ProcBaseCtrl.v", 52, 18, ".top", "v_toggle/top", "csrr_sel_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "utb_ProcBaseCtrl.v", 52, 18, ".top", "v_toggle/top", "csrr_sel_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "utb_ProcBaseCtrl.v", 53, 18, ".top", "v_toggle/top", "imm_type_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "utb_ProcBaseCtrl.v", 53, 18, ".top", "v_toggle/top", "imm_type_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "utb_ProcBaseCtrl.v", 53, 18, ".top", "v_toggle/top", "imm_type_D[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "utb_ProcBaseCtrl.v", 55, 18, ".top", "v_toggle/top", "reg_en_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "utb_ProcBaseCtrl.v", 56, 18, ".top", "v_toggle/top", "alu_fn_X[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "utb_ProcBaseCtrl.v", 56, 18, ".top", "v_toggle/top", "alu_fn_X[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "utb_ProcBaseCtrl.v", 56, 18, ".top", "v_toggle/top", "alu_fn_X[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "utb_ProcBaseCtrl.v", 56, 18, ".top", "v_toggle/top", "alu_fn_X[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "utb_ProcBaseCtrl.v", 57, 18, ".top", "v_toggle/top", "ex_result_sel_X[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "utb_ProcBaseCtrl.v", 57, 18, ".top", "v_toggle/top", "ex_result_sel_X[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "utb_ProcBaseCtrl.v", 59, 18, ".top", "v_toggle/top", "reg_en_M", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "utb_ProcBaseCtrl.v", 60, 18, ".top", "v_toggle/top", "wb_result_sel_M", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "utb_ProcBaseCtrl.v", 62, 18, ".top", "v_toggle/top", "reg_en_W", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "utb_ProcBaseCtrl.v", 63, 18, ".top", "v_toggle/top", "rf_waddr_W[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "utb_ProcBaseCtrl.v", 63, 18, ".top", "v_toggle/top", "rf_waddr_W[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "utb_ProcBaseCtrl.v", 63, 18, ".top", "v_toggle/top", "rf_waddr_W[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "utb_ProcBaseCtrl.v", 63, 18, ".top", "v_toggle/top", "rf_waddr_W[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "utb_ProcBaseCtrl.v", 63, 18, ".top", "v_toggle/top", "rf_waddr_W[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "utb_ProcBaseCtrl.v", 64, 18, ".top", "v_toggle/top", "rf_wen_W", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "utb_ProcBaseCtrl.v", 65, 18, ".top", "v_toggle/top", "stats_en_wen_W", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "utb_ProcBaseCtrl.v", 67, 18, ".top", "v_toggle/top", "imul_req_val_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "utb_ProcBaseCtrl.v", 68, 18, ".top", "v_toggle/top", "imul_resp_rdy_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "utb_ProcBaseCtrl.v", 73, 18, ".top", "v_toggle/top", "br_cond_eq_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "utb_ProcBaseCtrl.v", 74, 18, ".top", "v_toggle/top", "br_cond_lt_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "utb_ProcBaseCtrl.v", 75, 18, ".top", "v_toggle/top", "br_cond_ltu_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "utb_ProcBaseCtrl.v", 77, 18, ".top", "v_toggle/top", "imul_req_rdy_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "utb_ProcBaseCtrl.v", 78, 18, ".top", "v_toggle/top", "imul_resp_val_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "utb_ProcBaseCtrl.v", 81, 18, ".top", "v_toggle/top", "commit_inst", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "utb_ProcBaseCtrl.v", 90, 5, ".top", "v_line/top", "block", "90,96-100,103-104,107,109,112-117,120-122");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "utb_ProcBaseCtrl.v", 128, 11, ".top", "v_line/top", "block", "128-129");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "utb_ProcBaseCtrl.v", 126, 10, ".top", "v_line/top", "block", "126-128");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "ProcBaseCtrl.v", 14, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "ProcBaseCtrl.v", 15, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "ProcBaseCtrl.v", 19, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "imem_reqstream_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "ProcBaseCtrl.v", 20, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "imem_reqstream_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "ProcBaseCtrl.v", 21, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "imem_respstream_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "ProcBaseCtrl.v", 22, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "imem_respstream_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "ProcBaseCtrl.v", 23, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "imem_respstream_drop", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "ProcBaseCtrl.v", 27, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "dmem_reqstream_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "ProcBaseCtrl.v", 28, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "dmem_reqstream_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "ProcBaseCtrl.v", 29, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "dmem_respstream_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "ProcBaseCtrl.v", 30, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "dmem_respstream_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "ProcBaseCtrl.v", 31, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "mem_action[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "ProcBaseCtrl.v", 31, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "mem_action[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "ProcBaseCtrl.v", 31, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "mem_action[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "ProcBaseCtrl.v", 35, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "mngr2proc_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "ProcBaseCtrl.v", 36, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "mngr2proc_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "ProcBaseCtrl.v", 37, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "proc2mngr_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "ProcBaseCtrl.v", 38, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "proc2mngr_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "ProcBaseCtrl.v", 42, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "reg_en_F", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "ProcBaseCtrl.v", 43, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "pc_sel_F[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "ProcBaseCtrl.v", 43, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "pc_sel_F[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "ProcBaseCtrl.v", 45, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "reg_en_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "ProcBaseCtrl.v", 46, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "op1_sel_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "ProcBaseCtrl.v", 47, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "op2_sel_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "ProcBaseCtrl.v", 47, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "op2_sel_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "ProcBaseCtrl.v", 48, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "csrr_sel_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "ProcBaseCtrl.v", 48, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "csrr_sel_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "ProcBaseCtrl.v", 49, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "imm_type_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "ProcBaseCtrl.v", 49, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "imm_type_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "ProcBaseCtrl.v", 49, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "imm_type_D[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "ProcBaseCtrl.v", 51, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "reg_en_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "ProcBaseCtrl.v", 52, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "alu_fn_X[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "ProcBaseCtrl.v", 52, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "alu_fn_X[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "ProcBaseCtrl.v", 52, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "alu_fn_X[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "ProcBaseCtrl.v", 52, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "alu_fn_X[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "ProcBaseCtrl.v", 53, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "ex_result_sel_X[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "ProcBaseCtrl.v", 53, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "ex_result_sel_X[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "ProcBaseCtrl.v", 55, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "reg_en_M", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "ProcBaseCtrl.v", 56, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "wb_result_sel_M", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "ProcBaseCtrl.v", 58, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "reg_en_W", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "ProcBaseCtrl.v", 59, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_waddr_W[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "ProcBaseCtrl.v", 59, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_waddr_W[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "ProcBaseCtrl.v", 59, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_waddr_W[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "ProcBaseCtrl.v", 59, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_waddr_W[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "ProcBaseCtrl.v", 59, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_waddr_W[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "ProcBaseCtrl.v", 60, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_wen_W", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "ProcBaseCtrl.v", 61, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "stats_en_wen_W", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "ProcBaseCtrl.v", 63, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "imul_req_val_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "ProcBaseCtrl.v", 64, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "imul_resp_rdy_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "ProcBaseCtrl.v", 69, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "br_cond_eq_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "ProcBaseCtrl.v", 70, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "br_cond_lt_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "ProcBaseCtrl.v", 71, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "br_cond_ltu_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "ProcBaseCtrl.v", 73, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "imul_req_rdy_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "ProcBaseCtrl.v", 74, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "imul_resp_val_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "ProcBaseCtrl.v", 78, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "commit_inst", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "ProcBaseCtrl.v", 102, 9, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "val_F", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "ProcBaseCtrl.v", 103, 9, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "val_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "ProcBaseCtrl.v", 104, 9, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "val_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "ProcBaseCtrl.v", 105, 9, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "val_M", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "ProcBaseCtrl.v", 106, 9, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "val_W", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "ProcBaseCtrl.v", 118, 9, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "ostall_F", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "ProcBaseCtrl.v", 119, 9, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "ostall_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "ProcBaseCtrl.v", 120, 9, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "ostall_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "ProcBaseCtrl.v", 121, 9, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "ostall_M", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "ProcBaseCtrl.v", 122, 9, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "ostall_W", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "ProcBaseCtrl.v", 128, 9, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "stall_F", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "ProcBaseCtrl.v", 129, 9, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "stall_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "ProcBaseCtrl.v", 130, 9, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "stall_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "ProcBaseCtrl.v", 131, 9, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "stall_M", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "ProcBaseCtrl.v", 132, 9, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "stall_W", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "ProcBaseCtrl.v", 139, 9, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "osquash_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "ProcBaseCtrl.v", 140, 9, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "osquash_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "ProcBaseCtrl.v", 147, 9, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "squash_F", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "ProcBaseCtrl.v", 148, 9, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "squash_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "ProcBaseCtrl.v", 163, 10, ".top.DUT", "v_branch/lab2_proc_ProcBaseCtrl", "if", "163-164");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "ProcBaseCtrl.v", 163, 11, ".top.DUT", "v_branch/lab2_proc_ProcBaseCtrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "ProcBaseCtrl.v", 161, 5, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "elsif", "161-162");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "ProcBaseCtrl.v", 160, 3, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "block", "160");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "ProcBaseCtrl.v", 169, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "pc_redirect_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "ProcBaseCtrl.v", 170, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "pc_sel_X[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "ProcBaseCtrl.v", 170, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "pc_sel_X[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "ProcBaseCtrl.v", 171, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "pc_sel_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "ProcBaseCtrl.v", 171, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "pc_sel_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "ProcBaseCtrl.v", 178, 10, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "if", "178-179");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "ProcBaseCtrl.v", 178, 11, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "else", "180-181");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "ProcBaseCtrl.v", 176, 5, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "elsif", "176-177");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "ProcBaseCtrl.v", 175, 3, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "block", "175");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "ProcBaseCtrl.v", 208, 10, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "next_val_F", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "ProcBaseCtrl.v", 224, 10, ".top.DUT", "v_branch/lab2_proc_ProcBaseCtrl", "if", "224-225");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "ProcBaseCtrl.v", 224, 11, ".top.DUT", "v_branch/lab2_proc_ProcBaseCtrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "ProcBaseCtrl.v", 222, 5, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "elsif", "222-223");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "ProcBaseCtrl.v", 221, 3, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "block", "221");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "ProcBaseCtrl.v", 230, 17, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_rd_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "ProcBaseCtrl.v", 230, 17, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_rd_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "ProcBaseCtrl.v", 230, 17, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_rd_D[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "ProcBaseCtrl.v", 230, 17, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_rd_D[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "ProcBaseCtrl.v", 230, 17, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_rd_D[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "ProcBaseCtrl.v", 231, 17, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_rs1_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "ProcBaseCtrl.v", 231, 17, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_rs1_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "ProcBaseCtrl.v", 231, 17, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_rs1_D[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "ProcBaseCtrl.v", 231, 17, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_rs1_D[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "ProcBaseCtrl.v", 231, 17, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_rs1_D[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "ProcBaseCtrl.v", 232, 17, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_rs2_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "ProcBaseCtrl.v", 232, 17, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_rs2_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "ProcBaseCtrl.v", 232, 17, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_rs2_D[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "ProcBaseCtrl.v", 232, 17, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_rs2_D[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "ProcBaseCtrl.v", 232, 17, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_rs2_D[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "ProcBaseCtrl.v", 233, 18, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_csr_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "ProcBaseCtrl.v", 233, 18, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_csr_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "ProcBaseCtrl.v", 233, 18, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_csr_D[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "ProcBaseCtrl.v", 233, 18, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_csr_D[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "ProcBaseCtrl.v", 233, 18, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_csr_D[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "ProcBaseCtrl.v", 233, 18, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_csr_D[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "ProcBaseCtrl.v", 233, 18, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_csr_D[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "ProcBaseCtrl.v", 233, 18, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_csr_D[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "ProcBaseCtrl.v", 233, 18, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_csr_D[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "ProcBaseCtrl.v", 233, 18, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_csr_D[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "ProcBaseCtrl.v", 233, 18, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_csr_D[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "ProcBaseCtrl.v", 233, 18, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_csr_D[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "ProcBaseCtrl.v", 333, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_val_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "ProcBaseCtrl.v", 334, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "j_type_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "ProcBaseCtrl.v", 334, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "j_type_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "ProcBaseCtrl.v", 335, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "br_type_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "ProcBaseCtrl.v", 335, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "br_type_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "ProcBaseCtrl.v", 335, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "br_type_D[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "ProcBaseCtrl.v", 336, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rs1_en_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "ProcBaseCtrl.v", 337, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rs2_en_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "ProcBaseCtrl.v", 338, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "alu_fn_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "ProcBaseCtrl.v", 338, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "alu_fn_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "ProcBaseCtrl.v", 338, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "alu_fn_D[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "ProcBaseCtrl.v", 338, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "alu_fn_D[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "ProcBaseCtrl.v", 339, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "ex_result_sel_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "ProcBaseCtrl.v", 339, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "ex_result_sel_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "ProcBaseCtrl.v", 340, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "mul_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "ProcBaseCtrl.v", 341, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "dmem_reqstream_type_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "ProcBaseCtrl.v", 341, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "dmem_reqstream_type_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "ProcBaseCtrl.v", 342, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "wb_result_sel_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "ProcBaseCtrl.v", 343, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_wen_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "ProcBaseCtrl.v", 344, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "csrr_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "ProcBaseCtrl.v", 345, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "csrw_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "ProcBaseCtrl.v", 346, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "proc2mngr_val_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "ProcBaseCtrl.v", 347, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "mngr2proc_rdy_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "ProcBaseCtrl.v", 348, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "stats_en_wen_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "ProcBaseCtrl.v", 349, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "pc_redirect_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "ProcBaseCtrl.v", 351, 8, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "block", "351,370-386");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "ProcBaseCtrl.v", 398, 53, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "398");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "ProcBaseCtrl.v", 401, 53, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "401");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "ProcBaseCtrl.v", 402, 53, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "402");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "ProcBaseCtrl.v", 403, 53, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "403");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "ProcBaseCtrl.v", 404, 53, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "404");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "ProcBaseCtrl.v", 405, 54, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "405");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "ProcBaseCtrl.v", 406, 53, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "406");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "ProcBaseCtrl.v", 407, 53, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "407");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "ProcBaseCtrl.v", 408, 52, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "408");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "ProcBaseCtrl.v", 409, 53, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "409");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "ProcBaseCtrl.v", 410, 53, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "410");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "ProcBaseCtrl.v", 411, 53, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "411");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "ProcBaseCtrl.v", 414, 52, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "414");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "ProcBaseCtrl.v", 415, 52, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "415");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "ProcBaseCtrl.v", 416, 53, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "416");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "ProcBaseCtrl.v", 417, 52, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "417");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "ProcBaseCtrl.v", 418, 52, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "418");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "ProcBaseCtrl.v", 419, 51, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "419");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "ProcBaseCtrl.v", 420, 52, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "420");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "ProcBaseCtrl.v", 421, 52, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "421");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "ProcBaseCtrl.v", 422, 52, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "422");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "ProcBaseCtrl.v", 423, 53, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "423");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "ProcBaseCtrl.v", 424, 51, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "424");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "ProcBaseCtrl.v", 427, 53, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "427");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "ProcBaseCtrl.v", 428, 52, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "428");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "ProcBaseCtrl.v", 431, 53, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "431");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "ProcBaseCtrl.v", 432, 53, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "432");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "ProcBaseCtrl.v", 433, 53, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "433");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "ProcBaseCtrl.v", 434, 52, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "434");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "ProcBaseCtrl.v", 435, 53, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "435");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "ProcBaseCtrl.v", 436, 52, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "436");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "ProcBaseCtrl.v", 439, 54, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "439");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "ProcBaseCtrl.v", 440, 54, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "440");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "ProcBaseCtrl.v", 443, 52, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "443");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "ProcBaseCtrl.v", 444, 52, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "444");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "ProcBaseCtrl.v", 447, 7, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "447");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "ProcBaseCtrl.v", 392, 3, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "block", "392,394");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "ProcBaseCtrl.v", 452, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_waddr_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "ProcBaseCtrl.v", 452, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_waddr_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "ProcBaseCtrl.v", 452, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_waddr_D[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "ProcBaseCtrl.v", 452, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_waddr_D[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "ProcBaseCtrl.v", 452, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_waddr_D[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "ProcBaseCtrl.v", 466, 5, ".top.DUT", "v_branch/lab2_proc_ProcBaseCtrl", "if", "466-467");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "ProcBaseCtrl.v", 466, 6, ".top.DUT", "v_branch/lab2_proc_ProcBaseCtrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "ProcBaseCtrl.v", 468, 5, ".top.DUT", "v_branch/lab2_proc_ProcBaseCtrl", "if", "468-469");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "ProcBaseCtrl.v", 468, 6, ".top.DUT", "v_branch/lab2_proc_ProcBaseCtrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "ProcBaseCtrl.v", 470, 5, ".top.DUT", "v_branch/lab2_proc_ProcBaseCtrl", "if", "470-471");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "ProcBaseCtrl.v", 470, 6, ".top.DUT", "v_branch/lab2_proc_ProcBaseCtrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "ProcBaseCtrl.v", 472, 5, ".top.DUT", "v_branch/lab2_proc_ProcBaseCtrl", "if", "472-473");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "ProcBaseCtrl.v", 472, 6, ".top.DUT", "v_branch/lab2_proc_ProcBaseCtrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "ProcBaseCtrl.v", 474, 5, ".top.DUT", "v_branch/lab2_proc_ProcBaseCtrl", "if", "474-475");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "ProcBaseCtrl.v", 474, 6, ".top.DUT", "v_branch/lab2_proc_ProcBaseCtrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "ProcBaseCtrl.v", 460, 3, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "block", "460-464");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "ProcBaseCtrl.v", 481, 5, ".top.DUT", "v_branch/lab2_proc_ProcBaseCtrl", "if", "481-483");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "ProcBaseCtrl.v", 481, 6, ".top.DUT", "v_branch/lab2_proc_ProcBaseCtrl", "else", "485-487");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "ProcBaseCtrl.v", 480, 3, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "block", "480");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "ProcBaseCtrl.v", 495, 10, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "ostall_mngr2proc_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "ProcBaseCtrl.v", 500, 10, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "ostall_waddr_X_rs1_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "ProcBaseCtrl.v", 507, 10, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "ostall_waddr_M_rs1_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "ProcBaseCtrl.v", 514, 10, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "ostall_waddr_W_rs1_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "ProcBaseCtrl.v", 521, 10, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "ostall_waddr_X_rs2_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "ProcBaseCtrl.v", 528, 10, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "ostall_waddr_M_rs2_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "ProcBaseCtrl.v", 535, 10, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "ostall_waddr_W_rs2_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "ProcBaseCtrl.v", 542, 10, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "ostall_imul_req_rdy_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "ProcBaseCtrl.v", 548, 10, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "ostall_hazard_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "ProcBaseCtrl.v", 569, 10, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "next_val_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "ProcBaseCtrl.v", 580, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "ProcBaseCtrl.v", 580, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "ProcBaseCtrl.v", 580, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "ProcBaseCtrl.v", 580, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "ProcBaseCtrl.v", 580, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "ProcBaseCtrl.v", 580, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "ProcBaseCtrl.v", 580, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "ProcBaseCtrl.v", 580, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "ProcBaseCtrl.v", 580, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "ProcBaseCtrl.v", 580, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "ProcBaseCtrl.v", 580, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "ProcBaseCtrl.v", 580, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "ProcBaseCtrl.v", 580, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "ProcBaseCtrl.v", 580, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "ProcBaseCtrl.v", 580, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "ProcBaseCtrl.v", 580, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "ProcBaseCtrl.v", 580, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "ProcBaseCtrl.v", 580, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "ProcBaseCtrl.v", 580, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "ProcBaseCtrl.v", 580, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "ProcBaseCtrl.v", 580, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "ProcBaseCtrl.v", 580, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "ProcBaseCtrl.v", 580, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "ProcBaseCtrl.v", 580, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "ProcBaseCtrl.v", 580, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "ProcBaseCtrl.v", 580, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "ProcBaseCtrl.v", 580, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "ProcBaseCtrl.v", 580, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "ProcBaseCtrl.v", 580, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "ProcBaseCtrl.v", 580, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "ProcBaseCtrl.v", 580, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "ProcBaseCtrl.v", 580, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "ProcBaseCtrl.v", 581, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "dmem_reqstream_type_X[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "ProcBaseCtrl.v", 581, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "dmem_reqstream_type_X[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "ProcBaseCtrl.v", 582, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "wb_result_sel_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "ProcBaseCtrl.v", 583, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_wen_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "ProcBaseCtrl.v", 584, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_waddr_X[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "ProcBaseCtrl.v", 584, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_waddr_X[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "ProcBaseCtrl.v", 584, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_waddr_X[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "ProcBaseCtrl.v", 584, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_waddr_X[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "ProcBaseCtrl.v", 584, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_waddr_X[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "ProcBaseCtrl.v", 585, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "proc2mngr_val_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "ProcBaseCtrl.v", 586, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "stats_en_wen_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "ProcBaseCtrl.v", 587, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "br_type_X[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "ProcBaseCtrl.v", 587, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "br_type_X[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "ProcBaseCtrl.v", 587, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "br_type_X[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "ProcBaseCtrl.v", 588, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "j_type_X[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "ProcBaseCtrl.v", 588, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "j_type_X[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "ProcBaseCtrl.v", 596, 10, ".top.DUT", "v_branch/lab2_proc_ProcBaseCtrl", "if", "596-608");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "ProcBaseCtrl.v", 596, 11, ".top.DUT", "v_branch/lab2_proc_ProcBaseCtrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "ProcBaseCtrl.v", 593, 5, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "elsif", "593-594");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[264]), first, "ProcBaseCtrl.v", 592, 3, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "block", "592");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[265]), first, "ProcBaseCtrl.v", 638, 10, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "if", "638-640");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[266]), first, "ProcBaseCtrl.v", 638, 11, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "else", "642-644");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[267]), first, "ProcBaseCtrl.v", 634, 10, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "elsif", "634-636");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[268]), first, "ProcBaseCtrl.v", 630, 10, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "elsif", "630-632");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[269]), first, "ProcBaseCtrl.v", 626, 10, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "elsif", "626-628");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[270]), first, "ProcBaseCtrl.v", 622, 10, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "elsif", "622-624");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[271]), first, "ProcBaseCtrl.v", 618, 10, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "elsif", "618-620");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[272]), first, "ProcBaseCtrl.v", 614, 5, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "elsif", "614-616");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "ProcBaseCtrl.v", 613, 3, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "block", "613");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "ProcBaseCtrl.v", 650, 9, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "ostall_imul_resp_val_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "ProcBaseCtrl.v", 655, 9, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "ostall_dmem_reqstream_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "ProcBaseCtrl.v", 679, 14, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "if", "679-680");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[277]), first, "ProcBaseCtrl.v", 679, 15, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "else", "681-682");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[278]), first, "ProcBaseCtrl.v", 677, 5, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "elsif", "677-678");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[279]), first, "ProcBaseCtrl.v", 676, 3, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "block", "676");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[280]), first, "ProcBaseCtrl.v", 692, 10, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "next_val_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[281]), first, "ProcBaseCtrl.v", 703, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[282]), first, "ProcBaseCtrl.v", 703, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[283]), first, "ProcBaseCtrl.v", 703, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[284]), first, "ProcBaseCtrl.v", 703, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[285]), first, "ProcBaseCtrl.v", 703, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[286]), first, "ProcBaseCtrl.v", 703, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[287]), first, "ProcBaseCtrl.v", 703, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[288]), first, "ProcBaseCtrl.v", 703, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[289]), first, "ProcBaseCtrl.v", 703, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[290]), first, "ProcBaseCtrl.v", 703, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "ProcBaseCtrl.v", 703, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "ProcBaseCtrl.v", 703, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[293]), first, "ProcBaseCtrl.v", 703, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[294]), first, "ProcBaseCtrl.v", 703, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[295]), first, "ProcBaseCtrl.v", 703, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[296]), first, "ProcBaseCtrl.v", 703, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[297]), first, "ProcBaseCtrl.v", 703, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[298]), first, "ProcBaseCtrl.v", 703, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[299]), first, "ProcBaseCtrl.v", 703, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[300]), first, "ProcBaseCtrl.v", 703, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[301]), first, "ProcBaseCtrl.v", 703, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[302]), first, "ProcBaseCtrl.v", 703, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[303]), first, "ProcBaseCtrl.v", 703, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[304]), first, "ProcBaseCtrl.v", 703, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[305]), first, "ProcBaseCtrl.v", 703, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[306]), first, "ProcBaseCtrl.v", 703, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[307]), first, "ProcBaseCtrl.v", 703, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[308]), first, "ProcBaseCtrl.v", 703, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[309]), first, "ProcBaseCtrl.v", 703, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[310]), first, "ProcBaseCtrl.v", 703, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[311]), first, "ProcBaseCtrl.v", 703, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[312]), first, "ProcBaseCtrl.v", 703, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[313]), first, "ProcBaseCtrl.v", 704, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "dmem_reqstream_type_M[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[314]), first, "ProcBaseCtrl.v", 704, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "dmem_reqstream_type_M[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[315]), first, "ProcBaseCtrl.v", 705, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_wen_M", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[316]), first, "ProcBaseCtrl.v", 706, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_waddr_M[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[317]), first, "ProcBaseCtrl.v", 706, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_waddr_M[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[318]), first, "ProcBaseCtrl.v", 706, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_waddr_M[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[319]), first, "ProcBaseCtrl.v", 706, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_waddr_M[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[320]), first, "ProcBaseCtrl.v", 706, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_waddr_M[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[321]), first, "ProcBaseCtrl.v", 707, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "proc2mngr_val_M", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[322]), first, "ProcBaseCtrl.v", 708, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "stats_en_wen_M", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[323]), first, "ProcBaseCtrl.v", 716, 10, ".top.DUT", "v_branch/lab2_proc_ProcBaseCtrl", "if", "716-724");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[324]), first, "ProcBaseCtrl.v", 716, 11, ".top.DUT", "v_branch/lab2_proc_ProcBaseCtrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[325]), first, "ProcBaseCtrl.v", 713, 5, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "elsif", "713-714");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[326]), first, "ProcBaseCtrl.v", 712, 3, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "block", "712");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[327]), first, "ProcBaseCtrl.v", 741, 10, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "next_val_M", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[328]), first, "ProcBaseCtrl.v", 752, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[329]), first, "ProcBaseCtrl.v", 752, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[330]), first, "ProcBaseCtrl.v", 752, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[331]), first, "ProcBaseCtrl.v", 752, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[332]), first, "ProcBaseCtrl.v", 752, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[333]), first, "ProcBaseCtrl.v", 752, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[334]), first, "ProcBaseCtrl.v", 752, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[335]), first, "ProcBaseCtrl.v", 752, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[336]), first, "ProcBaseCtrl.v", 752, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[337]), first, "ProcBaseCtrl.v", 752, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[338]), first, "ProcBaseCtrl.v", 752, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[339]), first, "ProcBaseCtrl.v", 752, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[340]), first, "ProcBaseCtrl.v", 752, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[341]), first, "ProcBaseCtrl.v", 752, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[342]), first, "ProcBaseCtrl.v", 752, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[343]), first, "ProcBaseCtrl.v", 752, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[344]), first, "ProcBaseCtrl.v", 752, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[345]), first, "ProcBaseCtrl.v", 752, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[346]), first, "ProcBaseCtrl.v", 752, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[347]), first, "ProcBaseCtrl.v", 752, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[348]), first, "ProcBaseCtrl.v", 752, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[349]), first, "ProcBaseCtrl.v", 752, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[350]), first, "ProcBaseCtrl.v", 752, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[351]), first, "ProcBaseCtrl.v", 752, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[352]), first, "ProcBaseCtrl.v", 752, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "ProcBaseCtrl.v", 752, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[354]), first, "ProcBaseCtrl.v", 752, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[355]), first, "ProcBaseCtrl.v", 752, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[356]), first, "ProcBaseCtrl.v", 752, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[357]), first, "ProcBaseCtrl.v", 752, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[358]), first, "ProcBaseCtrl.v", 752, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[359]), first, "ProcBaseCtrl.v", 752, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[360]), first, "ProcBaseCtrl.v", 753, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "proc2mngr_val_W", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[361]), first, "ProcBaseCtrl.v", 754, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_wen_pending_W", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[362]), first, "ProcBaseCtrl.v", 755, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "stats_en_wen_pending_W", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[363]), first, "ProcBaseCtrl.v", 763, 10, ".top.DUT", "v_branch/lab2_proc_ProcBaseCtrl", "if", "763-769");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[364]), first, "ProcBaseCtrl.v", 763, 11, ".top.DUT", "v_branch/lab2_proc_ProcBaseCtrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[365]), first, "ProcBaseCtrl.v", 760, 5, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "elsif", "760-761");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[366]), first, "ProcBaseCtrl.v", 759, 3, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "block", "759");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "tinyrv2_encoding.v", 374, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "opcode[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "tinyrv2_encoding.v", 374, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "opcode[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "tinyrv2_encoding.v", 374, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "opcode[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "tinyrv2_encoding.v", 374, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "opcode[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "tinyrv2_encoding.v", 374, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "opcode[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "tinyrv2_encoding.v", 374, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "opcode[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "tinyrv2_encoding.v", 374, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "opcode[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "tinyrv2_encoding.v", 375, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rd[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "tinyrv2_encoding.v", 375, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rd[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "tinyrv2_encoding.v", 375, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rd[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "tinyrv2_encoding.v", 375, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rd[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "tinyrv2_encoding.v", 375, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rd[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "tinyrv2_encoding.v", 376, 21, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rs1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "tinyrv2_encoding.v", 376, 21, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rs1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "tinyrv2_encoding.v", 376, 21, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rs1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "tinyrv2_encoding.v", 376, 21, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rs1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "tinyrv2_encoding.v", 376, 21, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rs1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "tinyrv2_encoding.v", 377, 21, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rs2[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "tinyrv2_encoding.v", 377, 21, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rs2[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "tinyrv2_encoding.v", 377, 21, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rs2[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "tinyrv2_encoding.v", 377, 21, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rs2[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "tinyrv2_encoding.v", 377, 21, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rs2[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "tinyrv2_encoding.v", 378, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "funct3[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "tinyrv2_encoding.v", 378, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "funct3[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "tinyrv2_encoding.v", 378, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "funct3[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[367]), first, "tinyrv2_encoding.v", 379, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "funct7[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[368]), first, "tinyrv2_encoding.v", 379, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "funct7[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[369]), first, "tinyrv2_encoding.v", 379, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "funct7[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[370]), first, "tinyrv2_encoding.v", 379, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "funct7[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[371]), first, "tinyrv2_encoding.v", 379, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "funct7[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[372]), first, "tinyrv2_encoding.v", 379, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "funct7[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[373]), first, "tinyrv2_encoding.v", 379, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "funct7[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "tinyrv2_encoding.v", 380, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "csr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "tinyrv2_encoding.v", 380, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "csr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "tinyrv2_encoding.v", 380, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "csr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "tinyrv2_encoding.v", 380, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "csr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "tinyrv2_encoding.v", 380, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "csr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "tinyrv2_encoding.v", 380, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "csr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "tinyrv2_encoding.v", 380, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "csr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "tinyrv2_encoding.v", 380, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "csr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "tinyrv2_encoding.v", 380, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "csr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "tinyrv2_encoding.v", 380, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "csr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "tinyrv2_encoding.v", 380, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "csr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "tinyrv2_encoding.v", 380, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "csr[11]", "");
}

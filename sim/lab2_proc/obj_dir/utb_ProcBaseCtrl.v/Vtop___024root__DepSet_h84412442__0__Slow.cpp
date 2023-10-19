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
    vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[200].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[271].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[277].fetch_add(1, std::memory_order_relaxed);
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
    CData/*0:0*/ top__DOT__DUT__DOT____VdfgTmp_h699142ba__0;
    top__DOT__DUT__DOT____VdfgTmp_h699142ba__0 = 0;
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
                                            vlSymsp->__Vcoverage[173].fetch_add(1, std::memory_order_relaxed);
                                            vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
                                        }
                                        if ((0x17U 
                                             == (0x7fU 
                                                 & vlSelf->top__DOT__inst_D))) {
                                            vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
                                            vlSymsp->__Vcoverage[172].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    }
                                    if ((0x37U == (0x7fU 
                                                   & vlSelf->top__DOT__inst_D))) {
                                        vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
                                        vlSymsp->__Vcoverage[171].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                                if ((0x1013U == (0xfe00707fU 
                                                 & vlSelf->top__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[170].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((0x5013U == (0xfe00707fU 
                                             & vlSelf->top__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[169].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((0x40005013U == (0xfe00707fU 
                                             & vlSelf->top__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[168].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((0x3013U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[167].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((0x2013U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                    vlSymsp->__Vcoverage[166].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
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
                                                vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
                                                vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
                                            }
                                            if ((0x7063U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__inst_D))) {
                                                vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
                                                vlSymsp->__Vcoverage[180].fetch_add(1, std::memory_order_relaxed);
                                            }
                                        }
                                        if ((0x5063U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__inst_D))) {
                                            vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
                                            vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    }
                                    if ((0x6063U == 
                                         (0x707fU & vlSelf->top__DOT__inst_D))) {
                                        vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
                                        vlSymsp->__Vcoverage[178].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                                if ((0x4063U == (0x707fU 
                                                 & vlSelf->top__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[177].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((0x63U == (0x707fU 
                                           & vlSelf->top__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[176].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((0x1063U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[175].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((0x67U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[174].fetch_add(1, std::memory_order_relaxed);
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
                                vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((0x1073U != (0x707fU 
                                             & vlSelf->top__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((0x2073U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((0x2023U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
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
                                        vlSymsp->__Vcoverage[165].fetch_add(1, std::memory_order_relaxed);
                                        vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    if ((0x6013U == 
                                         (0x707fU & vlSelf->top__DOT__inst_D))) {
                                        vlSymsp->__Vcoverage[164].fetch_add(1, std::memory_order_relaxed);
                                        vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                                if ((0x7013U == (0x707fU 
                                                 & vlSelf->top__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[163].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((0x13U == (0x707fU 
                                           & vlSelf->top__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[162].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((0x1033U == (0xfe00707fU 
                                         & vlSelf->top__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[161].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((0x5033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[160].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((0x40005033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                    vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[159].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((0x3033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                vlSymsp->__Vcoverage[158].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
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
                    vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
                }
                if ((0x40000033U != (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                    if ((0x2000033U != (0xfe00707fU 
                                        & vlSelf->top__DOT__inst_D))) {
                        if ((0x7033U != (0xfe00707fU 
                                         & vlSelf->top__DOT__inst_D))) {
                            if ((0x6033U == (0xfe00707fU 
                                             & vlSelf->top__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((0x6033U != (0xfe00707fU 
                                             & vlSelf->top__DOT__inst_D))) {
                                if ((0x4033U == (0xfe00707fU 
                                                 & vlSelf->top__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[156].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((0x4033U != (0xfe00707fU 
                                                 & vlSelf->top__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                        }
                        if ((0x7033U == (0xfe00707fU 
                                         & vlSelf->top__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((0x2000033U == (0xfe00707fU 
                                        & vlSelf->top__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
                    }
                }
            }
            if ((0x33U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((0x13U == vlSelf->top__DOT__inst_D)) {
            vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[276].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U != (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X))) {
        if ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X))) {
            vlSymsp->__Vcoverage[274].fetch_add(1, std::memory_order_relaxed);
        }
        if ((2U != (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X))) {
            vlSymsp->__Vcoverage[275].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                  & (1U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                      & (2U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))))) {
            if (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                 & (3U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))) {
                vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                          & (3U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))))) {
                if (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                     & (4U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))) {
                    vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                              & (4U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))))) {
                    if (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                         & (5U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))) {
                        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                  & (5U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))))) {
                        if (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                             & (6U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))) {
                            vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                      & (6U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))))) {
                            if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                          & (2U == (IData)(vlSelf->top__DOT__DUT__DOT__j_type_X)))))) {
                                vlSymsp->__Vcoverage[264].fetch_add(1, std::memory_order_relaxed);
                            }
                            if (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                 & (2U == (IData)(vlSelf->top__DOT__DUT__DOT__j_type_X)))) {
                                vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
        }
        if (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
             & (2U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))) {
            vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
         & (1U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))) {
        vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_val 
            = vlSelf->top__DOT__mngr2proc_val;
    }
    if (((IData)(vlSelf->top__DOT__proc2mngr_rdy) ^ (IData)(vlSelf->top__DOT____Vtogcov__proc2mngr_rdy))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_rdy 
            = vlSelf->top__DOT__proc2mngr_rdy;
    }
    if (((IData)(vlSelf->top__DOT__wb_result_sel_M) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__wb_result_sel_M))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__wb_result_sel_M 
            = vlSelf->top__DOT__wb_result_sel_M;
    }
    if (((IData)(vlSelf->top__DOT__br_cond_eq_X) ^ (IData)(vlSelf->top__DOT____Vtogcov__br_cond_eq_X))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__br_cond_eq_X = vlSelf->top__DOT__br_cond_eq_X;
    }
    if (((IData)(vlSelf->top__DOT__br_cond_lt_X) ^ (IData)(vlSelf->top__DOT____Vtogcov__br_cond_lt_X))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__br_cond_lt_X = vlSelf->top__DOT__br_cond_lt_X;
    }
    if (((IData)(vlSelf->top__DOT__br_cond_ltu_X) ^ (IData)(vlSelf->top__DOT____Vtogcov__br_cond_ltu_X))) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__br_cond_ltu_X 
            = vlSelf->top__DOT__br_cond_ltu_X;
    }
    if (((IData)(vlSelf->top__DOT__imul_req_rdy_D) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imul_req_rdy_D))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imul_req_rdy_D 
            = vlSelf->top__DOT__imul_req_rdy_D;
    }
    if (((IData)(vlSelf->top__DOT__imul_resp_val_X) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imul_resp_val_X))) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imul_resp_val_X 
            = vlSelf->top__DOT__imul_resp_val_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__val_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__val_F))) {
        vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__val_F 
            = vlSelf->top__DOT__DUT__DOT__val_F;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__val_D))) {
        vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__val_D 
            = vlSelf->top__DOT__DUT__DOT__val_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__val_X))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__val_X 
            = vlSelf->top__DOT__DUT__DOT__val_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__val_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__val_M))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__val_M 
            = vlSelf->top__DOT__DUT__DOT__val_M;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__val_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__val_W))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__val_W 
            = vlSelf->top__DOT__DUT__DOT__val_W;
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__imul_req_rdy_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_imul_req_rdy_D)))) {
        vlSymsp->__Vcoverage[208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_imul_req_rdy_D 
            = (1U & (~ (IData)(vlSelf->top__DOT__imul_req_rdy_D)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__wb_result_sel_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_sel_X))) {
        vlSymsp->__Vcoverage[245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_sel_X 
            = vlSelf->top__DOT__DUT__DOT__wb_result_sel_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_X))) {
        vlSymsp->__Vcoverage[246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_X 
            = vlSelf->top__DOT__DUT__DOT__rf_wen_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_val_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_val_X))) {
        vlSymsp->__Vcoverage[252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_val_X 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_val_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stats_en_wen_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_wen_X))) {
        vlSymsp->__Vcoverage[253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_wen_X 
            = vlSelf->top__DOT__DUT__DOT__stats_en_wen_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_M))) {
        vlSymsp->__Vcoverage[313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_M 
            = vlSelf->top__DOT__DUT__DOT__rf_wen_M;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_val_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_val_M))) {
        vlSymsp->__Vcoverage[319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_val_M 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_val_M;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stats_en_wen_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_wen_M))) {
        vlSymsp->__Vcoverage[320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_wen_M 
            = vlSelf->top__DOT__DUT__DOT__stats_en_wen_M;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_val_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_val_W))) {
        vlSymsp->__Vcoverage[358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_val_W 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_val_W;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_pending_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_pending_W))) {
        vlSymsp->__Vcoverage[359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_pending_W 
            = vlSelf->top__DOT__DUT__DOT__rf_wen_pending_W;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stats_en_wen_pending_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_wen_pending_W))) {
        vlSymsp->__Vcoverage[360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_wen_pending_W 
            = vlSelf->top__DOT__DUT__DOT__stats_en_wen_pending_W;
    }
    vlSelf->top__DOT__DUT__DOT__rf_waddr_D = (0x1fU 
                                              & (vlSelf->top__DOT__inst_D 
                                                 >> 7U));
    if ((1U & ((IData)(vlSelf->top__DOT__ex_result_sel_X) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__ex_result_sel_X)))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ex_result_sel_X 
            = ((2U & (IData)(vlSelf->top__DOT____Vtogcov__ex_result_sel_X)) 
               | (1U & (IData)(vlSelf->top__DOT__ex_result_sel_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__ex_result_sel_X) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__ex_result_sel_X)))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ex_result_sel_X 
            = ((1U & (IData)(vlSelf->top__DOT____Vtogcov__ex_result_sel_X)) 
               | (2U & (IData)(vlSelf->top__DOT__ex_result_sel_X)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_X)))) {
        vlSymsp->__Vcoverage[243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_X 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_X)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_X)))) {
        vlSymsp->__Vcoverage[244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_X 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_X)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__j_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__j_type_X)))) {
        vlSymsp->__Vcoverage[257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__j_type_X 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__j_type_X)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__j_type_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__j_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__j_type_X)))) {
        vlSymsp->__Vcoverage[258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__j_type_X 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__j_type_X)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__j_type_X)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_M)))) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_M 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_M)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_M)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_M)))) {
        vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_M 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_M)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_M)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__br_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_X)))) {
        vlSymsp->__Vcoverage[254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_X 
            = ((6U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_X)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__br_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_X)))) {
        vlSymsp->__Vcoverage[255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_X 
            = ((5U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_X)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__br_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_X)))) {
        vlSymsp->__Vcoverage[256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_X 
            = ((3U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_X)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__alu_fn_X) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_fn_X)))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__alu_fn_X = ((0xeU 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__alu_fn_X)) 
                                                 | (1U 
                                                    & (IData)(vlSelf->top__DOT__alu_fn_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__alu_fn_X) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_fn_X)))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__alu_fn_X = ((0xdU 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__alu_fn_X)) 
                                                 | (2U 
                                                    & (IData)(vlSelf->top__DOT__alu_fn_X)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__alu_fn_X) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_fn_X)))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__alu_fn_X = ((0xbU 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__alu_fn_X)) 
                                                 | (4U 
                                                    & (IData)(vlSelf->top__DOT__alu_fn_X)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__alu_fn_X) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_fn_X)))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
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
    vlSelf->top__DOT__mem_action_M = ((1U != (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X)) 
                                      & (2U == (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X)));
    if ((1U & ((IData)(vlSelf->top__DOT__rf_waddr_W) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rf_waddr_W = (
                                                   (0x1eU 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->top__DOT__rf_waddr_W)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__rf_waddr_W) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rf_waddr_W = (
                                                   (0x1dU 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)) 
                                                   | (2U 
                                                      & (IData)(vlSelf->top__DOT__rf_waddr_W)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__rf_waddr_W) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rf_waddr_W = (
                                                   (0x1bU 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)) 
                                                   | (4U 
                                                      & (IData)(vlSelf->top__DOT__rf_waddr_W)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__rf_waddr_W) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rf_waddr_W = (
                                                   (0x17U 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)) 
                                                   | (8U 
                                                      & (IData)(vlSelf->top__DOT__rf_waddr_W)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__rf_waddr_W) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rf_waddr_W = (
                                                   (0xfU 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)) 
                                                   | (0x10U 
                                                      & (IData)(vlSelf->top__DOT__rf_waddr_W)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M)));
    }
    vlSelf->top__DOT__stats_en_wen_W = ((IData)(vlSelf->top__DOT__DUT__DOT__stats_en_wen_pending_W) 
                                        & (IData)(vlSelf->top__DOT__DUT__DOT__val_W));
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x7eU & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x7dU & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x7bU & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x77U & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x6fU & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x5fU & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[371].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffffffeU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (1U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((2U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffffffdU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (2U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((4U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffffffbU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (4U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((8U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffffff7U 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (8U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x10U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffffffefU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x10U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x20U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffffffdfU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x20U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x40U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffffffbfU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x40U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x80U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffffff7fU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x80U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x100U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffffeffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x100U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x200U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffffdffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x200U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x400U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffffbffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x400U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x800U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffff7ffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x800U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffffefffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x1000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffffdfffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x2000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffffbfffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x4000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffff7fffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x8000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffeffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x10000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffdffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x20000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffbffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x40000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfff7ffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x80000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffefffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x100000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffdfffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x200000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffbfffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x400000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xff7fffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x800000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfeffffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x1000000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfdffffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x2000000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfbffffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x4000000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xf7ffffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x8000000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xefffffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x10000000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xdfffffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x20000000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xbfffffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x40000000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if (((vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0x7fffffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x80000000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__inst_X ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (1U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__inst_X ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (2U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__inst_X ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (4U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__inst_X ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (8U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if (((vlSelf->top__DOT__DUT__DOT__inst_X ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__inst_M ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (1U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__inst_M ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (2U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__inst_M ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (4U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__inst_M ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (8U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if (((vlSelf->top__DOT__DUT__DOT__inst_M ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__inst_W ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (1U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__inst_W ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (2U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__inst_W ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (4U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__inst_W ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (8U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if (((vlSelf->top__DOT__DUT__DOT__inst_W ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[357].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_sel_D 
            = vlSelf->top__DOT__DUT__DOT__wb_result_sel_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__inst_val_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_val_D))) {
        vlSymsp->__Vcoverage[124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_val_D 
            = vlSelf->top__DOT__DUT__DOT__inst_val_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_D))) {
        vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_D 
            = vlSelf->top__DOT__DUT__DOT__rf_wen_D;
    }
    if (((IData)(vlSelf->top__DOT__op1_sel_D) ^ (IData)(vlSelf->top__DOT____Vtogcov__op1_sel_D))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__op1_sel_D = vlSelf->top__DOT__op1_sel_D;
    }
    if (((IData)(vlSelf->top__DOT__mem_action_M) ^ (IData)(vlSelf->top__DOT____Vtogcov__mem_action_M))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mem_action_M = vlSelf->top__DOT__mem_action_M;
    }
    if (((IData)(vlSelf->top__DOT__stats_en_wen_W) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__stats_en_wen_W))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__stats_en_wen_W 
            = vlSelf->top__DOT__stats_en_wen_W;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_D)))) {
        vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_D 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_D)))) {
        vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_D 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_D)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_D)))) {
        vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_D 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_D)))) {
        vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_D 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__op2_sel_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__op2_sel_D)))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__op2_sel_D = ((2U 
                                                   & (IData)(vlSelf->top__DOT____Vtogcov__op2_sel_D)) 
                                                  | (1U 
                                                     & (IData)(vlSelf->top__DOT__op2_sel_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__op2_sel_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__op2_sel_D)))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__op2_sel_D = ((1U 
                                                   & (IData)(vlSelf->top__DOT____Vtogcov__op2_sel_D)) 
                                                  | (2U 
                                                     & (IData)(vlSelf->top__DOT__op2_sel_D)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__mul_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_D))) {
        vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_D 
            = vlSelf->top__DOT__DUT__DOT__mul_D;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__br_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D)))) {
        vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D 
            = ((6U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__br_type_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__br_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D)))) {
        vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D 
            = ((5U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__br_type_D)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__br_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D)))) {
        vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D 
            = ((3U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__br_type_D)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imm_type_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__imm_type_D)))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm_type_D = (
                                                   (6U 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__imm_type_D)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->top__DOT__imm_type_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__imm_type_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__imm_type_D)))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm_type_D = (
                                                   (5U 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__imm_type_D)) 
                                                   | (2U 
                                                      & (IData)(vlSelf->top__DOT__imm_type_D)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__imm_type_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__imm_type_D)))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm_type_D = (
                                                   (3U 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__imm_type_D)) 
                                                   | (4U 
                                                      & (IData)(vlSelf->top__DOT__imm_type_D)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D)))) {
        vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D)))) {
        vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_D)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D)))) {
        vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_D)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D)))) {
        vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_D)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_X)))) {
        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_X 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_X)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_X)))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_X 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_X)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_X)));
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__csrw_D) 
                  & (0x7c1U == (vlSelf->top__DOT__inst_D 
                                >> 0x14U)))))) {
        vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__csrw_D) 
                  & (0x7c0U == (vlSelf->top__DOT__inst_D 
                                >> 0x14U)))))) {
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__csrw_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__csrw_D))) {
        vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrw_D 
            = vlSelf->top__DOT__DUT__DOT__csrw_D;
    }
    vlSelf->top__DOT__DUT__DOT__stats_en_wen_D = 0U;
    if (((IData)(vlSelf->top__DOT__DUT__DOT__csrw_D) 
         & (0x7c1U == (vlSelf->top__DOT__inst_D >> 0x14U)))) {
        vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__stats_en_wen_D = 1U;
    }
    vlSelf->top__DOT__DUT__DOT__proc2mngr_val_D = 0U;
    if (((IData)(vlSelf->top__DOT__DUT__DOT__csrw_D) 
         & (0x7c0U == (vlSelf->top__DOT__inst_D >> 0x14U)))) {
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_val_D = 1U;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_F))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_F 
            = vlSelf->top__DOT__DUT__DOT__ostall_F;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__pc_redirect_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_redirect_X))) {
        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_redirect_X 
            = vlSelf->top__DOT__DUT__DOT__pc_redirect_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
         & (1U == (IData)(vlSelf->top__DOT__DUT__DOT__j_type_D)))) {
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__pc_sel_D = 2U;
    } else {
        vlSelf->top__DOT__DUT__DOT__pc_sel_D = 3U;
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                  & (1U == (IData)(vlSelf->top__DOT__DUT__DOT__j_type_D)))))) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__j_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__j_type_D)))) {
        vlSymsp->__Vcoverage[125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__j_type_D 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__j_type_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__j_type_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__j_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__j_type_D)))) {
        vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__j_type_D 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__j_type_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__j_type_D)));
    }
    vlSelf->top__DOT__DUT__DOT__pc_redirect_D = ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                                                 & (1U 
                                                    == (IData)(vlSelf->top__DOT__DUT__DOT__j_type_D)));
    if (vlSelf->top__DOT__DUT__DOT__pc_redirect_X) {
        vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__pc_sel_F = vlSelf->top__DOT__DUT__DOT__pc_sel_X;
    } else {
        vlSelf->top__DOT__pc_sel_F = ((IData)(vlSelf->top__DOT__DUT__DOT__pc_redirect_D)
                                       ? (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_D)
                                       : 3U);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__csrr_D) 
                  & (0xfc0U == (vlSelf->top__DOT__inst_D 
                                >> 0x14U)))))) {
        vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__csrr_D) 
                  & (0xfc1U == (vlSelf->top__DOT__inst_D 
                                >> 0x14U)))))) {
        vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__csrr_D) 
                  & (0xf14U == (vlSelf->top__DOT__inst_D 
                                >> 0x14U)))))) {
        vlSymsp->__Vcoverage[196].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__csrr_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_D))) {
        vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_D 
            = vlSelf->top__DOT__DUT__DOT__csrr_D;
    }
    vlSelf->top__DOT__csrr_sel_D = 0U;
    if (((IData)(vlSelf->top__DOT__DUT__DOT__csrr_D) 
         & (0xfc1U == (vlSelf->top__DOT__inst_D >> 0x14U)))) {
        vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__csrr_sel_D = 1U;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__csrr_D) 
         & (0xf14U == (vlSelf->top__DOT__inst_D >> 0x14U)))) {
        vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__csrr_sel_D = 2U;
    }
    vlSelf->top__DOT__DUT__DOT__mngr2proc_rdy_D = 0U;
    if (((IData)(vlSelf->top__DOT__DUT__DOT__csrr_D) 
         & (0xfc0U == (vlSelf->top__DOT__inst_D >> 0x14U)))) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mngr2proc_rdy_D = 1U;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_imul_resp_val_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_imul_resp_val_X))) {
        vlSymsp->__Vcoverage[272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_imul_resp_val_X 
            = vlSelf->top__DOT__DUT__DOT__ostall_imul_resp_val_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_dmem_reqstream_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_dmem_reqstream_X))) {
        vlSymsp->__Vcoverage[273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_dmem_reqstream_X 
            = vlSelf->top__DOT__DUT__DOT__ostall_dmem_reqstream_X;
    }
    vlSelf->top__DOT__DUT__DOT__ostall_X = ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                            & ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_dmem_reqstream_X) 
                                               | (IData)(vlSelf->top__DOT__DUT__DOT__ostall_imul_resp_val_X)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_M))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_M 
            = vlSelf->top__DOT__DUT__DOT__ostall_M;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_W))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_W 
            = vlSelf->top__DOT__DUT__DOT__ostall_W;
    }
    vlSelf->top__DOT__DUT__DOT__stall_W = ((IData)(vlSelf->top__DOT__DUT__DOT__val_W) 
                                           & (IData)(vlSelf->top__DOT__DUT__DOT__ostall_W));
    top__DOT__DUT__DOT____VdfgTmp_hb97078a9__0 = ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_M) 
                                                  | (IData)(vlSelf->top__DOT__DUT__DOT__ostall_W));
    if (((IData)(vlSelf->top__DOT__rf_wen_W) ^ (IData)(vlSelf->top__DOT____Vtogcov__rf_wen_W))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rf_wen_W = vlSelf->top__DOT__rf_wen_W;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__rs2_en_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rs2_en_D))) {
        vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_wen_D 
            = vlSelf->top__DOT__DUT__DOT__stats_en_wen_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_val_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_val_D))) {
        vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_val_D 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_val_D;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_D)))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_D 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_D)))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_D 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_D)));
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__pc_redirect_X)))) {
        if (vlSelf->top__DOT__DUT__DOT__pc_redirect_D) {
            vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__pc_redirect_D)))) {
            vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__pc_redirect_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_redirect_D))) {
        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_redirect_D 
            = vlSelf->top__DOT__DUT__DOT__pc_redirect_D;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__csrr_sel_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__csrr_sel_D)))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__csrr_sel_D = (
                                                   (2U 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__csrr_sel_D)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->top__DOT__csrr_sel_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__csrr_sel_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__csrr_sel_D)))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__csrr_sel_D = (
                                                   (1U 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__csrr_sel_D)) 
                                                   | (2U 
                                                      & (IData)(vlSelf->top__DOT__csrr_sel_D)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__mngr2proc_rdy_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__mngr2proc_rdy_D))) {
        vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mngr2proc_rdy_D 
            = vlSelf->top__DOT__DUT__DOT__mngr2proc_rdy_D;
    }
    vlSelf->top__DOT__DUT__DOT__ostall_mngr2proc_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
           & ((~ (IData)(vlSelf->top__DOT__mngr2proc_val)) 
              & (IData)(vlSelf->top__DOT__DUT__DOT__mngr2proc_rdy_D)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_X))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_X 
            = vlSelf->top__DOT__DUT__DOT__ostall_X;
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__stall_W) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__reg_en_W)))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reg_en_W = (1U 
                                                 & (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_W)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stall_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_W))) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_W 
            = vlSelf->top__DOT__DUT__DOT__stall_W;
    }
    vlSelf->top__DOT__commit_inst = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_W)) 
                                     & (IData)(vlSelf->top__DOT__DUT__DOT__val_W));
    vlSelf->top__DOT__DUT__DOT__stall_M = ((IData)(vlSelf->top__DOT__DUT__DOT__val_M) 
                                           & (IData)(top__DOT__DUT__DOT____VdfgTmp_hb97078a9__0));
    top__DOT__DUT__DOT____VdfgTmp_h699142ba__0 = ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_X) 
                                                  | (IData)(top__DOT__DUT__DOT____VdfgTmp_hb97078a9__0));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs2_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_X_rs2_D))) {
        vlSymsp->__Vcoverage[205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_X_rs2_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs2_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs2_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_M_rs2_D))) {
        vlSymsp->__Vcoverage[206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_M_rs2_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs2_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs2_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_W_rs2_D))) {
        vlSymsp->__Vcoverage[207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_W_rs2_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs2_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs1_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_X_rs1_D))) {
        vlSymsp->__Vcoverage[202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_X_rs1_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs1_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs1_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_M_rs1_D))) {
        vlSymsp->__Vcoverage[203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_M_rs1_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs1_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs1_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_W_rs1_D))) {
        vlSymsp->__Vcoverage[204].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc_sel_F = ((2U 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__pc_sel_F)) 
                                                 | (1U 
                                                    & (IData)(vlSelf->top__DOT__pc_sel_F)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__pc_sel_F) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__pc_sel_F)))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc_sel_F = ((1U 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__pc_sel_F)) 
                                                 | (2U 
                                                    & (IData)(vlSelf->top__DOT__pc_sel_F)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_mngr2proc_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_mngr2proc_D))) {
        vlSymsp->__Vcoverage[201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_mngr2proc_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_mngr2proc_D;
    }
    if (((IData)(vlSelf->top__DOT__commit_inst) ^ (IData)(vlSelf->top__DOT____Vtogcov__commit_inst))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__commit_inst = vlSelf->top__DOT__commit_inst;
    }
    vlSelf->top__DOT__proc2mngr_val = ((IData)(vlSelf->top__DOT__commit_inst) 
                                       & (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_val_W));
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__stall_M) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__reg_en_M)))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reg_en_M = (1U 
                                                 & (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_M)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stall_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_M))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_M 
            = vlSelf->top__DOT__DUT__DOT__stall_M;
    }
    vlSelf->top__DOT__DUT__DOT__next_val_M = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_M)) 
                                              & (IData)(vlSelf->top__DOT__DUT__DOT__val_M));
    vlSelf->top__DOT__DUT__DOT__stall_X = ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                           & (IData)(top__DOT__DUT__DOT____VdfgTmp_h699142ba__0));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_hazard_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_hazard_D))) {
        vlSymsp->__Vcoverage[209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_hazard_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_hazard_D;
    }
    vlSelf->top__DOT__DUT__DOT__ostall_D = ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                                            & ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_mngr2proc_D) 
                                               | (IData)(vlSelf->top__DOT__DUT__DOT__ostall_hazard_D)));
    if (((IData)(vlSelf->top__DOT__proc2mngr_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__proc2mngr_val))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_val 
            = vlSelf->top__DOT__proc2mngr_val;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__next_val_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__next_val_M))) {
        vlSymsp->__Vcoverage[325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__next_val_M 
            = vlSelf->top__DOT__DUT__DOT__next_val_M;
    }
    vlSelf->top__DOT__dmem_respstream_rdy = ((IData)(vlSelf->top__DOT__DUT__DOT__next_val_M) 
                                             & (0U 
                                                != (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_M)));
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__stall_X) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__reg_en_X)))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reg_en_X = (1U 
                                                 & (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_X)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stall_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_X))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_X 
            = vlSelf->top__DOT__DUT__DOT__stall_X;
    }
    vlSelf->top__DOT__DUT__DOT__next_val_X = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_X)) 
                                              & (IData)(vlSelf->top__DOT__DUT__DOT__val_X));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_D))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_D;
    }
    top__DOT__DUT__DOT____VdfgTmp_h8245d87c__0 = ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_D) 
                                                  | (IData)(top__DOT__DUT__DOT____VdfgTmp_h699142ba__0));
    if (((IData)(vlSelf->top__DOT__dmem_respstream_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__dmem_respstream_rdy))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_rdy 
            = vlSelf->top__DOT__dmem_respstream_rdy;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__next_val_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__next_val_X))) {
        vlSymsp->__Vcoverage[278].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imul_resp_rdy_X 
            = vlSelf->top__DOT__imul_resp_rdy_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__osquash_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__osquash_X))) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__osquash_X 
            = vlSelf->top__DOT__DUT__DOT__osquash_X;
    }
    vlSelf->top__DOT__DUT__DOT__squash_D = ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                                            & (IData)(vlSelf->top__DOT__DUT__DOT__osquash_X));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stall_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_F))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_F 
            = vlSelf->top__DOT__DUT__DOT__stall_F;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stall_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_D))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_D 
            = vlSelf->top__DOT__DUT__DOT__stall_D;
    }
    top__DOT__DUT__DOT____VdfgTmp_hb2b31c42__0 = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_D)) 
                                                  & (IData)(vlSelf->top__DOT__DUT__DOT__val_D));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__squash_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__squash_D))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reg_en_D = vlSelf->top__DOT__reg_en_D;
    }
    if (((IData)(vlSelf->top__DOT__mngr2proc_rdy) ^ (IData)(vlSelf->top__DOT____Vtogcov__mngr2proc_rdy))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_rdy 
            = vlSelf->top__DOT__mngr2proc_rdy;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__next_val_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__next_val_D))) {
        vlSymsp->__Vcoverage[210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__next_val_D 
            = vlSelf->top__DOT__DUT__DOT__next_val_D;
    }
    vlSelf->top__DOT__imul_req_val_D = ((IData)(vlSelf->top__DOT__DUT__DOT__next_val_D) 
                                        & (IData)(vlSelf->top__DOT__DUT__DOT__mul_D));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__osquash_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__osquash_D))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__osquash_D 
            = vlSelf->top__DOT__DUT__DOT__osquash_D;
    }
    vlSelf->top__DOT__DUT__DOT__squash_F = ((IData)(vlSelf->top__DOT__DUT__DOT__val_F) 
                                            & ((IData)(vlSelf->top__DOT__DUT__DOT__osquash_D) 
                                               | (IData)(vlSelf->top__DOT__DUT__DOT__osquash_X)));
    if (((IData)(vlSelf->top__DOT__imul_req_val_D) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imul_req_val_D))) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imul_req_val_D 
            = vlSelf->top__DOT__imul_req_val_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__squash_F) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_respstream_drop))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_drop 
            = vlSelf->top__DOT__DUT__DOT__squash_F;
    }
    vlSelf->top__DOT__DUT__DOT__next_val_F = ((IData)(vlSelf->top__DOT__DUT__DOT__val_F) 
                                              & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_F)) 
                                                 & (~ (IData)(vlSelf->top__DOT__DUT__DOT__squash_F))));
    vlSelf->top__DOT__imem_respstream_rdy = (1U & (
                                                   (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_F)) 
                                                   | (IData)(vlSelf->top__DOT__DUT__DOT__squash_F)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__next_val_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__next_val_F))) {
        vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
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
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "utb_ProcBaseCtrl.v", 35, 18, ".top", "v_toggle/top", "mem_action_M", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "utb_ProcBaseCtrl.v", 39, 18, ".top", "v_toggle/top", "mngr2proc_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "utb_ProcBaseCtrl.v", 40, 18, ".top", "v_toggle/top", "mngr2proc_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "utb_ProcBaseCtrl.v", 41, 18, ".top", "v_toggle/top", "proc2mngr_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "utb_ProcBaseCtrl.v", 42, 18, ".top", "v_toggle/top", "proc2mngr_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "utb_ProcBaseCtrl.v", 46, 18, ".top", "v_toggle/top", "reg_en_F", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "utb_ProcBaseCtrl.v", 47, 18, ".top", "v_toggle/top", "pc_sel_F[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "utb_ProcBaseCtrl.v", 47, 18, ".top", "v_toggle/top", "pc_sel_F[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "utb_ProcBaseCtrl.v", 49, 18, ".top", "v_toggle/top", "reg_en_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "utb_ProcBaseCtrl.v", 50, 18, ".top", "v_toggle/top", "op1_sel_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "utb_ProcBaseCtrl.v", 51, 18, ".top", "v_toggle/top", "op2_sel_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "utb_ProcBaseCtrl.v", 51, 18, ".top", "v_toggle/top", "op2_sel_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "utb_ProcBaseCtrl.v", 52, 18, ".top", "v_toggle/top", "csrr_sel_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "utb_ProcBaseCtrl.v", 52, 18, ".top", "v_toggle/top", "csrr_sel_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "utb_ProcBaseCtrl.v", 53, 18, ".top", "v_toggle/top", "imm_type_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "utb_ProcBaseCtrl.v", 53, 18, ".top", "v_toggle/top", "imm_type_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "utb_ProcBaseCtrl.v", 53, 18, ".top", "v_toggle/top", "imm_type_D[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "utb_ProcBaseCtrl.v", 55, 18, ".top", "v_toggle/top", "reg_en_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "utb_ProcBaseCtrl.v", 56, 18, ".top", "v_toggle/top", "alu_fn_X[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "utb_ProcBaseCtrl.v", 56, 18, ".top", "v_toggle/top", "alu_fn_X[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "utb_ProcBaseCtrl.v", 56, 18, ".top", "v_toggle/top", "alu_fn_X[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "utb_ProcBaseCtrl.v", 56, 18, ".top", "v_toggle/top", "alu_fn_X[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "utb_ProcBaseCtrl.v", 57, 18, ".top", "v_toggle/top", "ex_result_sel_X[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "utb_ProcBaseCtrl.v", 57, 18, ".top", "v_toggle/top", "ex_result_sel_X[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "utb_ProcBaseCtrl.v", 59, 18, ".top", "v_toggle/top", "reg_en_M", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "utb_ProcBaseCtrl.v", 60, 18, ".top", "v_toggle/top", "wb_result_sel_M", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "utb_ProcBaseCtrl.v", 62, 18, ".top", "v_toggle/top", "reg_en_W", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "utb_ProcBaseCtrl.v", 63, 18, ".top", "v_toggle/top", "rf_waddr_W[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "utb_ProcBaseCtrl.v", 63, 18, ".top", "v_toggle/top", "rf_waddr_W[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "utb_ProcBaseCtrl.v", 63, 18, ".top", "v_toggle/top", "rf_waddr_W[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "utb_ProcBaseCtrl.v", 63, 18, ".top", "v_toggle/top", "rf_waddr_W[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "utb_ProcBaseCtrl.v", 63, 18, ".top", "v_toggle/top", "rf_waddr_W[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "utb_ProcBaseCtrl.v", 64, 18, ".top", "v_toggle/top", "rf_wen_W", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "utb_ProcBaseCtrl.v", 65, 18, ".top", "v_toggle/top", "stats_en_wen_W", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "utb_ProcBaseCtrl.v", 67, 18, ".top", "v_toggle/top", "imul_req_val_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "utb_ProcBaseCtrl.v", 68, 18, ".top", "v_toggle/top", "imul_resp_rdy_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "utb_ProcBaseCtrl.v", 72, 18, ".top", "v_toggle/top", "inst_D[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "utb_ProcBaseCtrl.v", 73, 18, ".top", "v_toggle/top", "br_cond_eq_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "utb_ProcBaseCtrl.v", 74, 18, ".top", "v_toggle/top", "br_cond_lt_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "utb_ProcBaseCtrl.v", 75, 18, ".top", "v_toggle/top", "br_cond_ltu_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "utb_ProcBaseCtrl.v", 77, 18, ".top", "v_toggle/top", "imul_req_rdy_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "utb_ProcBaseCtrl.v", 78, 18, ".top", "v_toggle/top", "imul_resp_val_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "utb_ProcBaseCtrl.v", 81, 18, ".top", "v_toggle/top", "commit_inst", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "utb_ProcBaseCtrl.v", 174, 5, ".top", "v_line/top", "block", "174,180-184,186-187,190-194,196-199,202,204,206-210,212,215-219,221-224,226-229,231-234,236-239,241-244,246-249,251-254,256-259,261-264,266-269,271-274,276-279,281-284,286-289,293-297,299-302,304-307,309-312,314-317,319-322,326-330,332-335,337-340,344-348,350-353,355-358,361,369-373,375-376,379-383,385-388,392-398,400-403,405-408,410-413,415-418,420-423,425-428,430-433,435-438,440-443,445-448,450-453,455-458,460-463,465-468,470-473,475-478,480-483,485-488,490-493,495-498,500-503,507-513,515-518,520-523,525-528,530-533,535-538,540-543,545-548,550-553,555-558,560-563,565-568,570-573,575-578,580-583,585-588,590-593,595-598,600-603,605-608,610-613,615-618,620-623,625-628,630-633,635-638,640-643,645-648,650-653,655-658,662-666,668-671,673-676,678-681,683-686,688-691,693-696,698-701,703-706,708-711,713-716,718-721,723-726,730-734,736-739,741-744,746-749,751-754,756-759,761-764,766-769,771-774,776-779,781-784,786-789,791-794,796-799,801-804,806-809,811-814,818-822,824-827,829-832,834-837,839-842,844-847,849-852,854-857,859-862,864-867,869-872,874-877,881-885,887-890,892-895,897-900,902-905,907-910,912-915,919-923,925-928,930-933,937-941,943-946,948-951,953-956,959,965-969,971-972,975-979,981-984,988-994,996-999,1001-1004,1006-1009,1011-1014,1016-1019,1021-1024,1026-1029,1031-1034,1036-1039,1041-1044,1046-1049,1051-1054,1056-1059,1061-1064,1066-1069,1071-1074,1077,1083-1087,1089-1090,1093-1097,1099-1102,1106-1112,1114-1117,1119-1122,1124-1127,1129-1132,1134-1137,1139-1142,1144-1147,1149-1152,1154-1157,1159-1162,1164-1167,1169-1172,1174-1177,1179-1182,1184-1187,1189-1192,1195,1201-1205,1207-1208,1211-1215,1217-1220,1224-1230,1232-1235,1237-1240,1242-1245,1247-1250,1252-1255,1257-1260,1262-1265,1267-1270,1272-1275,1277-1280,1282-1285,1287-1290,1292-1295,1297-1300,1302-1305,1307-1310,1313,1319-1323,1325-1326,1329-1333,1335-1338,1342-1348,1350-1353,1355-1358,1360-1363,1365-1368,1370-1373,1375-1378,1380-1383,1385-1388,1390-1393,1395-1398,1400-1403,1405-1408,1410-1413,1415-1418,1420-1423,1425-1428,1431,1437-1441,1443-1444,1447-1451,1453-1456,1460-1466,1468-1471,1473-1476,1478-1481,1483-1486,1488-1491,1493-1496,1498-1501,1503-1506,1508-1511,1513-1516,1518-1521,1523-1526,1528-1531,1533-1536,1538-1541,1543-1546,1549,1555-1559,1561-1562,1565-1569,1571-1574,1578-1584,1586-1589,1591-1594,1596-1599,1601-1604,1606-1609,1611-1614,1616-1619,1621-1624,1626-1629,1631-1634,1636-1639,1641-1644,1646-1649,1651-1654,1656-1659,1661-1664,1667,1673-1677,1679-1680,1683-1687,1689-1692,1696-1702,1704-1707,1709-1712,1714-1717,1719-1722,1724-1727,1729-1732,1734-1737,1739-1742,1744-1747,1749-1752,1754-1757,1759-1762,1764-1767,1769-1772,1774-1777,1779-1782,1785,1791-1795,1797-1798,1801-1805,1807-1810,1814-1820,1822-1825,1827-1830,1832-1835,1837-1840,1842-1845,1847-1850,1852-1855,1857-1860,1862-1865,1867-1870,1872-1875,1877-1880,1882-1885,1887-1890,1892-1895,1897-1900,1903,1909-1913,1915-1916,1919-1923,1925-1928,1932-1938,1940-1943,1945-1948,1950-1953,1955-1958,1960-1963,1965-1968,1970-1973,1975-1978,1980-1983,1985-1988,1990-1993,1995-1998,2000-2003,2005-2008,2010-2013,2015-2018,2021,2027-2031,2033-2034,2037-2041,2043-2046,2050-2056,2058-2061,2063-2066,2068-2071,2073-2076,2078-2081,2083-2086,2088-2091,2093-2096,2098-2101,2103-2106,2108-2111,2113-2116,2118-2121,2123-2126,2128-2131,2133-2136,2139,2145-2149,2151-2152,2155-2159,2161-2164,2168-2174,2176-2179,2181-2184,2186-2189,2191-2194,2196-2199,2201-2204,2206-2209,2211-2214,2216-2219,2221-2224,2226-2229,2231-2234,2236-2239,2241-2244,2246-2249,2251-2254,2257,2263-2267,2269-2270,2273-2277,2279-2282,2286-2292,2294-2297,2299-2302,2304-2307,2309-2312,2314-2317,2319-2322,2324-2327,2329-2332,2334-2337,2339-2342,2344-2347,2349-2352,2354-2357,2359-2362,2364-2367,2369-2372,2375,2381-2385,2387-2388,2391-2395,2397-2400,2404-2410,2412-2415,2417-2420,2422-2425,2427-2430,2432-2435,2437-2440,2442-2445,2447-2450,2452-2455,2457-2460,2462-2465,2467-2470,2472-2475,2477-2480,2482-2485,2487-2490,2493,2499-2503,2505-2506,2509-2513,2515-2518,2522-2528,2530-2533,2535-2538,2540-2543,2545-2548,2550-2553,2555-2558,2560-2563,2565-2568,2570-2573,2575-2578,2580-2583,2585-2588,2590-2593,2595-2598,2600-2603,2605-2608,2611,2617-2621,2623-2624,2627-2631,2633-2636,2640-2646,2648-2651,2653-2656,2658-2661,2663-2666,2668-2671,2673-2676,2678-2681,2683-2686,2688-2691,2693-2696,2698-2701,2703-2706,2708-2711,2713-2716,2718-2721,2723-2726,2729,2735-2739,2741-2742,2745-2749,2751-2754,2758-2764,2766-2769,2771-2774,2776-2779,2781-2784,2786-2789,2791-2794,2796-2799,2801-2804,2806-2809,2811-2814,2816-2819,2821-2824,2826-2829,2831-2834,2836-2839,2841-2844,2847,2853-2857,2859-2860,2863-2867,2869-2872,2876-2882,2884-2887,2889-2892,2894-2897,2899-2902,2904-2907,2909-2912,2914-2917,2919-2922,2924-2927,2929-2932,2934-2937,2939-2942,2944-2947,2949-2952,2954-2957,2959-2962,2965,2971-2975,2977-2978,2981-2985,2987-2990,2994-3000,3002-3005,3007-3010,3012-3015,3017-3020,3022-3025,3027-3030,3032-3035,3037-3040,3042-3045,3047-3050,3052-3055,3057-3060,3062-3065,3067-3070,3072-3075,3077-3080,3083,3089-3093,3095-3096,3099-3103,3105-3108,3112-3118,3120-3123,3125-3128,3130-3133,3135-3138,3140-3143,3145-3148,3150-3153,3155-3158,3160-3163,3165-3168,3170-3173,3175-3178,3180-3183,3185-3188,3190-3193,3195-3198,3201,3207-3211,3213-3214,3217-3221,3223-3226,3230-3236,3238-3241,3243-3246,3248-3251,3253-3256,3258-3261,3263-3266,3268-3271,3273-3276,3278-3281,3283-3286,3288-3291,3293-3296,3298-3301,3303-3306,3308-3311,3313-3316,3318-3321,3324,3330-3336,3338-3339,3342-3346,3349-3350,3352-3356,3360-3366,3368-3371,3373-3376,3378-3381,3383-3386,3388-3391,3393-3396,3398-3401,3403-3406,3408-3411,3413-3416,3418-3421,3423-3426,3428-3431,3433-3436,3438-3441,3443-3446,3450-3454,3456-3459,3461-3464,3466-3469,3472-3473,3475-3479,3481-3484,3486-3489,3491-3494,3497,3503-3507,3509-3510,3513-3517,3519-3522,3526-3532,3534-3537,3539-3542,3544-3547,3549-3552,3554-3557,3559-3562,3564-3567,3569-3572,3574-3577,3579-3582,3584-3587,3589-3592,3594-3597,3599-3602,3604-3607,3609-3612,3614-3617,3619-3622,3624-3627,3629-3632,3634-3637,3639-3642,3645,3651-3655,3657-3658,3661-3665,3667-3670,3674-3680,3682-3685,3687-3690,3692-3695,3697-3700,3702-3705,3707-3710,3712-3715,3717-3720,3722-3725,3727-3730,3732-3735,3737-3740,3742-3745,3747-3750,3752-3755,3757-3760,3762-3765,3767-3770,3774-3778,3780-3783,3785-3788,3790-3793,3795-3798,3800-3803,3805-3808,3810-3813,3815-3818,3821,3827-3832,3834-3835,3838-3842,3844-3847,3851-3857,3859-3862,3864-3867,3869-3872,3874-3877,3879-3882,3884-3887,3889-3892,3894-3897,3899-3902,3904-3907,3909-3912,3914-3917,3919-3922,3924-3927,3929-3932,3936-3940,3942-3945,3947-3950,3952-3955,3957-3960,3962-3965,3967-3970,3972-3975,3977-3980,3983,3989-3994,3996-3997,4000-4004,4006-4009,4013-4019,4021-4024,4026-4029,4031-4034,4036-4039,4041-4044,4046-4049,4051-4054,4056-4059,4061-4064,4066-4069,4071-4074,4076-4079,4081-4084,4086-4089,4091-4094,4098-4102,4104-4107,4109-4112,4114-4117,4119-4122,4124-4127,4129-4132,4134-4137,4139-4142,4145,4151-4157,4159-4160,4163-4167,4169-4172,4176-4182,4184-4187,4189-4192,4194-4197,4199-4202,4204-4207,4209-4212,4214-4217,4219-4222,4224-4227,4229-4232,4234-4237,4239-4242,4244-4247,4249-4252,4254-4257,4261-4265,4267-4270,4272-4275,4277-4280,4282-4285,4287-4290,4292-4295,4297-4300,4302-4305,4308,4314-4321,4323-4324,4327-4331,4333-4336,4340-4346,4348-4351,4353-4356,4358-4361,4363-4366,4368-4371,4373-4376,4378-4381,4383-4386,4388-4391,4393-4396,4398-4401,4403-4406,4408-4411,4413-4416,4418-4421,4425-4429,4431-4434,4436-4439,4441-4444,4446-4449,4451-4454,4456-4459,4461-4464,4466-4469,4472,4478-4485,4487-4488,4491-4495,4497-4500,4504-4510,4512-4515,4517-4520,4522-4525,4527-4530,4532-4535,4537-4540,4542-4545,4547-4550,4552-4555,4557-4560,4562-4565,4567-4570,4572-4575,4577-4580,4582-4585,4589-4593,4595-4598,4600-4603,4605-4608,4610-4613,4615-4618,4620-4623,4625-4628,4630-4633,4636,4642-4649,4651-4652,4655-4659,4661-4664,4668-4674,4676-4679,4681-4684,4686-4689,4691-4694,4696-4699,4701-4704,4706-4709,4711-4714,4716-4719,4721-4724,4726-4729,4731-4734,4736-4739,4741-4744,4746-4749,4753-4757,4759-4762,4764-4767,4769-4772,4774-4777,4779-4782,4784-4787,4789-4792,4794-4797,4800,4806-4811,4813-4814,4817-4821,4823-4826,4830-4836,4838-4841,4843-4846,4848-4851,4853-4856,4858-4861,4863-4866,4868-4871,4873-4876,4878-4881,4883-4886,4888-4891,4893-4896,4898-4901,4903-4906,4908-4911,4913-4916,4918-4921,4925-4929,4931-4934,4936-4939,4942-4944,4947-4951,4953-4956,4958-4961,4963-4966,4969-4971,4974-4978,4980-4983,4985-4988,4990-4993,4995-4998,5000-5003,5006,5012-5017,5019-5020,5023-5027,5029-5032,5036-5042,5044-5047,5049-5052,5054-5057,5059-5062,5064-5067,5069-5072,5074-5077,5079-5082,5084-5087,5089-5092,5094-5097,5099-5102,5104-5107,5109-5112,5114-5117,5121-5125,5127-5130,5132-5135,5138-5140,5143-5147,5149-5152,5154-5157,5159-5162,5165-5167,5170-5174,5176-5179,5181-5184,5186-5189,5191-5194,5197,5203-5208,5210-5211,5214-5218,5220-5223,5227-5233,5235-5238,5240-5243,5245-5248,5250-5253,5255-5258,5260-5263,5265-5268,5270-5273,5275-5278,5280-5283,5285-5288,5290-5293,5295-5298,5300-5303,5305-5308,5310-5313,5315-5318,5320-5323,5325-5328,5330-5333,5336-5337,5340-5344,5346-5349,5351-5354,5358,5361-5365,5367-5370,5373,5379-5384,5386-5387,5390-5394,5396-5399,5403-5409,5411-5414,5416-5419,5421-5424,5426-5429,5431-5434,5436-5439,5441-5444,5446-5449,5451-5454,5456-5459,5461-5464,5466-5469,5471-5474,5476-5479,5481-5484,5486-5489,5491-5494,5496-5499,5503,5506,5509-5513,5515-5518,5520-5523,5525-5528,5530-5533,5535-5538,5540-5543,5546-5547,5549-5553,5555-5558,5560-5563,5565-5568,5570-5573,5575-5578,5581,5583-5585");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "utb_ProcBaseCtrl.v", 5591, 11, ".top", "v_line/top", "block", "5591-5592");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "utb_ProcBaseCtrl.v", 5589, 10, ".top", "v_line/top", "block", "5589-5591");
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
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "ProcBaseCtrl.v", 31, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "mem_action_M", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "ProcBaseCtrl.v", 35, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "mngr2proc_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "ProcBaseCtrl.v", 36, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "mngr2proc_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "ProcBaseCtrl.v", 37, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "proc2mngr_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "ProcBaseCtrl.v", 38, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "proc2mngr_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "ProcBaseCtrl.v", 42, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "reg_en_F", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "ProcBaseCtrl.v", 43, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "pc_sel_F[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "ProcBaseCtrl.v", 43, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "pc_sel_F[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "ProcBaseCtrl.v", 45, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "reg_en_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "ProcBaseCtrl.v", 46, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "op1_sel_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "ProcBaseCtrl.v", 47, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "op2_sel_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "ProcBaseCtrl.v", 47, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "op2_sel_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "ProcBaseCtrl.v", 48, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "csrr_sel_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "ProcBaseCtrl.v", 48, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "csrr_sel_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "ProcBaseCtrl.v", 49, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "imm_type_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "ProcBaseCtrl.v", 49, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "imm_type_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "ProcBaseCtrl.v", 49, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "imm_type_D[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "ProcBaseCtrl.v", 50, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "imul_req_val_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "ProcBaseCtrl.v", 52, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "reg_en_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "ProcBaseCtrl.v", 53, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "alu_fn_X[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "ProcBaseCtrl.v", 53, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "alu_fn_X[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "ProcBaseCtrl.v", 53, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "alu_fn_X[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "ProcBaseCtrl.v", 53, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "alu_fn_X[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "ProcBaseCtrl.v", 54, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "ex_result_sel_X[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "ProcBaseCtrl.v", 54, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "ex_result_sel_X[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "ProcBaseCtrl.v", 56, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "reg_en_M", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "ProcBaseCtrl.v", 57, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "wb_result_sel_M", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "ProcBaseCtrl.v", 59, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "reg_en_W", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "ProcBaseCtrl.v", 60, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_waddr_W[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "ProcBaseCtrl.v", 60, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_waddr_W[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "ProcBaseCtrl.v", 60, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_waddr_W[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "ProcBaseCtrl.v", 60, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_waddr_W[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "ProcBaseCtrl.v", 60, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_waddr_W[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "ProcBaseCtrl.v", 61, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_wen_W", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "ProcBaseCtrl.v", 62, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "stats_en_wen_W", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "ProcBaseCtrl.v", 64, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "imul_resp_rdy_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "ProcBaseCtrl.v", 68, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_D[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "ProcBaseCtrl.v", 69, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "imul_req_rdy_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "ProcBaseCtrl.v", 71, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "br_cond_eq_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "ProcBaseCtrl.v", 72, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "br_cond_lt_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "ProcBaseCtrl.v", 73, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "br_cond_ltu_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "ProcBaseCtrl.v", 74, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "imul_resp_val_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "ProcBaseCtrl.v", 78, 23, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "commit_inst", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "ProcBaseCtrl.v", 102, 9, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "val_F", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "ProcBaseCtrl.v", 103, 9, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "val_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "ProcBaseCtrl.v", 104, 9, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "val_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "ProcBaseCtrl.v", 105, 9, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "val_M", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "ProcBaseCtrl.v", 106, 9, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "val_W", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "ProcBaseCtrl.v", 118, 9, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "ostall_F", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "ProcBaseCtrl.v", 119, 9, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "ostall_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "ProcBaseCtrl.v", 120, 9, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "ostall_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "ProcBaseCtrl.v", 121, 9, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "ostall_M", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "ProcBaseCtrl.v", 122, 9, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "ostall_W", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "ProcBaseCtrl.v", 128, 9, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "stall_F", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "ProcBaseCtrl.v", 129, 9, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "stall_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "ProcBaseCtrl.v", 130, 9, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "stall_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "ProcBaseCtrl.v", 131, 9, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "stall_M", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "ProcBaseCtrl.v", 132, 9, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "stall_W", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "ProcBaseCtrl.v", 139, 9, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "osquash_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "ProcBaseCtrl.v", 140, 9, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "osquash_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "ProcBaseCtrl.v", 147, 9, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "squash_F", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "ProcBaseCtrl.v", 148, 9, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "squash_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "ProcBaseCtrl.v", 163, 10, ".top.DUT", "v_branch/lab2_proc_ProcBaseCtrl", "if", "163-164");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "ProcBaseCtrl.v", 163, 11, ".top.DUT", "v_branch/lab2_proc_ProcBaseCtrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "ProcBaseCtrl.v", 161, 5, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "elsif", "161-162");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "ProcBaseCtrl.v", 160, 3, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "block", "160");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "ProcBaseCtrl.v", 169, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "pc_redirect_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "ProcBaseCtrl.v", 170, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "pc_sel_X[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "ProcBaseCtrl.v", 170, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "pc_sel_X[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "ProcBaseCtrl.v", 171, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "pc_sel_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "ProcBaseCtrl.v", 171, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "pc_sel_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "ProcBaseCtrl.v", 179, 10, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "if", "179-180");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "ProcBaseCtrl.v", 179, 11, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "else", "181-182");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "ProcBaseCtrl.v", 177, 5, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "elsif", "177-178");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "ProcBaseCtrl.v", 176, 3, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "block", "176");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "ProcBaseCtrl.v", 209, 10, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "next_val_F", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "ProcBaseCtrl.v", 225, 10, ".top.DUT", "v_branch/lab2_proc_ProcBaseCtrl", "if", "225-226");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "ProcBaseCtrl.v", 225, 11, ".top.DUT", "v_branch/lab2_proc_ProcBaseCtrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "ProcBaseCtrl.v", 223, 5, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "elsif", "223-224");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "ProcBaseCtrl.v", 222, 3, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "block", "222");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "ProcBaseCtrl.v", 231, 17, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_rd_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "ProcBaseCtrl.v", 231, 17, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_rd_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "ProcBaseCtrl.v", 231, 17, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_rd_D[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "ProcBaseCtrl.v", 231, 17, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_rd_D[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "ProcBaseCtrl.v", 231, 17, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_rd_D[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "ProcBaseCtrl.v", 232, 17, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_rs1_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "ProcBaseCtrl.v", 232, 17, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_rs1_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "ProcBaseCtrl.v", 232, 17, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_rs1_D[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "ProcBaseCtrl.v", 232, 17, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_rs1_D[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "ProcBaseCtrl.v", 232, 17, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_rs1_D[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "ProcBaseCtrl.v", 233, 17, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_rs2_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "ProcBaseCtrl.v", 233, 17, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_rs2_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "ProcBaseCtrl.v", 233, 17, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_rs2_D[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "ProcBaseCtrl.v", 233, 17, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_rs2_D[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "ProcBaseCtrl.v", 233, 17, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_rs2_D[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "ProcBaseCtrl.v", 234, 18, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_csr_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "ProcBaseCtrl.v", 234, 18, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_csr_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "ProcBaseCtrl.v", 234, 18, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_csr_D[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "ProcBaseCtrl.v", 234, 18, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_csr_D[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "ProcBaseCtrl.v", 234, 18, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_csr_D[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "ProcBaseCtrl.v", 234, 18, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_csr_D[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "ProcBaseCtrl.v", 234, 18, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_csr_D[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "ProcBaseCtrl.v", 234, 18, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_csr_D[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "ProcBaseCtrl.v", 234, 18, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_csr_D[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "ProcBaseCtrl.v", 234, 18, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_csr_D[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "ProcBaseCtrl.v", 234, 18, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_csr_D[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "ProcBaseCtrl.v", 234, 18, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_csr_D[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "ProcBaseCtrl.v", 336, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_val_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "ProcBaseCtrl.v", 337, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "j_type_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "ProcBaseCtrl.v", 337, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "j_type_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "ProcBaseCtrl.v", 338, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "br_type_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "ProcBaseCtrl.v", 338, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "br_type_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "ProcBaseCtrl.v", 338, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "br_type_D[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "ProcBaseCtrl.v", 339, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rs1_en_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "ProcBaseCtrl.v", 340, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rs2_en_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "ProcBaseCtrl.v", 341, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "alu_fn_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "ProcBaseCtrl.v", 341, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "alu_fn_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "ProcBaseCtrl.v", 341, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "alu_fn_D[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "ProcBaseCtrl.v", 341, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "alu_fn_D[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "ProcBaseCtrl.v", 342, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "ex_result_sel_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "ProcBaseCtrl.v", 342, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "ex_result_sel_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "ProcBaseCtrl.v", 343, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "mul_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "ProcBaseCtrl.v", 344, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "dmem_reqstream_type_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "ProcBaseCtrl.v", 344, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "dmem_reqstream_type_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "ProcBaseCtrl.v", 345, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "wb_result_sel_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "ProcBaseCtrl.v", 346, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_wen_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "ProcBaseCtrl.v", 347, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "csrr_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "ProcBaseCtrl.v", 348, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "csrw_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "ProcBaseCtrl.v", 349, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "proc2mngr_val_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "ProcBaseCtrl.v", 350, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "mngr2proc_rdy_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "ProcBaseCtrl.v", 351, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "stats_en_wen_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "ProcBaseCtrl.v", 352, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "pc_redirect_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "ProcBaseCtrl.v", 354, 8, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "block", "354,373-389");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "ProcBaseCtrl.v", 401, 53, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "401");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "ProcBaseCtrl.v", 404, 53, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "404");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "ProcBaseCtrl.v", 405, 53, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "405");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "ProcBaseCtrl.v", 406, 53, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "406");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "ProcBaseCtrl.v", 407, 53, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "407");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "ProcBaseCtrl.v", 408, 54, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "408");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "ProcBaseCtrl.v", 409, 53, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "409");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "ProcBaseCtrl.v", 410, 53, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "410");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "ProcBaseCtrl.v", 411, 52, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "411");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "ProcBaseCtrl.v", 412, 53, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "412");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "ProcBaseCtrl.v", 413, 53, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "413");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "ProcBaseCtrl.v", 414, 53, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "414");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "ProcBaseCtrl.v", 417, 52, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "417");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "ProcBaseCtrl.v", 418, 52, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "418");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "ProcBaseCtrl.v", 419, 53, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "419");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "ProcBaseCtrl.v", 420, 52, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "420");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "ProcBaseCtrl.v", 421, 52, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "421");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "ProcBaseCtrl.v", 422, 51, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "422");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "ProcBaseCtrl.v", 423, 52, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "423");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "ProcBaseCtrl.v", 424, 52, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "424");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "ProcBaseCtrl.v", 425, 52, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "425");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "ProcBaseCtrl.v", 426, 53, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "426");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "ProcBaseCtrl.v", 427, 51, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "427");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "ProcBaseCtrl.v", 430, 53, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "430");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "ProcBaseCtrl.v", 431, 52, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "431");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "ProcBaseCtrl.v", 434, 53, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "434");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "ProcBaseCtrl.v", 435, 53, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "435");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "ProcBaseCtrl.v", 436, 53, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "436");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "ProcBaseCtrl.v", 437, 52, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "437");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "ProcBaseCtrl.v", 438, 53, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "438");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "ProcBaseCtrl.v", 439, 52, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "439");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "ProcBaseCtrl.v", 442, 54, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "442");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "ProcBaseCtrl.v", 443, 54, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "443");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "ProcBaseCtrl.v", 446, 52, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "446");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "ProcBaseCtrl.v", 447, 52, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "447");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "ProcBaseCtrl.v", 450, 7, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "case", "450");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "ProcBaseCtrl.v", 395, 3, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "block", "395,397");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "ProcBaseCtrl.v", 455, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_waddr_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "ProcBaseCtrl.v", 455, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_waddr_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "ProcBaseCtrl.v", 455, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_waddr_D[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "ProcBaseCtrl.v", 455, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_waddr_D[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "ProcBaseCtrl.v", 455, 15, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_waddr_D[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "ProcBaseCtrl.v", 470, 5, ".top.DUT", "v_branch/lab2_proc_ProcBaseCtrl", "if", "470-471");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "ProcBaseCtrl.v", 470, 6, ".top.DUT", "v_branch/lab2_proc_ProcBaseCtrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "ProcBaseCtrl.v", 472, 5, ".top.DUT", "v_branch/lab2_proc_ProcBaseCtrl", "if", "472-473");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "ProcBaseCtrl.v", 472, 6, ".top.DUT", "v_branch/lab2_proc_ProcBaseCtrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "ProcBaseCtrl.v", 474, 5, ".top.DUT", "v_branch/lab2_proc_ProcBaseCtrl", "if", "474-475");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "ProcBaseCtrl.v", 474, 6, ".top.DUT", "v_branch/lab2_proc_ProcBaseCtrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "ProcBaseCtrl.v", 476, 5, ".top.DUT", "v_branch/lab2_proc_ProcBaseCtrl", "if", "476-477");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "ProcBaseCtrl.v", 476, 6, ".top.DUT", "v_branch/lab2_proc_ProcBaseCtrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "ProcBaseCtrl.v", 478, 5, ".top.DUT", "v_branch/lab2_proc_ProcBaseCtrl", "if", "478-479");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "ProcBaseCtrl.v", 478, 6, ".top.DUT", "v_branch/lab2_proc_ProcBaseCtrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "ProcBaseCtrl.v", 464, 3, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "block", "464-468");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "ProcBaseCtrl.v", 485, 5, ".top.DUT", "v_branch/lab2_proc_ProcBaseCtrl", "if", "485-487");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "ProcBaseCtrl.v", 485, 6, ".top.DUT", "v_branch/lab2_proc_ProcBaseCtrl", "else", "489-491");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "ProcBaseCtrl.v", 484, 3, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "block", "484");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "ProcBaseCtrl.v", 499, 10, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "ostall_mngr2proc_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "ProcBaseCtrl.v", 504, 10, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "ostall_waddr_X_rs1_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "ProcBaseCtrl.v", 511, 10, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "ostall_waddr_M_rs1_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "ProcBaseCtrl.v", 518, 10, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "ostall_waddr_W_rs1_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "ProcBaseCtrl.v", 525, 10, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "ostall_waddr_X_rs2_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "ProcBaseCtrl.v", 532, 10, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "ostall_waddr_M_rs2_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "ProcBaseCtrl.v", 539, 10, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "ostall_waddr_W_rs2_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "ProcBaseCtrl.v", 546, 10, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "ostall_imul_req_rdy_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "ProcBaseCtrl.v", 552, 10, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "ostall_hazard_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "ProcBaseCtrl.v", 573, 10, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "next_val_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "ProcBaseCtrl.v", 584, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "ProcBaseCtrl.v", 584, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "ProcBaseCtrl.v", 584, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "ProcBaseCtrl.v", 584, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "ProcBaseCtrl.v", 584, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "ProcBaseCtrl.v", 584, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "ProcBaseCtrl.v", 584, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "ProcBaseCtrl.v", 584, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "ProcBaseCtrl.v", 584, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "ProcBaseCtrl.v", 584, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "ProcBaseCtrl.v", 584, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "ProcBaseCtrl.v", 584, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "ProcBaseCtrl.v", 584, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "ProcBaseCtrl.v", 584, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "ProcBaseCtrl.v", 584, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "ProcBaseCtrl.v", 584, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "ProcBaseCtrl.v", 584, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "ProcBaseCtrl.v", 584, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "ProcBaseCtrl.v", 584, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "ProcBaseCtrl.v", 584, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "ProcBaseCtrl.v", 584, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "ProcBaseCtrl.v", 584, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "ProcBaseCtrl.v", 584, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "ProcBaseCtrl.v", 584, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "ProcBaseCtrl.v", 584, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "ProcBaseCtrl.v", 584, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "ProcBaseCtrl.v", 584, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "ProcBaseCtrl.v", 584, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "ProcBaseCtrl.v", 584, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "ProcBaseCtrl.v", 584, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "ProcBaseCtrl.v", 584, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "ProcBaseCtrl.v", 584, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_X[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "ProcBaseCtrl.v", 585, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "dmem_reqstream_type_X[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "ProcBaseCtrl.v", 585, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "dmem_reqstream_type_X[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "ProcBaseCtrl.v", 586, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "wb_result_sel_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "ProcBaseCtrl.v", 587, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_wen_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "ProcBaseCtrl.v", 588, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_waddr_X[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "ProcBaseCtrl.v", 588, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_waddr_X[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "ProcBaseCtrl.v", 588, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_waddr_X[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "ProcBaseCtrl.v", 588, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_waddr_X[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "ProcBaseCtrl.v", 588, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_waddr_X[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "ProcBaseCtrl.v", 589, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "proc2mngr_val_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "ProcBaseCtrl.v", 590, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "stats_en_wen_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "ProcBaseCtrl.v", 591, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "br_type_X[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "ProcBaseCtrl.v", 591, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "br_type_X[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "ProcBaseCtrl.v", 591, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "br_type_X[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "ProcBaseCtrl.v", 592, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "j_type_X[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "ProcBaseCtrl.v", 592, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "j_type_X[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "ProcBaseCtrl.v", 600, 10, ".top.DUT", "v_branch/lab2_proc_ProcBaseCtrl", "if", "600-612");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "ProcBaseCtrl.v", 600, 11, ".top.DUT", "v_branch/lab2_proc_ProcBaseCtrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "ProcBaseCtrl.v", 597, 5, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "elsif", "597-598");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "ProcBaseCtrl.v", 596, 3, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "block", "596");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "ProcBaseCtrl.v", 642, 10, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "if", "642-644");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[264]), first, "ProcBaseCtrl.v", 642, 11, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "else", "646-648");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[265]), first, "ProcBaseCtrl.v", 638, 10, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "elsif", "638-640");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[266]), first, "ProcBaseCtrl.v", 634, 10, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "elsif", "634-636");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[267]), first, "ProcBaseCtrl.v", 630, 10, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "elsif", "630-632");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[268]), first, "ProcBaseCtrl.v", 626, 10, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "elsif", "626-628");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[269]), first, "ProcBaseCtrl.v", 622, 10, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "elsif", "622-624");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[270]), first, "ProcBaseCtrl.v", 618, 5, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "elsif", "618-620");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[271]), first, "ProcBaseCtrl.v", 617, 3, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "block", "617");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[272]), first, "ProcBaseCtrl.v", 654, 9, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "ostall_imul_resp_val_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "ProcBaseCtrl.v", 659, 9, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "ostall_dmem_reqstream_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "ProcBaseCtrl.v", 684, 14, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "if", "684-685");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "ProcBaseCtrl.v", 684, 15, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "else", "686-687");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "ProcBaseCtrl.v", 682, 5, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "elsif", "682-683");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[277]), first, "ProcBaseCtrl.v", 681, 3, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "block", "681");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[278]), first, "ProcBaseCtrl.v", 697, 10, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "next_val_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[279]), first, "ProcBaseCtrl.v", 708, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[280]), first, "ProcBaseCtrl.v", 708, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[281]), first, "ProcBaseCtrl.v", 708, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[282]), first, "ProcBaseCtrl.v", 708, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[283]), first, "ProcBaseCtrl.v", 708, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[284]), first, "ProcBaseCtrl.v", 708, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[285]), first, "ProcBaseCtrl.v", 708, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[286]), first, "ProcBaseCtrl.v", 708, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[287]), first, "ProcBaseCtrl.v", 708, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[288]), first, "ProcBaseCtrl.v", 708, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[289]), first, "ProcBaseCtrl.v", 708, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[290]), first, "ProcBaseCtrl.v", 708, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "ProcBaseCtrl.v", 708, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "ProcBaseCtrl.v", 708, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[293]), first, "ProcBaseCtrl.v", 708, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[294]), first, "ProcBaseCtrl.v", 708, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[295]), first, "ProcBaseCtrl.v", 708, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[296]), first, "ProcBaseCtrl.v", 708, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[297]), first, "ProcBaseCtrl.v", 708, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[298]), first, "ProcBaseCtrl.v", 708, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[299]), first, "ProcBaseCtrl.v", 708, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[300]), first, "ProcBaseCtrl.v", 708, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[301]), first, "ProcBaseCtrl.v", 708, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[302]), first, "ProcBaseCtrl.v", 708, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[303]), first, "ProcBaseCtrl.v", 708, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[304]), first, "ProcBaseCtrl.v", 708, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[305]), first, "ProcBaseCtrl.v", 708, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[306]), first, "ProcBaseCtrl.v", 708, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[307]), first, "ProcBaseCtrl.v", 708, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[308]), first, "ProcBaseCtrl.v", 708, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[309]), first, "ProcBaseCtrl.v", 708, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[310]), first, "ProcBaseCtrl.v", 708, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_M[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[311]), first, "ProcBaseCtrl.v", 709, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "dmem_reqstream_type_M[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[312]), first, "ProcBaseCtrl.v", 709, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "dmem_reqstream_type_M[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[313]), first, "ProcBaseCtrl.v", 710, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_wen_M", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[314]), first, "ProcBaseCtrl.v", 711, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_waddr_M[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[315]), first, "ProcBaseCtrl.v", 711, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_waddr_M[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[316]), first, "ProcBaseCtrl.v", 711, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_waddr_M[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[317]), first, "ProcBaseCtrl.v", 711, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_waddr_M[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[318]), first, "ProcBaseCtrl.v", 711, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_waddr_M[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[319]), first, "ProcBaseCtrl.v", 712, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "proc2mngr_val_M", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[320]), first, "ProcBaseCtrl.v", 713, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "stats_en_wen_M", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[321]), first, "ProcBaseCtrl.v", 721, 10, ".top.DUT", "v_branch/lab2_proc_ProcBaseCtrl", "if", "721-729");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[322]), first, "ProcBaseCtrl.v", 721, 11, ".top.DUT", "v_branch/lab2_proc_ProcBaseCtrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[323]), first, "ProcBaseCtrl.v", 718, 5, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "elsif", "718-719");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[324]), first, "ProcBaseCtrl.v", 717, 3, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "block", "717");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[325]), first, "ProcBaseCtrl.v", 746, 10, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "next_val_M", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[326]), first, "ProcBaseCtrl.v", 757, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[327]), first, "ProcBaseCtrl.v", 757, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[328]), first, "ProcBaseCtrl.v", 757, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[329]), first, "ProcBaseCtrl.v", 757, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[330]), first, "ProcBaseCtrl.v", 757, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[331]), first, "ProcBaseCtrl.v", 757, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[332]), first, "ProcBaseCtrl.v", 757, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[333]), first, "ProcBaseCtrl.v", 757, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[334]), first, "ProcBaseCtrl.v", 757, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[335]), first, "ProcBaseCtrl.v", 757, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[336]), first, "ProcBaseCtrl.v", 757, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[337]), first, "ProcBaseCtrl.v", 757, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[338]), first, "ProcBaseCtrl.v", 757, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[339]), first, "ProcBaseCtrl.v", 757, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[340]), first, "ProcBaseCtrl.v", 757, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[341]), first, "ProcBaseCtrl.v", 757, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[342]), first, "ProcBaseCtrl.v", 757, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[343]), first, "ProcBaseCtrl.v", 757, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[344]), first, "ProcBaseCtrl.v", 757, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[345]), first, "ProcBaseCtrl.v", 757, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[346]), first, "ProcBaseCtrl.v", 757, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[347]), first, "ProcBaseCtrl.v", 757, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[348]), first, "ProcBaseCtrl.v", 757, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[349]), first, "ProcBaseCtrl.v", 757, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[350]), first, "ProcBaseCtrl.v", 757, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[351]), first, "ProcBaseCtrl.v", 757, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[352]), first, "ProcBaseCtrl.v", 757, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "ProcBaseCtrl.v", 757, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[354]), first, "ProcBaseCtrl.v", 757, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[355]), first, "ProcBaseCtrl.v", 757, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[356]), first, "ProcBaseCtrl.v", 757, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[357]), first, "ProcBaseCtrl.v", 757, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "inst_W[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[358]), first, "ProcBaseCtrl.v", 758, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "proc2mngr_val_W", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[359]), first, "ProcBaseCtrl.v", 759, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "rf_wen_pending_W", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[360]), first, "ProcBaseCtrl.v", 760, 16, ".top.DUT", "v_toggle/lab2_proc_ProcBaseCtrl", "stats_en_wen_pending_W", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[361]), first, "ProcBaseCtrl.v", 768, 10, ".top.DUT", "v_branch/lab2_proc_ProcBaseCtrl", "if", "768-774");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[362]), first, "ProcBaseCtrl.v", 768, 11, ".top.DUT", "v_branch/lab2_proc_ProcBaseCtrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[363]), first, "ProcBaseCtrl.v", 765, 5, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "elsif", "765-766");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[364]), first, "ProcBaseCtrl.v", 764, 3, ".top.DUT", "v_line/lab2_proc_ProcBaseCtrl", "block", "764");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "tinyrv2_encoding.v", 374, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "opcode[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "tinyrv2_encoding.v", 374, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "opcode[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "tinyrv2_encoding.v", 374, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "opcode[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "tinyrv2_encoding.v", 374, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "opcode[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "tinyrv2_encoding.v", 374, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "opcode[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "tinyrv2_encoding.v", 374, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "opcode[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "tinyrv2_encoding.v", 374, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "opcode[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "tinyrv2_encoding.v", 375, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rd[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "tinyrv2_encoding.v", 375, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rd[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "tinyrv2_encoding.v", 375, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rd[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "tinyrv2_encoding.v", 375, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rd[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "tinyrv2_encoding.v", 375, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rd[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "tinyrv2_encoding.v", 376, 21, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rs1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "tinyrv2_encoding.v", 376, 21, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rs1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "tinyrv2_encoding.v", 376, 21, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rs1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "tinyrv2_encoding.v", 376, 21, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rs1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "tinyrv2_encoding.v", 376, 21, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rs1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "tinyrv2_encoding.v", 377, 21, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rs2[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "tinyrv2_encoding.v", 377, 21, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rs2[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "tinyrv2_encoding.v", 377, 21, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rs2[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "tinyrv2_encoding.v", 377, 21, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rs2[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "tinyrv2_encoding.v", 377, 21, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rs2[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "tinyrv2_encoding.v", 378, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "funct3[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "tinyrv2_encoding.v", 378, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "funct3[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "tinyrv2_encoding.v", 378, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "funct3[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[365]), first, "tinyrv2_encoding.v", 379, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "funct7[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[366]), first, "tinyrv2_encoding.v", 379, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "funct7[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[367]), first, "tinyrv2_encoding.v", 379, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "funct7[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[368]), first, "tinyrv2_encoding.v", 379, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "funct7[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[369]), first, "tinyrv2_encoding.v", 379, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "funct7[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[370]), first, "tinyrv2_encoding.v", 379, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "funct7[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[371]), first, "tinyrv2_encoding.v", 379, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "funct7[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "tinyrv2_encoding.v", 380, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "csr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "tinyrv2_encoding.v", 380, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "csr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "tinyrv2_encoding.v", 380, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "csr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "tinyrv2_encoding.v", 380, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "csr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "tinyrv2_encoding.v", 380, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "csr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "tinyrv2_encoding.v", 380, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "csr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "tinyrv2_encoding.v", 380, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "csr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "tinyrv2_encoding.v", 380, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "csr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "tinyrv2_encoding.v", 380, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "csr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "tinyrv2_encoding.v", 380, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "csr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "tinyrv2_encoding.v", 380, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "csr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "tinyrv2_encoding.v", 380, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "csr[11]", "");
}

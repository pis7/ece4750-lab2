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
    vlSymsp->__Vcoverage[122].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[201].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[204].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[209].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[214].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
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
    CData/*0:0*/ top__DOT__DUT__DOT____VdfgTmp_h5e743be1__0;
    top__DOT__DUT__DOT____VdfgTmp_h5e743be1__0 = 0;
    CData/*0:0*/ top__DOT__DUT__DOT____VdfgTmp_hb7aab7a1__0;
    top__DOT__DUT__DOT____VdfgTmp_hb7aab7a1__0 = 0;
    CData/*0:0*/ top__DOT__DUT__DOT____VdfgTmp_h699142ba__0;
    top__DOT__DUT__DOT____VdfgTmp_h699142ba__0 = 0;
    CData/*0:0*/ top__DOT__DUT__DOT____VdfgTmp_hb97078a9__0;
    top__DOT__DUT__DOT____VdfgTmp_hb97078a9__0 = 0;
    CData/*0:0*/ top__DOT__DUT__DOT____VdfgTmp_hd5c67ea2__0;
    top__DOT__DUT__DOT____VdfgTmp_hd5c67ea2__0 = 0;
    CData/*0:0*/ top__DOT__DUT__DOT____VdfgTmp_h2c662355__0;
    top__DOT__DUT__DOT____VdfgTmp_h2c662355__0 = 0;
    CData/*0:0*/ top__DOT__DUT__DOT____VdfgTmp_hae8ca473__0;
    top__DOT__DUT__DOT____VdfgTmp_hae8ca473__0 = 0;
    CData/*0:0*/ top__DOT__DUT__DOT____VdfgTmp_he3f0392a__0;
    top__DOT__DUT__DOT____VdfgTmp_he3f0392a__0 = 0;
    CData/*0:0*/ top__DOT__DUT__DOT____VdfgTmp_h622529b5__0;
    top__DOT__DUT__DOT____VdfgTmp_h622529b5__0 = 0;
    CData/*0:0*/ top__DOT__DUT__DOT____VdfgTmp_h145eec55__0;
    top__DOT__DUT__DOT____VdfgTmp_h145eec55__0 = 0;
    CData/*0:0*/ top__DOT__DUT__DOT____VdfgTmp_h9789577f__0;
    top__DOT__DUT__DOT____VdfgTmp_h9789577f__0 = 0;
    CData/*0:0*/ top__DOT__DUT__DOT____VdfgTmp_h60d4c986__0;
    top__DOT__DUT__DOT____VdfgTmp_h60d4c986__0 = 0;
    CData/*0:0*/ top__DOT__DUT__DOT____VdfgTmp_h3d0a317b__0;
    top__DOT__DUT__DOT____VdfgTmp_h3d0a317b__0 = 0;
    CData/*0:0*/ top__DOT__DUT__DOT____VdfgTmp_h06acbb32__0;
    top__DOT__DUT__DOT____VdfgTmp_h06acbb32__0 = 0;
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
                                            vlSymsp->__Vcoverage[177].fetch_add(1, std::memory_order_relaxed);
                                            vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
                                        }
                                        if ((0x17U 
                                             == (0x7fU 
                                                 & vlSelf->top__DOT__inst_D))) {
                                            vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
                                            vlSymsp->__Vcoverage[176].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    }
                                    if ((0x37U == (0x7fU 
                                                   & vlSelf->top__DOT__inst_D))) {
                                        vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
                                        vlSymsp->__Vcoverage[175].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                                if ((0x1013U == (0xfe00707fU 
                                                 & vlSelf->top__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[174].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((0x5013U == (0xfe00707fU 
                                             & vlSelf->top__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[173].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((0x40005013U == (0xfe00707fU 
                                             & vlSelf->top__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[172].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((0x3013U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[171].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((0x2013U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                    vlSymsp->__Vcoverage[170].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
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
                                                vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
                                                vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
                                            }
                                            if ((0x7063U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__inst_D))) {
                                                vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
                                                vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
                                            }
                                        }
                                        if ((0x5063U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__inst_D))) {
                                            vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
                                            vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    }
                                    if ((0x6063U == 
                                         (0x707fU & vlSelf->top__DOT__inst_D))) {
                                        vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
                                        vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                                if ((0x4063U == (0x707fU 
                                                 & vlSelf->top__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((0x63U == (0x707fU 
                                           & vlSelf->top__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[180].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((0x1063U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((0x67U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[178].fetch_add(1, std::memory_order_relaxed);
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
                                vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((0x1073U != (0x707fU 
                                             & vlSelf->top__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((0x2073U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((0x2023U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
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
                                        vlSymsp->__Vcoverage[169].fetch_add(1, std::memory_order_relaxed);
                                        vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    if ((0x6013U == 
                                         (0x707fU & vlSelf->top__DOT__inst_D))) {
                                        vlSymsp->__Vcoverage[168].fetch_add(1, std::memory_order_relaxed);
                                        vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                                if ((0x7013U == (0x707fU 
                                                 & vlSelf->top__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[167].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((0x13U == (0x707fU 
                                           & vlSelf->top__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[166].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((0x1033U == (0xfe00707fU 
                                         & vlSelf->top__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[165].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((0x5033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[164].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((0x40005033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                    vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[163].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((0x3033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                vlSymsp->__Vcoverage[162].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
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
                    vlSymsp->__Vcoverage[156].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
                }
                if ((0x40000033U != (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                    if ((0x2000033U != (0xfe00707fU 
                                        & vlSelf->top__DOT__inst_D))) {
                        if ((0x7033U != (0xfe00707fU 
                                         & vlSelf->top__DOT__inst_D))) {
                            if ((0x6033U == (0xfe00707fU 
                                             & vlSelf->top__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[159].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((0x6033U != (0xfe00707fU 
                                             & vlSelf->top__DOT__inst_D))) {
                                if ((0x4033U == (0xfe00707fU 
                                                 & vlSelf->top__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[160].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((0x4033U != (0xfe00707fU 
                                                 & vlSelf->top__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[161].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                        }
                        if ((0x7033U == (0xfe00707fU 
                                         & vlSelf->top__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[158].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((0x2000033U == (0xfe00707fU 
                                        & vlSelf->top__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
                    }
                }
            }
            if ((0x33U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((0x13U == vlSelf->top__DOT__inst_D)) {
            vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U != (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X))) {
        if ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X))) {
            vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
        }
        if ((2U != (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X))) {
            vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                  & (1U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                      & (2U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))))) {
            if (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                 & (3U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))) {
                vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                          & (3U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))))) {
                if (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                     & (4U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))) {
                    vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                              & (4U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))))) {
                    if (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                         & (5U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))) {
                        vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                  & (5U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))))) {
                        if (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                             & (6U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))) {
                            vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                      & (6U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))))) {
                            if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                          & (2U == (IData)(vlSelf->top__DOT__DUT__DOT__j_type_X)))))) {
                                vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
                            }
                            if (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                 & (2U == (IData)(vlSelf->top__DOT__DUT__DOT__j_type_X)))) {
                                vlSymsp->__Vcoverage[285].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
        }
        if (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
             & (2U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))) {
            vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
         & (1U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))) {
        vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__wb_result_sel_M 
            = vlSelf->top__DOT__wb_result_sel_M;
    }
    if (((IData)(vlSelf->top__DOT__br_cond_eq_X) ^ (IData)(vlSelf->top__DOT____Vtogcov__br_cond_eq_X))) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__br_cond_eq_X = vlSelf->top__DOT__br_cond_eq_X;
    }
    if (((IData)(vlSelf->top__DOT__br_cond_lt_X) ^ (IData)(vlSelf->top__DOT____Vtogcov__br_cond_lt_X))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__br_cond_lt_X = vlSelf->top__DOT__br_cond_lt_X;
    }
    if (((IData)(vlSelf->top__DOT__br_cond_ltu_X) ^ (IData)(vlSelf->top__DOT____Vtogcov__br_cond_ltu_X))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__br_cond_ltu_X 
            = vlSelf->top__DOT__br_cond_ltu_X;
    }
    if (((IData)(vlSelf->top__DOT__imul_req_rdy_D) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imul_req_rdy_D))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imul_req_rdy_D 
            = vlSelf->top__DOT__imul_req_rdy_D;
    }
    if (((IData)(vlSelf->top__DOT__imul_resp_val_X) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imul_resp_val_X))) {
        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imul_resp_val_X 
            = vlSelf->top__DOT__imul_resp_val_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__val_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__val_F))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__val_F 
            = vlSelf->top__DOT__DUT__DOT__val_F;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__val_D))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__val_D 
            = vlSelf->top__DOT__DUT__DOT__val_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__val_X))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__val_X 
            = vlSelf->top__DOT__DUT__DOT__val_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__val_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__val_M))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__val_M 
            = vlSelf->top__DOT__DUT__DOT__val_M;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__val_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__val_W))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__val_W 
            = vlSelf->top__DOT__DUT__DOT__val_W;
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__imul_req_rdy_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_imul_req_rdy_D)))) {
        vlSymsp->__Vcoverage[230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_imul_req_rdy_D 
            = (1U & (~ (IData)(vlSelf->top__DOT__imul_req_rdy_D)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__wb_result_sel_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_sel_X))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_sel_X 
            = vlSelf->top__DOT__DUT__DOT__wb_result_sel_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_X))) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_X 
            = vlSelf->top__DOT__DUT__DOT__rf_wen_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_val_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_val_X))) {
        vlSymsp->__Vcoverage[274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_val_X 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_val_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stats_en_wen_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_wen_X))) {
        vlSymsp->__Vcoverage[275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_wen_X 
            = vlSelf->top__DOT__DUT__DOT__stats_en_wen_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_M))) {
        vlSymsp->__Vcoverage[335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_M 
            = vlSelf->top__DOT__DUT__DOT__rf_wen_M;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_val_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_val_M))) {
        vlSymsp->__Vcoverage[341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_val_M 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_val_M;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stats_en_wen_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_wen_M))) {
        vlSymsp->__Vcoverage[342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_wen_M 
            = vlSelf->top__DOT__DUT__DOT__stats_en_wen_M;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_val_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_val_W))) {
        vlSymsp->__Vcoverage[380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_val_W 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_val_W;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_pending_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_pending_W))) {
        vlSymsp->__Vcoverage[381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_pending_W 
            = vlSelf->top__DOT__DUT__DOT__rf_wen_pending_W;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stats_en_wen_pending_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_wen_pending_W))) {
        vlSymsp->__Vcoverage[382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_wen_pending_W 
            = vlSelf->top__DOT__DUT__DOT__stats_en_wen_pending_W;
    }
    vlSelf->top__DOT__DUT__DOT__rf_waddr_D = (0x1fU 
                                              & (vlSelf->top__DOT__inst_D 
                                                 >> 7U));
    if ((1U & ((IData)(vlSelf->top__DOT__ex_result_sel_X) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__ex_result_sel_X)))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ex_result_sel_X 
            = ((2U & (IData)(vlSelf->top__DOT____Vtogcov__ex_result_sel_X)) 
               | (1U & (IData)(vlSelf->top__DOT__ex_result_sel_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__ex_result_sel_X) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__ex_result_sel_X)))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ex_result_sel_X 
            = ((1U & (IData)(vlSelf->top__DOT____Vtogcov__ex_result_sel_X)) 
               | (2U & (IData)(vlSelf->top__DOT__ex_result_sel_X)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_X)))) {
        vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_X 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_X)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_X)))) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_X 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_X)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__j_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__j_type_X)))) {
        vlSymsp->__Vcoverage[279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__j_type_X 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__j_type_X)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__j_type_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__j_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__j_type_X)))) {
        vlSymsp->__Vcoverage[280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__j_type_X 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__j_type_X)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__j_type_X)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_M)))) {
        vlSymsp->__Vcoverage[333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_M 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_M)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_M)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_M)))) {
        vlSymsp->__Vcoverage[334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_M 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_M)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_M)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__br_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_X)))) {
        vlSymsp->__Vcoverage[276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_X 
            = ((6U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_X)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__br_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_X)))) {
        vlSymsp->__Vcoverage[277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_X 
            = ((5U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_X)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__br_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_X)))) {
        vlSymsp->__Vcoverage[278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_X 
            = ((3U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_X)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__alu_fn_X) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_fn_X)))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__alu_fn_X = ((0xeU 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__alu_fn_X)) 
                                                 | (1U 
                                                    & (IData)(vlSelf->top__DOT__alu_fn_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__alu_fn_X) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_fn_X)))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__alu_fn_X = ((0xdU 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__alu_fn_X)) 
                                                 | (2U 
                                                    & (IData)(vlSelf->top__DOT__alu_fn_X)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__alu_fn_X) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_fn_X)))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__alu_fn_X = ((0xbU 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__alu_fn_X)) 
                                                 | (4U 
                                                    & (IData)(vlSelf->top__DOT__alu_fn_X)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__alu_fn_X) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_fn_X)))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rf_waddr_W = (
                                                   (0x1eU 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->top__DOT__rf_waddr_W)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__rf_waddr_W) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rf_waddr_W = (
                                                   (0x1dU 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)) 
                                                   | (2U 
                                                      & (IData)(vlSelf->top__DOT__rf_waddr_W)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__rf_waddr_W) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rf_waddr_W = (
                                                   (0x1bU 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)) 
                                                   | (4U 
                                                      & (IData)(vlSelf->top__DOT__rf_waddr_W)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__rf_waddr_W) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rf_waddr_W = (
                                                   (0x17U 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)) 
                                                   | (8U 
                                                      & (IData)(vlSelf->top__DOT__rf_waddr_W)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__rf_waddr_W) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rf_waddr_W = (
                                                   (0xfU 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)) 
                                                   | (0x10U 
                                                      & (IData)(vlSelf->top__DOT__rf_waddr_W)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M)));
    }
    vlSelf->top__DOT__stats_en_wen_W = ((IData)(vlSelf->top__DOT__DUT__DOT__stats_en_wen_pending_W) 
                                        & (IData)(vlSelf->top__DOT__DUT__DOT__val_W));
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x7eU & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x7dU & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x7bU & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x77U & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x6fU & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x5fU & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT__funct7) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[393].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffffffeU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (1U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((2U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffffffdU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (2U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((4U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffffffbU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (4U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((8U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffffff7U 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (8U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x10U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffffffefU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x10U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x20U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffffffdfU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x20U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x40U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffffffbfU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x40U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x80U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffffff7fU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x80U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x100U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffffeffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x100U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x200U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffffdffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x200U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x400U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffffbffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x400U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x800U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffff7ffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x800U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffffefffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x1000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffffdfffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x2000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffffbfffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x4000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffff7fffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x8000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffeffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x10000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffdffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x20000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffbffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x40000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfff7ffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x80000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffefffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x100000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffdfffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x200000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffbfffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x400000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xff7fffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x800000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfeffffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x1000000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfdffffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x2000000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfbffffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x4000000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xf7ffffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x8000000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xefffffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x10000000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xdfffffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x20000000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xbfffffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x40000000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if (((vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0x7fffffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x80000000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__inst_X ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (1U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__inst_X ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (2U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__inst_X ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (4U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__inst_X ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (8U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if (((vlSelf->top__DOT__DUT__DOT__inst_X ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__inst_M ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (1U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__inst_M ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (2U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__inst_M ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (4U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__inst_M ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (8U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if (((vlSelf->top__DOT__DUT__DOT__inst_M ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__inst_W ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (1U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__inst_W ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (2U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__inst_W ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (4U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__inst_W ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (8U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if (((vlSelf->top__DOT__DUT__DOT__inst_W ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[379].fetch_add(1, std::memory_order_relaxed);
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
    top__DOT__DUT__DOT____VdfgTmp_he3f0392a__0 = ((0x1fU 
                                                   & (vlSelf->top__DOT__inst_D 
                                                      >> 0xfU)) 
                                                  == (IData)(vlSelf->top__DOT__rf_waddr_W));
    top__DOT__DUT__DOT____VdfgTmp_h60d4c986__0 = ((0x1fU 
                                                   & (vlSelf->top__DOT__inst_D 
                                                      >> 0x14U)) 
                                                  == (IData)(vlSelf->top__DOT__rf_waddr_W));
    top__DOT__DUT__DOT____VdfgTmp_hae8ca473__0 = ((0x1fU 
                                                   & (vlSelf->top__DOT__inst_D 
                                                      >> 0xfU)) 
                                                  == (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M));
    top__DOT__DUT__DOT____VdfgTmp_h9789577f__0 = ((0x1fU 
                                                   & (vlSelf->top__DOT__inst_D 
                                                      >> 0x14U)) 
                                                  == (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M));
    vlSelf->top__DOT__DUT__DOT____VdfgTmp_ha2ba3bfa__0 
        = ((0U != (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X)) 
           & (1U != (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X)));
    top__DOT__DUT__DOT____VdfgTmp_h2c662355__0 = ((0x1fU 
                                                   & (vlSelf->top__DOT__inst_D 
                                                      >> 0xfU)) 
                                                  == (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X));
    top__DOT__DUT__DOT____VdfgTmp_h145eec55__0 = ((0x1fU 
                                                   & (vlSelf->top__DOT__inst_D 
                                                      >> 0x14U)) 
                                                  == (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X));
    vlSelf->top__DOT__rf_wen_W = ((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_pending_W) 
                                  & (IData)(vlSelf->top__DOT__DUT__DOT__val_W));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__wb_result_sel_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_sel_D))) {
        vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_sel_D 
            = vlSelf->top__DOT__DUT__DOT__wb_result_sel_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__inst_val_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_val_D))) {
        vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_val_D 
            = vlSelf->top__DOT__DUT__DOT__inst_val_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_D))) {
        vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__stats_en_wen_W 
            = vlSelf->top__DOT__stats_en_wen_W;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_D)))) {
        vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_D 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_D)))) {
        vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_D 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_D)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_D)))) {
        vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_D 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_D)))) {
        vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mul_D 
            = vlSelf->top__DOT__DUT__DOT__mul_D;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__br_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D)))) {
        vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D 
            = ((6U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__br_type_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__br_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D)))) {
        vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D 
            = ((5U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__br_type_D)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__br_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D)))) {
        vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D)))) {
        vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_D)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D)))) {
        vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_D)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D)))) {
        vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_D)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_X)))) {
        vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_X 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_X)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_X)))) {
        vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_X 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_X)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_X)));
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__csrw_D) 
                  & (0x7c1U == (vlSelf->top__DOT__inst_D 
                                >> 0x14U)))))) {
        vlSymsp->__Vcoverage[196].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__csrw_D) 
                  & (0x7c0U == (vlSelf->top__DOT__inst_D 
                                >> 0x14U)))))) {
        vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__csrw_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__csrw_D))) {
        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrw_D 
            = vlSelf->top__DOT__DUT__DOT__csrw_D;
    }
    vlSelf->top__DOT__DUT__DOT__stats_en_wen_D = 0U;
    if (((IData)(vlSelf->top__DOT__DUT__DOT__csrw_D) 
         & (0x7c1U == (vlSelf->top__DOT__inst_D >> 0x14U)))) {
        vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__stats_en_wen_D = 1U;
    }
    vlSelf->top__DOT__DUT__DOT__proc2mngr_val_D = 0U;
    if (((IData)(vlSelf->top__DOT__DUT__DOT__csrw_D) 
         & (0x7c0U == (vlSelf->top__DOT__inst_D >> 0x14U)))) {
        vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_val_D = 1U;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_F))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_F 
            = vlSelf->top__DOT__DUT__DOT__ostall_F;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__pc_redirect_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_redirect_X))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_redirect_X 
            = vlSelf->top__DOT__DUT__DOT__pc_redirect_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
         & (1U == (IData)(vlSelf->top__DOT__DUT__DOT__j_type_D)))) {
        vlSymsp->__Vcoverage[202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__pc_sel_D = 2U;
    } else {
        vlSelf->top__DOT__DUT__DOT__pc_sel_D = 3U;
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                  & (1U == (IData)(vlSelf->top__DOT__DUT__DOT__j_type_D)))))) {
        vlSymsp->__Vcoverage[203].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__j_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__j_type_D)))) {
        vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__j_type_D 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__j_type_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__j_type_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__j_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__j_type_D)))) {
        vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__j_type_D 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__j_type_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__j_type_D)));
    }
    vlSelf->top__DOT__DUT__DOT__pc_redirect_D = ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                                                 & (1U 
                                                    == (IData)(vlSelf->top__DOT__DUT__DOT__j_type_D)));
    if (vlSelf->top__DOT__DUT__DOT__pc_redirect_X) {
        vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__pc_sel_F = vlSelf->top__DOT__DUT__DOT__pc_sel_X;
    } else {
        vlSelf->top__DOT__pc_sel_F = ((IData)(vlSelf->top__DOT__DUT__DOT__pc_redirect_D)
                                       ? (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_D)
                                       : 3U);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__csrr_D) 
                  & (0xfc0U == (vlSelf->top__DOT__inst_D 
                                >> 0x14U)))))) {
        vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__csrr_D) 
                  & (0xfc1U == (vlSelf->top__DOT__inst_D 
                                >> 0x14U)))))) {
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__csrr_D) 
                  & (0xf14U == (vlSelf->top__DOT__inst_D 
                                >> 0x14U)))))) {
        vlSymsp->__Vcoverage[200].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__csrr_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_D))) {
        vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_D 
            = vlSelf->top__DOT__DUT__DOT__csrr_D;
    }
    vlSelf->top__DOT__csrr_sel_D = 0U;
    if (((IData)(vlSelf->top__DOT__DUT__DOT__csrr_D) 
         & (0xfc1U == (vlSelf->top__DOT__inst_D >> 0x14U)))) {
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__csrr_sel_D = 1U;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__csrr_D) 
         & (0xf14U == (vlSelf->top__DOT__inst_D >> 0x14U)))) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__csrr_sel_D = 2U;
    }
    vlSelf->top__DOT__DUT__DOT__mngr2proc_rdy_D = 0U;
    if (((IData)(vlSelf->top__DOT__DUT__DOT__csrr_D) 
         & (0xfc0U == (vlSelf->top__DOT__inst_D >> 0x14U)))) {
        vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mngr2proc_rdy_D = 1U;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_imul_resp_val_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_imul_resp_val_X))) {
        vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_imul_resp_val_X 
            = vlSelf->top__DOT__DUT__DOT__ostall_imul_resp_val_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_dmem_reqstream_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_dmem_reqstream_X))) {
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_dmem_reqstream_X 
            = vlSelf->top__DOT__DUT__DOT__ostall_dmem_reqstream_X;
    }
    vlSelf->top__DOT__DUT__DOT__ostall_X = ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                            & ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_dmem_reqstream_X) 
                                               | (IData)(vlSelf->top__DOT__DUT__DOT__ostall_imul_resp_val_X)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_M))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_M 
            = vlSelf->top__DOT__DUT__DOT__ostall_M;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_W))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_W 
            = vlSelf->top__DOT__DUT__DOT__ostall_W;
    }
    vlSelf->top__DOT__DUT__DOT__stall_W = ((IData)(vlSelf->top__DOT__DUT__DOT__val_W) 
                                           & (IData)(vlSelf->top__DOT__DUT__DOT__ostall_W));
    top__DOT__DUT__DOT____VdfgTmp_hb97078a9__0 = ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_M) 
                                                  | (IData)(vlSelf->top__DOT__DUT__DOT__ostall_W));
    if (((IData)(vlSelf->top__DOT__rf_wen_W) ^ (IData)(vlSelf->top__DOT____Vtogcov__rf_wen_W))) {
        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rf_wen_W = vlSelf->top__DOT__rf_wen_W;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__rs2_en_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rs2_en_D))) {
        vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rs2_en_D 
            = vlSelf->top__DOT__DUT__DOT__rs2_en_D;
    }
    top__DOT__DUT__DOT____VdfgTmp_h06acbb32__0 = ((IData)(vlSelf->top__DOT__DUT__DOT__rs2_en_D) 
                                                  & ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                                     & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_X) 
                                                        & ((IData)(top__DOT__DUT__DOT____VdfgTmp_h145eec55__0) 
                                                           & (0U 
                                                              != (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X))))));
    top__DOT__DUT__DOT____VdfgTmp_h622529b5__0 = ((IData)(vlSelf->top__DOT__DUT__DOT__rs2_en_D) 
                                                  & (IData)(vlSelf->top__DOT__DUT__DOT__val_D));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__rs1_en_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rs1_en_D))) {
        vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rs1_en_D 
            = vlSelf->top__DOT__DUT__DOT__rs1_en_D;
    }
    top__DOT__DUT__DOT____VdfgTmp_h3d0a317b__0 = ((IData)(vlSelf->top__DOT__DUT__DOT__rs1_en_D) 
                                                  & ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                                     & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_X) 
                                                        & ((IData)(top__DOT__DUT__DOT____VdfgTmp_h2c662355__0) 
                                                           & (0U 
                                                              != (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X))))));
    top__DOT__DUT__DOT____VdfgTmp_hd5c67ea2__0 = ((IData)(vlSelf->top__DOT__DUT__DOT__rs1_en_D) 
                                                  & (IData)(vlSelf->top__DOT__DUT__DOT__val_D));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stats_en_wen_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_wen_D))) {
        vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_wen_D 
            = vlSelf->top__DOT__DUT__DOT__stats_en_wen_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_val_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_val_D))) {
        vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_val_D 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_val_D;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_D)))) {
        vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_D 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_D)))) {
        vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_D 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_D)));
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__pc_redirect_X)))) {
        if (vlSelf->top__DOT__DUT__DOT__pc_redirect_D) {
            vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__pc_redirect_D)))) {
            vlSymsp->__Vcoverage[120].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__pc_redirect_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_redirect_D))) {
        vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mngr2proc_rdy_D 
            = vlSelf->top__DOT__DUT__DOT__mngr2proc_rdy_D;
    }
    vlSelf->top__DOT__DUT__DOT__ostall_mngr2proc_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
           & ((~ (IData)(vlSelf->top__DOT__mngr2proc_val)) 
              & (IData)(vlSelf->top__DOT__DUT__DOT__mngr2proc_rdy_D)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_X))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_X 
            = vlSelf->top__DOT__DUT__DOT__ostall_X;
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__stall_W) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__reg_en_W)))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reg_en_W = (1U 
                                                 & (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_W)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stall_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_W))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_W 
            = vlSelf->top__DOT__DUT__DOT__stall_W;
    }
    vlSelf->top__DOT__commit_inst = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_W)) 
                                     & (IData)(vlSelf->top__DOT__DUT__DOT__val_W));
    vlSelf->top__DOT__DUT__DOT__stall_M = ((IData)(vlSelf->top__DOT__DUT__DOT__val_M) 
                                           & (IData)(top__DOT__DUT__DOT____VdfgTmp_hb97078a9__0));
    top__DOT__DUT__DOT____VdfgTmp_h699142ba__0 = ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_X) 
                                                  | (IData)(top__DOT__DUT__DOT____VdfgTmp_hb97078a9__0));
    vlSelf->top__DOT__DUT__DOT__ostall_load_use_X_rs2_D 
        = ((IData)(top__DOT__DUT__DOT____VdfgTmp_h06acbb32__0) 
           & (1U == (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X)));
    vlSelf->top__DOT__DUT__DOT__bypass_waddr_X_rs2_D 
        = ((IData)(top__DOT__DUT__DOT____VdfgTmp_h622529b5__0) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
              & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_X) 
                 & ((IData)(top__DOT__DUT__DOT____VdfgTmp_h145eec55__0) 
                    & (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_ha2ba3bfa__0)))));
    vlSelf->top__DOT__DUT__DOT__bypass_waddr_W_rs2_D 
        = ((IData)(top__DOT__DUT__DOT____VdfgTmp_h622529b5__0) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__val_W) 
              & ((IData)(vlSelf->top__DOT__rf_wen_W) 
                 & ((IData)(top__DOT__DUT__DOT____VdfgTmp_h60d4c986__0) 
                    & (0U != (IData)(vlSelf->top__DOT__rf_waddr_W))))));
    vlSelf->top__DOT__DUT__DOT__bypass_waddr_M_rs2_D 
        = ((IData)(top__DOT__DUT__DOT____VdfgTmp_h622529b5__0) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__val_M) 
              & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_M) 
                 & ((IData)(top__DOT__DUT__DOT____VdfgTmp_h9789577f__0) 
                    & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M))))));
    vlSelf->top__DOT__DUT__DOT__ostall_load_use_X_rsl_D 
        = ((IData)(top__DOT__DUT__DOT____VdfgTmp_h3d0a317b__0) 
           & (1U == (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X)));
    vlSelf->top__DOT__DUT__DOT__bypass_waddr_X_rs1_D 
        = ((IData)(top__DOT__DUT__DOT____VdfgTmp_hd5c67ea2__0) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
              & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_X) 
                 & ((IData)(top__DOT__DUT__DOT____VdfgTmp_h2c662355__0) 
                    & (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_ha2ba3bfa__0)))));
    vlSelf->top__DOT__DUT__DOT__bypass_waddr_W_rs1_D 
        = ((IData)(top__DOT__DUT__DOT____VdfgTmp_hd5c67ea2__0) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__val_W) 
              & ((IData)(vlSelf->top__DOT__rf_wen_W) 
                 & ((IData)(top__DOT__DUT__DOT____VdfgTmp_he3f0392a__0) 
                    & (0U != (IData)(vlSelf->top__DOT__rf_waddr_W))))));
    vlSelf->top__DOT__DUT__DOT__bypass_waddr_M_rs1_D 
        = ((IData)(top__DOT__DUT__DOT____VdfgTmp_hd5c67ea2__0) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__val_M) 
              & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_M) 
                 & ((IData)(top__DOT__DUT__DOT____VdfgTmp_hae8ca473__0) 
                    & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M))))));
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
        vlSymsp->__Vcoverage[223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_mngr2proc_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_mngr2proc_D;
    }
    if (((IData)(vlSelf->top__DOT__commit_inst) ^ (IData)(vlSelf->top__DOT____Vtogcov__commit_inst))) {
        vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__commit_inst = vlSelf->top__DOT__commit_inst;
    }
    vlSelf->top__DOT__proc2mngr_val = ((IData)(vlSelf->top__DOT__commit_inst) 
                                       & (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_val_W));
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__stall_M) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__reg_en_M)))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reg_en_M = (1U 
                                                 & (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_M)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stall_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_M))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_M 
            = vlSelf->top__DOT__DUT__DOT__stall_M;
    }
    vlSelf->top__DOT__DUT__DOT__next_val_M = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_M)) 
                                              & (IData)(vlSelf->top__DOT__DUT__DOT__val_M));
    vlSelf->top__DOT__DUT__DOT__stall_X = ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                           & (IData)(top__DOT__DUT__DOT____VdfgTmp_h699142ba__0));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_load_use_X_rs2_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_load_use_X_rs2_D))) {
        vlSymsp->__Vcoverage[222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_load_use_X_rs2_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_load_use_X_rs2_D;
    }
    if (vlSelf->top__DOT__DUT__DOT__bypass_waddr_X_rs2_D) {
        vlSymsp->__Vcoverage[213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__op2_byp_sel_D = 3U;
    } else {
        vlSelf->top__DOT__op2_byp_sel_D = ((IData)(vlSelf->top__DOT__DUT__DOT__bypass_waddr_M_rs2_D)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__DUT__DOT__bypass_waddr_W_rs2_D)
                                             ? 1U : 0U));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__bypass_waddr_X_rs2_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__bypass_waddr_X_rs2_D))) {
        vlSymsp->__Vcoverage[216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__bypass_waddr_X_rs2_D 
            = vlSelf->top__DOT__DUT__DOT__bypass_waddr_X_rs2_D;
    }
    vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs2_D 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__bypass_waddr_X_rs2_D)) 
           & (IData)(top__DOT__DUT__DOT____VdfgTmp_h06acbb32__0));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__bypass_waddr_W_rs2_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__bypass_waddr_W_rs2_D))) {
        vlSymsp->__Vcoverage[220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__bypass_waddr_W_rs2_D 
            = vlSelf->top__DOT__DUT__DOT__bypass_waddr_W_rs2_D;
    }
    vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs2_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__rs2_en_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__val_W) 
              & ((IData)(vlSelf->top__DOT__rf_wen_W) 
                 & ((IData)(top__DOT__DUT__DOT____VdfgTmp_h60d4c986__0) 
                    & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__bypass_waddr_W_rs2_D)) 
                       & (0U != (IData)(vlSelf->top__DOT__rf_waddr_W)))))));
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__bypass_waddr_X_rs2_D)))) {
        if (vlSelf->top__DOT__DUT__DOT__bypass_waddr_M_rs2_D) {
            vlSymsp->__Vcoverage[212].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__bypass_waddr_M_rs2_D)))) {
            if (vlSelf->top__DOT__DUT__DOT__bypass_waddr_W_rs2_D) {
                vlSymsp->__Vcoverage[210].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__bypass_waddr_W_rs2_D)))) {
                vlSymsp->__Vcoverage[211].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__bypass_waddr_M_rs2_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__bypass_waddr_M_rs2_D))) {
        vlSymsp->__Vcoverage[218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__bypass_waddr_M_rs2_D 
            = vlSelf->top__DOT__DUT__DOT__bypass_waddr_M_rs2_D;
    }
    vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs2_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__rs2_en_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__val_M) 
              & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_M) 
                 & ((IData)(top__DOT__DUT__DOT____VdfgTmp_h9789577f__0) 
                    & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__bypass_waddr_M_rs2_D)) 
                       & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M)))))));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_load_use_X_rsl_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_load_use_X_rsl_D))) {
        vlSymsp->__Vcoverage[221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_load_use_X_rsl_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_load_use_X_rsl_D;
    }
    if (vlSelf->top__DOT__DUT__DOT__bypass_waddr_X_rs1_D) {
        vlSymsp->__Vcoverage[208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__op1_byp_sel_D = 2U;
    } else {
        vlSelf->top__DOT__op1_byp_sel_D = ((IData)(vlSelf->top__DOT__DUT__DOT__bypass_waddr_M_rs1_D)
                                            ? 1U : 
                                           ((IData)(vlSelf->top__DOT__DUT__DOT__bypass_waddr_W_rs1_D)
                                             ? 0U : 3U));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__bypass_waddr_X_rs1_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__bypass_waddr_X_rs1_D))) {
        vlSymsp->__Vcoverage[215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__bypass_waddr_X_rs1_D 
            = vlSelf->top__DOT__DUT__DOT__bypass_waddr_X_rs1_D;
    }
    vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs1_D 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__bypass_waddr_X_rs1_D)) 
           & (IData)(top__DOT__DUT__DOT____VdfgTmp_h3d0a317b__0));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__bypass_waddr_W_rs1_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__bypass_waddr_W_rs1_D))) {
        vlSymsp->__Vcoverage[219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__bypass_waddr_W_rs1_D 
            = vlSelf->top__DOT__DUT__DOT__bypass_waddr_W_rs1_D;
    }
    vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs1_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__rs1_en_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__val_W) 
              & ((IData)(vlSelf->top__DOT__rf_wen_W) 
                 & ((IData)(top__DOT__DUT__DOT____VdfgTmp_he3f0392a__0) 
                    & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__bypass_waddr_W_rs1_D)) 
                       & (0U != (IData)(vlSelf->top__DOT__rf_waddr_W)))))));
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__bypass_waddr_X_rs1_D)))) {
        if (vlSelf->top__DOT__DUT__DOT__bypass_waddr_M_rs1_D) {
            vlSymsp->__Vcoverage[207].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__bypass_waddr_M_rs1_D)))) {
            if (vlSelf->top__DOT__DUT__DOT__bypass_waddr_W_rs1_D) {
                vlSymsp->__Vcoverage[205].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__bypass_waddr_W_rs1_D)))) {
                vlSymsp->__Vcoverage[206].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__bypass_waddr_M_rs1_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__bypass_waddr_M_rs1_D))) {
        vlSymsp->__Vcoverage[217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__bypass_waddr_M_rs1_D 
            = vlSelf->top__DOT__DUT__DOT__bypass_waddr_M_rs1_D;
    }
    vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs1_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__rs1_en_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__val_M) 
              & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_M) 
                 & ((IData)(top__DOT__DUT__DOT____VdfgTmp_hae8ca473__0) 
                    & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__bypass_waddr_M_rs1_D)) 
                       & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M)))))));
    if (((IData)(vlSelf->top__DOT__proc2mngr_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__proc2mngr_val))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_val 
            = vlSelf->top__DOT__proc2mngr_val;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__next_val_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__next_val_M))) {
        vlSymsp->__Vcoverage[347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__next_val_M 
            = vlSelf->top__DOT__DUT__DOT__next_val_M;
    }
    vlSelf->top__DOT__dmem_respstream_rdy = ((IData)(vlSelf->top__DOT__DUT__DOT__next_val_M) 
                                             & (0U 
                                                != (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_M)));
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__stall_X) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__reg_en_X)))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reg_en_X = (1U 
                                                 & (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_X)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stall_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_X))) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_X 
            = vlSelf->top__DOT__DUT__DOT__stall_X;
    }
    vlSelf->top__DOT__DUT__DOT__next_val_X = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_X)) 
                                              & (IData)(vlSelf->top__DOT__DUT__DOT__val_X));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs2_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_X_rs2_D))) {
        vlSymsp->__Vcoverage[227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_X_rs2_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs2_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs2_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_W_rs2_D))) {
        vlSymsp->__Vcoverage[229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_W_rs2_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs2_D;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__op2_byp_sel_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__op2_byp_sel_D)))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__op2_byp_sel_D 
            = ((2U & (IData)(vlSelf->top__DOT____Vtogcov__op2_byp_sel_D)) 
               | (1U & (IData)(vlSelf->top__DOT__op2_byp_sel_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__op2_byp_sel_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__op2_byp_sel_D)))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__op2_byp_sel_D 
            = ((1U & (IData)(vlSelf->top__DOT____Vtogcov__op2_byp_sel_D)) 
               | (2U & (IData)(vlSelf->top__DOT__op2_byp_sel_D)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs2_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_M_rs2_D))) {
        vlSymsp->__Vcoverage[228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_M_rs2_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs2_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs1_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_X_rs1_D))) {
        vlSymsp->__Vcoverage[224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_X_rs1_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs1_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs1_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_W_rs1_D))) {
        vlSymsp->__Vcoverage[226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_W_rs1_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs1_D;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__op1_byp_sel_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__op1_byp_sel_D)))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__op1_byp_sel_D 
            = ((2U & (IData)(vlSelf->top__DOT____Vtogcov__op1_byp_sel_D)) 
               | (1U & (IData)(vlSelf->top__DOT__op1_byp_sel_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__op1_byp_sel_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__op1_byp_sel_D)))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__op1_byp_sel_D 
            = ((1U & (IData)(vlSelf->top__DOT____Vtogcov__op1_byp_sel_D)) 
               | (2U & (IData)(vlSelf->top__DOT__op1_byp_sel_D)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs1_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_M_rs1_D))) {
        vlSymsp->__Vcoverage[225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_M_rs1_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs1_D;
    }
    vlSelf->top__DOT__DUT__DOT__ostall_hazard_D = (1U 
                                                   & ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs1_D) 
                                                      | ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs1_D) 
                                                         | ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs1_D) 
                                                            | ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs2_D) 
                                                               | ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs2_D) 
                                                                  | ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs2_D) 
                                                                     | ((~ (IData)(vlSelf->top__DOT__imul_req_rdy_D)) 
                                                                        | ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_load_use_X_rsl_D) 
                                                                           | (IData)(vlSelf->top__DOT__DUT__DOT__ostall_load_use_X_rs2_D))))))))));
    if (((IData)(vlSelf->top__DOT__dmem_respstream_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__dmem_respstream_rdy))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_rdy 
            = vlSelf->top__DOT__dmem_respstream_rdy;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__next_val_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__next_val_X))) {
        vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__next_val_X 
            = vlSelf->top__DOT__DUT__DOT__next_val_X;
    }
    vlSelf->top__DOT__dmem_reqstream_val = ((IData)(vlSelf->top__DOT__DUT__DOT__next_val_X) 
                                            & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X)));
    vlSelf->top__DOT__imul_resp_rdy_X = ((IData)(vlSelf->top__DOT__DUT__DOT__next_val_X) 
                                         & (2U == (IData)(vlSelf->top__DOT__ex_result_sel_X)));
    vlSelf->top__DOT__DUT__DOT__osquash_X = ((IData)(vlSelf->top__DOT__DUT__DOT__next_val_X) 
                                             & (IData)(vlSelf->top__DOT__DUT__DOT__pc_redirect_X));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_hazard_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_hazard_D))) {
        vlSymsp->__Vcoverage[231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_hazard_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_hazard_D;
    }
    vlSelf->top__DOT__DUT__DOT__ostall_D = ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                                            & ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_mngr2proc_D) 
                                               | (IData)(vlSelf->top__DOT__DUT__DOT__ostall_hazard_D)));
    if (((IData)(vlSelf->top__DOT__dmem_reqstream_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__dmem_reqstream_val))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_val 
            = vlSelf->top__DOT__dmem_reqstream_val;
    }
    if (((IData)(vlSelf->top__DOT__imul_resp_rdy_X) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imul_resp_rdy_X))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imul_resp_rdy_X 
            = vlSelf->top__DOT__imul_resp_rdy_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__osquash_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__osquash_X))) {
        vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__osquash_X 
            = vlSelf->top__DOT__DUT__DOT__osquash_X;
    }
    vlSelf->top__DOT__DUT__DOT__squash_D = ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                                            & (IData)(vlSelf->top__DOT__DUT__DOT__osquash_X));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_D))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_D;
    }
    top__DOT__DUT__DOT____VdfgTmp_hb7aab7a1__0 = ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_D) 
                                                  | (IData)(top__DOT__DUT__DOT____VdfgTmp_h699142ba__0));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__squash_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__squash_D))) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__squash_D 
            = vlSelf->top__DOT__DUT__DOT__squash_D;
    }
    vlSelf->top__DOT__DUT__DOT__stall_F = ((IData)(vlSelf->top__DOT__DUT__DOT__val_F) 
                                           & ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_F) 
                                              | (IData)(top__DOT__DUT__DOT____VdfgTmp_hb7aab7a1__0)));
    vlSelf->top__DOT__DUT__DOT__stall_D = ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                                           & (IData)(top__DOT__DUT__DOT____VdfgTmp_hb7aab7a1__0));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stall_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_F))) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_F 
            = vlSelf->top__DOT__DUT__DOT__stall_F;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stall_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_D))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_D 
            = vlSelf->top__DOT__DUT__DOT__stall_D;
    }
    vlSelf->top__DOT__reg_en_D = (1U & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_D)) 
                                        | (IData)(vlSelf->top__DOT__DUT__DOT__squash_D)));
    top__DOT__DUT__DOT____VdfgTmp_h5e743be1__0 = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_D)) 
                                                  & (IData)(vlSelf->top__DOT__DUT__DOT__val_D));
    if (((IData)(vlSelf->top__DOT__reg_en_D) ^ (IData)(vlSelf->top__DOT____Vtogcov__reg_en_D))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reg_en_D = vlSelf->top__DOT__reg_en_D;
    }
    vlSelf->top__DOT__mngr2proc_rdy = ((IData)(top__DOT__DUT__DOT____VdfgTmp_h5e743be1__0) 
                                       & (IData)(vlSelf->top__DOT__DUT__DOT__mngr2proc_rdy_D));
    vlSelf->top__DOT__DUT__DOT__next_val_D = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__squash_D)) 
                                              & (IData)(top__DOT__DUT__DOT____VdfgTmp_h5e743be1__0));
    vlSelf->top__DOT__DUT__DOT__osquash_D = ((IData)(top__DOT__DUT__DOT____VdfgTmp_h5e743be1__0) 
                                             & (IData)(vlSelf->top__DOT__DUT__DOT__pc_redirect_D));
    if (((IData)(vlSelf->top__DOT__mngr2proc_rdy) ^ (IData)(vlSelf->top__DOT____Vtogcov__mngr2proc_rdy))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_rdy 
            = vlSelf->top__DOT__mngr2proc_rdy;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__next_val_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__next_val_D))) {
        vlSymsp->__Vcoverage[232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__next_val_D 
            = vlSelf->top__DOT__DUT__DOT__next_val_D;
    }
    vlSelf->top__DOT__imul_req_val_D = ((IData)(vlSelf->top__DOT__DUT__DOT__next_val_D) 
                                        & (IData)(vlSelf->top__DOT__DUT__DOT__mul_D));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__osquash_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__osquash_D))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__osquash_D 
            = vlSelf->top__DOT__DUT__DOT__osquash_D;
    }
    vlSelf->top__DOT__DUT__DOT__squash_F = ((IData)(vlSelf->top__DOT__DUT__DOT__val_F) 
                                            & ((IData)(vlSelf->top__DOT__DUT__DOT__osquash_D) 
                                               | (IData)(vlSelf->top__DOT__DUT__DOT__osquash_X)));
    if (((IData)(vlSelf->top__DOT__imul_req_val_D) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imul_req_val_D))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
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
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "utb_ProcAltCtrl.v", 16, 26, ".top", "v_toggle/top", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "utb_ProcAltCtrl.v", 16, 43, ".top", "v_toggle/top", "linetrace", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "utb_ProcAltCtrl.v", 19, 18, ".top", "v_toggle/top", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "utb_ProcAltCtrl.v", 23, 18, ".top", "v_toggle/top", "imem_reqstream_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "utb_ProcAltCtrl.v", 24, 18, ".top", "v_toggle/top", "imem_reqstream_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "utb_ProcAltCtrl.v", 25, 18, ".top", "v_toggle/top", "imem_respstream_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "utb_ProcAltCtrl.v", 26, 18, ".top", "v_toggle/top", "imem_respstream_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "utb_ProcAltCtrl.v", 27, 18, ".top", "v_toggle/top", "imem_respstream_drop", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "utb_ProcAltCtrl.v", 31, 18, ".top", "v_toggle/top", "dmem_reqstream_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "utb_ProcAltCtrl.v", 32, 18, ".top", "v_toggle/top", "dmem_reqstream_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "utb_ProcAltCtrl.v", 33, 18, ".top", "v_toggle/top", "dmem_respstream_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "utb_ProcAltCtrl.v", 34, 18, ".top", "v_toggle/top", "dmem_respstream_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "utb_ProcAltCtrl.v", 35, 18, ".top", "v_toggle/top", "mem_action_M", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "utb_ProcAltCtrl.v", 39, 18, ".top", "v_toggle/top", "mngr2proc_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "utb_ProcAltCtrl.v", 40, 18, ".top", "v_toggle/top", "mngr2proc_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "utb_ProcAltCtrl.v", 41, 18, ".top", "v_toggle/top", "proc2mngr_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "utb_ProcAltCtrl.v", 42, 18, ".top", "v_toggle/top", "proc2mngr_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "utb_ProcAltCtrl.v", 46, 18, ".top", "v_toggle/top", "reg_en_F", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "utb_ProcAltCtrl.v", 47, 18, ".top", "v_toggle/top", "pc_sel_F[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "utb_ProcAltCtrl.v", 47, 18, ".top", "v_toggle/top", "pc_sel_F[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "utb_ProcAltCtrl.v", 49, 18, ".top", "v_toggle/top", "reg_en_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "utb_ProcAltCtrl.v", 50, 18, ".top", "v_toggle/top", "op1_sel_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "utb_ProcAltCtrl.v", 51, 18, ".top", "v_toggle/top", "op2_sel_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "utb_ProcAltCtrl.v", 51, 18, ".top", "v_toggle/top", "op2_sel_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "utb_ProcAltCtrl.v", 52, 18, ".top", "v_toggle/top", "csrr_sel_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "utb_ProcAltCtrl.v", 52, 18, ".top", "v_toggle/top", "csrr_sel_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "utb_ProcAltCtrl.v", 53, 18, ".top", "v_toggle/top", "imm_type_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "utb_ProcAltCtrl.v", 53, 18, ".top", "v_toggle/top", "imm_type_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "utb_ProcAltCtrl.v", 53, 18, ".top", "v_toggle/top", "imm_type_D[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "utb_ProcAltCtrl.v", 54, 18, ".top", "v_toggle/top", "op1_byp_sel_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "utb_ProcAltCtrl.v", 54, 18, ".top", "v_toggle/top", "op1_byp_sel_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "utb_ProcAltCtrl.v", 55, 18, ".top", "v_toggle/top", "op2_byp_sel_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "utb_ProcAltCtrl.v", 55, 18, ".top", "v_toggle/top", "op2_byp_sel_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "utb_ProcAltCtrl.v", 57, 18, ".top", "v_toggle/top", "reg_en_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "utb_ProcAltCtrl.v", 58, 18, ".top", "v_toggle/top", "alu_fn_X[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "utb_ProcAltCtrl.v", 58, 18, ".top", "v_toggle/top", "alu_fn_X[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "utb_ProcAltCtrl.v", 58, 18, ".top", "v_toggle/top", "alu_fn_X[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "utb_ProcAltCtrl.v", 58, 18, ".top", "v_toggle/top", "alu_fn_X[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "utb_ProcAltCtrl.v", 59, 18, ".top", "v_toggle/top", "ex_result_sel_X[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "utb_ProcAltCtrl.v", 59, 18, ".top", "v_toggle/top", "ex_result_sel_X[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "utb_ProcAltCtrl.v", 61, 18, ".top", "v_toggle/top", "reg_en_M", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "utb_ProcAltCtrl.v", 62, 18, ".top", "v_toggle/top", "wb_result_sel_M", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "utb_ProcAltCtrl.v", 64, 18, ".top", "v_toggle/top", "reg_en_W", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "utb_ProcAltCtrl.v", 65, 18, ".top", "v_toggle/top", "rf_waddr_W[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "utb_ProcAltCtrl.v", 65, 18, ".top", "v_toggle/top", "rf_waddr_W[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "utb_ProcAltCtrl.v", 65, 18, ".top", "v_toggle/top", "rf_waddr_W[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "utb_ProcAltCtrl.v", 65, 18, ".top", "v_toggle/top", "rf_waddr_W[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "utb_ProcAltCtrl.v", 65, 18, ".top", "v_toggle/top", "rf_waddr_W[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "utb_ProcAltCtrl.v", 66, 18, ".top", "v_toggle/top", "rf_wen_W", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "utb_ProcAltCtrl.v", 67, 18, ".top", "v_toggle/top", "stats_en_wen_W", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "utb_ProcAltCtrl.v", 69, 18, ".top", "v_toggle/top", "imul_req_val_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "utb_ProcAltCtrl.v", 70, 18, ".top", "v_toggle/top", "imul_resp_rdy_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "utb_ProcAltCtrl.v", 74, 18, ".top", "v_toggle/top", "inst_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "utb_ProcAltCtrl.v", 74, 18, ".top", "v_toggle/top", "inst_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "utb_ProcAltCtrl.v", 74, 18, ".top", "v_toggle/top", "inst_D[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "utb_ProcAltCtrl.v", 74, 18, ".top", "v_toggle/top", "inst_D[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "utb_ProcAltCtrl.v", 74, 18, ".top", "v_toggle/top", "inst_D[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "utb_ProcAltCtrl.v", 74, 18, ".top", "v_toggle/top", "inst_D[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "utb_ProcAltCtrl.v", 74, 18, ".top", "v_toggle/top", "inst_D[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "utb_ProcAltCtrl.v", 74, 18, ".top", "v_toggle/top", "inst_D[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "utb_ProcAltCtrl.v", 74, 18, ".top", "v_toggle/top", "inst_D[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "utb_ProcAltCtrl.v", 74, 18, ".top", "v_toggle/top", "inst_D[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "utb_ProcAltCtrl.v", 74, 18, ".top", "v_toggle/top", "inst_D[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "utb_ProcAltCtrl.v", 74, 18, ".top", "v_toggle/top", "inst_D[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "utb_ProcAltCtrl.v", 74, 18, ".top", "v_toggle/top", "inst_D[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "utb_ProcAltCtrl.v", 74, 18, ".top", "v_toggle/top", "inst_D[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "utb_ProcAltCtrl.v", 74, 18, ".top", "v_toggle/top", "inst_D[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "utb_ProcAltCtrl.v", 74, 18, ".top", "v_toggle/top", "inst_D[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "utb_ProcAltCtrl.v", 74, 18, ".top", "v_toggle/top", "inst_D[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "utb_ProcAltCtrl.v", 74, 18, ".top", "v_toggle/top", "inst_D[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "utb_ProcAltCtrl.v", 74, 18, ".top", "v_toggle/top", "inst_D[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "utb_ProcAltCtrl.v", 74, 18, ".top", "v_toggle/top", "inst_D[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "utb_ProcAltCtrl.v", 74, 18, ".top", "v_toggle/top", "inst_D[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "utb_ProcAltCtrl.v", 74, 18, ".top", "v_toggle/top", "inst_D[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "utb_ProcAltCtrl.v", 74, 18, ".top", "v_toggle/top", "inst_D[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "utb_ProcAltCtrl.v", 74, 18, ".top", "v_toggle/top", "inst_D[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "utb_ProcAltCtrl.v", 74, 18, ".top", "v_toggle/top", "inst_D[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "utb_ProcAltCtrl.v", 74, 18, ".top", "v_toggle/top", "inst_D[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "utb_ProcAltCtrl.v", 74, 18, ".top", "v_toggle/top", "inst_D[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "utb_ProcAltCtrl.v", 74, 18, ".top", "v_toggle/top", "inst_D[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "utb_ProcAltCtrl.v", 74, 18, ".top", "v_toggle/top", "inst_D[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "utb_ProcAltCtrl.v", 74, 18, ".top", "v_toggle/top", "inst_D[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "utb_ProcAltCtrl.v", 74, 18, ".top", "v_toggle/top", "inst_D[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "utb_ProcAltCtrl.v", 74, 18, ".top", "v_toggle/top", "inst_D[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "utb_ProcAltCtrl.v", 75, 18, ".top", "v_toggle/top", "br_cond_eq_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "utb_ProcAltCtrl.v", 76, 18, ".top", "v_toggle/top", "br_cond_lt_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "utb_ProcAltCtrl.v", 77, 18, ".top", "v_toggle/top", "br_cond_ltu_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "utb_ProcAltCtrl.v", 79, 18, ".top", "v_toggle/top", "imul_req_rdy_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "utb_ProcAltCtrl.v", 80, 18, ".top", "v_toggle/top", "imul_resp_val_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "utb_ProcAltCtrl.v", 83, 18, ".top", "v_toggle/top", "commit_inst", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "utb_ProcAltCtrl.v", 176, 5, ".top", "v_line/top", "block", "176,182-186,188-189,192-196,198-201,204,206,208-212,214,217-221,223-226,228-231,233-236,238-241,243-246,248-251,253-256,258-261,263-266,268-271,273-276,278-281,283-286,288-291,295-299,301-304,306-309,311-314,316-319,321-324,328-332,334-337,339-342,346-350,352-355,357-360,363,371-375,377-378,381-385,387-390,394-400,402-405,407-410,412-415,417-420,422-425,427-430,432-435,437-440,442-445,447-450,452-455,457-460,462-465,467-470,472-475,477-480,482-485,487-490,492-495,497-500,502-505,507-510,512-515,519-525,527-530,532-535,537-540,542-545,547-550,552-555,557-560,562-565,567-570,572-575,577-580,582-585,587-590,592-595,597-600,602-605,607-610,612-615,617-620,622-625,627-630,632-635,637-640,642-645,647-650,652-655,657-660,662-665,667-670,672-675,677-680,682-685,687-690,694-698,700-703,705-708,710-713,717-721,723-726,728-731,733-736,738-741,745-749,751-754,756-759,761-764,767,773-777,779-780,783-787,789-792,796-802,804-807,809-812,814-817,819-822,824-827,829-832,834-837,839-842,844-847,849-852,854-857,859-862,864-867,869-872,874-877,879-882,885,891-895,897-898,901-905,907-910,914-920,922-925,927-930,932-935,937-940,942-945,947-950,952-955,957-960,962-965,967-970,972-975,977-980,982-985,987-990,992-995,997-1000,1003,1009-1013,1015-1016,1019-1023,1025-1028,1032-1038,1040-1043,1045-1048,1050-1053,1055-1058,1060-1063,1065-1068,1070-1073,1075-1078,1080-1083,1085-1088,1090-1093,1095-1098,1100-1103,1105-1108,1110-1113,1115-1118,1121,1127-1131,1133-1134,1137-1141,1143-1146,1150-1156,1158-1161,1163-1166,1168-1171,1173-1176,1178-1181,1183-1186,1188-1191,1193-1196,1198-1201,1203-1206,1208-1211,1213-1216,1218-1221,1223-1226,1228-1231,1233-1236,1239,1245-1249,1251-1252,1255-1259,1261-1264,1268-1274,1276-1279,1281-1284,1286-1289,1291-1294,1296-1299,1301-1304,1306-1309,1311-1314,1316-1319,1321-1324,1326-1329,1331-1334,1336-1339,1341-1344,1346-1349,1351-1354,1357,1363-1367,1369-1370,1373-1377,1379-1382,1386-1392,1394-1397,1399-1402,1404-1407,1409-1412,1414-1417,1419-1422,1424-1427,1429-1432,1434-1437,1439-1442,1444-1447,1449-1452,1454-1457,1459-1462,1464-1467,1469-1472,1475,1481-1485,1487-1488,1491-1495,1497-1500,1504-1510,1512-1515,1517-1520,1522-1525,1527-1530,1532-1535,1537-1540,1542-1545,1547-1550,1552-1555,1557-1560,1562-1565,1567-1570,1572-1575,1577-1580,1582-1585,1587-1590,1593,1599-1603,1605-1606,1609-1613,1615-1618,1622-1628,1630-1633,1635-1638,1640-1643,1645-1648,1650-1653,1655-1658,1660-1663,1665-1668,1670-1673,1675-1678,1680-1683,1685-1688,1690-1693,1695-1698,1700-1703,1705-1708,1711,1717-1721,1723-1724,1727-1731,1733-1736,1740-1746,1748-1751,1753-1756,1758-1761,1763-1766,1768-1771,1773-1776,1778-1781,1783-1786,1788-1791,1793-1796,1798-1801,1803-1806,1808-1811,1813-1816,1818-1821,1823-1826,1829,1835-1839,1841-1842,1845-1849,1851-1854,1858-1864,1866-1869,1871-1874,1876-1879,1881-1884,1886-1889,1891-1894,1896-1899,1901-1904,1906-1909,1911-1914,1916-1919,1921-1924,1926-1929,1931-1934,1936-1939,1941-1944,1947,1953-1957,1959-1960,1963-1967,1969-1972,1976-1982,1984-1987,1989-1992,1994-1997,1999-2002,2004-2007,2009-2012,2014-2017,2019-2022,2024-2027,2029-2032,2034-2037,2039-2042,2044-2047,2049-2052,2054-2057,2059-2062,2065,2071-2075,2077-2078,2081-2085,2087-2090,2094-2100,2102-2105,2107-2110,2112-2115,2117-2120,2122-2125,2127-2130,2132-2135,2137-2140,2142-2145,2147-2150,2152-2155,2157-2160,2162-2165,2167-2170,2172-2175,2177-2180,2183,2189-2193,2195-2196,2199-2203,2205-2208,2212-2218,2220-2223,2225-2228,2230-2233,2235-2238,2240-2243,2245-2248,2250-2253,2255-2258,2260-2263,2265-2268,2270-2273,2275-2278,2280-2283,2285-2288,2290-2293,2295-2298,2301,2307-2311,2313-2314,2317-2321,2323-2326,2330-2336,2338-2341,2343-2346,2348-2351,2353-2356,2358-2361,2363-2366,2368-2371,2373-2376,2378-2381,2383-2386,2388-2391,2393-2396,2398-2401,2403-2406,2408-2411,2413-2416,2419,2425-2429,2431-2432,2435-2439,2441-2444,2448-2454,2456-2459,2461-2464,2466-2469,2471-2474,2476-2479,2481-2484,2486-2489,2491-2494,2496-2499,2501-2504,2506-2509,2511-2514,2516-2519,2521-2524,2526-2529,2531-2534,2537,2543-2547,2549-2550,2553-2557,2559-2562,2566-2572,2574-2577,2579-2582,2584-2587,2589-2592,2594-2597,2599-2602,2604-2607,2609-2612,2614-2617,2619-2622,2624-2627,2629-2632,2634-2637,2639-2642,2644-2647,2649-2652,2655,2661-2665,2667-2668,2671-2675,2677-2680,2684-2690,2692-2695,2697-2700,2702-2705,2707-2710,2712-2715,2717-2720,2722-2725,2727-2730,2732-2735,2737-2740,2742-2745,2747-2750,2752-2755,2757-2760,2762-2765,2767-2770,2773,2779-2783,2785-2786,2789-2793,2795-2798,2802-2808,2810-2813,2815-2818,2820-2823,2825-2828,2830-2833,2835-2838,2840-2843,2845-2848,2850-2853,2855-2858,2860-2863,2865-2868,2870-2873,2875-2878,2880-2883,2885-2888,2891,2897-2901,2903-2904,2907-2911,2913-2916,2920-2926,2928-2931,2933-2936,2938-2941,2943-2946,2948-2951,2953-2956,2958-2961,2963-2966,2968-2971,2973-2976,2978-2981,2983-2986,2988-2991,2993-2996,2998-3001,3003-3006,3009,3015-3019,3021-3022,3025-3029,3031-3034,3038-3044,3046-3049,3051-3054,3056-3059,3061-3064,3066-3069,3071-3074,3076-3079,3081-3084,3086-3089,3091-3094,3096-3099,3101-3104,3106-3109,3111-3114,3116-3119,3121-3124,3126-3129,3132,3138-3144,3146-3147,3150-3154,3157-3158,3160-3164,3168-3174,3176-3179,3181-3184,3186-3189,3191-3194,3196-3199,3201-3204,3206-3209,3211-3214,3216-3219,3221-3224,3226-3229,3231-3234,3236-3239,3241-3244,3246-3249,3251-3254,3258-3262,3264-3267,3269-3272,3274-3277,3280-3281,3283-3287,3289-3292,3294-3297,3299-3302,3305,3311-3315,3317-3318,3321-3325,3327-3330,3334-3340,3342-3345,3347-3350,3352-3355,3357-3360,3362-3365,3367-3370,3372-3375,3377-3380,3382-3385,3387-3390,3392-3395,3397-3400,3402-3405,3407-3410,3412-3415,3417-3420,3422-3425,3427-3430,3432-3435,3437-3440,3442-3445,3447-3450,3453,3459-3463,3465-3466,3469-3473,3475-3478,3482-3488,3490-3493,3495-3498,3500-3503,3505-3508,3510-3513,3515-3518,3520-3523,3525-3528,3530-3533,3535-3538,3540-3543,3545-3548,3550-3553,3555-3558,3560-3563,3565-3568,3570-3573,3575-3578,3582-3586,3588-3591,3593-3596,3598-3601,3603-3606,3608-3611,3613-3616,3618-3621,3623-3626,3629,3635-3640,3642-3643,3646-3650,3652-3655,3659-3665,3667-3670,3672-3675,3677-3680,3682-3685,3687-3690,3692-3695,3697-3700,3702-3705,3707-3710,3712-3715,3717-3720,3722-3725,3727-3730,3732-3735,3737-3740,3744-3748,3750-3753,3755-3758,3760-3763,3765-3768,3770-3773,3775-3778,3780-3783,3785-3788,3791,3797-3802,3804-3805,3808-3812,3814-3817,3821-3827,3829-3832,3834-3837,3839-3842,3844-3847,3849-3852,3854-3857,3859-3862,3864-3867,3869-3872,3874-3877,3879-3882,3884-3887,3889-3892,3894-3897,3899-3902,3906-3910,3912-3915,3917-3920,3922-3925,3927-3930,3932-3935,3937-3940,3942-3945,3947-3950,3953,3959-3965,3967-3968,3971-3975,3977-3980,3984-3990,3992-3995,3997-4000,4002-4005,4007-4010,4012-4015,4017-4020,4022-4025,4027-4030,4032-4035,4037-4040,4042-4045,4047-4050,4052-4055,4057-4060,4062-4065,4069-4073,4075-4078,4080-4083,4085-4088,4090-4093,4095-4098,4100-4103,4105-4108,4110-4113,4116,4122-4129,4131-4132,4135-4139,4141-4144,4148-4154,4156-4159,4161-4164,4166-4169,4171-4174,4176-4179,4181-4184,4186-4189,4191-4194,4196-4199,4201-4204,4206-4209,4211-4214,4216-4219,4221-4224,4226-4229,4233-4237,4239-4242,4244-4247,4249-4252,4254-4257,4259-4262,4264-4267,4269-4272,4274-4277,4280,4286-4293,4295-4296,4299-4303,4305-4308,4312-4318,4320-4323,4325-4328,4330-4333,4335-4338,4340-4343,4345-4348,4350-4353,4355-4358,4360-4363,4365-4368,4370-4373,4375-4378,4380-4383,4385-4388,4390-4393,4397-4401,4403-4406,4408-4411,4413-4416,4418-4421,4423-4426,4428-4431,4433-4436,4438-4441,4444,4450-4457,4459-4460,4463-4467,4469-4472,4476-4482,4484-4487,4489-4492,4494-4497,4499-4502,4504-4507,4509-4512,4514-4517,4519-4522,4524-4527,4529-4532,4534-4537,4539-4542,4544-4547,4549-4552,4554-4557,4561-4565,4567-4570,4572-4575,4577-4580,4582-4585,4587-4590,4592-4595,4597-4600,4602-4605,4608,4614-4619,4621-4622,4625-4629,4631-4634,4638-4644,4646-4649,4651-4654,4656-4659,4661-4664,4666-4669,4671-4674,4676-4679,4681-4684,4686-4689,4691-4694,4696-4699,4701-4704,4706-4709,4711-4714,4716-4719,4721-4724,4726-4729,4733-4737,4739-4742,4744-4747,4750-4752,4755-4759,4761-4764,4766-4769,4771-4774,4777-4779,4782-4786,4788-4791,4793-4796,4798-4801,4803-4806,4808-4811,4814,4820-4825,4827-4828,4831-4835,4837-4840,4844-4850,4852-4855,4857-4860,4862-4865,4867-4870,4872-4875,4877-4880,4882-4885,4887-4890,4892-4895,4897-4900,4902-4905,4907-4910,4912-4915,4917-4920,4922-4925,4929-4933,4935-4938,4940-4943,4946-4948,4951-4955,4957-4960,4962-4965,4967-4970,4973-4975,4978-4982,4984-4987,4989-4992,4994-4997,4999-5002,5005,5011-5016,5018-5019,5022-5026,5028-5031,5035-5041,5043-5046,5048-5051,5053-5056,5058-5061,5063-5066,5068-5071,5073-5076,5078-5081,5083-5086,5088-5091,5093-5096,5098-5101,5103-5106,5108-5111,5113-5116,5118-5121,5123-5126,5128-5131,5133-5136,5138-5141,5144-5145,5148-5152,5154-5157,5159-5162,5166,5169-5173,5175-5178,5181,5187-5192,5194-5195,5198-5202,5204-5207,5211-5217,5219-5222,5224-5227,5229-5232,5234-5237,5239-5242,5244-5247,5249-5252,5254-5257,5259-5262,5264-5267,5269-5272,5274-5277,5279-5282,5284-5287,5289-5292,5294-5297,5299-5302,5304-5307,5311,5314,5317-5321,5323-5326,5328-5331,5333-5336,5338-5341,5343-5346,5348-5351,5354-5355,5357-5361,5363-5366,5368-5371,5373-5376,5378-5381,5383-5386,5389,5397-5401,5403-5404,5407-5411,5413-5416,5420-5426,5428-5431,5433-5436,5438-5441,5443-5446,5450-5456,5458-5461,5463-5466,5468-5471,5473-5476,5478-5481,5483-5486,5488-5491,5493-5496,5498-5501,5503-5506,5508-5511,5513-5516,5518-5521,5523-5526,5528-5531,5535-5539,5541-5544,5546-5549,5551-5554,5556-5559,5561-5564,5566-5569,5571-5574,5576-5579,5581-5584,5586-5589,5591-5594,5596-5599,5601-5604,5608-5612,5614-5617,5619-5622,5624-5627,5629-5632,5634-5637,5641-5645,5649-5653,5655-5658,5660-5663,5665-5668,5671,5673-5675");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "utb_ProcAltCtrl.v", 5681, 11, ".top", "v_line/top", "block", "5681-5682");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "utb_ProcAltCtrl.v", 5679, 10, ".top", "v_line/top", "block", "5679-5681");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "ProcAltCtrl.v", 14, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "ProcAltCtrl.v", 15, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "ProcAltCtrl.v", 19, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "imem_reqstream_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "ProcAltCtrl.v", 20, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "imem_reqstream_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "ProcAltCtrl.v", 21, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "imem_respstream_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "ProcAltCtrl.v", 22, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "imem_respstream_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "ProcAltCtrl.v", 23, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "imem_respstream_drop", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "ProcAltCtrl.v", 27, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "dmem_reqstream_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "ProcAltCtrl.v", 28, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "dmem_reqstream_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "ProcAltCtrl.v", 29, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "dmem_respstream_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "ProcAltCtrl.v", 30, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "dmem_respstream_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "ProcAltCtrl.v", 31, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "mem_action_M", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "ProcAltCtrl.v", 35, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "mngr2proc_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "ProcAltCtrl.v", 36, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "mngr2proc_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "ProcAltCtrl.v", 37, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "proc2mngr_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "ProcAltCtrl.v", 38, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "proc2mngr_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "ProcAltCtrl.v", 42, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "reg_en_F", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "ProcAltCtrl.v", 43, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "pc_sel_F[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "ProcAltCtrl.v", 43, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "pc_sel_F[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "ProcAltCtrl.v", 45, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "reg_en_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "ProcAltCtrl.v", 46, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "op1_sel_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "ProcAltCtrl.v", 47, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "op2_sel_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "ProcAltCtrl.v", 47, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "op2_sel_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "ProcAltCtrl.v", 48, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "csrr_sel_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "ProcAltCtrl.v", 48, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "csrr_sel_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "ProcAltCtrl.v", 49, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "imm_type_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "ProcAltCtrl.v", 49, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "imm_type_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "ProcAltCtrl.v", 49, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "imm_type_D[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "ProcAltCtrl.v", 50, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "op1_byp_sel_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "ProcAltCtrl.v", 50, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "op1_byp_sel_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "ProcAltCtrl.v", 51, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "op2_byp_sel_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "ProcAltCtrl.v", 51, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "op2_byp_sel_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "ProcAltCtrl.v", 52, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "imul_req_val_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "ProcAltCtrl.v", 54, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "reg_en_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "ProcAltCtrl.v", 55, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "alu_fn_X[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "ProcAltCtrl.v", 55, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "alu_fn_X[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "ProcAltCtrl.v", 55, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "alu_fn_X[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "ProcAltCtrl.v", 55, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "alu_fn_X[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "ProcAltCtrl.v", 56, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "ex_result_sel_X[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "ProcAltCtrl.v", 56, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "ex_result_sel_X[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "ProcAltCtrl.v", 57, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "imul_resp_rdy_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "ProcAltCtrl.v", 59, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "reg_en_M", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "ProcAltCtrl.v", 60, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "wb_result_sel_M", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "ProcAltCtrl.v", 62, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "reg_en_W", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "ProcAltCtrl.v", 63, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "rf_waddr_W[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "ProcAltCtrl.v", 63, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "rf_waddr_W[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "ProcAltCtrl.v", 63, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "rf_waddr_W[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "ProcAltCtrl.v", 63, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "rf_waddr_W[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "ProcAltCtrl.v", 63, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "rf_waddr_W[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "ProcAltCtrl.v", 64, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "rf_wen_W", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "ProcAltCtrl.v", 65, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "stats_en_wen_W", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "ProcAltCtrl.v", 69, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "ProcAltCtrl.v", 69, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "ProcAltCtrl.v", 69, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_D[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "ProcAltCtrl.v", 69, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_D[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "ProcAltCtrl.v", 69, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_D[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "ProcAltCtrl.v", 69, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_D[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "ProcAltCtrl.v", 69, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_D[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "ProcAltCtrl.v", 69, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_D[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "ProcAltCtrl.v", 69, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_D[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "ProcAltCtrl.v", 69, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_D[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "ProcAltCtrl.v", 69, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_D[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "ProcAltCtrl.v", 69, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_D[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "ProcAltCtrl.v", 69, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_D[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "ProcAltCtrl.v", 69, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_D[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "ProcAltCtrl.v", 69, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_D[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "ProcAltCtrl.v", 69, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_D[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "ProcAltCtrl.v", 69, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_D[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "ProcAltCtrl.v", 69, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_D[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "ProcAltCtrl.v", 69, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_D[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "ProcAltCtrl.v", 69, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_D[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "ProcAltCtrl.v", 69, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_D[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "ProcAltCtrl.v", 69, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_D[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "ProcAltCtrl.v", 69, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_D[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "ProcAltCtrl.v", 69, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_D[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "ProcAltCtrl.v", 69, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_D[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "ProcAltCtrl.v", 69, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_D[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "ProcAltCtrl.v", 69, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_D[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "ProcAltCtrl.v", 69, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_D[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "ProcAltCtrl.v", 69, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_D[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "ProcAltCtrl.v", 69, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_D[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "ProcAltCtrl.v", 69, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_D[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "ProcAltCtrl.v", 69, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_D[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "ProcAltCtrl.v", 70, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "imul_req_rdy_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "ProcAltCtrl.v", 72, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "br_cond_eq_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "ProcAltCtrl.v", 73, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "br_cond_lt_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "ProcAltCtrl.v", 74, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "br_cond_ltu_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "ProcAltCtrl.v", 75, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "imul_resp_val_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "ProcAltCtrl.v", 79, 23, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "commit_inst", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "ProcAltCtrl.v", 103, 9, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "val_F", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "ProcAltCtrl.v", 104, 9, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "val_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "ProcAltCtrl.v", 105, 9, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "val_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "ProcAltCtrl.v", 106, 9, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "val_M", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "ProcAltCtrl.v", 107, 9, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "val_W", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "ProcAltCtrl.v", 119, 9, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "ostall_F", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "ProcAltCtrl.v", 120, 9, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "ostall_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "ProcAltCtrl.v", 121, 9, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "ostall_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "ProcAltCtrl.v", 122, 9, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "ostall_M", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "ProcAltCtrl.v", 123, 9, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "ostall_W", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "ProcAltCtrl.v", 129, 9, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "stall_F", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "ProcAltCtrl.v", 130, 9, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "stall_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "ProcAltCtrl.v", 131, 9, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "stall_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "ProcAltCtrl.v", 132, 9, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "stall_M", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "ProcAltCtrl.v", 133, 9, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "stall_W", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "ProcAltCtrl.v", 140, 9, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "osquash_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "ProcAltCtrl.v", 141, 9, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "osquash_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "ProcAltCtrl.v", 148, 9, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "squash_F", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "ProcAltCtrl.v", 149, 9, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "squash_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "ProcAltCtrl.v", 164, 10, ".top.DUT", "v_branch/lab2_proc_ProcAltCtrl", "if", "164-165");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "ProcAltCtrl.v", 164, 11, ".top.DUT", "v_branch/lab2_proc_ProcAltCtrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "ProcAltCtrl.v", 162, 5, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "elsif", "162-163");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "ProcAltCtrl.v", 161, 3, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "block", "161");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "ProcAltCtrl.v", 170, 15, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "pc_redirect_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "ProcAltCtrl.v", 171, 15, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "pc_sel_X[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "ProcAltCtrl.v", 171, 15, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "pc_sel_X[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "ProcAltCtrl.v", 172, 15, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "pc_sel_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "ProcAltCtrl.v", 172, 15, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "pc_sel_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "ProcAltCtrl.v", 180, 10, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "if", "180-181");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "ProcAltCtrl.v", 180, 11, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "else", "182-183");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "ProcAltCtrl.v", 178, 5, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "elsif", "178-179");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "ProcAltCtrl.v", 177, 3, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "block", "177");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "ProcAltCtrl.v", 210, 10, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "next_val_F", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "ProcAltCtrl.v", 226, 10, ".top.DUT", "v_branch/lab2_proc_ProcAltCtrl", "if", "226-227");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "ProcAltCtrl.v", 226, 11, ".top.DUT", "v_branch/lab2_proc_ProcAltCtrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "ProcAltCtrl.v", 224, 5, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "elsif", "224-225");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "ProcAltCtrl.v", 223, 3, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "block", "223");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "ProcAltCtrl.v", 232, 17, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_rd_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "ProcAltCtrl.v", 232, 17, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_rd_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "ProcAltCtrl.v", 232, 17, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_rd_D[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "ProcAltCtrl.v", 232, 17, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_rd_D[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "ProcAltCtrl.v", 232, 17, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_rd_D[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "ProcAltCtrl.v", 233, 17, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_rs1_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "ProcAltCtrl.v", 233, 17, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_rs1_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "ProcAltCtrl.v", 233, 17, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_rs1_D[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "ProcAltCtrl.v", 233, 17, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_rs1_D[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "ProcAltCtrl.v", 233, 17, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_rs1_D[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "ProcAltCtrl.v", 234, 17, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_rs2_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "ProcAltCtrl.v", 234, 17, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_rs2_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "ProcAltCtrl.v", 234, 17, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_rs2_D[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "ProcAltCtrl.v", 234, 17, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_rs2_D[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "ProcAltCtrl.v", 234, 17, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_rs2_D[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "ProcAltCtrl.v", 235, 18, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_csr_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "ProcAltCtrl.v", 235, 18, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_csr_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "ProcAltCtrl.v", 235, 18, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_csr_D[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "ProcAltCtrl.v", 235, 18, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_csr_D[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "ProcAltCtrl.v", 235, 18, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_csr_D[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "ProcAltCtrl.v", 235, 18, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_csr_D[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "ProcAltCtrl.v", 235, 18, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_csr_D[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "ProcAltCtrl.v", 235, 18, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_csr_D[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "ProcAltCtrl.v", 235, 18, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_csr_D[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "ProcAltCtrl.v", 235, 18, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_csr_D[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "ProcAltCtrl.v", 235, 18, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_csr_D[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "ProcAltCtrl.v", 235, 18, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_csr_D[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "ProcAltCtrl.v", 337, 15, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_val_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "ProcAltCtrl.v", 338, 15, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "j_type_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "ProcAltCtrl.v", 338, 15, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "j_type_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "ProcAltCtrl.v", 339, 15, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "br_type_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "ProcAltCtrl.v", 339, 15, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "br_type_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "ProcAltCtrl.v", 339, 15, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "br_type_D[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "ProcAltCtrl.v", 340, 15, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "rs1_en_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "ProcAltCtrl.v", 341, 15, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "rs2_en_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "ProcAltCtrl.v", 342, 15, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "alu_fn_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "ProcAltCtrl.v", 342, 15, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "alu_fn_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "ProcAltCtrl.v", 342, 15, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "alu_fn_D[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "ProcAltCtrl.v", 342, 15, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "alu_fn_D[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "ProcAltCtrl.v", 343, 15, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "ex_result_sel_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "ProcAltCtrl.v", 343, 15, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "ex_result_sel_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "ProcAltCtrl.v", 344, 15, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "mul_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "ProcAltCtrl.v", 345, 15, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "dmem_reqstream_type_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "ProcAltCtrl.v", 345, 15, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "dmem_reqstream_type_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "ProcAltCtrl.v", 346, 15, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "wb_result_sel_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "ProcAltCtrl.v", 347, 15, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "rf_wen_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "ProcAltCtrl.v", 348, 15, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "csrr_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "ProcAltCtrl.v", 349, 15, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "csrw_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "ProcAltCtrl.v", 350, 15, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "proc2mngr_val_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "ProcAltCtrl.v", 351, 15, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "mngr2proc_rdy_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "ProcAltCtrl.v", 352, 15, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "stats_en_wen_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "ProcAltCtrl.v", 353, 15, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "pc_redirect_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "ProcAltCtrl.v", 355, 8, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "block", "355,374-390");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "ProcAltCtrl.v", 402, 53, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "case", "402");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "ProcAltCtrl.v", 405, 53, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "case", "405");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "ProcAltCtrl.v", 406, 53, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "case", "406");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "ProcAltCtrl.v", 407, 53, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "case", "407");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "ProcAltCtrl.v", 408, 53, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "case", "408");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "ProcAltCtrl.v", 409, 54, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "case", "409");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "ProcAltCtrl.v", 410, 53, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "case", "410");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "ProcAltCtrl.v", 411, 53, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "case", "411");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "ProcAltCtrl.v", 412, 52, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "case", "412");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "ProcAltCtrl.v", 413, 53, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "case", "413");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "ProcAltCtrl.v", 414, 53, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "case", "414");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "ProcAltCtrl.v", 415, 53, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "case", "415");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "ProcAltCtrl.v", 418, 52, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "case", "418");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "ProcAltCtrl.v", 419, 52, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "case", "419");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "ProcAltCtrl.v", 420, 53, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "case", "420");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "ProcAltCtrl.v", 421, 52, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "case", "421");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "ProcAltCtrl.v", 422, 52, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "case", "422");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "ProcAltCtrl.v", 423, 51, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "case", "423");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "ProcAltCtrl.v", 424, 52, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "case", "424");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "ProcAltCtrl.v", 425, 52, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "case", "425");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "ProcAltCtrl.v", 426, 52, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "case", "426");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "ProcAltCtrl.v", 427, 53, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "case", "427");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "ProcAltCtrl.v", 428, 51, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "case", "428");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "ProcAltCtrl.v", 431, 53, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "case", "431");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "ProcAltCtrl.v", 432, 52, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "case", "432");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "ProcAltCtrl.v", 435, 53, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "case", "435");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "ProcAltCtrl.v", 436, 53, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "case", "436");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "ProcAltCtrl.v", 437, 53, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "case", "437");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "ProcAltCtrl.v", 438, 52, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "case", "438");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "ProcAltCtrl.v", 439, 53, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "case", "439");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "ProcAltCtrl.v", 440, 52, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "case", "440");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "ProcAltCtrl.v", 443, 54, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "case", "443");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "ProcAltCtrl.v", 444, 54, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "case", "444");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "ProcAltCtrl.v", 447, 52, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "case", "447");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "ProcAltCtrl.v", 448, 52, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "case", "448");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "ProcAltCtrl.v", 451, 7, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "case", "451");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "ProcAltCtrl.v", 396, 3, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "block", "396,398");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "ProcAltCtrl.v", 456, 15, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "rf_waddr_D[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "ProcAltCtrl.v", 456, 15, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "rf_waddr_D[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "ProcAltCtrl.v", 456, 15, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "rf_waddr_D[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "ProcAltCtrl.v", 456, 15, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "rf_waddr_D[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "ProcAltCtrl.v", 456, 15, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "rf_waddr_D[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "ProcAltCtrl.v", 471, 5, ".top.DUT", "v_branch/lab2_proc_ProcAltCtrl", "if", "471-472");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "ProcAltCtrl.v", 471, 6, ".top.DUT", "v_branch/lab2_proc_ProcAltCtrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "ProcAltCtrl.v", 473, 5, ".top.DUT", "v_branch/lab2_proc_ProcAltCtrl", "if", "473-474");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "ProcAltCtrl.v", 473, 6, ".top.DUT", "v_branch/lab2_proc_ProcAltCtrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "ProcAltCtrl.v", 475, 5, ".top.DUT", "v_branch/lab2_proc_ProcAltCtrl", "if", "475-476");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "ProcAltCtrl.v", 475, 6, ".top.DUT", "v_branch/lab2_proc_ProcAltCtrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "ProcAltCtrl.v", 477, 5, ".top.DUT", "v_branch/lab2_proc_ProcAltCtrl", "if", "477-478");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "ProcAltCtrl.v", 477, 6, ".top.DUT", "v_branch/lab2_proc_ProcAltCtrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "ProcAltCtrl.v", 479, 5, ".top.DUT", "v_branch/lab2_proc_ProcAltCtrl", "if", "479-480");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "ProcAltCtrl.v", 479, 6, ".top.DUT", "v_branch/lab2_proc_ProcAltCtrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "ProcAltCtrl.v", 465, 3, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "block", "465-469");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "ProcAltCtrl.v", 486, 5, ".top.DUT", "v_branch/lab2_proc_ProcAltCtrl", "if", "486-488");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "ProcAltCtrl.v", 486, 6, ".top.DUT", "v_branch/lab2_proc_ProcAltCtrl", "else", "490-492");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "ProcAltCtrl.v", 485, 3, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "block", "485");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "ProcAltCtrl.v", 501, 10, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "if", "501");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "ProcAltCtrl.v", 501, 11, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "else", "502");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "ProcAltCtrl.v", 500, 10, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "elsif", "500");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "ProcAltCtrl.v", 499, 5, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "elsif", "499");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "ProcAltCtrl.v", 498, 3, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "block", "498");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "ProcAltCtrl.v", 508, 10, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "if", "508");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "ProcAltCtrl.v", 508, 11, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "else", "509");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "ProcAltCtrl.v", 507, 10, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "elsif", "507");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "ProcAltCtrl.v", 506, 5, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "elsif", "506");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "ProcAltCtrl.v", 505, 3, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "block", "505");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "ProcAltCtrl.v", 514, 10, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "bypass_waddr_X_rs1_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "ProcAltCtrl.v", 520, 10, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "bypass_waddr_X_rs2_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "ProcAltCtrl.v", 528, 10, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "bypass_waddr_M_rs1_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "ProcAltCtrl.v", 533, 10, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "bypass_waddr_M_rs2_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "ProcAltCtrl.v", 540, 10, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "bypass_waddr_W_rs1_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "ProcAltCtrl.v", 545, 10, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "bypass_waddr_W_rs2_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "ProcAltCtrl.v", 552, 10, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "ostall_load_use_X_rsl_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "ProcAltCtrl.v", 558, 10, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "ostall_load_use_X_rs2_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "ProcAltCtrl.v", 568, 10, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "ostall_mngr2proc_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "ProcAltCtrl.v", 573, 10, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "ostall_waddr_X_rs1_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "ProcAltCtrl.v", 581, 10, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "ostall_waddr_M_rs1_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "ProcAltCtrl.v", 589, 10, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "ostall_waddr_W_rs1_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "ProcAltCtrl.v", 597, 10, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "ostall_waddr_X_rs2_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "ProcAltCtrl.v", 605, 10, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "ostall_waddr_M_rs2_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "ProcAltCtrl.v", 613, 10, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "ostall_waddr_W_rs2_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "ProcAltCtrl.v", 621, 10, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "ostall_imul_req_rdy_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "ProcAltCtrl.v", 627, 10, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "ostall_hazard_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "ProcAltCtrl.v", 648, 10, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "next_val_D", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "ProcAltCtrl.v", 659, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_X[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "ProcAltCtrl.v", 659, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_X[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "ProcAltCtrl.v", 659, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_X[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "ProcAltCtrl.v", 659, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_X[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "ProcAltCtrl.v", 659, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_X[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "ProcAltCtrl.v", 659, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_X[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "ProcAltCtrl.v", 659, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_X[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "ProcAltCtrl.v", 659, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_X[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "ProcAltCtrl.v", 659, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_X[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "ProcAltCtrl.v", 659, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_X[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "ProcAltCtrl.v", 659, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_X[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "ProcAltCtrl.v", 659, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_X[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "ProcAltCtrl.v", 659, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_X[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "ProcAltCtrl.v", 659, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_X[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "ProcAltCtrl.v", 659, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_X[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "ProcAltCtrl.v", 659, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_X[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "ProcAltCtrl.v", 659, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_X[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "ProcAltCtrl.v", 659, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_X[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "ProcAltCtrl.v", 659, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_X[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "ProcAltCtrl.v", 659, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_X[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "ProcAltCtrl.v", 659, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_X[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "ProcAltCtrl.v", 659, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_X[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "ProcAltCtrl.v", 659, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_X[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "ProcAltCtrl.v", 659, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_X[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "ProcAltCtrl.v", 659, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_X[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "ProcAltCtrl.v", 659, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_X[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "ProcAltCtrl.v", 659, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_X[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "ProcAltCtrl.v", 659, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_X[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "ProcAltCtrl.v", 659, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_X[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "ProcAltCtrl.v", 659, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_X[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "ProcAltCtrl.v", 659, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_X[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[264]), first, "ProcAltCtrl.v", 659, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_X[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[265]), first, "ProcAltCtrl.v", 660, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "dmem_reqstream_type_X[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[266]), first, "ProcAltCtrl.v", 660, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "dmem_reqstream_type_X[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[267]), first, "ProcAltCtrl.v", 661, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "wb_result_sel_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[268]), first, "ProcAltCtrl.v", 662, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "rf_wen_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[269]), first, "ProcAltCtrl.v", 663, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "rf_waddr_X[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[270]), first, "ProcAltCtrl.v", 663, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "rf_waddr_X[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[271]), first, "ProcAltCtrl.v", 663, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "rf_waddr_X[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[272]), first, "ProcAltCtrl.v", 663, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "rf_waddr_X[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "ProcAltCtrl.v", 663, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "rf_waddr_X[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "ProcAltCtrl.v", 664, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "proc2mngr_val_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "ProcAltCtrl.v", 665, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "stats_en_wen_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "ProcAltCtrl.v", 666, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "br_type_X[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[277]), first, "ProcAltCtrl.v", 666, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "br_type_X[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[278]), first, "ProcAltCtrl.v", 666, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "br_type_X[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[279]), first, "ProcAltCtrl.v", 667, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "j_type_X[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[280]), first, "ProcAltCtrl.v", 667, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "j_type_X[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[281]), first, "ProcAltCtrl.v", 675, 10, ".top.DUT", "v_branch/lab2_proc_ProcAltCtrl", "if", "675-687");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[282]), first, "ProcAltCtrl.v", 675, 11, ".top.DUT", "v_branch/lab2_proc_ProcAltCtrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[283]), first, "ProcAltCtrl.v", 672, 5, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "elsif", "672-673");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[284]), first, "ProcAltCtrl.v", 671, 3, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "block", "671");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[285]), first, "ProcAltCtrl.v", 717, 10, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "if", "717-719");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[286]), first, "ProcAltCtrl.v", 717, 11, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "else", "721-723");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[287]), first, "ProcAltCtrl.v", 713, 10, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "elsif", "713-715");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[288]), first, "ProcAltCtrl.v", 709, 10, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "elsif", "709-711");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[289]), first, "ProcAltCtrl.v", 705, 10, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "elsif", "705-707");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[290]), first, "ProcAltCtrl.v", 701, 10, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "elsif", "701-703");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "ProcAltCtrl.v", 697, 10, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "elsif", "697-699");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "ProcAltCtrl.v", 693, 5, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "elsif", "693-695");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[293]), first, "ProcAltCtrl.v", 692, 3, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "block", "692");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[294]), first, "ProcAltCtrl.v", 729, 9, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "ostall_imul_resp_val_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[295]), first, "ProcAltCtrl.v", 734, 9, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "ostall_dmem_reqstream_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[296]), first, "ProcAltCtrl.v", 759, 14, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "if", "759-760");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[297]), first, "ProcAltCtrl.v", 759, 15, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "else", "761-762");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[298]), first, "ProcAltCtrl.v", 757, 5, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "elsif", "757-758");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[299]), first, "ProcAltCtrl.v", 756, 3, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "block", "756");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[300]), first, "ProcAltCtrl.v", 772, 10, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "next_val_X", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[301]), first, "ProcAltCtrl.v", 783, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_M[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[302]), first, "ProcAltCtrl.v", 783, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_M[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[303]), first, "ProcAltCtrl.v", 783, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_M[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[304]), first, "ProcAltCtrl.v", 783, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_M[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[305]), first, "ProcAltCtrl.v", 783, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_M[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[306]), first, "ProcAltCtrl.v", 783, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_M[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[307]), first, "ProcAltCtrl.v", 783, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_M[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[308]), first, "ProcAltCtrl.v", 783, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_M[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[309]), first, "ProcAltCtrl.v", 783, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_M[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[310]), first, "ProcAltCtrl.v", 783, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_M[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[311]), first, "ProcAltCtrl.v", 783, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_M[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[312]), first, "ProcAltCtrl.v", 783, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_M[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[313]), first, "ProcAltCtrl.v", 783, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_M[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[314]), first, "ProcAltCtrl.v", 783, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_M[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[315]), first, "ProcAltCtrl.v", 783, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_M[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[316]), first, "ProcAltCtrl.v", 783, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_M[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[317]), first, "ProcAltCtrl.v", 783, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_M[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[318]), first, "ProcAltCtrl.v", 783, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_M[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[319]), first, "ProcAltCtrl.v", 783, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_M[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[320]), first, "ProcAltCtrl.v", 783, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_M[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[321]), first, "ProcAltCtrl.v", 783, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_M[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[322]), first, "ProcAltCtrl.v", 783, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_M[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[323]), first, "ProcAltCtrl.v", 783, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_M[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[324]), first, "ProcAltCtrl.v", 783, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_M[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[325]), first, "ProcAltCtrl.v", 783, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_M[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[326]), first, "ProcAltCtrl.v", 783, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_M[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[327]), first, "ProcAltCtrl.v", 783, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_M[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[328]), first, "ProcAltCtrl.v", 783, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_M[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[329]), first, "ProcAltCtrl.v", 783, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_M[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[330]), first, "ProcAltCtrl.v", 783, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_M[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[331]), first, "ProcAltCtrl.v", 783, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_M[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[332]), first, "ProcAltCtrl.v", 783, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_M[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[333]), first, "ProcAltCtrl.v", 784, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "dmem_reqstream_type_M[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[334]), first, "ProcAltCtrl.v", 784, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "dmem_reqstream_type_M[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[335]), first, "ProcAltCtrl.v", 785, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "rf_wen_M", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[336]), first, "ProcAltCtrl.v", 786, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "rf_waddr_M[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[337]), first, "ProcAltCtrl.v", 786, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "rf_waddr_M[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[338]), first, "ProcAltCtrl.v", 786, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "rf_waddr_M[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[339]), first, "ProcAltCtrl.v", 786, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "rf_waddr_M[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[340]), first, "ProcAltCtrl.v", 786, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "rf_waddr_M[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[341]), first, "ProcAltCtrl.v", 787, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "proc2mngr_val_M", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[342]), first, "ProcAltCtrl.v", 788, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "stats_en_wen_M", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[343]), first, "ProcAltCtrl.v", 796, 10, ".top.DUT", "v_branch/lab2_proc_ProcAltCtrl", "if", "796-804");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[344]), first, "ProcAltCtrl.v", 796, 11, ".top.DUT", "v_branch/lab2_proc_ProcAltCtrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[345]), first, "ProcAltCtrl.v", 793, 5, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "elsif", "793-794");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[346]), first, "ProcAltCtrl.v", 792, 3, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "block", "792");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[347]), first, "ProcAltCtrl.v", 821, 10, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "next_val_M", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[348]), first, "ProcAltCtrl.v", 832, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_W[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[349]), first, "ProcAltCtrl.v", 832, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_W[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[350]), first, "ProcAltCtrl.v", 832, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_W[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[351]), first, "ProcAltCtrl.v", 832, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_W[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[352]), first, "ProcAltCtrl.v", 832, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_W[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "ProcAltCtrl.v", 832, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_W[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[354]), first, "ProcAltCtrl.v", 832, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_W[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[355]), first, "ProcAltCtrl.v", 832, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_W[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[356]), first, "ProcAltCtrl.v", 832, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_W[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[357]), first, "ProcAltCtrl.v", 832, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_W[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[358]), first, "ProcAltCtrl.v", 832, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_W[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[359]), first, "ProcAltCtrl.v", 832, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_W[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[360]), first, "ProcAltCtrl.v", 832, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_W[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[361]), first, "ProcAltCtrl.v", 832, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_W[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[362]), first, "ProcAltCtrl.v", 832, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_W[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[363]), first, "ProcAltCtrl.v", 832, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_W[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[364]), first, "ProcAltCtrl.v", 832, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_W[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[365]), first, "ProcAltCtrl.v", 832, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_W[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[366]), first, "ProcAltCtrl.v", 832, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_W[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[367]), first, "ProcAltCtrl.v", 832, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_W[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[368]), first, "ProcAltCtrl.v", 832, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_W[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[369]), first, "ProcAltCtrl.v", 832, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_W[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[370]), first, "ProcAltCtrl.v", 832, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_W[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[371]), first, "ProcAltCtrl.v", 832, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_W[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[372]), first, "ProcAltCtrl.v", 832, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_W[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[373]), first, "ProcAltCtrl.v", 832, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_W[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[374]), first, "ProcAltCtrl.v", 832, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_W[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[375]), first, "ProcAltCtrl.v", 832, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_W[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[376]), first, "ProcAltCtrl.v", 832, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_W[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[377]), first, "ProcAltCtrl.v", 832, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_W[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[378]), first, "ProcAltCtrl.v", 832, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_W[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[379]), first, "ProcAltCtrl.v", 832, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "inst_W[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[380]), first, "ProcAltCtrl.v", 833, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "proc2mngr_val_W", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[381]), first, "ProcAltCtrl.v", 834, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "rf_wen_pending_W", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[382]), first, "ProcAltCtrl.v", 835, 16, ".top.DUT", "v_toggle/lab2_proc_ProcAltCtrl", "stats_en_wen_pending_W", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[383]), first, "ProcAltCtrl.v", 843, 10, ".top.DUT", "v_branch/lab2_proc_ProcAltCtrl", "if", "843-849");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[384]), first, "ProcAltCtrl.v", 843, 11, ".top.DUT", "v_branch/lab2_proc_ProcAltCtrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[385]), first, "ProcAltCtrl.v", 840, 5, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "elsif", "840-841");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[386]), first, "ProcAltCtrl.v", 839, 3, ".top.DUT", "v_line/lab2_proc_ProcAltCtrl", "block", "839");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "tinyrv2_encoding.v", 370, 26, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "tinyrv2_encoding.v", 374, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "opcode[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "tinyrv2_encoding.v", 374, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "opcode[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "tinyrv2_encoding.v", 374, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "opcode[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "tinyrv2_encoding.v", 374, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "opcode[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "tinyrv2_encoding.v", 374, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "opcode[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "tinyrv2_encoding.v", 374, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "opcode[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "tinyrv2_encoding.v", 374, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "opcode[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "tinyrv2_encoding.v", 375, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rd[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "tinyrv2_encoding.v", 375, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rd[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "tinyrv2_encoding.v", 375, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rd[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "tinyrv2_encoding.v", 375, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rd[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "tinyrv2_encoding.v", 375, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rd[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "tinyrv2_encoding.v", 376, 21, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rs1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "tinyrv2_encoding.v", 376, 21, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rs1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "tinyrv2_encoding.v", 376, 21, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rs1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "tinyrv2_encoding.v", 376, 21, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rs1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "tinyrv2_encoding.v", 376, 21, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rs1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "tinyrv2_encoding.v", 377, 21, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rs2[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "tinyrv2_encoding.v", 377, 21, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rs2[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "tinyrv2_encoding.v", 377, 21, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rs2[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "tinyrv2_encoding.v", 377, 21, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rs2[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "tinyrv2_encoding.v", 377, 21, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rs2[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "tinyrv2_encoding.v", 378, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "funct3[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "tinyrv2_encoding.v", 378, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "funct3[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "tinyrv2_encoding.v", 378, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "funct3[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[387]), first, "tinyrv2_encoding.v", 379, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "funct7[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[388]), first, "tinyrv2_encoding.v", 379, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "funct7[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[389]), first, "tinyrv2_encoding.v", 379, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "funct7[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[390]), first, "tinyrv2_encoding.v", 379, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "funct7[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[391]), first, "tinyrv2_encoding.v", 379, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "funct7[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[392]), first, "tinyrv2_encoding.v", 379, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "funct7[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[393]), first, "tinyrv2_encoding.v", 379, 18, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "funct7[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "tinyrv2_encoding.v", 380, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "csr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "tinyrv2_encoding.v", 380, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "csr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "tinyrv2_encoding.v", 380, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "csr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "tinyrv2_encoding.v", 380, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "csr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "tinyrv2_encoding.v", 380, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "csr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "tinyrv2_encoding.v", 380, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "csr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "tinyrv2_encoding.v", 380, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "csr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "tinyrv2_encoding.v", 380, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "csr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "tinyrv2_encoding.v", 380, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "csr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "tinyrv2_encoding.v", 380, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "csr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "tinyrv2_encoding.v", 380, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "csr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "tinyrv2_encoding.v", 380, 22, ".top.DUT.inst_unpack", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "csr[11]", "");
}

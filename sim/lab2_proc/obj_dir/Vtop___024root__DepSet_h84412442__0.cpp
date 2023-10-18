// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

void Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
void Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vtask_top__DOT__delay__0__delay_val;
    __Vtask_top__DOT__delay__0__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__0__unnamedblk1__DOT__i;
    __Vtask_top__DOT__delay__0__unnamedblk1__DOT__i = 0;
    // Body
    vlSelf->top__DOT__reset = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcBaseCtrl.v", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reset = 0U;
    vlSelf->top__DOT__imem_respstream_val = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcBaseCtrl.v", 
                                                       100);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("\nTest NOP Outputs\n");
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcBaseCtrl.v", 
                                                       107);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_top__DOT__delay__0__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__0__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__0__unnamedblk1__DOT__i, __Vtask_top__DOT__delay__0__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_ProcBaseCtrl.v", 
                                           129);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__0__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__0__unnamedblk1__DOT__i);
    }
    vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcBaseCtrl.v", 
                                                       112);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__inst_D = 0x13U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(vlSelf->top__DOT__DUT__DOT__inst_val_D)) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("inst_val_D is correct.  Expected: 1, Actual: %x\n",
                          1,vlSelf->top__DOT__DUT__DOT__inst_val_D);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("inst_val_D is incorrect.  Expected: 1, Actual: %x\n",
                      1,vlSelf->top__DOT__DUT__DOT__inst_val_D);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcBaseCtrl.v", 117, "");
        }
    }
    VL_WRITEF("\nAll tests passed!\n");
    VL_FINISH_MT("utb_ProcBaseCtrl.v", 122, "");
    vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->top__DOT____Vtogcov__clk))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->linetrace) ^ (IData)(vlSelf->top__DOT____Vtogcov__linetrace))) {
        vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__linetrace = vlSelf->linetrace;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__VactTriggered.set(1U, ((~ (IData)(vlSelf->clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0)));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__0\n"); );
    // Init
    CData/*0:0*/ top__DOT__DUT__DOT____VdfgTmp_hb2b31c42__0;
    top__DOT__DUT__DOT____VdfgTmp_hb2b31c42__0 = 0;
    CData/*0:0*/ top__DOT__DUT__DOT____VdfgTmp_h8245d87c__0;
    top__DOT__DUT__DOT____VdfgTmp_h8245d87c__0 = 0;
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
    if (((IData)(vlSelf->top__DOT__reset) ^ (IData)(vlSelf->top__DOT____Vtogcov__reset))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reset = vlSelf->top__DOT__reset;
    }
    if (((IData)(vlSelf->top__DOT__imem_respstream_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_respstream_val))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_val 
            = vlSelf->top__DOT__imem_respstream_val;
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
    vlSelf->top__DOT__pc_sel_F = ((IData)(vlSelf->top__DOT__DUT__DOT__pc_redirect_X)
                                   ? (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_X)
                                   : ((IData)(vlSelf->top__DOT__DUT__DOT__pc_redirect_D)
                                       ? (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_D)
                                       : 3U));
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
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_hazard_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_hazard_D))) {
        vlSymsp->__Vcoverage[211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_hazard_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_hazard_D;
    }
    vlSelf->top__DOT__DUT__DOT__ostall_D = ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                                            & ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_mngr2proc_D) 
                                               | (IData)(vlSelf->top__DOT__DUT__DOT__ostall_hazard_D)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_D))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_D;
    }
    top__DOT__DUT__DOT____VdfgTmp_h8245d87c__0 = ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_D) 
                                                  | (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h699142ba__0));
    vlSelf->top__DOT__DUT__DOT__stall_F = ((IData)(vlSelf->top__DOT__DUT__DOT__val_F) 
                                           & ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_F) 
                                              | (IData)(top__DOT__DUT__DOT____VdfgTmp_h8245d87c__0)));
    vlSelf->top__DOT__DUT__DOT__stall_D = ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                                           & (IData)(top__DOT__DUT__DOT____VdfgTmp_h8245d87c__0));
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
    vlSelf->top__DOT__reg_en_D = (1U & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_D)) 
                                        | (IData)(vlSelf->top__DOT__DUT__DOT__squash_D)));
    top__DOT__DUT__DOT____VdfgTmp_hb2b31c42__0 = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_D)) 
                                                  & (IData)(vlSelf->top__DOT__DUT__DOT__val_D));
    if (((IData)(vlSelf->top__DOT__reg_en_D) ^ (IData)(vlSelf->top__DOT____Vtogcov__reg_en_D))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reg_en_D = vlSelf->top__DOT__reg_en_D;
    }
    vlSelf->top__DOT__mngr2proc_rdy = ((IData)(top__DOT__DUT__DOT____VdfgTmp_hb2b31c42__0) 
                                       & (IData)(vlSelf->top__DOT__DUT__DOT__mngr2proc_rdy_D));
    vlSelf->top__DOT__DUT__DOT__next_val_D = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__squash_D)) 
                                              & (IData)(top__DOT__DUT__DOT____VdfgTmp_hb2b31c42__0));
    vlSelf->top__DOT__DUT__DOT__osquash_D = ((IData)(top__DOT__DUT__DOT____VdfgTmp_hb2b31c42__0) 
                                             & (IData)(vlSelf->top__DOT__DUT__DOT__pc_redirect_D));
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

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ top__DOT__DUT__DOT____VdfgTmp_hb97078a9__0;
    top__DOT__DUT__DOT____VdfgTmp_hb97078a9__0 = 0;
    // Body
    vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[125].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[264].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[326].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[366].fetch_add(1, std::memory_order_relaxed);
    if (vlSelf->top__DOT__reset) {
        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[124].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[325].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__val_F = 0U;
        vlSelf->top__DOT__DUT__DOT__val_D = 0U;
        vlSelf->top__DOT__DUT__DOT__val_M = 0U;
        vlSelf->top__DOT__DUT__DOT__val_X = 0U;
        vlSelf->top__DOT__DUT__DOT__val_W = 0U;
    } else {
        if (vlSelf->top__DOT__imem_respstream_rdy) {
            vlSelf->top__DOT__DUT__DOT__val_F = 1U;
        }
        if (vlSelf->top__DOT__reg_en_D) {
            vlSelf->top__DOT__DUT__DOT__val_D = vlSelf->top__DOT__DUT__DOT__next_val_F;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_M)))) {
            vlSelf->top__DOT__DUT__DOT__val_M = vlSelf->top__DOT__DUT__DOT__next_val_X;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_X)))) {
            vlSelf->top__DOT__DUT__DOT__val_X = vlSelf->top__DOT__DUT__DOT__next_val_D;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_W)))) {
            vlSelf->top__DOT__DUT__DOT__val_W = vlSelf->top__DOT__DUT__DOT__next_val_M;
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
        if (vlSelf->top__DOT__reg_en_D) {
            vlSymsp->__Vcoverage[122].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__reg_en_D)))) {
            vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__imem_respstream_rdy) {
            vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__imem_respstream_rdy)))) {
            vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__DUT__DOT__stall_W) {
            vlSymsp->__Vcoverage[364].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_W)))) {
            vlSymsp->__Vcoverage[363].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__stats_en_wen_pending_W 
                = vlSelf->top__DOT__DUT__DOT__stats_en_wen_M;
            vlSelf->top__DOT__DUT__DOT__proc2mngr_val_W 
                = vlSelf->top__DOT__DUT__DOT__proc2mngr_val_M;
            vlSelf->top__DOT__DUT__DOT__rf_wen_pending_W 
                = vlSelf->top__DOT__DUT__DOT__rf_wen_M;
            vlSelf->top__DOT__rf_waddr_W = vlSelf->top__DOT__DUT__DOT__rf_waddr_M;
            vlSelf->top__DOT__DUT__DOT__inst_W = vlSelf->top__DOT__DUT__DOT__inst_M;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_M)))) {
            vlSymsp->__Vcoverage[323].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__wb_result_sel_M = vlSelf->top__DOT__DUT__DOT__wb_result_sel_X;
            vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_M 
                = vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X;
            vlSelf->top__DOT__DUT__DOT__stats_en_wen_M 
                = vlSelf->top__DOT__DUT__DOT__stats_en_wen_X;
            vlSelf->top__DOT__DUT__DOT__proc2mngr_val_M 
                = vlSelf->top__DOT__DUT__DOT__proc2mngr_val_X;
            vlSelf->top__DOT__DUT__DOT__rf_wen_M = vlSelf->top__DOT__DUT__DOT__rf_wen_X;
            vlSelf->top__DOT__DUT__DOT__rf_waddr_M 
                = vlSelf->top__DOT__DUT__DOT__rf_waddr_X;
            vlSelf->top__DOT__DUT__DOT__inst_M = vlSelf->top__DOT__DUT__DOT__inst_X;
        }
        if (vlSelf->top__DOT__DUT__DOT__stall_M) {
            vlSymsp->__Vcoverage[324].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__DUT__DOT__stall_X) {
            vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_X)))) {
            vlSymsp->__Vcoverage[261].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__alu_fn_X = vlSelf->top__DOT__DUT__DOT__alu_fn_D;
            vlSelf->top__DOT__DUT__DOT__br_type_X = vlSelf->top__DOT__DUT__DOT__br_type_D;
            vlSelf->top__DOT__DUT__DOT__j_type_X = vlSelf->top__DOT__DUT__DOT__j_type_D;
            vlSelf->top__DOT__ex_result_sel_X = vlSelf->top__DOT__DUT__DOT__ex_result_sel_D;
            vlSelf->top__DOT__DUT__DOT__wb_result_sel_X 
                = vlSelf->top__DOT__DUT__DOT__wb_result_sel_D;
            vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X 
                = vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D;
            vlSelf->top__DOT__DUT__DOT__stats_en_wen_X 
                = vlSelf->top__DOT__DUT__DOT__stats_en_wen_D;
            vlSelf->top__DOT__DUT__DOT__proc2mngr_val_X 
                = vlSelf->top__DOT__DUT__DOT__proc2mngr_val_D;
            vlSelf->top__DOT__DUT__DOT__rf_wen_X = vlSelf->top__DOT__DUT__DOT__rf_wen_D;
            vlSelf->top__DOT__DUT__DOT__rf_waddr_X 
                = (0x1fU & (vlSelf->top__DOT__inst_D 
                            >> 7U));
            vlSelf->top__DOT__DUT__DOT__inst_X = vlSelf->top__DOT__inst_D;
        }
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
    if (((IData)(vlSelf->top__DOT__DUT__DOT__val_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__val_F))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__val_F 
            = vlSelf->top__DOT__DUT__DOT__val_F;
    }
    if (((IData)(vlSelf->top__DOT__wb_result_sel_M) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__wb_result_sel_M))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__wb_result_sel_M 
            = vlSelf->top__DOT__wb_result_sel_M;
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
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stats_en_wen_pending_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_wen_pending_W))) {
        vlSymsp->__Vcoverage[362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_wen_pending_W 
            = vlSelf->top__DOT__DUT__DOT__stats_en_wen_pending_W;
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
    vlSelf->top__DOT__DUT__DOT__ostall_imul_resp_val_X 
        = ((~ (IData)(vlSelf->top__DOT__imul_resp_val_X)) 
           & (2U == (IData)(vlSelf->top__DOT__ex_result_sel_X)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_val_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_val_W))) {
        vlSymsp->__Vcoverage[360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_val_W 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_val_W;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__val_D))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__val_D 
            = vlSelf->top__DOT__DUT__DOT__val_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__val_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__val_M))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__val_M 
            = vlSelf->top__DOT__DUT__DOT__val_M;
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
    vlSelf->top__DOT__DUT__DOT__ostall_M = ((IData)(vlSelf->top__DOT__DUT__DOT__val_M) 
                                            & ((~ (IData)(vlSelf->top__DOT__dmem_respstream_val)) 
                                               & (0U 
                                                  != (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_M))));
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
    if (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__val_X))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__val_X 
            = vlSelf->top__DOT__DUT__DOT__val_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__val_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__val_W))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__val_W 
            = vlSelf->top__DOT__DUT__DOT__val_W;
    }
    vlSelf->top__DOT__stats_en_wen_W = ((IData)(vlSelf->top__DOT__DUT__DOT__stats_en_wen_pending_W) 
                                        & (IData)(vlSelf->top__DOT__DUT__DOT__val_W));
    vlSelf->top__DOT__DUT__DOT__ostall_W = ((IData)(vlSelf->top__DOT__DUT__DOT__val_W) 
                                            & ((~ (IData)(vlSelf->top__DOT__proc2mngr_rdy)) 
                                               & (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_val_W)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_pending_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_pending_W))) {
        vlSymsp->__Vcoverage[361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_pending_W 
            = vlSelf->top__DOT__DUT__DOT__rf_wen_pending_W;
    }
    vlSelf->top__DOT__rf_wen_W = ((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_pending_W) 
                                  & (IData)(vlSelf->top__DOT__DUT__DOT__val_W));
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
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_imul_resp_val_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_imul_resp_val_X))) {
        vlSymsp->__Vcoverage[274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_imul_resp_val_X 
            = vlSelf->top__DOT__DUT__DOT__ostall_imul_resp_val_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_M))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_M 
            = vlSelf->top__DOT__DUT__DOT__ostall_M;
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
    if (vlSelf->top__DOT__DUT__DOT__pc_redirect_X) {
        vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__pc_redirect_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_redirect_X))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_redirect_X 
            = vlSelf->top__DOT__DUT__DOT__pc_redirect_X;
    }
    if (((IData)(vlSelf->top__DOT__stats_en_wen_W) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__stats_en_wen_W))) {
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__stats_en_wen_W 
            = vlSelf->top__DOT__stats_en_wen_W;
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
    if (((IData)(vlSelf->top__DOT__DUT__DOT__wb_result_sel_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_sel_X))) {
        vlSymsp->__Vcoverage[247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_sel_X 
            = vlSelf->top__DOT__DUT__DOT__wb_result_sel_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stats_en_wen_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_wen_M))) {
        vlSymsp->__Vcoverage[322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_wen_M 
            = vlSelf->top__DOT__DUT__DOT__stats_en_wen_M;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_val_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_val_M))) {
        vlSymsp->__Vcoverage[321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_val_M 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_val_M;
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
    vlSelf->top__DOT__DUT__DOT__ostall_dmem_reqstream_X 
        = ((~ (IData)(vlSelf->top__DOT__dmem_reqstream_rdy)) 
           & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X)));
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
    if (((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_M))) {
        vlSymsp->__Vcoverage[315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_M 
            = vlSelf->top__DOT__DUT__DOT__rf_wen_M;
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
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_dmem_reqstream_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_dmem_reqstream_X))) {
        vlSymsp->__Vcoverage[275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_dmem_reqstream_X 
            = vlSelf->top__DOT__DUT__DOT__ostall_dmem_reqstream_X;
    }
    vlSelf->top__DOT__DUT__DOT__ostall_X = ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                            & ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_dmem_reqstream_X) 
                                               | (IData)(vlSelf->top__DOT__DUT__DOT__ostall_imul_resp_val_X)));
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
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stats_en_wen_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_wen_X))) {
        vlSymsp->__Vcoverage[255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_wen_X 
            = vlSelf->top__DOT__DUT__DOT__stats_en_wen_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_val_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_val_X))) {
        vlSymsp->__Vcoverage[254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_val_X 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_val_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_X))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_X 
            = vlSelf->top__DOT__DUT__DOT__ostall_X;
    }
    vlSelf->top__DOT__DUT__DOT____VdfgTmp_h699142ba__0 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_X) 
           | (IData)(top__DOT__DUT__DOT____VdfgTmp_hb97078a9__0));
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
    if (((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_X))) {
        vlSymsp->__Vcoverage[248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_X 
            = vlSelf->top__DOT__DUT__DOT__rf_wen_X;
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
    vlSelf->top__DOT__DUT__DOT__stall_X = ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                           & (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h699142ba__0));
    if (((IData)(vlSelf->top__DOT__dmem_respstream_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__dmem_respstream_rdy))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_rdy 
            = vlSelf->top__DOT__dmem_respstream_rdy;
    }
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
    if (((IData)(vlSelf->top__DOT__DUT__DOT__squash_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__squash_D))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__squash_D 
            = vlSelf->top__DOT__DUT__DOT__squash_D;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
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
            vlSelf->top__DOT__op2_sel_D = 0U;
            vlSelf->top__DOT__DUT__DOT__alu_fn_D = 0U;
            vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 0U;
        } else {
            vlSelf->top__DOT__op2_sel_D = 1U;
            if ((0x33U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__alu_fn_D = 0U;
                vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 1U;
            } else if ((0x40000033U == (0xfe00707fU 
                                        & vlSelf->top__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__alu_fn_D = 1U;
                vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 1U;
            } else if ((0x2000033U == (0xfe00707fU 
                                       & vlSelf->top__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__alu_fn_D = 0U;
                vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 2U;
            } else {
                vlSelf->top__DOT__DUT__DOT__alu_fn_D 
                    = ((0x7033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))
                        ? 2U : ((0x6033U == (0xfe00707fU 
                                             & vlSelf->top__DOT__inst_D))
                                 ? 3U : ((0x4033U == 
                                          (0xfe00707fU 
                                           & vlSelf->top__DOT__inst_D))
                                          ? 4U : 5U)));
                vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 1U;
            }
        }
        vlSelf->top__DOT__op1_sel_D = (0x13U != vlSelf->top__DOT__inst_D);
        vlSelf->top__DOT__imm_type_D = 0U;
        vlSelf->top__DOT__DUT__DOT__rs2_en_D = (0x13U 
                                                != vlSelf->top__DOT__inst_D);
        vlSelf->top__DOT__DUT__DOT__rs1_en_D = (0x13U 
                                                != vlSelf->top__DOT__inst_D);
        vlSelf->top__DOT__DUT__DOT__br_type_D = 0U;
        vlSelf->top__DOT__DUT__DOT__j_type_D = 0U;
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D = 0U;
        vlSelf->top__DOT__DUT__DOT__rf_wen_D = (0x13U 
                                                != vlSelf->top__DOT__inst_D);
    } else {
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
            vlSelf->top__DOT__imm_type_D = 0U;
            vlSelf->top__DOT__DUT__DOT__rs2_en_D = 
                ((0x3033U == (0xfe00707fU & vlSelf->top__DOT__inst_D)) 
                 | ((0x40005033U == (0xfe00707fU & vlSelf->top__DOT__inst_D)) 
                    | ((0x5033U == (0xfe00707fU & vlSelf->top__DOT__inst_D)) 
                       | (0x1033U == (0xfe00707fU & vlSelf->top__DOT__inst_D)))));
            vlSelf->top__DOT__DUT__DOT__br_type_D = 0U;
            vlSelf->top__DOT__DUT__DOT__j_type_D = 0U;
            vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 1U;
            vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D = 0U;
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
                vlSelf->top__DOT__op2_sel_D = 0U;
                if ((0x2013U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                    vlSelf->top__DOT__imm_type_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__alu_fn_D = 5U;
                    vlSelf->top__DOT__DUT__DOT__j_type_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 1U;
                } else if ((0x3013U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                    vlSelf->top__DOT__imm_type_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__alu_fn_D = 6U;
                    vlSelf->top__DOT__DUT__DOT__j_type_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 1U;
                } else if ((0x40005013U == (0xfe00707fU 
                                            & vlSelf->top__DOT__inst_D))) {
                    vlSelf->top__DOT__imm_type_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__alu_fn_D = 7U;
                    vlSelf->top__DOT__DUT__DOT__j_type_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 1U;
                } else if ((0x5013U == (0xfe00707fU 
                                        & vlSelf->top__DOT__inst_D))) {
                    vlSelf->top__DOT__imm_type_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__alu_fn_D = 8U;
                    vlSelf->top__DOT__DUT__DOT__j_type_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 1U;
                } else if ((0x1013U == (0xfe00707fU 
                                        & vlSelf->top__DOT__inst_D))) {
                    vlSelf->top__DOT__imm_type_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__alu_fn_D = 9U;
                    vlSelf->top__DOT__DUT__DOT__j_type_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 1U;
                } else if ((0x37U == (0x7fU & vlSelf->top__DOT__inst_D))) {
                    vlSelf->top__DOT__imm_type_D = 3U;
                    vlSelf->top__DOT__DUT__DOT__alu_fn_D = 0xcU;
                    vlSelf->top__DOT__DUT__DOT__j_type_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 1U;
                } else {
                    if ((0x17U == (0x7fU & vlSelf->top__DOT__inst_D))) {
                        vlSelf->top__DOT__imm_type_D = 3U;
                        vlSelf->top__DOT__DUT__DOT__j_type_D = 0U;
                        vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 1U;
                    } else {
                        vlSelf->top__DOT__imm_type_D = 4U;
                        vlSelf->top__DOT__DUT__DOT__j_type_D = 1U;
                        vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 0U;
                    }
                    vlSelf->top__DOT__DUT__DOT__alu_fn_D = 0U;
                }
                vlSelf->top__DOT__DUT__DOT__br_type_D = 0U;
                vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D = 0U;
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
                    vlSelf->top__DOT__op2_sel_D = 0U;
                    vlSelf->top__DOT__imm_type_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__br_type_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__j_type_D = 2U;
                    vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D = 0U;
                } else {
                    if ((0x1063U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                        vlSelf->top__DOT__op2_sel_D = 1U;
                        vlSelf->top__DOT__imm_type_D = 2U;
                        vlSelf->top__DOT__DUT__DOT__br_type_D = 1U;
                        vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 0U;
                        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D = 0U;
                    } else if ((0x63U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                        vlSelf->top__DOT__op2_sel_D = 1U;
                        vlSelf->top__DOT__imm_type_D = 2U;
                        vlSelf->top__DOT__DUT__DOT__br_type_D = 2U;
                        vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 0U;
                        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D = 0U;
                    } else if ((0x4063U == (0x707fU 
                                            & vlSelf->top__DOT__inst_D))) {
                        vlSelf->top__DOT__op2_sel_D = 1U;
                        vlSelf->top__DOT__imm_type_D = 2U;
                        vlSelf->top__DOT__DUT__DOT__br_type_D = 3U;
                        vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 0U;
                        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D = 0U;
                    } else if ((0x6063U == (0x707fU 
                                            & vlSelf->top__DOT__inst_D))) {
                        vlSelf->top__DOT__op2_sel_D = 1U;
                        vlSelf->top__DOT__imm_type_D = 2U;
                        vlSelf->top__DOT__DUT__DOT__br_type_D = 4U;
                        vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 0U;
                        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D = 0U;
                    } else if ((0x5063U == (0x707fU 
                                            & vlSelf->top__DOT__inst_D))) {
                        vlSelf->top__DOT__op2_sel_D = 1U;
                        vlSelf->top__DOT__imm_type_D = 2U;
                        vlSelf->top__DOT__DUT__DOT__br_type_D = 5U;
                        vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 0U;
                        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D = 0U;
                    } else if ((0x7063U == (0x707fU 
                                            & vlSelf->top__DOT__inst_D))) {
                        vlSelf->top__DOT__op2_sel_D = 1U;
                        vlSelf->top__DOT__imm_type_D = 2U;
                        vlSelf->top__DOT__DUT__DOT__br_type_D = 6U;
                        vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 0U;
                        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D = 0U;
                    } else {
                        vlSelf->top__DOT__op2_sel_D = 0U;
                        vlSelf->top__DOT__imm_type_D = 0U;
                        vlSelf->top__DOT__DUT__DOT__br_type_D = 0U;
                        vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 1U;
                        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D = 1U;
                    }
                    vlSelf->top__DOT__DUT__DOT__j_type_D = 0U;
                }
                vlSelf->top__DOT__DUT__DOT__alu_fn_D = 0U;
            } else {
                if ((0x2023U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                    vlSelf->top__DOT__op2_sel_D = 0U;
                    vlSelf->top__DOT__imm_type_D = 1U;
                    vlSelf->top__DOT__DUT__DOT__alu_fn_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D = 2U;
                } else {
                    if ((0x2073U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                        vlSelf->top__DOT__op2_sel_D = 2U;
                        vlSelf->top__DOT__DUT__DOT__alu_fn_D = 0xcU;
                        vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 1U;
                    } else if ((0x1073U == (0x707fU 
                                            & vlSelf->top__DOT__inst_D))) {
                        vlSelf->top__DOT__op2_sel_D = 1U;
                        vlSelf->top__DOT__DUT__DOT__alu_fn_D = 0xbU;
                        vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 1U;
                    } else {
                        vlSelf->top__DOT__op2_sel_D = 0U;
                        vlSelf->top__DOT__DUT__DOT__alu_fn_D = 0U;
                        vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 0U;
                    }
                    vlSelf->top__DOT__imm_type_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D = 0U;
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
    }
    if (((IData)(vlSelf->top__DOT__reset) ^ (IData)(vlSelf->top__DOT____Vtogcov__reset))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reset = vlSelf->top__DOT__reset;
    }
    if (((IData)(vlSelf->top__DOT__imem_respstream_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_respstream_val))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_val 
            = vlSelf->top__DOT__imem_respstream_val;
    }
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
    if (((IData)(vlSelf->top__DOT__DUT__DOT__inst_val_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_val_D))) {
        vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_val_D 
            = vlSelf->top__DOT__DUT__DOT__inst_val_D;
    }
    if (((IData)(vlSelf->top__DOT__op1_sel_D) ^ (IData)(vlSelf->top__DOT____Vtogcov__op1_sel_D))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__op1_sel_D = vlSelf->top__DOT__op1_sel_D;
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
    if (((IData)(vlSelf->top__DOT__DUT__DOT__rs2_en_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rs2_en_D))) {
        vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rs2_en_D 
            = vlSelf->top__DOT__DUT__DOT__rs2_en_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__rs1_en_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rs1_en_D))) {
        vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rs1_en_D 
            = vlSelf->top__DOT__DUT__DOT__rs1_en_D;
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
    if (((IData)(vlSelf->top__DOT__DUT__DOT__wb_result_sel_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_sel_D))) {
        vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_sel_D 
            = vlSelf->top__DOT__DUT__DOT__wb_result_sel_D;
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
    if (((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_D))) {
        vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_D 
            = vlSelf->top__DOT__DUT__DOT__rf_wen_D;
    }
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
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    // Init
    CData/*0:0*/ top__DOT__DUT__DOT____VdfgTmp_hb2b31c42__0;
    top__DOT__DUT__DOT____VdfgTmp_hb2b31c42__0 = 0;
    CData/*0:0*/ top__DOT__DUT__DOT____VdfgTmp_h8245d87c__0;
    top__DOT__DUT__DOT____VdfgTmp_h8245d87c__0 = 0;
    // Body
    vlSelf->top__DOT__DUT__DOT__ostall_F = ((~ (IData)(vlSelf->top__DOT__imem_respstream_val)) 
                                            & (IData)(vlSelf->top__DOT__DUT__DOT__val_F));
    vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs2_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__rs2_en_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__val_W) 
              & ((IData)(vlSelf->top__DOT__rf_wen_W) 
                 & (((0x1fU & (vlSelf->top__DOT__inst_D 
                               >> 0x14U)) == (IData)(vlSelf->top__DOT__rf_waddr_W)) 
                    & (0U != (IData)(vlSelf->top__DOT__rf_waddr_W))))));
    vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs2_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__rs2_en_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__val_M) 
              & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_M) 
                 & (((0x1fU & (vlSelf->top__DOT__inst_D 
                               >> 0x14U)) == (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M)) 
                    & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M))))));
    vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs2_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__rs2_en_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
              & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_X) 
                 & (((0x1fU & (vlSelf->top__DOT__inst_D 
                               >> 0x14U)) == (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X)) 
                    & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X))))));
    vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs1_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__rs1_en_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__val_W) 
              & ((IData)(vlSelf->top__DOT__rf_wen_W) 
                 & (((0x1fU & (vlSelf->top__DOT__inst_D 
                               >> 0xfU)) == (IData)(vlSelf->top__DOT__rf_waddr_W)) 
                    & (0U != (IData)(vlSelf->top__DOT__rf_waddr_W))))));
    vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs1_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__rs1_en_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__val_M) 
              & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_M) 
                 & (((0x1fU & (vlSelf->top__DOT__inst_D 
                               >> 0xfU)) == (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M)) 
                    & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M))))));
    vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs1_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__rs1_en_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
              & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_X) 
                 & (((0x1fU & (vlSelf->top__DOT__inst_D 
                               >> 0xfU)) == (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X)) 
                    & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X))))));
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
    vlSelf->top__DOT__DUT__DOT__pc_redirect_D = ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                                                 & (1U 
                                                    == (IData)(vlSelf->top__DOT__DUT__DOT__j_type_D)));
    vlSelf->top__DOT__DUT__DOT__ostall_mngr2proc_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
           & ((~ (IData)(vlSelf->top__DOT__mngr2proc_val)) 
              & (IData)(vlSelf->top__DOT__DUT__DOT__mngr2proc_rdy_D)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_F))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_F 
            = vlSelf->top__DOT__DUT__DOT__ostall_F;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs2_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_W_rs2_D))) {
        vlSymsp->__Vcoverage[209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_W_rs2_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs2_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs2_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_M_rs2_D))) {
        vlSymsp->__Vcoverage[208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_M_rs2_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs2_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs2_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_X_rs2_D))) {
        vlSymsp->__Vcoverage[207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_X_rs2_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs2_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs1_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_W_rs1_D))) {
        vlSymsp->__Vcoverage[206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_W_rs1_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs1_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs1_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_M_rs1_D))) {
        vlSymsp->__Vcoverage[205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_M_rs1_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs1_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs1_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_X_rs1_D))) {
        vlSymsp->__Vcoverage[204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_X_rs1_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs1_D;
    }
    vlSelf->top__DOT__DUT__DOT__ostall_hazard_D = (1U 
                                                   & ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs1_D) 
                                                      | ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs1_D) 
                                                         | ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs1_D) 
                                                            | ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs2_D) 
                                                               | ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs2_D) 
                                                                  | ((~ (IData)(vlSelf->top__DOT__imul_req_rdy_D)) 
                                                                     | (IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs2_D))))))));
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
    vlSelf->top__DOT__pc_sel_F = ((IData)(vlSelf->top__DOT__DUT__DOT__pc_redirect_X)
                                   ? (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_X)
                                   : ((IData)(vlSelf->top__DOT__DUT__DOT__pc_redirect_D)
                                       ? (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_D)
                                       : 3U));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_mngr2proc_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_mngr2proc_D))) {
        vlSymsp->__Vcoverage[203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_mngr2proc_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_mngr2proc_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_hazard_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_hazard_D))) {
        vlSymsp->__Vcoverage[211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_hazard_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_hazard_D;
    }
    vlSelf->top__DOT__DUT__DOT__ostall_D = ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                                            & ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_mngr2proc_D) 
                                               | (IData)(vlSelf->top__DOT__DUT__DOT__ostall_hazard_D)));
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
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_D))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_D;
    }
    top__DOT__DUT__DOT____VdfgTmp_h8245d87c__0 = ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_D) 
                                                  | (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h699142ba__0));
    vlSelf->top__DOT__DUT__DOT__stall_F = ((IData)(vlSelf->top__DOT__DUT__DOT__val_F) 
                                           & ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_F) 
                                              | (IData)(top__DOT__DUT__DOT____VdfgTmp_h8245d87c__0)));
    vlSelf->top__DOT__DUT__DOT__stall_D = ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                                           & (IData)(top__DOT__DUT__DOT____VdfgTmp_h8245d87c__0));
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
    vlSelf->top__DOT__reg_en_D = (1U & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_D)) 
                                        | (IData)(vlSelf->top__DOT__DUT__DOT__squash_D)));
    top__DOT__DUT__DOT____VdfgTmp_hb2b31c42__0 = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_D)) 
                                                  & (IData)(vlSelf->top__DOT__DUT__DOT__val_D));
    if (((IData)(vlSelf->top__DOT__reg_en_D) ^ (IData)(vlSelf->top__DOT____Vtogcov__reg_en_D))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reg_en_D = vlSelf->top__DOT__reg_en_D;
    }
    vlSelf->top__DOT__mngr2proc_rdy = ((IData)(top__DOT__DUT__DOT____VdfgTmp_hb2b31c42__0) 
                                       & (IData)(vlSelf->top__DOT__DUT__DOT__mngr2proc_rdy_D));
    vlSelf->top__DOT__DUT__DOT__next_val_D = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__squash_D)) 
                                              & (IData)(top__DOT__DUT__DOT____VdfgTmp_hb2b31c42__0));
    vlSelf->top__DOT__DUT__DOT__osquash_D = ((IData)(top__DOT__DUT__DOT____VdfgTmp_hb2b31c42__0) 
                                             & (IData)(vlSelf->top__DOT__DUT__DOT__pc_redirect_D));
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

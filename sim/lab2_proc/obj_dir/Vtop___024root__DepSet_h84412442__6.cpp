// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    if (vlSelf->top__DOT__mem_clear) {
        if (vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared) {
            vlSymsp->__Vcoverage[4902].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared)))) {
            vlSymsp->__Vcoverage[4901].fetch_add(1, std::memory_order_relaxed);
        }
    }
    vlSelf->top__DOT__src__DOT__src__DOT__done_next 
        = ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index) 
           == (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max));
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem_clear)))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__write_en0_M)))) {
                    vlSymsp->__Vcoverage[4905].fetch_add(1, std::memory_order_relaxed);
                }
                if (vlSelf->top__DOT__mem__DOT__mem__DOT__write_en0_M) {
                    vlSymsp->__Vcoverage[4904].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en0_M)))) {
                    vlSymsp->__Vcoverage[4914].fetch_add(1, std::memory_order_relaxed);
                }
                if (vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en0_M) {
                    vlSymsp->__Vcoverage[4913].fetch_add(1, std::memory_order_relaxed);
                    if ((3U != (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                      >> 0xaU)))) {
                        if ((4U != (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                          >> 0xaU)))) {
                            if ((5U != (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                              >> 0xaU)))) {
                                vlSymsp->__Vcoverage[4912].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((5U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                              >> 0xaU)))) {
                                vlSymsp->__Vcoverage[4911].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((4U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                          >> 0xaU)))) {
                            vlSymsp->__Vcoverage[4910].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((3U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                      >> 0xaU)))) {
                        vlSymsp->__Vcoverage[4909].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__write_en1_M)))) {
                    vlSymsp->__Vcoverage[4908].fetch_add(1, std::memory_order_relaxed);
                }
                if (vlSelf->top__DOT__mem__DOT__mem__DOT__write_en1_M) {
                    vlSymsp->__Vcoverage[4907].fetch_add(1, std::memory_order_relaxed);
                }
                if (vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en1_M) {
                    vlSymsp->__Vcoverage[4919].fetch_add(1, std::memory_order_relaxed);
                    if ((3U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                      >> 0xaU)))) {
                        vlSymsp->__Vcoverage[4915].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((3U != (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                      >> 0xaU)))) {
                        if ((4U != (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                          >> 0xaU)))) {
                            if ((5U != (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                              >> 0xaU)))) {
                                vlSymsp->__Vcoverage[4918].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((5U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                              >> 0xaU)))) {
                                vlSymsp->__Vcoverage[4917].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((4U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                          >> 0xaU)))) {
                            vlSymsp->__Vcoverage[4916].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en1_M)))) {
                    vlSymsp->__Vcoverage[4920].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    vlSelf->top__DOT__snk_done = ((~ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__reset_reg)) 
                                  & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index) 
                                     == (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max)));
    __Vilp = 0x508U;
    while ((__Vilp <= 0xfffU)) {
        vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[__Vilp] 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__m
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__2\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    __Vilp = 0U;
    while ((__Vilp <= 0x507U)) {
        vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[__Vilp] 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__m
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if (vlSelf->top__DOT__mem_clear) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared)))) {
            vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i = 0U;
            while (VL_GTS_III(32, 0x1000U, vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i)) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i)] = 0U;
                vlSymsp->__Vcoverage[4900].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i 
                    = ((IData)(1U) + vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i);
            }
        }
    } else if (vlSelf->top__DOT__reset) {
        __Vilp = 0U;
        while ((__Vilp <= 0xfffU)) {
            vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[__Vilp] 
                = vlSelf->top__DOT__mem__DOT__mem__DOT__m_load
                [__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
        if (vlSelf->top__DOT__mem__DOT__mem__DOT__write_en0_M) {
            vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i = 0U;
            while ((vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i 
                    < (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_msg_len_modified_M))) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                                 >> 4U))] 
                    = (((~ ((IData)(0xffU) << (0x1fU 
                                               & ((0x18U 
                                                   & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                      << 1U)) 
                                                  + 
                                                  (vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i 
                                                   << 3U))))) 
                        & vlSelf->top__DOT__mem__DOT__mem__DOT__m_next
                        [(0xfffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                    >> 4U))]) | (0xffffffffULL 
                                                 & ((0xffU 
                                                     & (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i)))
                                                          ? 0U
                                                          : 
                                                         (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[
                                                          (((IData)(7U) 
                                                            + 
                                                            (0x1fU 
                                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i))) 
                                                           >> 5U)] 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i))))) 
                                                        | (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                                                           >> 
                                                           (0x1fU 
                                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i))))) 
                                                    << 
                                                    (0x1fU 
                                                     & ((0x18U 
                                                         & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                            << 1U)) 
                                                        + 
                                                        (vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i 
                                                         << 3U))))));
                vlSymsp->__Vcoverage[4903].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i 
                    = ((IData)(1U) + vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i);
            }
        }
        if (vlSelf->top__DOT__mem__DOT__mem__DOT__write_en1_M) {
            vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i = 0U;
            while ((vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i 
                    < (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_msg_len_modified_M))) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                                 >> 4U))] 
                    = (((~ ((IData)(0xffU) << (0x1fU 
                                               & ((0x18U 
                                                   & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                      << 1U)) 
                                                  + 
                                                  (vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i 
                                                   << 3U))))) 
                        & vlSelf->top__DOT__mem__DOT__mem__DOT__m_next
                        [(0xfffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                    >> 4U))]) | (0xffffffffULL 
                                                 & ((0xffU 
                                                     & (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i)))
                                                          ? 0U
                                                          : 
                                                         (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[
                                                          (((IData)(7U) 
                                                            + 
                                                            (0x1fU 
                                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i))) 
                                                           >> 5U)] 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i))))) 
                                                        | (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                                                           >> 
                                                           (0x1fU 
                                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i))))) 
                                                    << 
                                                    (0x1fU 
                                                     & ((0x18U 
                                                         & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                            << 1U)) 
                                                        + 
                                                        (vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i 
                                                         << 3U))))));
                vlSymsp->__Vcoverage[4906].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i 
                    = ((IData)(1U) + vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i);
            }
        }
        if (vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en0_M) {
            if ((3U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                              >> 0xaU)))) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                                 >> 4U))] 
                    = (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       + vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M);
            } else if ((4U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                     >> 0xaU)))) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                                 >> 4U))] 
                    = (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M);
            } else if ((5U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                     >> 0xaU)))) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                                 >> 4U))] 
                    = (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       | vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M);
            }
        }
        if (vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en1_M) {
            if ((3U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                              >> 0xaU)))) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                                 >> 4U))] 
                    = (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       + vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M);
            } else if ((4U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                     >> 0xaU)))) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                                 >> 4U))] 
                    = (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M);
            } else if ((5U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                     >> 0xaU)))) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                                 >> 4U))] 
                    = (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       | vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M);
            }
        }
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__3\n"); );
    // Body
    if (((IData)(vlSelf->top__DOT__src__DOT__src__DOT__done_next) 
         ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__done_next))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__done_next 
            = vlSelf->top__DOT__src__DOT__src__DOT__done_next;
    }
    if (((IData)(vlSelf->top__DOT__snk_done) ^ (IData)(vlSelf->top__DOT____Vtogcov__snk_done))) {
        vlSymsp->__Vcoverage[362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__snk_done = vlSelf->top__DOT__snk_done;
    }
    vlSelf->top__DOT__sink__DOT__sink_rdy = (1U & (
                                                   (~ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__reset_reg)) 
                                                   & (~ (IData)(vlSelf->top__DOT__snk_done))));
    if (((IData)(vlSelf->top__DOT__sink__DOT__sink_rdy) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT____Vtogcov__sink_rdy))) {
        vlSymsp->__Vcoverage[630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_rdy 
            = vlSelf->top__DOT__sink__DOT__sink_rdy;
    }
    vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay 
        = ((IData)(vlSelf->top__DOT__proc2mngr_val) 
           & ((IData)(vlSelf->top__DOT__sink__DOT__sink_rdy) 
              & (0U == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num)));
    vlSelf->top__DOT__sink__DOT__sink__DOT__index_en 
        = ((IData)(vlSelf->top__DOT__sink__DOT__sink_val) 
           & (IData)(vlSelf->top__DOT__sink__DOT__sink_rdy));
    vlSelf->top__DOT__proc2mngr_rdy = ((IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state)
                                        ? ((IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state) 
                                           & ((IData)(vlSelf->top__DOT__sink__DOT__sink_rdy) 
                                              & (0U 
                                                 == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay)))
                                        : ((IData)(vlSelf->top__DOT__sink__DOT__sink_rdy) 
                                           & (0U == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num)));
    if (((IData)(vlSelf->top__DOT__proc2mngr_rdy) ^ (IData)(vlSelf->top__DOT____Vtogcov__proc2mngr_rdy))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_rdy 
            = vlSelf->top__DOT__proc2mngr_rdy;
    }
    vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlSelf->top__DOT__proc2mngr_rdy) 
           & (IData)(vlSelf->top__DOT__proc2mngr_val));
    if ((1U & (~ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state)))) {
        if (((IData)(vlSelf->top__DOT__proc2mngr_val) 
             & (~ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay)))) {
            vlSymsp->__Vcoverage[770].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__proc2mngr_val) 
                      & (~ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay)))))) {
            vlSymsp->__Vcoverage[771].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[764].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__zero_cycle_delay 
            = vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay;
    }
    if (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state) {
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next = 1U;
        if (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state) {
            if ((((IData)(vlSelf->top__DOT__proc2mngr_val) 
                  & (IData)(vlSelf->top__DOT__sink__DOT__sink_rdy)) 
                 & (0U == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay))) {
                vlSymsp->__Vcoverage[773].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next = 0U;
            }
            if ((1U & (~ (((IData)(vlSelf->top__DOT__proc2mngr_val) 
                           & (IData)(vlSelf->top__DOT__sink__DOT__sink_rdy)) 
                          & (0U == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay))))) {
                vlSymsp->__Vcoverage[774].fetch_add(1, std::memory_order_relaxed);
            }
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en 
                = (0U < vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay);
        } else {
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en = 0U;
        }
    } else {
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next = 0U;
        if (((IData)(vlSelf->top__DOT__proc2mngr_val) 
             & (~ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay)))) {
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en = 1U;
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next = 1U;
        } else {
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en = 0U;
        }
    }
    if (((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_en) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_en))) {
        vlSymsp->__Vcoverage[807].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_en 
            = vlSelf->top__DOT__sink__DOT__sink__DOT__index_en;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[1661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    }
    vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    if (((IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[699].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_en 
            = vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en;
    }
    if (((IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[765].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__state_next 
            = vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass))) {
        vlSymsp->__Vcoverage[1662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass;
    }
    vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[1656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en;
    }
    vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en) 
              | (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[1658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__5\n"); );
    // Body
    vlSelf->top__DOT__DUT__DOT__imem_reqstream_enq_val 
        = ((~ (IData)(vlSelf->top__DOT__reset)) & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_rdy));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_enq_val) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_val))) {
        vlSymsp->__Vcoverage[1000].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_val 
            = vlSelf->top__DOT__DUT__DOT__imem_reqstream_enq_val;
    }
    vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_enq_val));
    vlSelf->top__DOT__imem_reqstream_val = (1U & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty)) 
                                                  | ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty) 
                                                     & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_enq_val))));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_enq))) {
        vlSymsp->__Vcoverage[1301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_enq 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    }
    if (((IData)(vlSelf->top__DOT__imem_reqstream_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_reqstream_val))) {
        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_val 
            = vlSelf->top__DOT__imem_reqstream_val;
    }
    vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay 
        = ((IData)(vlSelf->top__DOT__imem_reqstream_val) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy) 
              & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num)));
    vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlSelf->top__DOT__imem_reqstream_rdy) 
           & (IData)(vlSelf->top__DOT__imem_reqstream_val));
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state)))) {
        if (((IData)(vlSelf->top__DOT__imem_reqstream_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay)))) {
            vlSymsp->__Vcoverage[4291].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__imem_reqstream_val) 
                      & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay)))))) {
            vlSymsp->__Vcoverage[4292].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[4285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__zero_cycle_delay 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay;
    }
    if (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state) {
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next = 1U;
        if (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state) {
            if ((((IData)(vlSelf->top__DOT__imem_reqstream_val) 
                  & (IData)(vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy)) 
                 & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay))) {
                vlSymsp->__Vcoverage[4294].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next = 0U;
            }
            if ((1U & (~ (((IData)(vlSelf->top__DOT__imem_reqstream_val) 
                           & (IData)(vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy)) 
                          & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay))))) {
                vlSymsp->__Vcoverage[4295].fetch_add(1, std::memory_order_relaxed);
            }
            vlSelf->top__DOT__mem__DOT__mem_memreq0_val 
                = ((IData)(vlSelf->top__DOT__imem_reqstream_val) 
                   & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
            vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en 
                = (0U < vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay);
        } else {
            vlSelf->top__DOT__mem__DOT__mem_memreq0_val = 0U;
            vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en = 0U;
        }
    } else {
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next = 0U;
        vlSelf->top__DOT__mem__DOT__mem_memreq0_val 
            = ((IData)(vlSelf->top__DOT__imem_reqstream_val) 
               & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
        if (((IData)(vlSelf->top__DOT__imem_reqstream_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay)))) {
            vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en = 1U;
            vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next = 1U;
        } else {
            vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en = 0U;
        }
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[1302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    }
    vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
            & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((1U & ((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq0_val) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_val))) {
        vlSymsp->__Vcoverage[3927].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_val 
            = vlSelf->top__DOT__mem__DOT__mem_memreq0_val;
    }
    if (vlSelf->top__DOT__mem__DOT__mem_memreq0_val) {
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__len 
            = (3U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_ 
            = (7U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                     >> 0xaU));
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque 
            = (0xffU & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                        >> 2U));
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
            = ((vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                << 0x1eU) | (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                             >> 2U));
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
            = vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U];
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
            = vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U];
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
            = vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U];
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
            = vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U];
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
            = vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy;
    } else {
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__len = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_ = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq = 0U;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[4220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_en 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[4286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__state_next 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[1300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass))) {
        vlSymsp->__Vcoverage[1303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass;
    }
    vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (1U & (((~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)) 
                  & (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq))
                  ? ((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                  : (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)));
    vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[5234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__len 
            = ((2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__len)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__len)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[5235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__len 
            = ((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__len)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__len)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[5191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_ 
            = ((6U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[5192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_ 
            = ((5U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[5193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_ 
            = ((3U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_)));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[5054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq)));
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[5194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque 
            = ((0xfeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[5195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque 
            = ((0xfdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[5196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque 
            = ((0xfbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[5197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque 
            = ((0xf7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[5198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque 
            = ((0xefU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[5199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque 
            = ((0xdfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[5200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque 
            = ((0xbfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[5201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque 
            = ((0x7fU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque)));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3929].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3930].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3931].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3932].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3933].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3934].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3935].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3936].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3937].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3938].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3939].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3940].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3941].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3942].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3943].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3944].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3945].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3946].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3947].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3948].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3949].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3950].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3951].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3952].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3953].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3954].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3955].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3956].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3957].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3958].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3959].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
          ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3960].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3961].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3962].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3963].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3964].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3965].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3966].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3967].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3968].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3970].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3971].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3972].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3973].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3974].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3975].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3976].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3977].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3978].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3980].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3981].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3982].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3983].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3984].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3985].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3986].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3987].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3988].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3989].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3990].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3991].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
          ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3992].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[3993].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1ffeU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[3994].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1ffdU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[3995].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1ffbU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[3996].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1ff7U & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[3997].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1fefU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[3998].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1fdfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[3999].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1fbfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[4000].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1f7fU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[4001].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1effU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[4002].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1dffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[4003].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1bffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[4004].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x17ffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[4005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0xfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__deq_ptr_next))) {
        vlSymsp->__Vcoverage[1298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__deq_ptr_next 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[1308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_reg__DOT____Vtogcov__d 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__write_en) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[1291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__write_en;
    }
    vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__write_en)
                  ? ((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                  : (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_pipe))) {
        vlSymsp->__Vcoverage[5058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_pipe 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe)) 
               & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq))) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              | (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__enq_ptr_next))) {
        vlSymsp->__Vcoverage[1296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__enq_ptr_next 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[1306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_reg__DOT____Vtogcov__d 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[5055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
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
    vlSelf->top__DOT__DUT__DOT__ostall_F = ((~ (IData)(vlSelf->top__DOT__imem_respstream_val)) 
                                            & (IData)(vlSelf->top__DOT__DUT__DOT__val_F));
    vlSelf->top__DOT__DUT__DOT__ostall_imul_resp_val_X 
        = ((~ (IData)(vlSelf->top__DOT__imul_resp_val_X)) 
           & (2U == (IData)(vlSelf->top__DOT__ex_result_sel_X)));
    vlSelf->top__DOT__DUT__DOT__pc_redirect_X = (1U 
                                                 & (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                                     & (1U 
                                                        == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))
                                                     ? 
                                                    (~ (IData)(vlSelf->top__DOT__br_cond_eq_X))
                                                     : 
                                                    (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                                      & (2U 
                                                         == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))
                                                      ? (IData)(vlSelf->top__DOT__br_cond_eq_X)
                                                      : 
                                                     (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                                       & (3U 
                                                          == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))
                                                       ? (IData)(vlSelf->top__DOT__br_cond_lt_X)
                                                       : 
                                                      (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                                        & (4U 
                                                           == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))
                                                        ? (IData)(vlSelf->top__DOT__br_cond_ltu_X)
                                                        : 
                                                       (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                                         & (5U 
                                                            == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))
                                                         ? 
                                                        (~ (IData)(vlSelf->top__DOT__br_cond_lt_X))
                                                         : 
                                                        (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                                          & (6U 
                                                             == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))
                                                          ? 
                                                         (~ (IData)(vlSelf->top__DOT__br_cond_ltu_X))
                                                          : 
                                                         ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                                          & (2U 
                                                             == (IData)(vlSelf->top__DOT__DUT__DOT__j_type_X))))))))));
    vlSelf->top__DOT__DUT__DOT__ostall_W = ((IData)(vlSelf->top__DOT__DUT__DOT__val_W) 
                                            & ((~ (IData)(vlSelf->top__DOT__proc2mngr_rdy)) 
                                               & (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_val_W)));
    vlSelf->top__DOT__DUT__DOT__ostall_M = ((IData)(vlSelf->top__DOT__DUT__DOT__val_M) 
                                            & ((~ (IData)(vlSelf->top__DOT__dmem_respstream_val)) 
                                               & (0U 
                                                  != (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_M))));
    top__DOT__DUT__DOT____VdfgTmp_he3f0392a__0 = ((0x1fU 
                                                   & (vlSelf->top__DOT__inst_D 
                                                      >> 0xfU)) 
                                                  == (IData)(vlSelf->top__DOT__rf_waddr_W));
    top__DOT__DUT__DOT____VdfgTmp_h60d4c986__0 = ((0x1fU 
                                                   & (vlSelf->top__DOT__inst_D 
                                                      >> 0x14U)) 
                                                  == (IData)(vlSelf->top__DOT__rf_waddr_W));
    vlSelf->top__DOT__DUT__DOT__ostall_dmem_reqstream_X 
        = ((~ (IData)(vlSelf->top__DOT__dmem_reqstream_rdy)) 
           & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X)));
    top__DOT__DUT__DOT____VdfgTmp_hae8ca473__0 = ((0x1fU 
                                                   & (vlSelf->top__DOT__inst_D 
                                                      >> 0xfU)) 
                                                  == (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M));
    top__DOT__DUT__DOT____VdfgTmp_h9789577f__0 = ((0x1fU 
                                                   & (vlSelf->top__DOT__inst_D 
                                                      >> 0x14U)) 
                                                  == (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M));
    top__DOT__DUT__DOT____VdfgTmp_h2c662355__0 = ((0x1fU 
                                                   & (vlSelf->top__DOT__inst_D 
                                                      >> 0xfU)) 
                                                  == (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X));
    top__DOT__DUT__DOT____VdfgTmp_h145eec55__0 = ((0x1fU 
                                                   & (vlSelf->top__DOT__inst_D 
                                                      >> 0x14U)) 
                                                  == (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X));
    top__DOT__DUT__DOT____VdfgTmp_h622529b5__0 = ((IData)(vlSelf->top__DOT__DUT__DOT__rs2_en_D) 
                                                  & (IData)(vlSelf->top__DOT__DUT__DOT__val_D));
    top__DOT__DUT__DOT____VdfgTmp_hd5c67ea2__0 = ((IData)(vlSelf->top__DOT__DUT__DOT__rs1_en_D) 
                                                  & (IData)(vlSelf->top__DOT__DUT__DOT__val_D));
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
    vlSelf->top__DOT__DUT__DOT__pc_redirect_D = ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                                                 & (1U 
                                                    == (IData)(vlSelf->top__DOT__DUT__DOT__j_type_D)));
    vlSelf->top__DOT__DUT__DOT__ostall_mngr2proc_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
           & ((~ (IData)(vlSelf->top__DOT__mngr2proc_val)) 
              & (IData)(vlSelf->top__DOT__DUT__DOT__mngr2proc_rdy_D)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_F))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_F 
            = vlSelf->top__DOT__DUT__DOT__ostall_F;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_imul_resp_val_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_imul_resp_val_X))) {
        vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_imul_resp_val_X 
            = vlSelf->top__DOT__DUT__DOT__ostall_imul_resp_val_X;
    }
    if (vlSelf->top__DOT__DUT__DOT__pc_redirect_X) {
        vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__pc_sel_F = vlSelf->top__DOT__DUT__DOT__pc_sel_X;
    } else {
        vlSelf->top__DOT__pc_sel_F = ((IData)(vlSelf->top__DOT__DUT__DOT__pc_redirect_D)
                                       ? (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_D)
                                       : 3U);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__pc_redirect_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_redirect_X))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_redirect_X 
            = vlSelf->top__DOT__DUT__DOT__pc_redirect_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_W))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_W 
            = vlSelf->top__DOT__DUT__DOT__ostall_W;
    }
    vlSelf->top__DOT__DUT__DOT__stall_W = ((IData)(vlSelf->top__DOT__DUT__DOT__val_W) 
                                           & (IData)(vlSelf->top__DOT__DUT__DOT__ostall_W));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_M))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_M 
            = vlSelf->top__DOT__DUT__DOT__ostall_M;
    }
    top__DOT__DUT__DOT____VdfgTmp_hb97078a9__0 = ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_M) 
                                                  | (IData)(vlSelf->top__DOT__DUT__DOT__ostall_W));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_dmem_reqstream_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_dmem_reqstream_X))) {
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_dmem_reqstream_X 
            = vlSelf->top__DOT__DUT__DOT__ostall_dmem_reqstream_X;
    }
    vlSelf->top__DOT__DUT__DOT__ostall_X = ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                            & ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_dmem_reqstream_X) 
                                               | (IData)(vlSelf->top__DOT__DUT__DOT__ostall_imul_resp_val_X)));
    top__DOT__DUT__DOT____VdfgTmp_h3d0a317b__0 = ((IData)(vlSelf->top__DOT__DUT__DOT__rs1_en_D) 
                                                  & ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                                     & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_X) 
                                                        & ((IData)(top__DOT__DUT__DOT____VdfgTmp_h2c662355__0) 
                                                           & (0U 
                                                              != (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X))))));
    top__DOT__DUT__DOT____VdfgTmp_h06acbb32__0 = ((IData)(vlSelf->top__DOT__DUT__DOT__rs2_en_D) 
                                                  & ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                                     & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_X) 
                                                        & ((IData)(top__DOT__DUT__DOT____VdfgTmp_h145eec55__0) 
                                                           & (0U 
                                                              != (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X))))));
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
    vlSelf->top__DOT__DUT__DOT__bypass_waddr_X_rs2_D 
        = ((IData)(top__DOT__DUT__DOT____VdfgTmp_h622529b5__0) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
              & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_X) 
                 & ((IData)(top__DOT__DUT__DOT____VdfgTmp_h145eec55__0) 
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
    vlSelf->top__DOT__DUT__DOT__bypass_waddr_X_rs1_D 
        = ((IData)(top__DOT__DUT__DOT____VdfgTmp_hd5c67ea2__0) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
              & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_X) 
                 & ((IData)(top__DOT__DUT__DOT____VdfgTmp_h2c662355__0) 
                    & (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_ha2ba3bfa__0)))));
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
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_mngr2proc_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_mngr2proc_D))) {
        vlSymsp->__Vcoverage[223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_mngr2proc_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_mngr2proc_D;
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
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_X))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_X 
            = vlSelf->top__DOT__DUT__DOT__ostall_X;
    }
    top__DOT__DUT__DOT____VdfgTmp_h699142ba__0 = ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_X) 
                                                  | (IData)(top__DOT__DUT__DOT____VdfgTmp_hb97078a9__0));
    vlSelf->top__DOT__DUT__DOT__ostall_load_use_X_rsl_D 
        = ((IData)(top__DOT__DUT__DOT____VdfgTmp_h3d0a317b__0) 
           & (1U == (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X)));
    vlSelf->top__DOT__DUT__DOT__ostall_load_use_X_rs2_D 
        = ((IData)(top__DOT__DUT__DOT____VdfgTmp_h06acbb32__0) 
           & (1U == (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X)));
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
    if (vlSelf->top__DOT__DUT__DOT__bypass_waddr_X_rs2_D) {
        vlSymsp->__Vcoverage[213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__op2_byp_sel_D = 3U;
    } else {
        vlSelf->top__DOT__op2_byp_sel_D = ((IData)(vlSelf->top__DOT__DUT__DOT__bypass_waddr_M_rs2_D)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__DUT__DOT__bypass_waddr_W_rs2_D)
                                             ? 1U : 0U));
    }
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
    if (((IData)(vlSelf->top__DOT__DUT__DOT__bypass_waddr_X_rs2_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__bypass_waddr_X_rs2_D))) {
        vlSymsp->__Vcoverage[216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__bypass_waddr_X_rs2_D 
            = vlSelf->top__DOT__DUT__DOT__bypass_waddr_X_rs2_D;
    }
    vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs2_D 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__bypass_waddr_X_rs2_D)) 
           & (IData)(top__DOT__DUT__DOT____VdfgTmp_h06acbb32__0));
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
    if (vlSelf->top__DOT__DUT__DOT__bypass_waddr_X_rs1_D) {
        vlSymsp->__Vcoverage[208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__op1_byp_sel_D = 2U;
    } else {
        vlSelf->top__DOT__op1_byp_sel_D = ((IData)(vlSelf->top__DOT__DUT__DOT__bypass_waddr_M_rs1_D)
                                            ? 1U : 
                                           ((IData)(vlSelf->top__DOT__DUT__DOT__bypass_waddr_W_rs1_D)
                                             ? 0U : 3U));
    }
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
    if (((IData)(vlSelf->top__DOT__DUT__DOT__bypass_waddr_X_rs1_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__bypass_waddr_X_rs1_D))) {
        vlSymsp->__Vcoverage[215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__bypass_waddr_X_rs1_D 
            = vlSelf->top__DOT__DUT__DOT__bypass_waddr_X_rs1_D;
    }
    vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs1_D 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__bypass_waddr_X_rs1_D)) 
           & (IData)(top__DOT__DUT__DOT____VdfgTmp_h3d0a317b__0));
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
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_load_use_X_rsl_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_load_use_X_rsl_D))) {
        vlSymsp->__Vcoverage[221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_load_use_X_rsl_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_load_use_X_rsl_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_load_use_X_rs2_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_load_use_X_rs2_D))) {
        vlSymsp->__Vcoverage[222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_load_use_X_rs2_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_load_use_X_rs2_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs2_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_W_rs2_D))) {
        vlSymsp->__Vcoverage[229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_W_rs2_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs2_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs2_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_M_rs2_D))) {
        vlSymsp->__Vcoverage[228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_M_rs2_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs2_D;
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
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs2_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_X_rs2_D))) {
        vlSymsp->__Vcoverage[227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_X_rs2_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs2_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs1_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_W_rs1_D))) {
        vlSymsp->__Vcoverage[226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_W_rs1_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs1_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs1_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_M_rs1_D))) {
        vlSymsp->__Vcoverage[225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_M_rs1_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs1_D;
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
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs1_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_X_rs1_D))) {
        vlSymsp->__Vcoverage[224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_X_rs1_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs1_D;
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
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_hazard_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_hazard_D))) {
        vlSymsp->__Vcoverage[231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_hazard_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_hazard_D;
    }
    vlSelf->top__DOT__DUT__DOT__ostall_D = ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                                            & ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_mngr2proc_D) 
                                               | (IData)(vlSelf->top__DOT__DUT__DOT__ostall_hazard_D)));
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
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_D))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_D;
    }
    top__DOT__DUT__DOT____VdfgTmp_hb7aab7a1__0 = ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_D) 
                                                  | (IData)(top__DOT__DUT__DOT____VdfgTmp_h699142ba__0));
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
    vlSelf->top__DOT__DUT__DOT__stall_F = ((IData)(vlSelf->top__DOT__DUT__DOT__val_F) 
                                           & ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_F) 
                                              | (IData)(top__DOT__DUT__DOT____VdfgTmp_hb7aab7a1__0)));
    vlSelf->top__DOT__DUT__DOT__stall_D = ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                                           & (IData)(top__DOT__DUT__DOT____VdfgTmp_hb7aab7a1__0));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__squash_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__squash_D))) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__squash_D 
            = vlSelf->top__DOT__DUT__DOT__squash_D;
    }
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

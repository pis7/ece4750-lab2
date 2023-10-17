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
    IData/*31:0*/ __Vtask_top__DOT__csrr__18__data;
    __Vtask_top__DOT__csrr__18__data = 0;
    CData/*4:0*/ __Vtask_top__DOT__csrr__18__writeReg;
    __Vtask_top__DOT__csrr__18__writeReg = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__19__delay_val;
    __Vtask_top__DOT__delay__19__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__19__unnamedblk1__DOT__i;
    __Vtask_top__DOT__delay__19__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vtask_top__DOT__csrr__20__data;
    __Vtask_top__DOT__csrr__20__data = 0;
    CData/*4:0*/ __Vtask_top__DOT__csrr__20__writeReg;
    __Vtask_top__DOT__csrr__20__writeReg = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__21__delay_val;
    __Vtask_top__DOT__delay__21__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__21__unnamedblk1__DOT__i;
    __Vtask_top__DOT__delay__21__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__36__delay_val;
    __Vtask_top__DOT__delay__36__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__36__unnamedblk1__DOT__i;
    __Vtask_top__DOT__delay__36__unnamedblk1__DOT__i = 0;
    CData/*4:0*/ __Vtask_top__DOT__csrw__37__readReg;
    __Vtask_top__DOT__csrw__37__readReg = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__40__delay_val;
    __Vtask_top__DOT__delay__40__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__40__unnamedblk1__DOT__i;
    __Vtask_top__DOT__delay__40__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vtask_top__DOT__csrr__41__data;
    __Vtask_top__DOT__csrr__41__data = 0;
    CData/*4:0*/ __Vtask_top__DOT__csrr__41__writeReg;
    __Vtask_top__DOT__csrr__41__writeReg = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__42__delay_val;
    __Vtask_top__DOT__delay__42__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__42__unnamedblk1__DOT__i;
    __Vtask_top__DOT__delay__42__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__55__delay_val;
    __Vtask_top__DOT__delay__55__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__55__unnamedblk1__DOT__i;
    __Vtask_top__DOT__delay__55__unnamedblk1__DOT__i = 0;
    CData/*4:0*/ __Vtask_top__DOT__csrw__56__readReg;
    __Vtask_top__DOT__csrw__56__readReg = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__59__delay_val;
    __Vtask_top__DOT__delay__59__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__59__unnamedblk1__DOT__i;
    __Vtask_top__DOT__delay__59__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vtask_top__DOT__csrr__60__data;
    __Vtask_top__DOT__csrr__60__data = 0;
    CData/*4:0*/ __Vtask_top__DOT__csrr__60__writeReg;
    __Vtask_top__DOT__csrr__60__writeReg = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__61__delay_val;
    __Vtask_top__DOT__delay__61__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__61__unnamedblk1__DOT__i;
    __Vtask_top__DOT__delay__61__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vtask_top__DOT__csrr__62__data;
    __Vtask_top__DOT__csrr__62__data = 0;
    CData/*4:0*/ __Vtask_top__DOT__csrr__62__writeReg;
    __Vtask_top__DOT__csrr__62__writeReg = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__63__delay_val;
    __Vtask_top__DOT__delay__63__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__63__unnamedblk1__DOT__i;
    __Vtask_top__DOT__delay__63__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__80__delay_val;
    __Vtask_top__DOT__delay__80__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__80__unnamedblk1__DOT__i;
    __Vtask_top__DOT__delay__80__unnamedblk1__DOT__i = 0;
    CData/*4:0*/ __Vtask_top__DOT__csrw__81__readReg;
    __Vtask_top__DOT__csrw__81__readReg = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__84__delay_val;
    __Vtask_top__DOT__delay__84__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__84__unnamedblk1__DOT__i;
    __Vtask_top__DOT__delay__84__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vtask_top__DOT__csrr__85__data;
    __Vtask_top__DOT__csrr__85__data = 0;
    CData/*4:0*/ __Vtask_top__DOT__csrr__85__writeReg;
    __Vtask_top__DOT__csrr__85__writeReg = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__86__delay_val;
    __Vtask_top__DOT__delay__86__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__86__unnamedblk1__DOT__i;
    __Vtask_top__DOT__delay__86__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__99__delay_val;
    __Vtask_top__DOT__delay__99__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__99__unnamedblk1__DOT__i;
    __Vtask_top__DOT__delay__99__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__110__delay_val;
    __Vtask_top__DOT__delay__110__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__110__unnamedblk1__DOT__i;
    __Vtask_top__DOT__delay__110__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__113__delay_val;
    __Vtask_top__DOT__delay__113__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__113__unnamedblk1__DOT__i;
    __Vtask_top__DOT__delay__113__unnamedblk1__DOT__i = 0;
    CData/*4:0*/ __Vtask_top__DOT__csrw__114__readReg;
    __Vtask_top__DOT__csrw__114__readReg = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__117__delay_val;
    __Vtask_top__DOT__delay__117__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__117__unnamedblk1__DOT__i;
    __Vtask_top__DOT__delay__117__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vtask_top__DOT__csrr__118__data;
    __Vtask_top__DOT__csrr__118__data = 0;
    CData/*4:0*/ __Vtask_top__DOT__csrr__118__writeReg;
    __Vtask_top__DOT__csrr__118__writeReg = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__119__delay_val;
    __Vtask_top__DOT__delay__119__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__119__unnamedblk1__DOT__i;
    __Vtask_top__DOT__delay__119__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vtask_top__DOT__csrr__120__data;
    __Vtask_top__DOT__csrr__120__data = 0;
    CData/*4:0*/ __Vtask_top__DOT__csrr__120__writeReg;
    __Vtask_top__DOT__csrr__120__writeReg = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__121__delay_val;
    __Vtask_top__DOT__delay__121__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__121__unnamedblk1__DOT__i;
    __Vtask_top__DOT__delay__121__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__136__delay_val;
    __Vtask_top__DOT__delay__136__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__136__unnamedblk1__DOT__i;
    __Vtask_top__DOT__delay__136__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vtask_top__DOT__csrr__137__data;
    __Vtask_top__DOT__csrr__137__data = 0;
    CData/*4:0*/ __Vtask_top__DOT__csrr__137__writeReg;
    __Vtask_top__DOT__csrr__137__writeReg = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__138__delay_val;
    __Vtask_top__DOT__delay__138__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__138__unnamedblk1__DOT__i;
    __Vtask_top__DOT__delay__138__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vtask_top__DOT__csrr__139__data;
    __Vtask_top__DOT__csrr__139__data = 0;
    CData/*4:0*/ __Vtask_top__DOT__csrr__139__writeReg;
    __Vtask_top__DOT__csrr__139__writeReg = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__140__delay_val;
    __Vtask_top__DOT__delay__140__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__140__unnamedblk1__DOT__i;
    __Vtask_top__DOT__delay__140__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__155__delay_val;
    __Vtask_top__DOT__delay__155__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__155__unnamedblk1__DOT__i;
    __Vtask_top__DOT__delay__155__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vtask_top__DOT__csrr__156__data;
    __Vtask_top__DOT__csrr__156__data = 0;
    CData/*4:0*/ __Vtask_top__DOT__csrr__156__writeReg;
    __Vtask_top__DOT__csrr__156__writeReg = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__157__delay_val;
    __Vtask_top__DOT__delay__157__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__157__unnamedblk1__DOT__i;
    __Vtask_top__DOT__delay__157__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vtask_top__DOT__csrr__158__data;
    __Vtask_top__DOT__csrr__158__data = 0;
    CData/*4:0*/ __Vtask_top__DOT__csrr__158__writeReg;
    __Vtask_top__DOT__csrr__158__writeReg = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__159__delay_val;
    __Vtask_top__DOT__delay__159__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__159__unnamedblk1__DOT__i;
    __Vtask_top__DOT__delay__159__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__184__delay_val;
    __Vtask_top__DOT__delay__184__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__184__unnamedblk1__DOT__i;
    __Vtask_top__DOT__delay__184__unnamedblk1__DOT__i = 0;
    CData/*4:0*/ __Vtask_top__DOT__csrw__185__readReg;
    __Vtask_top__DOT__csrw__185__readReg = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__188__delay_val;
    __Vtask_top__DOT__delay__188__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__188__unnamedblk1__DOT__i;
    __Vtask_top__DOT__delay__188__unnamedblk1__DOT__i = 0;
    // Body
    VL_WRITEF("Start of Testbench\n");
    vlSelf->top__DOT__imem_respstream_msg = 0xdeadbeefULL;
    vlSelf->top__DOT__imem_respstream_drop = 0U;
    vlSelf->top__DOT__dmem_respstream_msg_data = 0U;
    vlSelf->top__DOT__mngr2proc_data = 0U;
    vlSelf->top__DOT__reg_en_F = 1U;
    vlSelf->top__DOT__pc_sel_F = 3U;
    vlSelf->top__DOT__reg_en_D = 1U;
    vlSelf->top__DOT__op1_sel_D = 0U;
    vlSelf->top__DOT__op2_sel_D = 0U;
    vlSelf->top__DOT__csrr_sel_D = 0U;
    vlSelf->top__DOT__imm_type_D = 0U;
    vlSelf->top__DOT__imul_req_val_D = 0U;
    vlSelf->top__DOT__reg_en_X = 1U;
    vlSelf->top__DOT__alu_fn_X = 0U;
    vlSelf->top__DOT__ex_result_sel_X = 0U;
    vlSelf->top__DOT__imul_resp_rdy_X = 0U;
    vlSelf->top__DOT__reg_en_M = 1U;
    vlSelf->top__DOT__wb_result_sel_M = 0U;
    vlSelf->top__DOT__reg_en_W = 1U;
    vlSelf->top__DOT__rf_waddr_W = 0U;
    vlSelf->top__DOT__rf_wen_W = 0U;
    vlSelf->top__DOT__stats_en_wen_W = 0U;
    vlSelf->top__DOT__core_id = 0U;
    vlSelf->top__DOT__reset = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "utb_ProcAltDpath.v", 
                                       134);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       140);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reset = 0U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("Advancing time\n");
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x200U == vlSelf->top__DOT__DUT__DOT__pc_F))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("pc_F is correct.  Expected: 00000200, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__pc_F);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("pc_F is incorrect.  Expected: 00000200, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__pc_F);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 148, "");
        }
    }
    VL_WRITEF("Advancing time\n");
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       152);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x204U == vlSelf->top__DOT__DUT__DOT__pc_F))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("pc_F is correct.  Expected: 00000204, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__pc_F);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("pc_F is incorrect.  Expected: 00000204, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__pc_F);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 157, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x200U == vlSelf->top__DOT__DUT__DOT__pc_D))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("pc_D is correct.  Expected: 00000200, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__pc_D);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("pc_D is incorrect.  Expected: 00000200, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__pc_D);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 162, "");
        }
    }
    VL_WRITEF("Advancing time\n");
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       166);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x208U == vlSelf->top__DOT__DUT__DOT__pc_F))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("pc_F is correct.  Expected: 00000208, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__pc_F);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("pc_F is incorrect.  Expected: 00000208, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__pc_F);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 171, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x204U == vlSelf->top__DOT__DUT__DOT__pc_D))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("pc_D is correct.  Expected: 00000204, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__pc_D);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("pc_D is incorrect.  Expected: 00000204, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__pc_D);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 176, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x200U == vlSelf->top__DOT__DUT__DOT__pc_X))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("pc_X is correct.  Expected: 00000200, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__pc_X);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("pc_X is incorrect.  Expected: 00000200, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__pc_X);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 181, "");
        }
    }
    vlSelf->top__DOT__imm_type_D = 4U;
    vlSelf->top__DOT__pc_sel_F = 2U;
    VL_WRITEF("Advancing time with J imm jump on D stage\n");
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       189);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0xfffdb7eeU == vlSelf->top__DOT__DUT__DOT__pc_F))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("pc_F is correct.  Expected: fffdb7ee, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__pc_F);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("pc_F is incorrect.  Expected: fffdb7ee, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__pc_F);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 194, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x208U == vlSelf->top__DOT__DUT__DOT__pc_D))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("pc_D is correct.  Expected: 00000208, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__pc_D);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("pc_D is incorrect.  Expected: 00000208, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__pc_D);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 199, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x204U == vlSelf->top__DOT__DUT__DOT__pc_X))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("pc_X is correct.  Expected: 00000204, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__pc_X);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("pc_X is incorrect.  Expected: 00000204, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__pc_X);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 204, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "utb_ProcAltDpath.v", 
                                       206);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("\nTest ADD\n");
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       216);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reset = 0U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       218);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_top__DOT__csrr__18__writeReg = 1U;
    __Vtask_top__DOT__csrr__18__data = 0xaU;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1083);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_F = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1087);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_D = 1U;
    vlSelf->top__DOT__mngr2proc_data = __Vtask_top__DOT__csrr__18__data;
    vlSelf->top__DOT__csrr_sel_D = 0U;
    vlSelf->top__DOT__op2_sel_D = 2U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1094);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_X = 1U;
    vlSelf->top__DOT__alu_fn_X = 0xcU;
    vlSelf->top__DOT__ex_result_sel_X = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1100);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_M = 1U;
    vlSelf->top__DOT__wb_result_sel_M = 0U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1105);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_W = 1U;
    vlSelf->top__DOT__rf_waddr_W = __Vtask_top__DOT__csrr__18__writeReg;
    vlSelf->top__DOT__rf_wen_W = 1U;
    vlSymsp->__Vcoverage[381].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__delay__19__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__19__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__19__unnamedblk1__DOT__i, __Vtask_top__DOT__delay__19__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_ProcAltDpath.v", 
                                           1147);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__19__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__19__unnamedblk1__DOT__i);
    }
    vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__csrr__20__writeReg = 0x1fU;
    __Vtask_top__DOT__csrr__20__data = 0x14U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1083);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_F = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1087);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_D = 1U;
    vlSelf->top__DOT__mngr2proc_data = __Vtask_top__DOT__csrr__20__data;
    vlSelf->top__DOT__csrr_sel_D = 0U;
    vlSelf->top__DOT__op2_sel_D = 2U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1094);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_X = 1U;
    vlSelf->top__DOT__alu_fn_X = 0xcU;
    vlSelf->top__DOT__ex_result_sel_X = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1100);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_M = 1U;
    vlSelf->top__DOT__wb_result_sel_M = 0U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1105);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_W = 1U;
    vlSelf->top__DOT__rf_waddr_W = __Vtask_top__DOT__csrr__20__writeReg;
    vlSelf->top__DOT__rf_wen_W = 1U;
    vlSymsp->__Vcoverage[381].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__delay__21__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__21__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__21__unnamedblk1__DOT__i, __Vtask_top__DOT__delay__21__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_ProcAltDpath.v", 
                                           1147);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__21__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__21__unnamedblk1__DOT__i);
    }
    vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       231);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_respstream_msg = 0x1f08fb3ULL;
    vlSelf->top__DOT__imem_respstream_drop = 0U;
    vlSelf->top__DOT__dmem_respstream_msg_data = 0U;
    vlSelf->top__DOT__mngr2proc_data = 0U;
    vlSelf->top__DOT__reg_en_F = 1U;
    vlSelf->top__DOT__rf_wen_W = 0U;
    vlSelf->top__DOT__pc_sel_F = 3U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       245);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_D = 1U;
    vlSelf->top__DOT__op1_sel_D = 1U;
    vlSelf->top__DOT__op2_sel_D = 1U;
    vlSelf->top__DOT__csrr_sel_D = 0U;
    vlSelf->top__DOT__imul_req_val_D = 0U;
    vlSelf->top__DOT__op1_byp_sel_D = 3U;
    vlSelf->top__DOT__op2_byp_sel_D = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x1f08fb3U == vlSelf->top__DOT__inst_D))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("inst_D is correct.  Expected: 01f08fb3, Actual: %x\n",
                          32,vlSelf->top__DOT__inst_D);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("inst_D is incorrect.  Expected: 01f08fb3, Actual: %x\n",
                      32,vlSelf->top__DOT__inst_D);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 256, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0xaU == vlSelf->top__DOT__DUT__DOT__rf_rdata0_D))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("rf_rdata0_D is correct.  Expected: 0000000a, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__rf_rdata0_D);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("rf_rdata0_D is incorrect.  Expected: 0000000a, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__rf_rdata0_D);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 261, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x14U == vlSelf->top__DOT__DUT__DOT__rf_rdata1_D))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("rf_rdata1_D is correct.  Expected: 00000014, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__rf_rdata1_D);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("rf_rdata1_D is incorrect.  Expected: 00000014, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__rf_rdata1_D);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 266, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       270);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_X = 1U;
    vlSelf->top__DOT__alu_fn_X = 0U;
    vlSelf->top__DOT__ex_result_sel_X = 1U;
    vlSelf->top__DOT__imul_resp_rdy_X = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0xaU == vlSelf->top__DOT__DUT__DOT__op1_X))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("op1_X is correct.  Expected: 0000000a, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__op1_X);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("op1_X is incorrect.  Expected: 0000000a, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__op1_X);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 278, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x14U == vlSelf->top__DOT__DUT__DOT__op2_X))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("op2_X is correct.  Expected: 00000014, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__op2_X);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("op2_X is incorrect.  Expected: 00000014, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__op2_X);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 283, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       287);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_M = 1U;
    vlSelf->top__DOT__wb_result_sel_M = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x1eU == vlSelf->top__DOT__DUT__DOT__ex_result_M))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("ex_result_M is correct.  Expected: 0000001e, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__ex_result_M);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("ex_result_M is incorrect.  Expected: 0000001e, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__ex_result_M);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 293, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       297);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_W = 0U;
    vlSelf->top__DOT__rf_waddr_W = 0x1fU;
    vlSelf->top__DOT__rf_wen_W = 1U;
    vlSelf->top__DOT__stats_en_wen_W = 0U;
    vlSelf->top__DOT__core_id = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x1eU == vlSelf->top__DOT__DUT__DOT__wb_result_W))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("wb_result_W is correct.  Expected: 0000001e, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__wb_result_W);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("wb_result_W is incorrect.  Expected: 0000001e, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__wb_result_W);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 306, "");
        }
    }
    __Vtask_top__DOT__delay__36__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__36__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__36__unnamedblk1__DOT__i, __Vtask_top__DOT__delay__36__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_ProcAltDpath.v", 
                                           1147);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__36__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__36__unnamedblk1__DOT__i);
    }
    vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__csrw__37__readReg = 0x1fU;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1116);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_F = 1U;
    vlSelf->top__DOT__imem_respstream_msg = ((0x7fff00000000ULL 
                                              & vlSelf->top__DOT__imem_respstream_msg) 
                                             | (IData)((IData)(
                                                               (0x1073U 
                                                                | ((IData)(__Vtask_top__DOT__csrw__37__readReg) 
                                                                   << 0xfU)))));
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1121);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_D = 1U;
    vlSelf->top__DOT__op1_sel_D = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1126);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_X = 1U;
    vlSelf->top__DOT__alu_fn_X = 0xbU;
    vlSelf->top__DOT__ex_result_sel_X = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1132);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_M = 1U;
    vlSelf->top__DOT__wb_result_sel_M = 0U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1137);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_W = 1U;
    vlSelf->top__DOT__rf_wen_W = 0U;
    vlSymsp->__Vcoverage[382].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x1eU == vlSelf->top__DOT__DUT__DOT__wb_result_W))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("proc2mngr_data is correct.  Expected: 0000001e, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__wb_result_W);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("proc2mngr_data is incorrect.  Expected: 0000001e, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__wb_result_W);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 316, "");
        }
    }
    __Vtask_top__DOT__delay__40__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__40__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__40__unnamedblk1__DOT__i, __Vtask_top__DOT__delay__40__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_ProcAltDpath.v", 
                                           1147);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__40__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__40__unnamedblk1__DOT__i);
    }
    vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\nTest ORI\n");
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       328);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reset = 0U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       330);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_top__DOT__csrr__41__writeReg = 1U;
    __Vtask_top__DOT__csrr__41__data = 0xaU;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1083);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_F = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1087);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_D = 1U;
    vlSelf->top__DOT__mngr2proc_data = __Vtask_top__DOT__csrr__41__data;
    vlSelf->top__DOT__csrr_sel_D = 0U;
    vlSelf->top__DOT__op2_sel_D = 2U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1094);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_X = 1U;
    vlSelf->top__DOT__alu_fn_X = 0xcU;
    vlSelf->top__DOT__ex_result_sel_X = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1100);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_M = 1U;
    vlSelf->top__DOT__wb_result_sel_M = 0U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1105);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_W = 1U;
    vlSelf->top__DOT__rf_waddr_W = __Vtask_top__DOT__csrr__41__writeReg;
    vlSelf->top__DOT__rf_wen_W = 1U;
    vlSymsp->__Vcoverage[381].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__delay__42__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__42__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__42__unnamedblk1__DOT__i, __Vtask_top__DOT__delay__42__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_ProcAltDpath.v", 
                                           1147);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__42__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__42__unnamedblk1__DOT__i);
    }
    vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       339);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_respstream_msg = 0xfff0e193ULL;
    vlSelf->top__DOT__imem_respstream_drop = 0U;
    vlSelf->top__DOT__dmem_respstream_msg_data = 0U;
    vlSelf->top__DOT__mngr2proc_data = 0U;
    vlSelf->top__DOT__reg_en_F = 1U;
    vlSelf->top__DOT__rf_wen_W = 0U;
    vlSelf->top__DOT__pc_sel_F = 3U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       353);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_D = 1U;
    vlSelf->top__DOT__op1_sel_D = 1U;
    vlSelf->top__DOT__op2_sel_D = 0U;
    vlSelf->top__DOT__imm_type_D = 0U;
    vlSelf->top__DOT__imul_req_val_D = 0U;
    vlSelf->top__DOT__op1_byp_sel_D = 3U;
    vlSelf->top__DOT__op2_byp_sel_D = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0xfff0e193U == vlSelf->top__DOT__inst_D))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("inst_D is correct.  Expected: fff0e193, Actual: %x\n",
                          32,vlSelf->top__DOT__inst_D);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("inst_D is incorrect.  Expected: fff0e193, Actual: %x\n",
                      32,vlSelf->top__DOT__inst_D);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 364, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0xaU == vlSelf->top__DOT__DUT__DOT__rf_rdata0_D))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("rf_rdata0_D is correct.  Expected: 0000000a, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__rf_rdata0_D);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("rf_rdata0_D is incorrect.  Expected: 0000000a, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__rf_rdata0_D);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 369, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_X = 1U;
    vlSelf->top__DOT__alu_fn_X = 3U;
    vlSelf->top__DOT__ex_result_sel_X = 1U;
    vlSelf->top__DOT__imul_resp_rdy_X = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0xaU == vlSelf->top__DOT__DUT__DOT__op1_X))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("op1_X is correct.  Expected: 0000000a, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__op1_X);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("op1_X is incorrect.  Expected: 0000000a, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__op1_X);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 381, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0xffffffffU == vlSelf->top__DOT__DUT__DOT__op2_X))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("op2_X is correct.  Expected: ffffffff, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__op2_X);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("op2_X is incorrect.  Expected: ffffffff, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__op2_X);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 386, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       390);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_M = 1U;
    vlSelf->top__DOT__wb_result_sel_M = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0xffffffffU == vlSelf->top__DOT__DUT__DOT__ex_result_M))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("ex_result_M is correct.  Expected: ffffffff, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__ex_result_M);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("ex_result_M is incorrect.  Expected: ffffffff, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__ex_result_M);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 396, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       400);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_W = 0U;
    vlSelf->top__DOT__rf_waddr_W = 3U;
    vlSelf->top__DOT__rf_wen_W = 1U;
    vlSelf->top__DOT__stats_en_wen_W = 0U;
    vlSelf->top__DOT__core_id = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0xffffffffU == vlSelf->top__DOT__DUT__DOT__wb_result_W))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("wb_result_W is correct.  Expected: ffffffff, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__wb_result_W);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("wb_result_W is incorrect.  Expected: ffffffff, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__wb_result_W);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 409, "");
        }
    }
    __Vtask_top__DOT__delay__55__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__55__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__55__unnamedblk1__DOT__i, __Vtask_top__DOT__delay__55__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_ProcAltDpath.v", 
                                           1147);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__55__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__55__unnamedblk1__DOT__i);
    }
    vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__csrw__56__readReg = 3U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1116);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_F = 1U;
    vlSelf->top__DOT__imem_respstream_msg = ((0x7fff00000000ULL 
                                              & vlSelf->top__DOT__imem_respstream_msg) 
                                             | (IData)((IData)(
                                                               (0x1073U 
                                                                | ((IData)(__Vtask_top__DOT__csrw__56__readReg) 
                                                                   << 0xfU)))));
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1121);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_D = 1U;
    vlSelf->top__DOT__op1_sel_D = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1126);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_X = 1U;
    vlSelf->top__DOT__alu_fn_X = 0xbU;
    vlSelf->top__DOT__ex_result_sel_X = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1132);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_M = 1U;
    vlSelf->top__DOT__wb_result_sel_M = 0U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1137);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_W = 1U;
    vlSelf->top__DOT__rf_wen_W = 0U;
    vlSymsp->__Vcoverage[382].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0xffffffffU == vlSelf->top__DOT__DUT__DOT__wb_result_W))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("proc2mngr_data is correct.  Expected: ffffffff, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__wb_result_W);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("proc2mngr_data is incorrect.  Expected: ffffffff, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__wb_result_W);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 419, "");
        }
    }
    __Vtask_top__DOT__delay__59__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__59__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__59__unnamedblk1__DOT__i, __Vtask_top__DOT__delay__59__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_ProcAltDpath.v", 
                                           1147);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__59__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__59__unnamedblk1__DOT__i);
    }
    vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\nTest MUL\n");
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       431);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reset = 0U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       433);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_top__DOT__csrr__60__writeReg = 1U;
    __Vtask_top__DOT__csrr__60__data = 0x3ff7U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1083);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_F = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1087);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_D = 1U;
    vlSelf->top__DOT__mngr2proc_data = __Vtask_top__DOT__csrr__60__data;
    vlSelf->top__DOT__csrr_sel_D = 0U;
    vlSelf->top__DOT__op2_sel_D = 2U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1094);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_X = 1U;
    vlSelf->top__DOT__alu_fn_X = 0xcU;
    vlSelf->top__DOT__ex_result_sel_X = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1100);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_M = 1U;
    vlSelf->top__DOT__wb_result_sel_M = 0U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1105);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_W = 1U;
    vlSelf->top__DOT__rf_waddr_W = __Vtask_top__DOT__csrr__60__writeReg;
    vlSelf->top__DOT__rf_wen_W = 1U;
    vlSymsp->__Vcoverage[381].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__delay__61__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__61__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__61__unnamedblk1__DOT__i, __Vtask_top__DOT__delay__61__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_ProcAltDpath.v", 
                                           1147);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__61__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__61__unnamedblk1__DOT__i);
    }
    vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__csrr__62__writeReg = 2U;
    __Vtask_top__DOT__csrr__62__data = 0x1affU;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1083);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_F = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1087);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_D = 1U;
    vlSelf->top__DOT__mngr2proc_data = __Vtask_top__DOT__csrr__62__data;
    vlSelf->top__DOT__csrr_sel_D = 0U;
    vlSelf->top__DOT__op2_sel_D = 2U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1094);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_X = 1U;
    vlSelf->top__DOT__alu_fn_X = 0xcU;
    vlSelf->top__DOT__ex_result_sel_X = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1100);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_M = 1U;
    vlSelf->top__DOT__wb_result_sel_M = 0U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1105);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_W = 1U;
    vlSelf->top__DOT__rf_waddr_W = __Vtask_top__DOT__csrr__62__writeReg;
    vlSelf->top__DOT__rf_wen_W = 1U;
    vlSymsp->__Vcoverage[381].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__delay__63__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__63__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__63__unnamedblk1__DOT__i, __Vtask_top__DOT__delay__63__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_ProcAltDpath.v", 
                                           1147);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__63__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__63__unnamedblk1__DOT__i);
    }
    vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       447);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_respstream_msg = 0x22081b3ULL;
    vlSelf->top__DOT__imem_respstream_drop = 0U;
    vlSelf->top__DOT__dmem_respstream_msg_data = 0U;
    vlSelf->top__DOT__mngr2proc_data = 0U;
    vlSelf->top__DOT__reg_en_F = 1U;
    vlSelf->top__DOT__rf_wen_W = 0U;
    vlSelf->top__DOT__pc_sel_F = 3U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       461);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_D = 1U;
    vlSelf->top__DOT__op1_sel_D = 1U;
    vlSelf->top__DOT__op2_sel_D = 1U;
    vlSelf->top__DOT__imul_req_val_D = 1U;
    vlSelf->top__DOT__op1_byp_sel_D = 3U;
    vlSelf->top__DOT__op2_byp_sel_D = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x22081b3U == vlSelf->top__DOT__inst_D))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("inst_D is correct.  Expected: 022081b3, Actual: %x\n",
                          32,vlSelf->top__DOT__inst_D);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("inst_D is incorrect.  Expected: 022081b3, Actual: %x\n",
                      32,vlSelf->top__DOT__inst_D);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 471, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x3ff7U == vlSelf->top__DOT__DUT__DOT__rf_rdata0_D))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("rf_rdata0_D is correct.  Expected: 00003ff7, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__rf_rdata0_D);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("rf_rdata0_D is incorrect.  Expected: 00003ff7, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__rf_rdata0_D);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 476, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x1affU == vlSelf->top__DOT__DUT__DOT__rf_rdata1_D))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("rf_rdata1_D is correct.  Expected: 00001aff, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__rf_rdata1_D);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("rf_rdata1_D is incorrect.  Expected: 00001aff, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__rf_rdata1_D);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       485);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_X = 1U;
    vlSelf->top__DOT__alu_fn_X = 3U;
    vlSelf->top__DOT__ex_result_sel_X = 2U;
    vlSelf->top__DOT__imul_resp_rdy_X = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x3ff7U == vlSelf->top__DOT__DUT__DOT__op1_X))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("op1_X is correct.  Expected: 00003ff7, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__op1_X);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("op1_X is incorrect.  Expected: 00003ff7, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__op1_X);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 493, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x1affU == vlSelf->top__DOT__DUT__DOT__op2_X))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("op2_X is correct.  Expected: 00001aff, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__op2_X);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("op2_X is incorrect.  Expected: 00001aff, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__op2_X);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 498, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY(vlSelf->top__DOT__imul_resp_val_X)) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("imul_resp_val_X is incorrect.  Expected: 0, Actual: %x\n",
                          1,vlSelf->top__DOT__imul_resp_val_X);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_FINISH_MT("utb_ProcAltDpath.v", 503, "");
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("imul_resp_val_X is correct.  Expected: 0, Actual: %x\n",
                      1,vlSelf->top__DOT__imul_resp_val_X);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    vlSelf->top__DOT__reg_en_X = 0U;
    vlSelf->top__DOT__reg_en_D = 0U;
    vlSelf->top__DOT__reg_en_F = 0U;
    co_await vlSelf->__VtrigSched_hf1be2148__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top.imul_resp_val_X)", 
                                                       "utb_ProcAltDpath.v", 
                                                       508);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_X = 1U;
    vlSelf->top__DOT__reg_en_D = 1U;
    vlSelf->top__DOT__reg_en_F = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       514);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_M = 1U;
    vlSelf->top__DOT__wb_result_sel_M = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x6becd09U == vlSelf->top__DOT__DUT__DOT__ex_result_M))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("ex_result_M is correct.  Expected: 06becd09, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__ex_result_M);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("ex_result_M is incorrect.  Expected: 06becd09, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__ex_result_M);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 520, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       524);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_W = 0U;
    vlSelf->top__DOT__rf_waddr_W = 3U;
    vlSelf->top__DOT__rf_wen_W = 1U;
    vlSelf->top__DOT__stats_en_wen_W = 0U;
    vlSelf->top__DOT__core_id = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x6becd09U == vlSelf->top__DOT__DUT__DOT__wb_result_W))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("wb_result_W is correct.  Expected: 06becd09, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__wb_result_W);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("wb_result_W is incorrect.  Expected: 06becd09, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__wb_result_W);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 533, "");
        }
    }
    __Vtask_top__DOT__delay__80__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__80__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__80__unnamedblk1__DOT__i, __Vtask_top__DOT__delay__80__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_ProcAltDpath.v", 
                                           1147);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__80__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__80__unnamedblk1__DOT__i);
    }
    vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__csrw__81__readReg = 3U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1116);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_F = 1U;
    vlSelf->top__DOT__imem_respstream_msg = ((0x7fff00000000ULL 
                                              & vlSelf->top__DOT__imem_respstream_msg) 
                                             | (IData)((IData)(
                                                               (0x1073U 
                                                                | ((IData)(__Vtask_top__DOT__csrw__81__readReg) 
                                                                   << 0xfU)))));
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1121);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_D = 1U;
    vlSelf->top__DOT__op1_sel_D = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1126);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_X = 1U;
    vlSelf->top__DOT__alu_fn_X = 0xbU;
    vlSelf->top__DOT__ex_result_sel_X = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1132);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_M = 1U;
    vlSelf->top__DOT__wb_result_sel_M = 0U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1137);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_W = 1U;
    vlSelf->top__DOT__rf_wen_W = 0U;
    vlSymsp->__Vcoverage[382].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x6becd09U == vlSelf->top__DOT__DUT__DOT__wb_result_W))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("proc2mngr_data is correct.  Expected: 06becd09, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__wb_result_W);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("proc2mngr_data is incorrect.  Expected: 06becd09, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__wb_result_W);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 543, "");
        }
    }
    __Vtask_top__DOT__delay__84__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__84__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__84__unnamedblk1__DOT__i, __Vtask_top__DOT__delay__84__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_ProcAltDpath.v", 
                                           1147);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__84__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__84__unnamedblk1__DOT__i);
    }
    vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\nTest LW with dmem stall\n");
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       555);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reset = 0U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       557);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_top__DOT__csrr__85__writeReg = 1U;
    __Vtask_top__DOT__csrr__85__data = 0xaU;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1083);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_F = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1087);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_D = 1U;
    vlSelf->top__DOT__mngr2proc_data = __Vtask_top__DOT__csrr__85__data;
    vlSelf->top__DOT__csrr_sel_D = 0U;
    vlSelf->top__DOT__op2_sel_D = 2U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1094);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_X = 1U;
    vlSelf->top__DOT__alu_fn_X = 0xcU;
    vlSelf->top__DOT__ex_result_sel_X = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1100);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_M = 1U;
    vlSelf->top__DOT__wb_result_sel_M = 0U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1105);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_W = 1U;
    vlSelf->top__DOT__rf_waddr_W = __Vtask_top__DOT__csrr__85__writeReg;
    vlSelf->top__DOT__rf_wen_W = 1U;
    vlSymsp->__Vcoverage[381].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__delay__86__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__86__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__86__unnamedblk1__DOT__i, __Vtask_top__DOT__delay__86__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_ProcAltDpath.v", 
                                           1147);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__86__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__86__unnamedblk1__DOT__i);
    }
    vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       566);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_respstream_msg = 0x10a103ULL;
    vlSelf->top__DOT__imem_respstream_drop = 0U;
    vlSelf->top__DOT__dmem_respstream_msg_data = 0U;
    vlSelf->top__DOT__mngr2proc_data = 0U;
    vlSelf->top__DOT__reg_en_F = 1U;
    vlSelf->top__DOT__rf_wen_W = 0U;
    vlSelf->top__DOT__pc_sel_F = 3U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       580);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_D = 1U;
    vlSelf->top__DOT__op1_sel_D = 1U;
    vlSelf->top__DOT__op2_sel_D = 0U;
    vlSelf->top__DOT__imm_type_D = 0U;
    vlSelf->top__DOT__imul_req_val_D = 0U;
    vlSelf->top__DOT__op1_byp_sel_D = 3U;
    vlSelf->top__DOT__op2_byp_sel_D = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x10a103U == vlSelf->top__DOT__inst_D))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("inst_D is correct.  Expected: 0010a103, Actual: %x\n",
                          32,vlSelf->top__DOT__inst_D);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("inst_D is incorrect.  Expected: 0010a103, Actual: %x\n",
                      32,vlSelf->top__DOT__inst_D);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 591, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0xaU == vlSelf->top__DOT__DUT__DOT__rf_rdata0_D))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("rf_rdata0_D is correct.  Expected: 0000000a, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__rf_rdata0_D);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("rf_rdata0_D is incorrect.  Expected: 0000000a, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__rf_rdata0_D);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 596, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       600);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_X = 1U;
    vlSelf->top__DOT__alu_fn_X = 0U;
    vlSelf->top__DOT__ex_result_sel_X = 1U;
    vlSelf->top__DOT__imul_resp_rdy_X = 0U;
    vlSelf->top__DOT__reg_en_X = 0U;
    vlSelf->top__DOT__reg_en_D = 0U;
    vlSelf->top__DOT__reg_en_F = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0xaU == vlSelf->top__DOT__DUT__DOT__op1_X))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("op1_X is correct.  Expected: 0000000a, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__op1_X);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("op1_X is incorrect.  Expected: 0000000a, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__op1_X);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 611, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U == vlSelf->top__DOT__DUT__DOT__op2_X))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("op2_X is correct.  Expected: 00000001, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__op2_X);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("op2_X is incorrect.  Expected: 00000001, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__op2_X);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 616, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x10a103U == vlSelf->top__DOT__inst_D))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("inst_D is correct.  Expected: 0010a103, Actual: %x\n",
                          32,vlSelf->top__DOT__inst_D);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("inst_D is incorrect.  Expected: 0010a103, Actual: %x\n",
                      32,vlSelf->top__DOT__inst_D);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 621, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0xaU == vlSelf->top__DOT__DUT__DOT__rf_rdata0_D))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("rf_rdata0_D is correct.  Expected: 0000000a, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__rf_rdata0_D);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("rf_rdata0_D is incorrect.  Expected: 0000000a, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__rf_rdata0_D);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 626, "");
        }
    }
    __Vtask_top__DOT__delay__99__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__99__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__99__unnamedblk1__DOT__i, __Vtask_top__DOT__delay__99__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_ProcAltDpath.v", 
                                           1147);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__99__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__99__unnamedblk1__DOT__i);
    }
    vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       633);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0xaU == vlSelf->top__DOT__DUT__DOT__op1_X))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("op1_X is correct.  Expected: 0000000a, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__op1_X);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("op1_X is incorrect.  Expected: 0000000a, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__op1_X);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 637, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U == vlSelf->top__DOT__DUT__DOT__op2_X))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("op2_X is correct.  Expected: 00000001, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__op2_X);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("op2_X is incorrect.  Expected: 00000001, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__op2_X);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 642, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x10a103U == vlSelf->top__DOT__inst_D))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("inst_D is correct.  Expected: 0010a103, Actual: %x\n",
                          32,vlSelf->top__DOT__inst_D);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("inst_D is incorrect.  Expected: 0010a103, Actual: %x\n",
                      32,vlSelf->top__DOT__inst_D);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 647, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0xaU == vlSelf->top__DOT__DUT__DOT__rf_rdata0_D))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("rf_rdata0_D is correct.  Expected: 0000000a, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__rf_rdata0_D);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("rf_rdata0_D is incorrect.  Expected: 0000000a, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__rf_rdata0_D);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 652, "");
        }
    }
    vlSelf->top__DOT__reg_en_D = 1U;
    vlSelf->top__DOT__reg_en_F = 1U;
    vlSelf->top__DOT__reg_en_X = 1U;
    vlSelf->top__DOT__reg_en_M = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0xbU == vlSelf->top__DOT__DUT__DOT__alu_result_X))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("dmem_reqstream_msg_addr is correct.  Expected: 0000000b, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__alu_result_X);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("dmem_reqstream_msg_addr is incorrect.  Expected: 0000000b, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__alu_result_X);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 661, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       664);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_D = 0U;
    vlSelf->top__DOT__reg_en_F = 0U;
    vlSelf->top__DOT__reg_en_X = 0U;
    vlSelf->top__DOT__reg_en_M = 0U;
    __Vtask_top__DOT__delay__110__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__110__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__110__unnamedblk1__DOT__i, __Vtask_top__DOT__delay__110__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_ProcAltDpath.v", 
                                           1147);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__110__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__110__unnamedblk1__DOT__i);
    }
    vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       674);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_D = 1U;
    vlSelf->top__DOT__reg_en_F = 1U;
    vlSelf->top__DOT__reg_en_X = 1U;
    vlSelf->top__DOT__reg_en_M = 1U;
    vlSelf->top__DOT__wb_result_sel_M = 1U;
    vlSelf->top__DOT__dmem_respstream_msg_data = 0xffffffffU;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       683);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_W = 0U;
    vlSelf->top__DOT__rf_waddr_W = 2U;
    vlSelf->top__DOT__rf_wen_W = 1U;
    vlSelf->top__DOT__stats_en_wen_W = 0U;
    vlSelf->top__DOT__core_id = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0xffffffffU == vlSelf->top__DOT__DUT__DOT__wb_result_W))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("wb_result_W is correct.  Expected: ffffffff, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__wb_result_W);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("wb_result_W is incorrect.  Expected: ffffffff, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__wb_result_W);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 692, "");
        }
    }
    __Vtask_top__DOT__delay__113__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__113__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__113__unnamedblk1__DOT__i, __Vtask_top__DOT__delay__113__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_ProcAltDpath.v", 
                                           1147);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__113__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__113__unnamedblk1__DOT__i);
    }
    vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__csrw__114__readReg = 2U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1116);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_F = 1U;
    vlSelf->top__DOT__imem_respstream_msg = ((0x7fff00000000ULL 
                                              & vlSelf->top__DOT__imem_respstream_msg) 
                                             | (IData)((IData)(
                                                               (0x1073U 
                                                                | ((IData)(__Vtask_top__DOT__csrw__114__readReg) 
                                                                   << 0xfU)))));
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1121);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_D = 1U;
    vlSelf->top__DOT__op1_sel_D = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1126);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_X = 1U;
    vlSelf->top__DOT__alu_fn_X = 0xbU;
    vlSelf->top__DOT__ex_result_sel_X = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1132);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_M = 1U;
    vlSelf->top__DOT__wb_result_sel_M = 0U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1137);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_W = 1U;
    vlSelf->top__DOT__rf_wen_W = 0U;
    vlSymsp->__Vcoverage[382].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0xffffffffU == vlSelf->top__DOT__DUT__DOT__wb_result_W))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("proc2mngr_data is correct.  Expected: ffffffff, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__wb_result_W);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("proc2mngr_data is incorrect.  Expected: ffffffff, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__wb_result_W);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 702, "");
        }
    }
    __Vtask_top__DOT__delay__117__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__117__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__117__unnamedblk1__DOT__i, __Vtask_top__DOT__delay__117__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_ProcAltDpath.v", 
                                           1147);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__117__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__117__unnamedblk1__DOT__i);
    }
    vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\nTest SW\n");
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       714);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reset = 0U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       716);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_top__DOT__csrr__118__writeReg = 1U;
    __Vtask_top__DOT__csrr__118__data = 0xaU;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1083);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_F = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1087);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_D = 1U;
    vlSelf->top__DOT__mngr2proc_data = __Vtask_top__DOT__csrr__118__data;
    vlSelf->top__DOT__csrr_sel_D = 0U;
    vlSelf->top__DOT__op2_sel_D = 2U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1094);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_X = 1U;
    vlSelf->top__DOT__alu_fn_X = 0xcU;
    vlSelf->top__DOT__ex_result_sel_X = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1100);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_M = 1U;
    vlSelf->top__DOT__wb_result_sel_M = 0U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1105);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_W = 1U;
    vlSelf->top__DOT__rf_waddr_W = __Vtask_top__DOT__csrr__118__writeReg;
    vlSelf->top__DOT__rf_wen_W = 1U;
    vlSymsp->__Vcoverage[381].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__delay__119__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__119__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__119__unnamedblk1__DOT__i, __Vtask_top__DOT__delay__119__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_ProcAltDpath.v", 
                                           1147);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__119__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__119__unnamedblk1__DOT__i);
    }
    vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__csrr__120__writeReg = 2U;
    __Vtask_top__DOT__csrr__120__data = 0x41U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1083);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_F = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1087);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_D = 1U;
    vlSelf->top__DOT__mngr2proc_data = __Vtask_top__DOT__csrr__120__data;
    vlSelf->top__DOT__csrr_sel_D = 0U;
    vlSelf->top__DOT__op2_sel_D = 2U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1094);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_X = 1U;
    vlSelf->top__DOT__alu_fn_X = 0xcU;
    vlSelf->top__DOT__ex_result_sel_X = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1100);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_M = 1U;
    vlSelf->top__DOT__wb_result_sel_M = 0U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1105);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_W = 1U;
    vlSelf->top__DOT__rf_waddr_W = __Vtask_top__DOT__csrr__120__writeReg;
    vlSelf->top__DOT__rf_wen_W = 1U;
    vlSymsp->__Vcoverage[381].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__delay__121__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__121__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__121__unnamedblk1__DOT__i, __Vtask_top__DOT__delay__121__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_ProcAltDpath.v", 
                                           1147);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__121__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__121__unnamedblk1__DOT__i);
    }
    vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       729);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_respstream_msg = 0x20a0a3ULL;
    vlSelf->top__DOT__imem_respstream_drop = 0U;
    vlSelf->top__DOT__dmem_respstream_msg_data = 0U;
    vlSelf->top__DOT__mngr2proc_data = 0U;
    vlSelf->top__DOT__reg_en_F = 1U;
    vlSelf->top__DOT__rf_wen_W = 0U;
    vlSelf->top__DOT__pc_sel_F = 3U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       743);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_D = 1U;
    vlSelf->top__DOT__op1_sel_D = 1U;
    vlSelf->top__DOT__op2_sel_D = 0U;
    vlSelf->top__DOT__imm_type_D = 1U;
    vlSelf->top__DOT__imul_req_val_D = 0U;
    vlSelf->top__DOT__op1_byp_sel_D = 3U;
    vlSelf->top__DOT__op2_byp_sel_D = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x20a0a3U == vlSelf->top__DOT__inst_D))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("inst_D is correct.  Expected: 0020a0a3, Actual: %x\n",
                          32,vlSelf->top__DOT__inst_D);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("inst_D is incorrect.  Expected: 0020a0a3, Actual: %x\n",
                      32,vlSelf->top__DOT__inst_D);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 754, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0xaU == vlSelf->top__DOT__DUT__DOT__rf_rdata0_D))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("rf_rdata0_D is correct.  Expected: 0000000a, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__rf_rdata0_D);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("rf_rdata0_D is incorrect.  Expected: 0000000a, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__rf_rdata0_D);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 759, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x41U == vlSelf->top__DOT__DUT__DOT__rf_rdata1_D))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("rf_rdata1_D is correct.  Expected: 00000041, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__rf_rdata1_D);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("rf_rdata1_D is incorrect.  Expected: 00000041, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__rf_rdata1_D);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 764, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       768);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_X = 1U;
    vlSelf->top__DOT__alu_fn_X = 0U;
    vlSelf->top__DOT__imul_resp_rdy_X = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0xaU == vlSelf->top__DOT__DUT__DOT__op1_X))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("op1_X is correct.  Expected: 0000000a, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__op1_X);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("op1_X is incorrect.  Expected: 0000000a, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__op1_X);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 775, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U == vlSelf->top__DOT__DUT__DOT__op2_X))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("op2_X is correct.  Expected: 00000001, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__op2_X);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("op2_X is incorrect.  Expected: 00000001, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__op2_X);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 780, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x41U == vlSelf->top__DOT__dmem_reqstream_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("dmem_reqstream_msg_data is correct.  Expected: 00000041, Actual: %x\n",
                          32,vlSelf->top__DOT__dmem_reqstream_msg_data);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("dmem_reqstream_msg_data is incorrect.  Expected: 00000041, Actual: %x\n",
                      32,vlSelf->top__DOT__dmem_reqstream_msg_data);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 785, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       789);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_M = 1U;
    vlSelf->top__DOT__wb_result_sel_M = 1U;
    vlSelf->top__DOT__dmem_respstream_msg_data = 0x850a4beU;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0xbU == vlSelf->top__DOT__DUT__DOT__alu_result_X))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("dmem_reqstream_msg_addr is correct.  Expected: 0000000b, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__alu_result_X);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("dmem_reqstream_msg_addr is incorrect.  Expected: 0000000b, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__alu_result_X);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 796, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       800);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_top__DOT__delay__136__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__136__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__136__unnamedblk1__DOT__i, __Vtask_top__DOT__delay__136__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_ProcAltDpath.v", 
                                           1147);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__136__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__136__unnamedblk1__DOT__i);
    }
    vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\nTest BLT\n");
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       812);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reset = 0U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       814);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_top__DOT__csrr__137__writeReg = 1U;
    __Vtask_top__DOT__csrr__137__data = 0xaU;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1083);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_F = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1087);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_D = 1U;
    vlSelf->top__DOT__mngr2proc_data = __Vtask_top__DOT__csrr__137__data;
    vlSelf->top__DOT__csrr_sel_D = 0U;
    vlSelf->top__DOT__op2_sel_D = 2U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1094);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_X = 1U;
    vlSelf->top__DOT__alu_fn_X = 0xcU;
    vlSelf->top__DOT__ex_result_sel_X = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1100);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_M = 1U;
    vlSelf->top__DOT__wb_result_sel_M = 0U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1105);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_W = 1U;
    vlSelf->top__DOT__rf_waddr_W = __Vtask_top__DOT__csrr__137__writeReg;
    vlSelf->top__DOT__rf_wen_W = 1U;
    vlSymsp->__Vcoverage[381].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__delay__138__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__138__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__138__unnamedblk1__DOT__i, __Vtask_top__DOT__delay__138__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_ProcAltDpath.v", 
                                           1147);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__138__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__138__unnamedblk1__DOT__i);
    }
    vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__csrr__139__writeReg = 2U;
    __Vtask_top__DOT__csrr__139__data = 0x41U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1083);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_F = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1087);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_D = 1U;
    vlSelf->top__DOT__mngr2proc_data = __Vtask_top__DOT__csrr__139__data;
    vlSelf->top__DOT__csrr_sel_D = 0U;
    vlSelf->top__DOT__op2_sel_D = 2U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1094);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_X = 1U;
    vlSelf->top__DOT__alu_fn_X = 0xcU;
    vlSelf->top__DOT__ex_result_sel_X = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1100);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_M = 1U;
    vlSelf->top__DOT__wb_result_sel_M = 0U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1105);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_W = 1U;
    vlSelf->top__DOT__rf_waddr_W = __Vtask_top__DOT__csrr__139__writeReg;
    vlSelf->top__DOT__rf_wen_W = 1U;
    vlSymsp->__Vcoverage[381].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__delay__140__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__140__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__140__unnamedblk1__DOT__i, __Vtask_top__DOT__delay__140__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_ProcAltDpath.v", 
                                           1147);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__140__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__140__unnamedblk1__DOT__i);
    }
    vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       827);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_respstream_msg = 0x20c163ULL;
    vlSelf->top__DOT__imem_respstream_drop = 0U;
    vlSelf->top__DOT__dmem_respstream_msg_data = 0U;
    vlSelf->top__DOT__mngr2proc_data = 0U;
    vlSelf->top__DOT__reg_en_F = 1U;
    vlSelf->top__DOT__rf_wen_W = 0U;
    vlSelf->top__DOT__pc_sel_F = 3U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       841);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_D = 1U;
    vlSelf->top__DOT__op1_sel_D = 1U;
    vlSelf->top__DOT__op2_sel_D = 1U;
    vlSelf->top__DOT__imm_type_D = 2U;
    vlSelf->top__DOT__imul_req_val_D = 0U;
    vlSelf->top__DOT__op1_byp_sel_D = 3U;
    vlSelf->top__DOT__op2_byp_sel_D = 0U;
    vlSelf->top__DOT__cur_pc = vlSelf->top__DOT__DUT__DOT__pc_D;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x20c163U == vlSelf->top__DOT__inst_D))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("inst_D is correct.  Expected: 0020c163, Actual: %x\n",
                          32,vlSelf->top__DOT__inst_D);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("inst_D is incorrect.  Expected: 0020c163, Actual: %x\n",
                      32,vlSelf->top__DOT__inst_D);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 853, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0xaU == vlSelf->top__DOT__DUT__DOT__rf_rdata0_D))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("rf_rdata0_D is correct.  Expected: 0000000a, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__rf_rdata0_D);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("rf_rdata0_D is incorrect.  Expected: 0000000a, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__rf_rdata0_D);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 858, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x41U == vlSelf->top__DOT__DUT__DOT__rf_rdata1_D))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("rf_rdata1_D is correct.  Expected: 00000041, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__rf_rdata1_D);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("rf_rdata1_D is incorrect.  Expected: 00000041, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__rf_rdata1_D);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 863, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       867);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_X = 1U;
    vlSelf->top__DOT__alu_fn_X = 0U;
    vlSelf->top__DOT__imul_resp_rdy_X = 0U;
    vlSelf->top__DOT__pc_sel_F = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0xaU == vlSelf->top__DOT__DUT__DOT__op1_X))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("op1_X is correct.  Expected: 0000000a, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__op1_X);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("op1_X is incorrect.  Expected: 0000000a, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__op1_X);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 875, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x41U == vlSelf->top__DOT__DUT__DOT__op2_X))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("op2_X is correct.  Expected: 00000041, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__op2_X);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("op2_X is incorrect.  Expected: 00000041, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__op2_X);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 880, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__br_target_X 
                       == ((IData)(2U) + vlSelf->top__DOT__cur_pc)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("br_target_X is correct.  Expected: %x, Actual: %x\n",
                          32,((IData)(2U) + vlSelf->top__DOT__cur_pc),
                          32,vlSelf->top__DOT__DUT__DOT__br_target_X);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("br_target_X is incorrect.  Expected: %x, Actual: %x\n",
                      32,((IData)(2U) + vlSelf->top__DOT__cur_pc),
                      32,vlSelf->top__DOT__DUT__DOT__br_target_X);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 885, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       889);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__pc_F 
                       == ((IData)(2U) + vlSelf->top__DOT__cur_pc)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("pc_F is correct.  Expected: %x, Actual: %x\n",
                          32,((IData)(2U) + vlSelf->top__DOT__cur_pc),
                          32,vlSelf->top__DOT__DUT__DOT__pc_F);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("pc_F is incorrect.  Expected: %x, Actual: %x\n",
                      32,((IData)(2U) + vlSelf->top__DOT__cur_pc),
                      32,vlSelf->top__DOT__DUT__DOT__pc_F);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 893, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       897);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_top__DOT__delay__155__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__155__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__155__unnamedblk1__DOT__i, __Vtask_top__DOT__delay__155__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_ProcAltDpath.v", 
                                           1147);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__155__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__155__unnamedblk1__DOT__i);
    }
    vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\nTest RS2 Forwarding in D from instr in X\n");
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       911);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reset = 0U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       913);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_top__DOT__csrr__156__writeReg = 1U;
    __Vtask_top__DOT__csrr__156__data = 0xaU;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1083);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_F = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1087);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_D = 1U;
    vlSelf->top__DOT__mngr2proc_data = __Vtask_top__DOT__csrr__156__data;
    vlSelf->top__DOT__csrr_sel_D = 0U;
    vlSelf->top__DOT__op2_sel_D = 2U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1094);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_X = 1U;
    vlSelf->top__DOT__alu_fn_X = 0xcU;
    vlSelf->top__DOT__ex_result_sel_X = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1100);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_M = 1U;
    vlSelf->top__DOT__wb_result_sel_M = 0U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1105);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_W = 1U;
    vlSelf->top__DOT__rf_waddr_W = __Vtask_top__DOT__csrr__156__writeReg;
    vlSelf->top__DOT__rf_wen_W = 1U;
    vlSymsp->__Vcoverage[381].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__delay__157__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__157__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__157__unnamedblk1__DOT__i, __Vtask_top__DOT__delay__157__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_ProcAltDpath.v", 
                                           1147);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__157__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__157__unnamedblk1__DOT__i);
    }
    vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__csrr__158__writeReg = 2U;
    __Vtask_top__DOT__csrr__158__data = 0x41U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1083);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_F = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1087);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_D = 1U;
    vlSelf->top__DOT__mngr2proc_data = __Vtask_top__DOT__csrr__158__data;
    vlSelf->top__DOT__csrr_sel_D = 0U;
    vlSelf->top__DOT__op2_sel_D = 2U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1094);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_X = 1U;
    vlSelf->top__DOT__alu_fn_X = 0xcU;
    vlSelf->top__DOT__ex_result_sel_X = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1100);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_M = 1U;
    vlSelf->top__DOT__wb_result_sel_M = 0U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1105);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_W = 1U;
    vlSelf->top__DOT__rf_waddr_W = __Vtask_top__DOT__csrr__158__writeReg;
    vlSelf->top__DOT__rf_wen_W = 1U;
    vlSymsp->__Vcoverage[381].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__delay__159__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__159__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__159__unnamedblk1__DOT__i, __Vtask_top__DOT__delay__159__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_ProcAltDpath.v", 
                                           1147);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__159__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__159__unnamedblk1__DOT__i);
    }
    vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       926);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_respstream_msg = 0x2081b3ULL;
    vlSelf->top__DOT__imem_respstream_drop = 0U;
    vlSelf->top__DOT__dmem_respstream_msg_data = 0U;
    vlSelf->top__DOT__mngr2proc_data = 0U;
    vlSelf->top__DOT__reg_en_F = 1U;
    vlSelf->top__DOT__rf_wen_W = 0U;
    vlSelf->top__DOT__pc_sel_F = 3U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       940);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_respstream_msg = 0x318233ULL;
    vlSelf->top__DOT__imem_respstream_drop = 0U;
    vlSelf->top__DOT__dmem_respstream_msg_data = 0U;
    vlSelf->top__DOT__mngr2proc_data = 0U;
    vlSelf->top__DOT__reg_en_F = 1U;
    vlSelf->top__DOT__rf_wen_W = 0U;
    vlSelf->top__DOT__pc_sel_F = 3U;
    vlSelf->top__DOT__reg_en_D = 1U;
    vlSelf->top__DOT__op1_sel_D = 1U;
    vlSelf->top__DOT__op2_sel_D = 1U;
    vlSelf->top__DOT__imm_type_D = 2U;
    vlSelf->top__DOT__imul_req_val_D = 0U;
    vlSelf->top__DOT__op1_byp_sel_D = 3U;
    vlSelf->top__DOT__op2_byp_sel_D = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x2081b3U == vlSelf->top__DOT__inst_D))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("inst_D is correct.  Expected: 002081b3, Actual: %x\n",
                          32,vlSelf->top__DOT__inst_D);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("inst_D is incorrect.  Expected: 002081b3, Actual: %x\n",
                      32,vlSelf->top__DOT__inst_D);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 963, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0xaU == vlSelf->top__DOT__DUT__DOT__rf_rdata0_D))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("rf_rdata0_D is correct.  Expected: 0000000a, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__rf_rdata0_D);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("rf_rdata0_D is incorrect.  Expected: 0000000a, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__rf_rdata0_D);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 968, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x41U == vlSelf->top__DOT__DUT__DOT__rf_rdata1_D))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("rf_rdata1_D is correct.  Expected: 00000041, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__rf_rdata1_D);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("rf_rdata1_D is incorrect.  Expected: 00000041, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__rf_rdata1_D);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 973, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       977);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__op1_byp_sel_D = 2U;
    vlSelf->top__DOT__op2_byp_sel_D = 3U;
    vlSelf->top__DOT__reg_en_X = 1U;
    vlSelf->top__DOT__alu_fn_X = 0U;
    vlSelf->top__DOT__ex_result_sel_X = 1U;
    vlSelf->top__DOT__imul_resp_rdy_X = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x318233U == vlSelf->top__DOT__inst_D))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("inst_D is correct.  Expected: 00318233, Actual: %x\n",
                          32,vlSelf->top__DOT__inst_D);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("inst_D is incorrect.  Expected: 00318233, Actual: %x\n",
                      32,vlSelf->top__DOT__inst_D);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 988, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0xaU == vlSelf->top__DOT__DUT__DOT__op1_X))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("op1_X is correct.  Expected: 0000000a, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__op1_X);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("op1_X is incorrect.  Expected: 0000000a, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__op1_X);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 993, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x41U == vlSelf->top__DOT__DUT__DOT__op2_X))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("op2_X is correct.  Expected: 00000041, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__op2_X);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("op2_X is incorrect.  Expected: 00000041, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__op2_X);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 998, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1002);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_M = 1U;
    vlSelf->top__DOT__wb_result_sel_M = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x4bU == vlSelf->top__DOT__DUT__DOT__op1_X))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("op1_X is correct.  Expected: 0000004b, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__op1_X);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("op1_X is incorrect.  Expected: 0000004b, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__op1_X);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 1008, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x4bU == vlSelf->top__DOT__DUT__DOT__op2_X))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("op2_X is correct.  Expected: 0000004b, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__op2_X);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("op2_X is incorrect.  Expected: 0000004b, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__op2_X);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 1013, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x4bU == vlSelf->top__DOT__DUT__DOT__ex_result_M))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("ex_result_M is correct.  Expected: 0000004b, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__ex_result_M);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("ex_result_M is incorrect.  Expected: 0000004b, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__ex_result_M);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 1018, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1022);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_W = 1U;
    vlSelf->top__DOT__rf_waddr_W = 3U;
    vlSelf->top__DOT__rf_wen_W = 1U;
    vlSelf->top__DOT__stats_en_wen_W = 0U;
    vlSelf->top__DOT__core_id = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x96U == vlSelf->top__DOT__DUT__DOT__ex_result_M))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("ex_result_M is correct.  Expected: 00000096, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__ex_result_M);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("ex_result_M is incorrect.  Expected: 00000096, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__ex_result_M);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 1031, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x4bU == vlSelf->top__DOT__DUT__DOT__wb_result_W))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("wb_result_W is correct.  Expected: 0000004b, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__wb_result_W);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("wb_result_W is incorrect.  Expected: 0000004b, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__wb_result_W);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 1036, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1040);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_W = 0U;
    vlSelf->top__DOT__rf_waddr_W = 4U;
    vlSelf->top__DOT__rf_wen_W = 1U;
    vlSelf->top__DOT__stats_en_wen_W = 0U;
    vlSelf->top__DOT__core_id = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x96U == vlSelf->top__DOT__DUT__DOT__wb_result_W))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("wb_result_W is correct.  Expected: 00000096, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__wb_result_W);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("wb_result_W is incorrect.  Expected: 00000096, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__wb_result_W);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 1049, "");
        }
    }
    __Vtask_top__DOT__delay__184__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__184__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__184__unnamedblk1__DOT__i, __Vtask_top__DOT__delay__184__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_ProcAltDpath.v", 
                                           1147);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__184__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__184__unnamedblk1__DOT__i);
    }
    vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__csrw__185__readReg = 4U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1116);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_F = 1U;
    vlSelf->top__DOT__imem_respstream_msg = ((0x7fff00000000ULL 
                                              & vlSelf->top__DOT__imem_respstream_msg) 
                                             | (IData)((IData)(
                                                               (0x1073U 
                                                                | ((IData)(__Vtask_top__DOT__csrw__185__readReg) 
                                                                   << 0xfU)))));
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1121);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_D = 1U;
    vlSelf->top__DOT__op1_sel_D = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1126);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_X = 1U;
    vlSelf->top__DOT__alu_fn_X = 0xbU;
    vlSelf->top__DOT__ex_result_sel_X = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1132);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_M = 1U;
    vlSelf->top__DOT__wb_result_sel_M = 0U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltDpath.v", 
                                                       1137);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reg_en_W = 1U;
    vlSelf->top__DOT__rf_wen_W = 0U;
    vlSymsp->__Vcoverage[382].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x96U == vlSelf->top__DOT__DUT__DOT__wb_result_W))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("proc2mngr_data is correct.  Expected: 00000096, Actual: %x\n",
                          32,vlSelf->top__DOT__DUT__DOT__wb_result_W);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("proc2mngr_data is incorrect.  Expected: 00000096, Actual: %x\n",
                      32,vlSelf->top__DOT__DUT__DOT__wb_result_W);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltDpath.v", 1069, "");
        }
    }
    __Vtask_top__DOT__delay__188__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__188__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__188__unnamedblk1__DOT__i, __Vtask_top__DOT__delay__188__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_ProcAltDpath.v", 
                                           1147);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__188__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__188__unnamedblk1__DOT__i);
    }
    vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\nAll tests passed!\n");
    VL_FINISH_MT("utb_ProcAltDpath.v", 1076, "");
    vlSymsp->__Vcoverage[380].fetch_add(1, std::memory_order_relaxed);
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
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((~ (IData)(vlSelf->clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0)));
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->top__DOT__imul_resp_val_X) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__top__DOT__imul_resp_val_X__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__imul_resp_val_X__0 
        = vlSelf->top__DOT__imul_resp_val_X;
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
    // Body
    if ((1U & (~ ((IData)(vlSelf->top__DOT__pc_sel_F) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->top__DOT__pc_sel_F))) {
            vlSymsp->__Vcoverage[1093].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__pc_sel_F)))) {
            vlSymsp->__Vcoverage[1092].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__imm_type_D) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->top__DOT__imm_type_D))) {
            if ((1U & (IData)(vlSelf->top__DOT__imm_type_D))) {
                vlSymsp->__Vcoverage[1114].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__imm_type_D)))) {
                vlSymsp->__Vcoverage[1113].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__imm_type_D) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->top__DOT__imm_type_D))) {
                vlSymsp->__Vcoverage[1112].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__imm_type_D)))) {
                vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__op1_byp_sel_D) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->top__DOT__op1_byp_sel_D))) {
            vlSymsp->__Vcoverage[1185].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__op1_byp_sel_D)))) {
            vlSymsp->__Vcoverage[1184].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__op2_byp_sel_D) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->top__DOT__op2_byp_sel_D))) {
            vlSymsp->__Vcoverage[1191].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__op2_byp_sel_D)))) {
            vlSymsp->__Vcoverage[1190].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__op1_sel_D)))) {
        vlSymsp->__Vcoverage[1196].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0U != (IData)(vlSelf->top__DOT__csrr_sel_D))) {
        if ((1U == (IData)(vlSelf->top__DOT__csrr_sel_D))) {
            vlSymsp->__Vcoverage[1201].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U != (IData)(vlSelf->top__DOT__csrr_sel_D))) {
            if ((2U == (IData)(vlSelf->top__DOT__csrr_sel_D))) {
                vlSymsp->__Vcoverage[1202].fetch_add(1, std::memory_order_relaxed);
            }
            if ((2U != (IData)(vlSelf->top__DOT__csrr_sel_D))) {
                vlSymsp->__Vcoverage[1203].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if ((0U != (IData)(vlSelf->top__DOT__op2_sel_D))) {
        if ((1U != (IData)(vlSelf->top__DOT__op2_sel_D))) {
            if ((2U == (IData)(vlSelf->top__DOT__op2_sel_D))) {
                vlSymsp->__Vcoverage[1207].fetch_add(1, std::memory_order_relaxed);
            }
            if ((2U != (IData)(vlSelf->top__DOT__op2_sel_D))) {
                vlSymsp->__Vcoverage[1208].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U == (IData)(vlSelf->top__DOT__op2_sel_D))) {
            vlSymsp->__Vcoverage[1206].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__alu_fn_X) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__alu_fn_X) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__alu_fn_X) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top__DOT__alu_fn_X))) {
                    vlSymsp->__Vcoverage[1227].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__alu_fn_X)))) {
                    vlSymsp->__Vcoverage[1226].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((2U & (IData)(vlSelf->top__DOT__alu_fn_X))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__alu_fn_X)))) {
                    vlSymsp->__Vcoverage[1228].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (IData)(vlSelf->top__DOT__alu_fn_X))) {
                    vlSymsp->__Vcoverage[1229].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
        if ((4U & (IData)(vlSelf->top__DOT__alu_fn_X))) {
            if ((2U & (IData)(vlSelf->top__DOT__alu_fn_X))) {
                if ((1U & (IData)(vlSelf->top__DOT__alu_fn_X))) {
                    vlSymsp->__Vcoverage[1233].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__alu_fn_X)))) {
                    vlSymsp->__Vcoverage[1232].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((1U & (~ ((IData)(vlSelf->top__DOT__alu_fn_X) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top__DOT__alu_fn_X))) {
                    vlSymsp->__Vcoverage[1231].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__alu_fn_X)))) {
                    vlSymsp->__Vcoverage[1230].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    if ((0U != (IData)(vlSelf->top__DOT__ex_result_sel_X))) {
        if ((1U != (IData)(vlSelf->top__DOT__ex_result_sel_X))) {
            if ((2U == (IData)(vlSelf->top__DOT__ex_result_sel_X))) {
                vlSymsp->__Vcoverage[1712].fetch_add(1, std::memory_order_relaxed);
            }
            if ((2U != (IData)(vlSelf->top__DOT__ex_result_sel_X))) {
                vlSymsp->__Vcoverage[1713].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U == (IData)(vlSelf->top__DOT__ex_result_sel_X))) {
            vlSymsp->__Vcoverage[1711].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__wb_result_sel_M)))) {
        vlSymsp->__Vcoverage[1718].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0U != (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__state))) {
            if ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__state))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__imul_resp_rdy_X)))) {
                    vlSymsp->__Vcoverage[1639].fetch_add(1, std::memory_order_relaxed);
                }
                if (vlSelf->top__DOT__imul_resp_rdy_X) {
                    vlSymsp->__Vcoverage[1638].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
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
        vlSymsp->__Vcoverage[259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reg_en_X = vlSelf->top__DOT__reg_en_X;
    }
    if (((IData)(vlSelf->top__DOT__reg_en_M) ^ (IData)(vlSelf->top__DOT____Vtogcov__reg_en_M))) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reg_en_M = vlSelf->top__DOT__reg_en_M;
    }
    if (((IData)(vlSelf->top__DOT__wb_result_sel_M) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__wb_result_sel_M))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__wb_result_sel_M 
            = vlSelf->top__DOT__wb_result_sel_M;
    }
    if (((IData)(vlSelf->top__DOT__reg_en_W) ^ (IData)(vlSelf->top__DOT____Vtogcov__reg_en_W))) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reg_en_W = vlSelf->top__DOT__reg_en_W;
    }
    if (((IData)(vlSelf->top__DOT__rf_wen_W) ^ (IData)(vlSelf->top__DOT____Vtogcov__rf_wen_W))) {
        vlSymsp->__Vcoverage[274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rf_wen_W = vlSelf->top__DOT__rf_wen_W;
    }
    if (((IData)(vlSelf->top__DOT__stats_en_wen_W) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__stats_en_wen_W))) {
        vlSymsp->__Vcoverage[275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__stats_en_wen_W 
            = vlSelf->top__DOT__stats_en_wen_W;
    }
    if (((IData)(vlSelf->top__DOT__imul_req_val_D) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imul_req_val_D))) {
        vlSymsp->__Vcoverage[276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imul_req_val_D 
            = vlSelf->top__DOT__imul_req_val_D;
    }
    if (((IData)(vlSelf->top__DOT__imul_resp_rdy_X) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imul_resp_rdy_X))) {
        vlSymsp->__Vcoverage[277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imul_resp_rdy_X 
            = vlSelf->top__DOT__imul_resp_rdy_X;
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
    if ((1U & ((IData)(vlSelf->top__DOT__op1_byp_sel_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__op1_byp_sel_D)))) {
        vlSymsp->__Vcoverage[255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__op1_byp_sel_D 
            = ((2U & (IData)(vlSelf->top__DOT____Vtogcov__op1_byp_sel_D)) 
               | (1U & (IData)(vlSelf->top__DOT__op1_byp_sel_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__op1_byp_sel_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__op1_byp_sel_D)))) {
        vlSymsp->__Vcoverage[256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__op1_byp_sel_D 
            = ((1U & (IData)(vlSelf->top__DOT____Vtogcov__op1_byp_sel_D)) 
               | (2U & (IData)(vlSelf->top__DOT__op1_byp_sel_D)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__op2_byp_sel_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__op2_byp_sel_D)))) {
        vlSymsp->__Vcoverage[257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__op2_byp_sel_D 
            = ((2U & (IData)(vlSelf->top__DOT____Vtogcov__op2_byp_sel_D)) 
               | (1U & (IData)(vlSelf->top__DOT__op2_byp_sel_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__op2_byp_sel_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__op2_byp_sel_D)))) {
        vlSymsp->__Vcoverage[258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__op2_byp_sel_D 
            = ((1U & (IData)(vlSelf->top__DOT____Vtogcov__op2_byp_sel_D)) 
               | (2U & (IData)(vlSelf->top__DOT__op2_byp_sel_D)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__ex_result_sel_X) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__ex_result_sel_X)))) {
        vlSymsp->__Vcoverage[264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ex_result_sel_X 
            = ((2U & (IData)(vlSelf->top__DOT____Vtogcov__ex_result_sel_X)) 
               | (1U & (IData)(vlSelf->top__DOT__ex_result_sel_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__ex_result_sel_X) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__ex_result_sel_X)))) {
        vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ex_result_sel_X 
            = ((1U & (IData)(vlSelf->top__DOT____Vtogcov__ex_result_sel_X)) 
               | (2U & (IData)(vlSelf->top__DOT__ex_result_sel_X)));
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
        vlSymsp->__Vcoverage[260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__alu_fn_X = ((0xeU 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__alu_fn_X)) 
                                                 | (1U 
                                                    & (IData)(vlSelf->top__DOT__alu_fn_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__alu_fn_X) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_fn_X)))) {
        vlSymsp->__Vcoverage[261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__alu_fn_X = ((0xdU 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__alu_fn_X)) 
                                                 | (2U 
                                                    & (IData)(vlSelf->top__DOT__alu_fn_X)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__alu_fn_X) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_fn_X)))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__alu_fn_X = ((0xbU 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__alu_fn_X)) 
                                                 | (4U 
                                                    & (IData)(vlSelf->top__DOT__alu_fn_X)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__alu_fn_X) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_fn_X)))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__alu_fn_X = ((7U 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__alu_fn_X)) 
                                                 | (8U 
                                                    & (IData)(vlSelf->top__DOT__alu_fn_X)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__rf_waddr_W) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rf_waddr_W = (
                                                   (0x1eU 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->top__DOT__rf_waddr_W)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__rf_waddr_W) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rf_waddr_W = (
                                                   (0x1dU 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)) 
                                                   | (2U 
                                                      & (IData)(vlSelf->top__DOT__rf_waddr_W)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__rf_waddr_W) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rf_waddr_W = (
                                                   (0x1bU 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)) 
                                                   | (4U 
                                                      & (IData)(vlSelf->top__DOT__rf_waddr_W)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__rf_waddr_W) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rf_waddr_W = (
                                                   (0x17U 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)) 
                                                   | (8U 
                                                      & (IData)(vlSelf->top__DOT__rf_waddr_W)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__rf_waddr_W) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rf_waddr_W = (
                                                   (0xfU 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)) 
                                                   | (0x10U 
                                                      & (IData)(vlSelf->top__DOT__rf_waddr_W)));
    }
    if ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__state))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__imul_req_val_D)))) {
            vlSymsp->__Vcoverage[1633].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__imul_req_val_D) {
            vlSymsp->__Vcoverage[1632].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((0U == (IData)(vlSelf->top__DOT__csrr_sel_D))) {
        vlSymsp->__Vcoverage[1200].fetch_add(1, std::memory_order_relaxed);
    }
    if ((4U & (IData)(vlSelf->top__DOT__imm_type_D))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__imm_type_D) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__imm_type_D)))) {
                vlSymsp->__Vcoverage[1115].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if (vlSelf->top__DOT__wb_result_sel_M) {
        if (vlSelf->top__DOT__wb_result_sel_M) {
            vlSymsp->__Vcoverage[1719].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__wb_result_sel_M)))) {
            vlSymsp->__Vcoverage[1720].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((8U & (IData)(vlSelf->top__DOT__alu_fn_X))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__alu_fn_X) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__alu_fn_X) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__alu_fn_X)))) {
                    vlSymsp->__Vcoverage[1234].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (IData)(vlSelf->top__DOT__alu_fn_X))) {
                    vlSymsp->__Vcoverage[1235].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((2U & (IData)(vlSelf->top__DOT__alu_fn_X))) {
                if ((1U & (IData)(vlSelf->top__DOT__alu_fn_X))) {
                    vlSymsp->__Vcoverage[1236].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__alu_fn_X)))) {
                    vlSymsp->__Vcoverage[1238].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
        if ((4U & (IData)(vlSelf->top__DOT__alu_fn_X))) {
            if ((2U & (IData)(vlSelf->top__DOT__alu_fn_X))) {
                vlSymsp->__Vcoverage[1238].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ ((IData)(vlSelf->top__DOT__alu_fn_X) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top__DOT__alu_fn_X))) {
                    vlSymsp->__Vcoverage[1238].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__alu_fn_X)))) {
                    vlSymsp->__Vcoverage[1237].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    if ((0U == (IData)(vlSelf->top__DOT__ex_result_sel_X))) {
        vlSymsp->__Vcoverage[1710].fetch_add(1, std::memory_order_relaxed);
    }
    if ((2U & (IData)(vlSelf->top__DOT__pc_sel_F))) {
        if ((1U & (IData)(vlSelf->top__DOT__pc_sel_F))) {
            vlSymsp->__Vcoverage[1095].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__pc_sel_F)))) {
            vlSymsp->__Vcoverage[1094].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((2U & (IData)(vlSelf->top__DOT__op1_byp_sel_D))) {
        if ((1U & (IData)(vlSelf->top__DOT__op1_byp_sel_D))) {
            vlSymsp->__Vcoverage[1187].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__op1_byp_sel_D)))) {
            vlSymsp->__Vcoverage[1186].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((2U & (IData)(vlSelf->top__DOT__op2_byp_sel_D))) {
        if ((1U & (IData)(vlSelf->top__DOT__op2_byp_sel_D))) {
            vlSymsp->__Vcoverage[1193].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__op2_byp_sel_D)))) {
            vlSymsp->__Vcoverage[1192].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (vlSelf->top__DOT__op1_sel_D) {
        if (vlSelf->top__DOT__op1_sel_D) {
            vlSymsp->__Vcoverage[1197].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__op1_sel_D)))) {
            vlSymsp->__Vcoverage[1198].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((0U == (IData)(vlSelf->top__DOT__op2_sel_D))) {
        vlSymsp->__Vcoverage[1205].fetch_add(1, std::memory_order_relaxed);
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
    vlSelf->top__DOT__DUT__DOT__csrr_data_D = ((0U 
                                                == (IData)(vlSelf->top__DOT__csrr_sel_D))
                                                ? vlSelf->top__DOT__mngr2proc_data
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->top__DOT__csrr_sel_D))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->top__DOT__csrr_sel_D))
                                                     ? vlSelf->top__DOT__core_id
                                                     : 0U)));
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
    if ((1U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffffffeU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (1U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((2U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffffffdU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (2U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((4U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffffffbU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (4U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((8U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffffff7U 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (8U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x10U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffffffefU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x10U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x20U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffffffdfU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x20U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x40U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffffffbfU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x40U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x80U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffffff7fU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x80U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x100U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffffeffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x100U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x200U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffffdffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x200U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x400U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffffbffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x400U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x800U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffff7ffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x800U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x1000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffffefffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x1000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x2000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffffdfffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x2000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x4000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffffbfffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x4000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x8000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffff7fffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x8000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x10000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffeffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x10000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x20000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffdffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x20000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x40000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffbffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x40000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x80000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfff7ffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x80000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x100000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffefffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x100000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x200000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffdfffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x200000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x400000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffbfffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x400000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x800000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xff7fffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x800000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x1000000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfeffffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x1000000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x2000000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfdffffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x2000000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x4000000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfbffffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x4000000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x8000000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xf7ffffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x8000000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x10000000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xefffffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x10000000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x20000000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xdfffffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x20000000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x40000000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xbfffffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x40000000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if (((vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0x7fffffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x80000000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((1U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xfffffffeU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (1U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((2U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xfffffffdU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (2U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((4U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xfffffffbU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (4U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((8U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xfffffff7U 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (8U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x10U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xffffffefU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x10U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x20U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xffffffdfU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x20U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x40U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xffffffbfU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x40U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x80U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xffffff7fU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x80U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x100U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xfffffeffU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x100U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x200U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xfffffdffU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x200U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x400U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xfffffbffU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x400U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x800U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xfffff7ffU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x800U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x1000U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xffffefffU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x1000U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x2000U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xffffdfffU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x2000U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x4000U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xffffbfffU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x4000U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x8000U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xffff7fffU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x8000U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x10000U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xfffeffffU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x10000U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x20000U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xfffdffffU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x20000U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x40000U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xfffbffffU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x40000U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x80000U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xfff7ffffU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x80000U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x100000U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xffefffffU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x100000U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x200000U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xffdfffffU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x200000U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x400000U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xffbfffffU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x400000U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x800000U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xff7fffffU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x800000U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xfeffffffU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x1000000U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xfdffffffU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x2000000U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xfbffffffU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x4000000U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xf7ffffffU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x8000000U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xefffffffU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x10000000U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xdfffffffU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x20000000U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc))) {
        vlSymsp->__Vcoverage[378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0xbfffffffU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x40000000U 
                                                  & vlSelf->top__DOT__cur_pc));
    }
    if (((vlSelf->top__DOT__cur_pc ^ vlSelf->top__DOT____Vtogcov__cur_pc) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cur_pc = ((0x7fffffffU 
                                                & vlSelf->top__DOT____Vtogcov__cur_pc) 
                                               | (0x80000000U 
                                                  & vlSelf->top__DOT__cur_pc));
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
    vlSelf->top__DOT__DUT__DOT__wb_result_M = ((IData)(vlSelf->top__DOT__wb_result_sel_M)
                                                ? ((IData)(vlSelf->top__DOT__wb_result_sel_M)
                                                    ? vlSelf->top__DOT__dmem_respstream_msg_data
                                                    : 0U)
                                                : vlSelf->top__DOT__DUT__DOT__ex_result_M);
    vlSelf->top__DOT__DUT__DOT__op2_byp_out_D = ((2U 
                                                  & (IData)(vlSelf->top__DOT__op2_byp_sel_D))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__op2_byp_sel_D))
                                                   ? vlSelf->top__DOT__DUT__DOT__ex_result_X
                                                   : vlSelf->top__DOT__DUT__DOT__wb_result_M)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__op2_byp_sel_D))
                                                   ? vlSelf->top__DOT__DUT__DOT__wb_result_W
                                                   : vlSelf->top__DOT__DUT__DOT__rf_rdata1_D));
    vlSelf->top__DOT__DUT__DOT__op2_D = ((0U == (IData)(vlSelf->top__DOT__op2_sel_D))
                                          ? vlSelf->top__DOT__DUT__DOT__imm_D
                                          : ((1U == (IData)(vlSelf->top__DOT__op2_sel_D))
                                              ? vlSelf->top__DOT__DUT__DOT__op2_byp_out_D
                                              : ((2U 
                                                  == (IData)(vlSelf->top__DOT__op2_sel_D))
                                                  ? vlSelf->top__DOT__DUT__DOT__csrr_data_D
                                                  : 0U)));
    vlSelf->top__DOT__DUT__DOT__op1_byp_out_D = ((2U 
                                                  & (IData)(vlSelf->top__DOT__op1_byp_sel_D))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__op1_byp_sel_D))
                                                   ? vlSelf->top__DOT__DUT__DOT__rf_rdata0_D
                                                   : vlSelf->top__DOT__DUT__DOT__ex_result_X)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__op1_byp_sel_D))
                                                   ? vlSelf->top__DOT__DUT__DOT__wb_result_M
                                                   : vlSelf->top__DOT__DUT__DOT__wb_result_W));
    vlSelf->top__DOT__DUT__DOT__op1_D = ((IData)(vlSelf->top__DOT__op1_sel_D)
                                          ? ((IData)(vlSelf->top__DOT__op1_sel_D)
                                              ? vlSelf->top__DOT__DUT__DOT__op1_byp_out_D
                                              : 0U)
                                          : vlSelf->top__DOT__DUT__DOT__pc_D);
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__nextState) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT____Vtogcov__nextState)))) {
        vlSymsp->__Vcoverage[1625].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT____Vtogcov__nextState 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT____Vtogcov__nextState)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__nextState)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__nextState) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT____Vtogcov__nextState)))) {
        vlSymsp->__Vcoverage[1626].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT____Vtogcov__nextState 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT____Vtogcov__nextState)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__control__DOT__nextState)));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[768].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[769].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[770].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[771].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[772].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[773].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[774].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[775].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[776].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[777].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[778].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[779].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[780].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[781].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[782].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[783].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[784].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[785].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[786].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[787].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[788].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[789].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[790].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[791].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[792].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[793].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[794].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[795].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[796].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[797].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__csrr_data_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[798].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__csrr_data_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[799].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_data_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__csrr_data_D));
    }
    if ((1U & ((IData)((1ULL & (((QData)((IData)(vlSelf->top__DOT__DUT__DOT__pc_D)) 
                                 + (QData)((IData)(vlSelf->top__DOT__DUT__DOT__imm_D))) 
                                >> 0x20U))) ^ (IData)(vlSelf->top__DOT__DUT__DOT__pc_plus_imm_D__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[1210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__pc_plus_imm_D__DOT____Vtogcov__cout 
            = (1U & (IData)((1ULL & (((QData)((IData)(vlSelf->top__DOT__DUT__DOT__pc_D)) 
                                      + (QData)((IData)(vlSelf->top__DOT__DUT__DOT__imm_D))) 
                                     >> 0x20U))));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__imm_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[544].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__imm_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[545].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__imm_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[546].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__imm_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[547].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[548].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[549].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[550].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[551].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[552].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[553].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[554].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[555].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[556].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[557].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[558].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[559].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[560].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[561].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[562].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[563].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[564].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[565].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[566].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[567].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[568].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[569].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[570].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[571].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[572].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[573].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__imm_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[574].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__imm_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[575].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__imm_D));
    }
    vlSelf->top__DOT__DUT__DOT__jal_target_D = (vlSelf->top__DOT__DUT__DOT__pc_D 
                                                + vlSelf->top__DOT__DUT__DOT__imm_D);
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
    if ((1U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[1025].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (1U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[1026].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (2U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[1027].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (4U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[1028].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (8U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[1029].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[1030].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[1031].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[1032].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[1033].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[1034].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[1035].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[1036].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[1037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[1038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[1039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[1040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[1044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[1045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[1048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[1049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[1050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[1051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[1052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[1053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[1054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__wb_result_M 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[1055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
    }
    if (((vlSelf->top__DOT__DUT__DOT__wb_result_M ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_M) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__wb_result_M));
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
    if ((1U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[485].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__jal_target_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__jal_target_D 
          ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__jal_target_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__jal_target_D));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (1U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (2U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (4U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (8U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[902].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[903].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[904].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[905].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[906].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[907].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[908].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[909].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[910].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[911].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[912].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[913].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[914].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[915].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[916].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[917].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[918].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[919].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[920].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[921].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[922].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[923].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[924].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[925].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[926].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[927].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__ex_result_X 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[928].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
    if (((vlSelf->top__DOT__DUT__DOT__ex_result_X ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[929].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_X) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__ex_result_X));
    }
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
    if ((1U & (vlSelf->top__DOT__DUT__DOT__op1_byp_out_D 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D))) {
        vlSymsp->__Vcoverage[640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__op1_byp_out_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__op1_byp_out_D 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D))) {
        vlSymsp->__Vcoverage[641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__op1_byp_out_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__op1_byp_out_D 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D))) {
        vlSymsp->__Vcoverage[642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__op1_byp_out_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__op1_byp_out_D 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D))) {
        vlSymsp->__Vcoverage[643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__op1_byp_out_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__op1_byp_out_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D))) {
        vlSymsp->__Vcoverage[644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__op1_byp_out_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__op1_byp_out_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D))) {
        vlSymsp->__Vcoverage[645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__op1_byp_out_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__op1_byp_out_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D))) {
        vlSymsp->__Vcoverage[646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__op1_byp_out_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__op1_byp_out_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D))) {
        vlSymsp->__Vcoverage[647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__op1_byp_out_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__op1_byp_out_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D))) {
        vlSymsp->__Vcoverage[648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__op1_byp_out_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__op1_byp_out_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D))) {
        vlSymsp->__Vcoverage[649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__op1_byp_out_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__op1_byp_out_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D))) {
        vlSymsp->__Vcoverage[650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__op1_byp_out_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__op1_byp_out_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D))) {
        vlSymsp->__Vcoverage[651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__op1_byp_out_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__op1_byp_out_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D))) {
        vlSymsp->__Vcoverage[652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__op1_byp_out_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__op1_byp_out_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D))) {
        vlSymsp->__Vcoverage[653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__op1_byp_out_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__op1_byp_out_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D))) {
        vlSymsp->__Vcoverage[654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__op1_byp_out_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__op1_byp_out_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D))) {
        vlSymsp->__Vcoverage[655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__op1_byp_out_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__op1_byp_out_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D))) {
        vlSymsp->__Vcoverage[656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__op1_byp_out_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__op1_byp_out_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D))) {
        vlSymsp->__Vcoverage[657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__op1_byp_out_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__op1_byp_out_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D))) {
        vlSymsp->__Vcoverage[658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__op1_byp_out_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__op1_byp_out_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D))) {
        vlSymsp->__Vcoverage[659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__op1_byp_out_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__op1_byp_out_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D))) {
        vlSymsp->__Vcoverage[660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__op1_byp_out_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__op1_byp_out_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D))) {
        vlSymsp->__Vcoverage[661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__op1_byp_out_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__op1_byp_out_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D))) {
        vlSymsp->__Vcoverage[662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__op1_byp_out_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__op1_byp_out_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D))) {
        vlSymsp->__Vcoverage[663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__op1_byp_out_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__op1_byp_out_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D))) {
        vlSymsp->__Vcoverage[664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__op1_byp_out_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__op1_byp_out_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D))) {
        vlSymsp->__Vcoverage[665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__op1_byp_out_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__op1_byp_out_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D))) {
        vlSymsp->__Vcoverage[666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__op1_byp_out_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__op1_byp_out_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D))) {
        vlSymsp->__Vcoverage[667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__op1_byp_out_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__op1_byp_out_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D))) {
        vlSymsp->__Vcoverage[668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__op1_byp_out_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__op1_byp_out_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D))) {
        vlSymsp->__Vcoverage[669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__op1_byp_out_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__op1_byp_out_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D))) {
        vlSymsp->__Vcoverage[670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__op1_byp_out_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__op1_byp_out_D 
          ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_out_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__op1_byp_out_D));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__op2_byp_out_D 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D))) {
        vlSymsp->__Vcoverage[672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__op2_byp_out_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__op2_byp_out_D 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D))) {
        vlSymsp->__Vcoverage[673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__op2_byp_out_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__op2_byp_out_D 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D))) {
        vlSymsp->__Vcoverage[674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__op2_byp_out_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__op2_byp_out_D 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D))) {
        vlSymsp->__Vcoverage[675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__op2_byp_out_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__op2_byp_out_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D))) {
        vlSymsp->__Vcoverage[676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__op2_byp_out_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__op2_byp_out_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D))) {
        vlSymsp->__Vcoverage[677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__op2_byp_out_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__op2_byp_out_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D))) {
        vlSymsp->__Vcoverage[678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__op2_byp_out_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__op2_byp_out_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D))) {
        vlSymsp->__Vcoverage[679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__op2_byp_out_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__op2_byp_out_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D))) {
        vlSymsp->__Vcoverage[680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__op2_byp_out_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__op2_byp_out_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D))) {
        vlSymsp->__Vcoverage[681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__op2_byp_out_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__op2_byp_out_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D))) {
        vlSymsp->__Vcoverage[682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__op2_byp_out_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__op2_byp_out_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D))) {
        vlSymsp->__Vcoverage[683].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__op2_byp_out_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__op2_byp_out_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D))) {
        vlSymsp->__Vcoverage[684].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__op2_byp_out_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__op2_byp_out_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D))) {
        vlSymsp->__Vcoverage[685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__op2_byp_out_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__op2_byp_out_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D))) {
        vlSymsp->__Vcoverage[686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__op2_byp_out_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__op2_byp_out_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D))) {
        vlSymsp->__Vcoverage[687].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__op2_byp_out_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__op2_byp_out_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D))) {
        vlSymsp->__Vcoverage[688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__op2_byp_out_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__op2_byp_out_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D))) {
        vlSymsp->__Vcoverage[689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__op2_byp_out_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__op2_byp_out_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D))) {
        vlSymsp->__Vcoverage[690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__op2_byp_out_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__op2_byp_out_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D))) {
        vlSymsp->__Vcoverage[691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__op2_byp_out_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__op2_byp_out_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D))) {
        vlSymsp->__Vcoverage[692].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__op2_byp_out_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__op2_byp_out_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D))) {
        vlSymsp->__Vcoverage[693].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__op2_byp_out_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__op2_byp_out_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D))) {
        vlSymsp->__Vcoverage[694].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__op2_byp_out_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__op2_byp_out_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D))) {
        vlSymsp->__Vcoverage[695].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__op2_byp_out_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__op2_byp_out_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D))) {
        vlSymsp->__Vcoverage[696].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__op2_byp_out_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__op2_byp_out_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D))) {
        vlSymsp->__Vcoverage[697].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__op2_byp_out_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__op2_byp_out_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D))) {
        vlSymsp->__Vcoverage[698].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__op2_byp_out_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__op2_byp_out_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D))) {
        vlSymsp->__Vcoverage[699].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__op2_byp_out_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__op2_byp_out_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D))) {
        vlSymsp->__Vcoverage[700].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__op2_byp_out_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__op2_byp_out_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D))) {
        vlSymsp->__Vcoverage[701].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__op2_byp_out_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__op2_byp_out_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D))) {
        vlSymsp->__Vcoverage[702].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__op2_byp_out_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__op2_byp_out_D 
          ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_out_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__op2_byp_out_D));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__op1_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[704].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__op1_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[705].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__op1_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[706].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__op1_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[707].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[708].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[709].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[711].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[712].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[713].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[714].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[715].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[716].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[717].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[718].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[719].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[720].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[721].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[722].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[723].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[724].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[725].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[726].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[727].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[728].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[729].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[730].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[731].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[732].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[733].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__op1_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[734].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__op1_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[735].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__op1_D));
    }
    vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__a_mux_sel)
            ? ((IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__a_mux_sel)
                ? vlSelf->top__DOT__DUT__DOT__op1_D
                : 0U) : vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out);
    if ((1U & (vlSelf->top__DOT__DUT__DOT__op2_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[736].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__op2_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[737].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__op2_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[738].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__op2_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[739].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[740].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[741].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[742].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[743].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[745].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[746].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[747].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[748].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[749].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[750].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[751].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[752].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[753].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[754].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[755].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[756].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[757].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[758].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[759].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[760].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[761].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[762].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[763].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[764].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[765].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__op2_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[766].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__op2_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[767].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__op2_D));
    }
    vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__b_mux_sel)
            ? ((IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT__b_mux_sel)
                ? vlSelf->top__DOT__DUT__DOT__op2_D
                : 0U) : vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out);
    vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
        = (((QData)((IData)(vlSelf->top__DOT__DUT__DOT__op1_D)) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__DUT__DOT__op2_D)));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (1U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (2U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (4U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (8U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[1440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if (((vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out 
          ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (1U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (2U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (4U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (8U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[1376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if (((vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out 
          ^ vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg)))) {
        vlSymsp->__Vcoverage[1240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[1241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[1242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[1243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[1244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[1245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[1246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[1247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[1248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[1249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[1250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[1251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[1252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[1253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[1254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[1255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[1256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[1257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[1258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[1259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[1260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[1261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[1262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[1263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[1264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[1265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[1266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[1267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[1268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[1269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[1270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[1271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[1272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[1273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[1274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[1275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[1276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[1277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[1278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[1279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[1280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[1281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[1282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[1283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[1284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[1285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x2eU))))) {
        vlSymsp->__Vcoverage[1286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x2fU))))) {
        vlSymsp->__Vcoverage[1287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x30U))))) {
        vlSymsp->__Vcoverage[1288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x31U))))) {
        vlSymsp->__Vcoverage[1289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x32U))))) {
        vlSymsp->__Vcoverage[1290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x33U))))) {
        vlSymsp->__Vcoverage[1291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x34U))))) {
        vlSymsp->__Vcoverage[1292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x35U))))) {
        vlSymsp->__Vcoverage[1293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x36U))))) {
        vlSymsp->__Vcoverage[1294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x37U))))) {
        vlSymsp->__Vcoverage[1295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x38U))))) {
        vlSymsp->__Vcoverage[1296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x39U))))) {
        vlSymsp->__Vcoverage[1297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x3aU))))) {
        vlSymsp->__Vcoverage[1298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x3bU))))) {
        vlSymsp->__Vcoverage[1299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x3cU))))) {
        vlSymsp->__Vcoverage[1300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x3dU))))) {
        vlSymsp->__Vcoverage[1301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x3eU))))) {
        vlSymsp->__Vcoverage[1302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                  ^ vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[1303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
}

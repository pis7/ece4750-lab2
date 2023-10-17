// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vtop___024unit;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtop___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        CData/*0:0*/ top__DOT__imul_resp_val_X;
        VL_IN8(linetrace,0,0);
        CData/*0:0*/ top__DOT__reset;
        CData/*0:0*/ top__DOT__imem_respstream_drop;
        CData/*0:0*/ top__DOT__reg_en_F;
        CData/*1:0*/ top__DOT__pc_sel_F;
        CData/*0:0*/ top__DOT__reg_en_D;
        CData/*0:0*/ top__DOT__op1_sel_D;
        CData/*1:0*/ top__DOT__op2_sel_D;
        CData/*1:0*/ top__DOT__csrr_sel_D;
        CData/*2:0*/ top__DOT__imm_type_D;
        CData/*0:0*/ top__DOT__reg_en_X;
        CData/*3:0*/ top__DOT__alu_fn_X;
        CData/*1:0*/ top__DOT__ex_result_sel_X;
        CData/*0:0*/ top__DOT__reg_en_M;
        CData/*0:0*/ top__DOT__wb_result_sel_M;
        CData/*0:0*/ top__DOT__reg_en_W;
        CData/*4:0*/ top__DOT__rf_waddr_W;
        CData/*0:0*/ top__DOT__rf_wen_W;
        CData/*0:0*/ top__DOT__stats_en_wen_W;
        CData/*0:0*/ top__DOT__imul_req_val_D;
        CData/*0:0*/ top__DOT__imul_resp_rdy_X;
        CData/*0:0*/ top__DOT__br_cond_eq_X;
        CData/*0:0*/ top__DOT__br_cond_lt_X;
        CData/*0:0*/ top__DOT__br_cond_ltu_X;
        CData/*0:0*/ top__DOT__imul_req_rdy_D;
        CData/*0:0*/ top__DOT____Vtogcov__clk;
        CData/*0:0*/ top__DOT____Vtogcov__linetrace;
        CData/*0:0*/ top__DOT____Vtogcov__reset;
        CData/*0:0*/ top__DOT____Vtogcov__imem_respstream_drop;
        CData/*0:0*/ top__DOT____Vtogcov__reg_en_F;
        CData/*1:0*/ top__DOT____Vtogcov__pc_sel_F;
        CData/*0:0*/ top__DOT____Vtogcov__reg_en_D;
        CData/*0:0*/ top__DOT____Vtogcov__op1_sel_D;
        CData/*1:0*/ top__DOT____Vtogcov__op2_sel_D;
        CData/*1:0*/ top__DOT____Vtogcov__csrr_sel_D;
        CData/*2:0*/ top__DOT____Vtogcov__imm_type_D;
        CData/*0:0*/ top__DOT____Vtogcov__reg_en_X;
        CData/*3:0*/ top__DOT____Vtogcov__alu_fn_X;
        CData/*1:0*/ top__DOT____Vtogcov__ex_result_sel_X;
        CData/*0:0*/ top__DOT____Vtogcov__reg_en_M;
        CData/*0:0*/ top__DOT____Vtogcov__wb_result_sel_M;
        CData/*0:0*/ top__DOT____Vtogcov__reg_en_W;
        CData/*4:0*/ top__DOT____Vtogcov__rf_waddr_W;
        CData/*0:0*/ top__DOT____Vtogcov__rf_wen_W;
        CData/*0:0*/ top__DOT____Vtogcov__stats_en_wen_W;
        CData/*0:0*/ top__DOT____Vtogcov__imul_req_val_D;
        CData/*0:0*/ top__DOT____Vtogcov__imul_resp_rdy_X;
        CData/*0:0*/ top__DOT____Vtogcov__br_cond_eq_X;
        CData/*0:0*/ top__DOT____Vtogcov__br_cond_lt_X;
        CData/*0:0*/ top__DOT____Vtogcov__br_cond_ltu_X;
        CData/*0:0*/ top__DOT____Vtogcov__imul_req_rdy_D;
        CData/*0:0*/ top__DOT____Vtogcov__imul_resp_val_X;
        CData/*0:0*/ top__DOT____Vtogcov__stats_en;
        CData/*6:0*/ top__DOT__DUT__DOT__inst_unpack__DOT__funct7;
        CData/*6:0*/ top__DOT__DUT__DOT__inst_unpack__DOT____Vtogcov__funct7;
        CData/*0:0*/ top__DOT__DUT__DOT__pc_plus_imm_D__DOT____Vtogcov__cout;
        CData/*0:0*/ top__DOT__DUT__DOT__imul__DOT__b_mux_sel;
        CData/*0:0*/ top__DOT__DUT__DOT__imul__DOT__a_mux_sel;
        CData/*0:0*/ top__DOT__DUT__DOT__imul__DOT__result_mux_sel;
        CData/*0:0*/ top__DOT__DUT__DOT__imul__DOT__result_en;
        CData/*0:0*/ top__DOT__DUT__DOT__imul__DOT__add_mux_sel;
        CData/*4:0*/ top__DOT__DUT__DOT__imul__DOT__shamt;
    };
    struct {
        CData/*0:0*/ top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_mux_sel;
        CData/*0:0*/ top__DOT__DUT__DOT__imul__DOT____Vtogcov__a_mux_sel;
        CData/*0:0*/ top__DOT__DUT__DOT__imul__DOT____Vtogcov__result_mux_sel;
        CData/*0:0*/ top__DOT__DUT__DOT__imul__DOT____Vtogcov__result_en;
        CData/*0:0*/ top__DOT__DUT__DOT__imul__DOT____Vtogcov__add_mux_sel;
        CData/*4:0*/ top__DOT__DUT__DOT__imul__DOT____Vtogcov__shamt;
        CData/*1:0*/ top__DOT__DUT__DOT__imul__DOT__control__DOT__state;
        CData/*1:0*/ top__DOT__DUT__DOT__imul__DOT__control__DOT__nextState;
        CData/*0:0*/ top__DOT__DUT__DOT__imul__DOT__control__DOT__done;
        CData/*1:0*/ top__DOT__DUT__DOT__imul__DOT__control__DOT____Vtogcov__state;
        CData/*1:0*/ top__DOT__DUT__DOT__imul__DOT__control__DOT____Vtogcov__nextState;
        CData/*0:0*/ top__DOT__DUT__DOT__imul__DOT__control__DOT____Vtogcov__done;
        CData/*4:0*/ top__DOT__DUT__DOT__imul__DOT__control__DOT__unnamedblk1__DOT__temp_shamt;
        CData/*0:0*/ top__DOT__DUT__DOT__imul__DOT__control__DOT__unnamedblk1__DOT__temp_done;
        CData/*0:0*/ top__DOT__DUT__DOT__imul__DOT__control__DOT__unnamedblk1__DOT__temp_add_mux_sel;
        CData/*3:0*/ top__DOT__DUT__DOT__imul__DOT__vc_trace__DOT__level;
        CData/*3:0*/ top__DOT__DUT__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level;
        CData/*0:0*/ top__DOT__DUT__DOT__pc_incr_X__DOT____Vtogcov__cout;
        CData/*4:0*/ __Vtask_top__DOT__DUT__DOT__imul__DOT__control__DOT__tab__124__t_shamt;
        CData/*0:0*/ __Vtask_top__DOT__DUT__DOT__imul__DOT__control__DOT__tab__124__t_add_mux_sel;
        CData/*0:0*/ __Vtask_top__DOT__DUT__DOT__imul__DOT__control__DOT__tab__124__t_done;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__imul_resp_val_X__0;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ top__DOT__dmem_reqstream_msg_data;
        IData/*31:0*/ top__DOT__dmem_respstream_msg_data;
        IData/*31:0*/ top__DOT__mngr2proc_data;
        IData/*31:0*/ top__DOT__inst_D;
        IData/*31:0*/ top__DOT__core_id;
        IData/*31:0*/ top__DOT____Vtogcov__imem_reqstream_msg_addr;
        IData/*31:0*/ top__DOT____Vtogcov__dmem_reqstream_msg_addr;
        IData/*31:0*/ top__DOT____Vtogcov__dmem_reqstream_msg_data;
        IData/*31:0*/ top__DOT____Vtogcov__dmem_respstream_msg_data;
        IData/*31:0*/ top__DOT____Vtogcov__mngr2proc_data;
        IData/*31:0*/ top__DOT____Vtogcov__proc2mngr_data;
        IData/*31:0*/ top__DOT____Vtogcov__inst_D;
        IData/*31:0*/ top__DOT____Vtogcov__core_id;
        IData/*31:0*/ top__DOT__DUT__DOT__pc_F;
        IData/*31:0*/ top__DOT__DUT__DOT__pc_next_F;
        IData/*31:0*/ top__DOT__DUT__DOT__br_target_X;
        IData/*31:0*/ top__DOT__DUT__DOT__jal_target_D;
        IData/*31:0*/ top__DOT__DUT__DOT__alu_result_X;
        IData/*31:0*/ top__DOT__DUT__DOT__pc_D;
        IData/*31:0*/ top__DOT__DUT__DOT__imm_D;
        IData/*31:0*/ top__DOT__DUT__DOT__rf_rdata0_D;
        IData/*31:0*/ top__DOT__DUT__DOT__rf_rdata1_D;
        IData/*31:0*/ top__DOT__DUT__DOT__op1_D;
        IData/*31:0*/ top__DOT__DUT__DOT__op2_D;
        IData/*31:0*/ top__DOT__DUT__DOT__csrr_data_D;
        IData/*31:0*/ top__DOT__DUT__DOT__op1_X;
        IData/*31:0*/ top__DOT__DUT__DOT__op2_X;
        IData/*31:0*/ top__DOT__DUT__DOT__pc_X;
        IData/*31:0*/ top__DOT__DUT__DOT__ex_result_X;
        IData/*31:0*/ top__DOT__DUT__DOT__ex_result_M;
        IData/*31:0*/ top__DOT__DUT__DOT__wb_result_M;
        IData/*31:0*/ top__DOT__DUT__DOT__wb_result_W;
        IData/*31:0*/ top__DOT__DUT__DOT__stats_en_W;
        IData/*31:0*/ top__DOT__DUT__DOT____Vtogcov__pc_F;
        IData/*31:0*/ top__DOT__DUT__DOT____Vtogcov__pc_plus4_F;
        IData/*31:0*/ top__DOT__DUT__DOT____Vtogcov__br_target_X;
        IData/*31:0*/ top__DOT__DUT__DOT____Vtogcov__jal_target_D;
        IData/*31:0*/ top__DOT__DUT__DOT____Vtogcov__pc_D;
        IData/*31:0*/ top__DOT__DUT__DOT____Vtogcov__imm_D;
        IData/*31:0*/ top__DOT__DUT__DOT____Vtogcov__rf_rdata0_D;
    };
    struct {
        IData/*31:0*/ top__DOT__DUT__DOT____Vtogcov__rf_rdata1_D;
        IData/*31:0*/ top__DOT__DUT__DOT____Vtogcov__op1_D;
        IData/*31:0*/ top__DOT__DUT__DOT____Vtogcov__op2_D;
        IData/*31:0*/ top__DOT__DUT__DOT____Vtogcov__csrr_data_D;
        IData/*31:0*/ top__DOT__DUT__DOT____Vtogcov__num_cores;
        IData/*31:0*/ top__DOT__DUT__DOT____Vtogcov__op1_X;
        IData/*31:0*/ top__DOT__DUT__DOT____Vtogcov__op2_X;
        IData/*31:0*/ top__DOT__DUT__DOT____Vtogcov__pc_X;
        IData/*31:0*/ top__DOT__DUT__DOT____Vtogcov__ex_result_X;
        IData/*31:0*/ top__DOT__DUT__DOT____Vtogcov__mul_result_X;
        IData/*31:0*/ top__DOT__DUT__DOT____Vtogcov__pc_plus4_X;
        IData/*31:0*/ top__DOT__DUT__DOT____Vtogcov__ex_result_M;
        IData/*31:0*/ top__DOT__DUT__DOT____Vtogcov__wb_result_M;
        IData/*31:0*/ top__DOT__DUT__DOT____Vtogcov__stats_en_W;
        IData/*31:0*/ top__DOT__DUT__DOT__rf__DOT__rf_read_data0;
        IData/*31:0*/ top__DOT__DUT__DOT__rf__DOT__rf_read_data1;
        IData/*31:0*/ top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data0;
        IData/*31:0*/ top__DOT__DUT__DOT__rf__DOT____Vtogcov__rf_read_data1;
        VlWide<128>/*4095:0*/ top__DOT__DUT__DOT__imul__DOT__str;
        IData/*31:0*/ top__DOT__DUT__DOT__imul__DOT__idx1;
        IData/*31:0*/ top__DOT__DUT__DOT__imul__DOT__idx0;
        IData/*31:0*/ top__DOT__DUT__DOT__imul__DOT____Vtogcov__b_lsb;
        IData/*31:0*/ top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_mux_out;
        IData/*31:0*/ top__DOT__DUT__DOT__imul__DOT__datapath__DOT__b_reg_out;
        IData/*31:0*/ top__DOT__DUT__DOT__imul__DOT__datapath__DOT__r_shift_out;
        IData/*31:0*/ top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_mux_out;
        IData/*31:0*/ top__DOT__DUT__DOT__imul__DOT__datapath__DOT__a_reg_out;
        IData/*31:0*/ top__DOT__DUT__DOT__imul__DOT__datapath__DOT__l_shift_out;
        IData/*31:0*/ top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_mux_out;
        IData/*31:0*/ top__DOT__DUT__DOT__imul__DOT__datapath__DOT__result_reg_out;
        IData/*31:0*/ top__DOT__DUT__DOT__imul__DOT__datapath__DOT__adder_out;
        IData/*31:0*/ top__DOT__DUT__DOT__imul__DOT__datapath__DOT__add_mux_out;
        IData/*31:0*/ top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out;
        IData/*31:0*/ top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__r_shift_out;
        IData/*31:0*/ top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out;
        IData/*31:0*/ top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out;
        IData/*31:0*/ top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__l_shift_out;
        IData/*31:0*/ top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out;
        IData/*31:0*/ top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out;
        IData/*31:0*/ top__DOT__DUT__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out;
        IData/*31:0*/ top__DOT__DUT__DOT__imul__DOT__vc_trace__DOT__len0;
        IData/*31:0*/ top__DOT__DUT__DOT__imul__DOT__vc_trace__DOT__len1;
        IData/*31:0*/ top__DOT__DUT__DOT__imul__DOT__vc_trace__DOT__idx0;
        IData/*31:0*/ top__DOT__DUT__DOT__imul__DOT__vc_trace__DOT__idx1;
        VlWide<128>/*4095:0*/ top__DOT__DUT__DOT__imul__DOT__vc_trace__DOT__storage;
        IData/*31:0*/ top__DOT__DUT__DOT__imul__DOT__vc_trace__DOT__cycles_next;
        IData/*31:0*/ top__DOT__DUT__DOT__imul__DOT__vc_trace__DOT__cycles;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        QData/*46:0*/ top__DOT__imem_respstream_msg;
        QData/*46:0*/ top__DOT____Vtogcov__imem_respstream_msg;
        QData/*63:0*/ top__DOT__DUT__DOT____Vcellinp__imul__istream_msg;
        QData/*63:0*/ top__DOT__DUT__DOT__imul__DOT____Vtogcov__istream_msg;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile;
        VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h3d404bd2__0;
    VlTriggerScheduler __VtrigSched_hf1be2148__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard

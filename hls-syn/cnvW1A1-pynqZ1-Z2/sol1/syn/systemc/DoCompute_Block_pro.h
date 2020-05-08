// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _DoCompute_Block_pro_HH_
#define _DoCompute_Block_pro_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct DoCompute_Block_pro : public sc_module {
    // Port declarations 13
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<32> > numReps_dout;
    sc_in< sc_logic > numReps_empty_n;
    sc_out< sc_logic > numReps_read;
    sc_out< sc_lv<32> > add_ln120_1_out_out_din;
    sc_in< sc_logic > add_ln120_1_out_out_full_n;
    sc_out< sc_logic > add_ln120_1_out_out_write;


    // Module declarations
    DoCompute_Block_pro(sc_module_name name);
    SC_HAS_PROCESS(DoCompute_Block_pro);

    ~DoCompute_Block_pro();

    sc_trace_file* mVcdFile;

    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<3> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > numReps_blk_n;
    sc_signal< sc_logic > add_ln120_1_out_out_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<32> > numReps_read_reg_47;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_lv<32> > add_ln120_fu_42_p2;
    sc_signal< sc_lv<32> > add_ln120_reg_53;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<32> > shl_ln120_fu_37_p2;
    sc_signal< sc_lv<3> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<3> ap_ST_fsm_state1;
    static const sc_lv<3> ap_ST_fsm_state2;
    static const sc_lv<3> ap_ST_fsm_state3;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_add_ln120_1_out_out_blk_n();
    void thread_add_ln120_1_out_out_din();
    void thread_add_ln120_1_out_out_write();
    void thread_add_ln120_fu_42_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_block_state1();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_numReps_blk_n();
    void thread_numReps_read();
    void thread_shl_ln120_fu_37_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif

// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _DoCompute_entry33612_HH_
#define _DoCompute_entry33612_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct DoCompute_entry33612 : public sc_module {
    // Port declarations 37
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_in< sc_logic > start_full_n;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_logic > start_out;
    sc_out< sc_logic > start_write;
    sc_in< sc_lv<32> > numReps;
    sc_out< sc_lv<32> > numReps_out_din;
    sc_in< sc_logic > numReps_out_full_n;
    sc_out< sc_logic > numReps_out_write;
    sc_out< sc_lv<32> > numReps_out1_din;
    sc_in< sc_logic > numReps_out1_full_n;
    sc_out< sc_logic > numReps_out1_write;
    sc_out< sc_lv<32> > numReps_out2_din;
    sc_in< sc_logic > numReps_out2_full_n;
    sc_out< sc_logic > numReps_out2_write;
    sc_out< sc_lv<32> > numReps_out3_din;
    sc_in< sc_logic > numReps_out3_full_n;
    sc_out< sc_logic > numReps_out3_write;
    sc_out< sc_lv<32> > numReps_out4_din;
    sc_in< sc_logic > numReps_out4_full_n;
    sc_out< sc_logic > numReps_out4_write;
    sc_out< sc_lv<32> > numReps_out5_din;
    sc_in< sc_logic > numReps_out5_full_n;
    sc_out< sc_logic > numReps_out5_write;
    sc_in< sc_lv<61> > in_V_offset;
    sc_in< sc_lv<61> > out_V_offset;
    sc_out< sc_lv<61> > in_V_offset_out_din;
    sc_in< sc_logic > in_V_offset_out_full_n;
    sc_out< sc_logic > in_V_offset_out_write;
    sc_out< sc_lv<61> > out_V_offset_out_din;
    sc_in< sc_logic > out_V_offset_out_full_n;
    sc_out< sc_logic > out_V_offset_out_write;


    // Module declarations
    DoCompute_entry33612(sc_module_name name);
    SC_HAS_PROCESS(DoCompute_entry33612);

    ~DoCompute_entry33612();

    sc_trace_file* mVcdFile;

    sc_signal< sc_logic > real_start;
    sc_signal< sc_logic > start_once_reg;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<1> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > internal_ap_ready;
    sc_signal< sc_logic > numReps_out_blk_n;
    sc_signal< sc_logic > numReps_out1_blk_n;
    sc_signal< sc_logic > numReps_out2_blk_n;
    sc_signal< sc_logic > numReps_out3_blk_n;
    sc_signal< sc_logic > numReps_out4_blk_n;
    sc_signal< sc_logic > numReps_out5_blk_n;
    sc_signal< sc_logic > in_V_offset_out_blk_n;
    sc_signal< sc_logic > out_V_offset_out_blk_n;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_lv<1> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<1> ap_ST_fsm_state1;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_block_state1();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_in_V_offset_out_blk_n();
    void thread_in_V_offset_out_din();
    void thread_in_V_offset_out_write();
    void thread_internal_ap_ready();
    void thread_numReps_out1_blk_n();
    void thread_numReps_out1_din();
    void thread_numReps_out1_write();
    void thread_numReps_out2_blk_n();
    void thread_numReps_out2_din();
    void thread_numReps_out2_write();
    void thread_numReps_out3_blk_n();
    void thread_numReps_out3_din();
    void thread_numReps_out3_write();
    void thread_numReps_out4_blk_n();
    void thread_numReps_out4_din();
    void thread_numReps_out4_write();
    void thread_numReps_out5_blk_n();
    void thread_numReps_out5_din();
    void thread_numReps_out5_write();
    void thread_numReps_out_blk_n();
    void thread_numReps_out_din();
    void thread_numReps_out_write();
    void thread_out_V_offset_out_blk_n();
    void thread_out_V_offset_out_din();
    void thread_out_V_offset_out_write();
    void thread_real_start();
    void thread_start_out();
    void thread_start_write();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif

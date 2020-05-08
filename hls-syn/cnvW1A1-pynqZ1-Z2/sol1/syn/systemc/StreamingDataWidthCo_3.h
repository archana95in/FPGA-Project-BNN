// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _StreamingDataWidthCo_3_HH_
#define _StreamingDataWidthCo_3_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct StreamingDataWidthCo_3 : public sc_module {
    // Port declarations 19
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<64> > in_V_V_dout;
    sc_in< sc_logic > in_V_V_empty_n;
    sc_out< sc_logic > in_V_V_read;
    sc_out< sc_lv<1> > out_V_V_din;
    sc_in< sc_logic > out_V_V_full_n;
    sc_out< sc_logic > out_V_V_write;
    sc_in< sc_lv<32> > numReps_dout;
    sc_in< sc_logic > numReps_empty_n;
    sc_out< sc_logic > numReps_read;
    sc_out< sc_lv<32> > numReps_out_din;
    sc_in< sc_logic > numReps_out_full_n;
    sc_out< sc_logic > numReps_out_write;


    // Module declarations
    StreamingDataWidthCo_3(sc_module_name name);
    SC_HAS_PROCESS(StreamingDataWidthCo_3);

    ~StreamingDataWidthCo_3();

    sc_trace_file* mVcdFile;

    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<3> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > in_V_V_blk_n;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<1> > icmp_ln268_reg_187;
    sc_signal< sc_lv<1> > icmp_ln268_reg_187_pp0_iter1_reg;
    sc_signal< sc_lv<1> > icmp_ln271_reg_206;
    sc_signal< sc_logic > out_V_V_blk_n;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter3;
    sc_signal< sc_lv<1> > icmp_ln268_reg_187_pp0_iter2_reg;
    sc_signal< sc_logic > numReps_blk_n;
    sc_signal< sc_logic > numReps_out_blk_n;
    sc_signal< sc_lv<63> > p_025_0_i_reg_77;
    sc_signal< sc_lv<32> > o_0_i_reg_89;
    sc_signal< sc_lv<32> > t_0_i_reg_101;
    sc_signal< sc_lv<32> > shl_ln268_fu_121_p2;
    sc_signal< sc_lv<32> > shl_ln268_reg_182;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_lv<1> > icmp_ln268_fu_127_p2;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter1;
    sc_signal< bool > ap_predicate_op25_read_state4;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter2;
    sc_signal< bool > ap_block_state5_pp0_stage0_iter3;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<32> > t_fu_132_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<32> > o_fu_138_p2;
    sc_signal< sc_lv<32> > o_reg_196;
    sc_signal< sc_lv<1> > icmp_ln282_fu_144_p2;
    sc_signal< sc_lv<1> > icmp_ln282_reg_201;
    sc_signal< sc_lv<1> > icmp_ln271_fu_150_p2;
    sc_signal< sc_lv<1> > icmp_ln271_reg_206_pp0_iter2_reg;
    sc_signal< sc_lv<32> > select_ln282_fu_156_p3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state2;
    sc_signal< sc_lv<32> > ap_phi_mux_o_0_i_phi_fu_93_p4;
    sc_signal< sc_lv<64> > ap_phi_mux_p_Val2_s_phi_fu_115_p4;
    sc_signal< sc_lv<64> > ap_phi_reg_pp0_iter0_p_Val2_s_reg_112;
    sc_signal< sc_lv<64> > ap_phi_reg_pp0_iter1_p_Val2_s_reg_112;
    sc_signal< sc_lv<64> > ap_phi_reg_pp0_iter2_p_Val2_s_reg_112;
    sc_signal< sc_lv<64> > ap_phi_reg_pp0_iter3_p_Val2_s_reg_112;
    sc_signal< sc_lv<64> > zext_ln268_fu_162_p1;
    sc_signal< bool > ap_block_pp0_stage0_01001;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<3> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<3> ap_ST_fsm_state1;
    static const sc_lv<3> ap_ST_fsm_pp0_stage0;
    static const sc_lv<3> ap_ST_fsm_state6;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<63> ap_const_lv63_0;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_40;
    static const sc_lv<32> ap_const_lv32_3F;
    static const sc_lv<32> ap_const_lv32_2;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state6();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_01001();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state1();
    void thread_ap_block_state2_pp0_stage0_iter0();
    void thread_ap_block_state3_pp0_stage0_iter1();
    void thread_ap_block_state4_pp0_stage0_iter2();
    void thread_ap_block_state5_pp0_stage0_iter3();
    void thread_ap_condition_pp0_exit_iter0_state2();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_phi_mux_o_0_i_phi_fu_93_p4();
    void thread_ap_phi_mux_p_Val2_s_phi_fu_115_p4();
    void thread_ap_phi_reg_pp0_iter0_p_Val2_s_reg_112();
    void thread_ap_predicate_op25_read_state4();
    void thread_ap_ready();
    void thread_icmp_ln268_fu_127_p2();
    void thread_icmp_ln271_fu_150_p2();
    void thread_icmp_ln282_fu_144_p2();
    void thread_in_V_V_blk_n();
    void thread_in_V_V_read();
    void thread_numReps_blk_n();
    void thread_numReps_out_blk_n();
    void thread_numReps_out_din();
    void thread_numReps_out_write();
    void thread_numReps_read();
    void thread_o_fu_138_p2();
    void thread_out_V_V_blk_n();
    void thread_out_V_V_din();
    void thread_out_V_V_write();
    void thread_select_ln282_fu_156_p3();
    void thread_shl_ln268_fu_121_p2();
    void thread_t_fu_132_p2();
    void thread_zext_ln268_fu_162_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif

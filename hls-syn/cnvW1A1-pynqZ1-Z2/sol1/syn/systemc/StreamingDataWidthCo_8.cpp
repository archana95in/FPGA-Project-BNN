// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "StreamingDataWidthCo_8.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic StreamingDataWidthCo_8::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic StreamingDataWidthCo_8::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<4> StreamingDataWidthCo_8::ap_ST_fsm_state1 = "1";
const sc_lv<4> StreamingDataWidthCo_8::ap_ST_fsm_state2 = "10";
const sc_lv<4> StreamingDataWidthCo_8::ap_ST_fsm_pp0_stage0 = "100";
const sc_lv<4> StreamingDataWidthCo_8::ap_ST_fsm_state7 = "1000";
const bool StreamingDataWidthCo_8::ap_const_boolean_1 = true;
const sc_lv<32> StreamingDataWidthCo_8::ap_const_lv32_0 = "00000000000000000000000000000000";
const bool StreamingDataWidthCo_8::ap_const_boolean_0 = false;
const sc_lv<1> StreamingDataWidthCo_8::ap_const_lv1_0 = "0";
const sc_lv<1> StreamingDataWidthCo_8::ap_const_lv1_1 = "1";
const sc_lv<32> StreamingDataWidthCo_8::ap_const_lv32_1 = "1";
const sc_lv<32> StreamingDataWidthCo_8::ap_const_lv32_2 = "10";
const sc_lv<224> StreamingDataWidthCo_8::ap_const_lv224_lc_1 = "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000";
const sc_lv<32> StreamingDataWidthCo_8::ap_const_lv32_6 = "110";
const sc_lv<32> StreamingDataWidthCo_8::ap_const_lv32_3 = "11";
const sc_lv<32> StreamingDataWidthCo_8::ap_const_lv32_8 = "1000";
const sc_lv<32> StreamingDataWidthCo_8::ap_const_lv32_20 = "100000";
const sc_lv<32> StreamingDataWidthCo_8::ap_const_lv32_FF = "11111111";

StreamingDataWidthCo_8::StreamingDataWidthCo_8(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_pp0_stage0);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state7);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_block_pp0_stage0);

    SC_METHOD(thread_ap_block_pp0_stage0_01001);
    sensitive << ( in_V_V_empty_n );
    sensitive << ( out_V_V_full_n );
    sensitive << ( ap_enable_reg_pp0_iter2 );
    sensitive << ( ap_enable_reg_pp0_iter3 );
    sensitive << ( icmp_ln268_reg_207_pp0_iter2_reg );
    sensitive << ( ap_predicate_op28_read_state5 );

    SC_METHOD(thread_ap_block_pp0_stage0_11001);
    sensitive << ( in_V_V_empty_n );
    sensitive << ( out_V_V_full_n );
    sensitive << ( ap_enable_reg_pp0_iter2 );
    sensitive << ( ap_enable_reg_pp0_iter3 );
    sensitive << ( icmp_ln268_reg_207_pp0_iter2_reg );
    sensitive << ( ap_predicate_op28_read_state5 );

    SC_METHOD(thread_ap_block_pp0_stage0_subdone);
    sensitive << ( in_V_V_empty_n );
    sensitive << ( out_V_V_full_n );
    sensitive << ( ap_enable_reg_pp0_iter2 );
    sensitive << ( ap_enable_reg_pp0_iter3 );
    sensitive << ( icmp_ln268_reg_207_pp0_iter2_reg );
    sensitive << ( ap_predicate_op28_read_state5 );

    SC_METHOD(thread_ap_block_state1);
    sensitive << ( real_start );
    sensitive << ( ap_done_reg );
    sensitive << ( numReps_empty_n );
    sensitive << ( numReps_out_full_n );

    SC_METHOD(thread_ap_block_state3_pp0_stage0_iter0);

    SC_METHOD(thread_ap_block_state4_pp0_stage0_iter1);

    SC_METHOD(thread_ap_block_state5_pp0_stage0_iter2);
    sensitive << ( in_V_V_empty_n );
    sensitive << ( ap_predicate_op28_read_state5 );

    SC_METHOD(thread_ap_block_state6_pp0_stage0_iter3);
    sensitive << ( out_V_V_full_n );
    sensitive << ( icmp_ln268_reg_207_pp0_iter2_reg );

    SC_METHOD(thread_ap_condition_pp0_exit_iter0_state3);
    sensitive << ( icmp_ln268_fu_141_p2 );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state7 );

    SC_METHOD(thread_ap_enable_pp0);
    sensitive << ( ap_idle_pp0 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( real_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_idle_pp0);
    sensitive << ( ap_enable_reg_pp0_iter2 );
    sensitive << ( ap_enable_reg_pp0_iter3 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );

    SC_METHOD(thread_ap_phi_mux_o_0_i_phi_fu_97_p4);
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( icmp_ln268_reg_207 );
    sensitive << ( o_0_i_reg_93 );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( select_ln282_fu_170_p3 );
    sensitive << ( ap_enable_reg_pp0_iter1 );

    SC_METHOD(thread_ap_phi_mux_p_Val2_s_phi_fu_119_p4);
    sensitive << ( icmp_ln268_reg_207_pp0_iter2_reg );
    sensitive << ( icmp_ln271_reg_226_pp0_iter2_reg );
    sensitive << ( ap_phi_reg_pp0_iter3_p_Val2_s_reg_116 );
    sensitive << ( zext_ln268_fu_176_p1 );

    SC_METHOD(thread_ap_phi_reg_pp0_iter0_p_Val2_s_reg_116);

    SC_METHOD(thread_ap_predicate_op28_read_state5);
    sensitive << ( icmp_ln268_reg_207_pp0_iter1_reg );
    sensitive << ( icmp_ln271_reg_226 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( internal_ap_ready );

    SC_METHOD(thread_icmp_ln268_fu_141_p2);
    sensitive << ( t_0_i_reg_105 );
    sensitive << ( totalIters_reg_202 );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_enable_reg_pp0_iter0 );

    SC_METHOD(thread_icmp_ln271_fu_164_p2);
    sensitive << ( icmp_ln268_reg_207 );
    sensitive << ( o_0_i_reg_93 );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_enable_reg_pp0_iter1 );

    SC_METHOD(thread_icmp_ln282_fu_158_p2);
    sensitive << ( icmp_ln268_fu_141_p2 );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( o_fu_152_p2 );

    SC_METHOD(thread_in_V_V_blk_n);
    sensitive << ( in_V_V_empty_n );
    sensitive << ( ap_enable_reg_pp0_iter2 );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( icmp_ln268_reg_207_pp0_iter1_reg );
    sensitive << ( icmp_ln271_reg_226 );

    SC_METHOD(thread_in_V_V_read);
    sensitive << ( ap_enable_reg_pp0_iter2 );
    sensitive << ( ap_predicate_op28_read_state5 );
    sensitive << ( ap_block_pp0_stage0_11001 );

    SC_METHOD(thread_internal_ap_ready);
    sensitive << ( ap_CS_fsm_state7 );

    SC_METHOD(thread_numReps_blk_n);
    sensitive << ( real_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( numReps_empty_n );

    SC_METHOD(thread_numReps_out_blk_n);
    sensitive << ( real_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( numReps_out_full_n );

    SC_METHOD(thread_numReps_out_din);
    sensitive << ( real_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( numReps_dout );
    sensitive << ( numReps_empty_n );
    sensitive << ( numReps_out_full_n );

    SC_METHOD(thread_numReps_out_write);
    sensitive << ( real_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( numReps_empty_n );
    sensitive << ( numReps_out_full_n );

    SC_METHOD(thread_numReps_read);
    sensitive << ( real_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( numReps_empty_n );
    sensitive << ( numReps_out_full_n );

    SC_METHOD(thread_o_fu_152_p2);
    sensitive << ( ap_phi_mux_o_0_i_phi_fu_97_p4 );

    SC_METHOD(thread_out_V_V_blk_n);
    sensitive << ( out_V_V_full_n );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter3 );
    sensitive << ( icmp_ln268_reg_207_pp0_iter2_reg );

    SC_METHOD(thread_out_V_V_din);
    sensitive << ( ap_enable_reg_pp0_iter3 );
    sensitive << ( icmp_ln268_reg_207_pp0_iter2_reg );
    sensitive << ( ap_phi_mux_p_Val2_s_phi_fu_119_p4 );
    sensitive << ( ap_block_pp0_stage0_01001 );

    SC_METHOD(thread_out_V_V_write);
    sensitive << ( ap_enable_reg_pp0_iter3 );
    sensitive << ( icmp_ln268_reg_207_pp0_iter2_reg );
    sensitive << ( ap_block_pp0_stage0_11001 );

    SC_METHOD(thread_real_start);
    sensitive << ( ap_start );
    sensitive << ( start_full_n );
    sensitive << ( start_once_reg );

    SC_METHOD(thread_select_ln282_fu_170_p3);
    sensitive << ( o_reg_216 );
    sensitive << ( icmp_ln282_reg_221 );

    SC_METHOD(thread_shl_ln265_1_fu_130_p2);
    sensitive << ( numReps_read_reg_196 );

    SC_METHOD(thread_shl_ln265_fu_125_p2);
    sensitive << ( numReps_read_reg_196 );

    SC_METHOD(thread_start_out);
    sensitive << ( real_start );

    SC_METHOD(thread_start_write);
    sensitive << ( real_start );
    sensitive << ( start_once_reg );

    SC_METHOD(thread_t_fu_146_p2);
    sensitive << ( t_0_i_reg_105 );

    SC_METHOD(thread_totalIters_fu_135_p2);
    sensitive << ( shl_ln265_fu_125_p2 );
    sensitive << ( shl_ln265_1_fu_130_p2 );

    SC_METHOD(thread_zext_ln268_fu_176_p1);
    sensitive << ( p_025_0_i_reg_81 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( real_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( numReps_empty_n );
    sensitive << ( numReps_out_full_n );
    sensitive << ( ap_enable_reg_pp0_iter2 );
    sensitive << ( ap_enable_reg_pp0_iter3 );
    sensitive << ( icmp_ln268_fu_141_p2 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0_subdone );

    start_once_reg = SC_LOGIC_0;
    ap_done_reg = SC_LOGIC_0;
    ap_CS_fsm = "0001";
    ap_enable_reg_pp0_iter2 = SC_LOGIC_0;
    ap_enable_reg_pp0_iter3 = SC_LOGIC_0;
    ap_enable_reg_pp0_iter0 = SC_LOGIC_0;
    ap_enable_reg_pp0_iter1 = SC_LOGIC_0;
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "StreamingDataWidthCo_8_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, start_full_n, "(port)start_full_n");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_continue, "(port)ap_continue");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, start_out, "(port)start_out");
    sc_trace(mVcdFile, start_write, "(port)start_write");
    sc_trace(mVcdFile, in_V_V_dout, "(port)in_V_V_dout");
    sc_trace(mVcdFile, in_V_V_empty_n, "(port)in_V_V_empty_n");
    sc_trace(mVcdFile, in_V_V_read, "(port)in_V_V_read");
    sc_trace(mVcdFile, out_V_V_din, "(port)out_V_V_din");
    sc_trace(mVcdFile, out_V_V_full_n, "(port)out_V_V_full_n");
    sc_trace(mVcdFile, out_V_V_write, "(port)out_V_V_write");
    sc_trace(mVcdFile, numReps_dout, "(port)numReps_dout");
    sc_trace(mVcdFile, numReps_empty_n, "(port)numReps_empty_n");
    sc_trace(mVcdFile, numReps_read, "(port)numReps_read");
    sc_trace(mVcdFile, numReps_out_din, "(port)numReps_out_din");
    sc_trace(mVcdFile, numReps_out_full_n, "(port)numReps_out_full_n");
    sc_trace(mVcdFile, numReps_out_write, "(port)numReps_out_write");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, real_start, "real_start");
    sc_trace(mVcdFile, start_once_reg, "start_once_reg");
    sc_trace(mVcdFile, ap_done_reg, "ap_done_reg");
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, internal_ap_ready, "internal_ap_ready");
    sc_trace(mVcdFile, in_V_V_blk_n, "in_V_V_blk_n");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter2, "ap_enable_reg_pp0_iter2");
    sc_trace(mVcdFile, ap_block_pp0_stage0, "ap_block_pp0_stage0");
    sc_trace(mVcdFile, icmp_ln268_reg_207, "icmp_ln268_reg_207");
    sc_trace(mVcdFile, icmp_ln268_reg_207_pp0_iter1_reg, "icmp_ln268_reg_207_pp0_iter1_reg");
    sc_trace(mVcdFile, icmp_ln271_reg_226, "icmp_ln271_reg_226");
    sc_trace(mVcdFile, out_V_V_blk_n, "out_V_V_blk_n");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter3, "ap_enable_reg_pp0_iter3");
    sc_trace(mVcdFile, icmp_ln268_reg_207_pp0_iter2_reg, "icmp_ln268_reg_207_pp0_iter2_reg");
    sc_trace(mVcdFile, numReps_blk_n, "numReps_blk_n");
    sc_trace(mVcdFile, numReps_out_blk_n, "numReps_out_blk_n");
    sc_trace(mVcdFile, p_025_0_i_reg_81, "p_025_0_i_reg_81");
    sc_trace(mVcdFile, o_0_i_reg_93, "o_0_i_reg_93");
    sc_trace(mVcdFile, t_0_i_reg_105, "t_0_i_reg_105");
    sc_trace(mVcdFile, numReps_read_reg_196, "numReps_read_reg_196");
    sc_trace(mVcdFile, ap_block_state1, "ap_block_state1");
    sc_trace(mVcdFile, totalIters_fu_135_p2, "totalIters_fu_135_p2");
    sc_trace(mVcdFile, totalIters_reg_202, "totalIters_reg_202");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, icmp_ln268_fu_141_p2, "icmp_ln268_fu_141_p2");
    sc_trace(mVcdFile, ap_CS_fsm_pp0_stage0, "ap_CS_fsm_pp0_stage0");
    sc_trace(mVcdFile, ap_block_state3_pp0_stage0_iter0, "ap_block_state3_pp0_stage0_iter0");
    sc_trace(mVcdFile, ap_block_state4_pp0_stage0_iter1, "ap_block_state4_pp0_stage0_iter1");
    sc_trace(mVcdFile, ap_predicate_op28_read_state5, "ap_predicate_op28_read_state5");
    sc_trace(mVcdFile, ap_block_state5_pp0_stage0_iter2, "ap_block_state5_pp0_stage0_iter2");
    sc_trace(mVcdFile, ap_block_state6_pp0_stage0_iter3, "ap_block_state6_pp0_stage0_iter3");
    sc_trace(mVcdFile, ap_block_pp0_stage0_11001, "ap_block_pp0_stage0_11001");
    sc_trace(mVcdFile, t_fu_146_p2, "t_fu_146_p2");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter0, "ap_enable_reg_pp0_iter0");
    sc_trace(mVcdFile, o_fu_152_p2, "o_fu_152_p2");
    sc_trace(mVcdFile, o_reg_216, "o_reg_216");
    sc_trace(mVcdFile, icmp_ln282_fu_158_p2, "icmp_ln282_fu_158_p2");
    sc_trace(mVcdFile, icmp_ln282_reg_221, "icmp_ln282_reg_221");
    sc_trace(mVcdFile, icmp_ln271_fu_164_p2, "icmp_ln271_fu_164_p2");
    sc_trace(mVcdFile, icmp_ln271_reg_226_pp0_iter2_reg, "icmp_ln271_reg_226_pp0_iter2_reg");
    sc_trace(mVcdFile, select_ln282_fu_170_p3, "select_ln282_fu_170_p3");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter1, "ap_enable_reg_pp0_iter1");
    sc_trace(mVcdFile, ap_block_pp0_stage0_subdone, "ap_block_pp0_stage0_subdone");
    sc_trace(mVcdFile, ap_condition_pp0_exit_iter0_state3, "ap_condition_pp0_exit_iter0_state3");
    sc_trace(mVcdFile, ap_phi_mux_o_0_i_phi_fu_97_p4, "ap_phi_mux_o_0_i_phi_fu_97_p4");
    sc_trace(mVcdFile, ap_phi_mux_p_Val2_s_phi_fu_119_p4, "ap_phi_mux_p_Val2_s_phi_fu_119_p4");
    sc_trace(mVcdFile, ap_phi_reg_pp0_iter0_p_Val2_s_reg_116, "ap_phi_reg_pp0_iter0_p_Val2_s_reg_116");
    sc_trace(mVcdFile, ap_phi_reg_pp0_iter1_p_Val2_s_reg_116, "ap_phi_reg_pp0_iter1_p_Val2_s_reg_116");
    sc_trace(mVcdFile, ap_phi_reg_pp0_iter2_p_Val2_s_reg_116, "ap_phi_reg_pp0_iter2_p_Val2_s_reg_116");
    sc_trace(mVcdFile, ap_phi_reg_pp0_iter3_p_Val2_s_reg_116, "ap_phi_reg_pp0_iter3_p_Val2_s_reg_116");
    sc_trace(mVcdFile, zext_ln268_fu_176_p1, "zext_ln268_fu_176_p1");
    sc_trace(mVcdFile, ap_block_pp0_stage0_01001, "ap_block_pp0_stage0_01001");
    sc_trace(mVcdFile, shl_ln265_fu_125_p2, "shl_ln265_fu_125_p2");
    sc_trace(mVcdFile, shl_ln265_1_fu_130_p2, "shl_ln265_1_fu_130_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state7, "ap_CS_fsm_state7");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
    sc_trace(mVcdFile, ap_idle_pp0, "ap_idle_pp0");
    sc_trace(mVcdFile, ap_enable_pp0, "ap_enable_pp0");
#endif

    }
}

StreamingDataWidthCo_8::~StreamingDataWidthCo_8() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void StreamingDataWidthCo_8::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_done_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_continue.read())) {
            ap_done_reg = ap_const_logic_0;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state3.read()))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_0;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            if (esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state3.read())) {
                ap_enable_reg_pp0_iter1 = (ap_condition_pp0_exit_iter0_state3.read() ^ ap_const_logic_1);
            } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
                ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
            }
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter2 = ap_enable_reg_pp0_iter1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter3 = ap_enable_reg_pp0_iter2.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
            ap_enable_reg_pp0_iter3 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        if ((esl_seteq<1,1,1>(icmp_ln268_reg_207_pp0_iter1_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(icmp_ln271_reg_226.read(), ap_const_lv1_1))) {
            ap_phi_reg_pp0_iter3_p_Val2_s_reg_116 = in_V_V_dout.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter3_p_Val2_s_reg_116 = ap_phi_reg_pp0_iter2_p_Val2_s_reg_116.read();
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln268_reg_207.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        o_0_i_reg_93 = select_ln282_fu_170_p3.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        o_0_i_reg_93 = ap_const_lv32_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln268_reg_207_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        p_025_0_i_reg_81 = ap_phi_mux_p_Val2_s_phi_fu_119_p4.read().range(255, 32);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        p_025_0_i_reg_81 = ap_const_lv224_lc_1;
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        start_once_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, real_start.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_0, internal_ap_ready.read()))) {
            start_once_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, internal_ap_ready.read())) {
            start_once_reg = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln268_fu_141_p2.read()))) {
        t_0_i_reg_105 = t_fu_146_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        t_0_i_reg_105 = ap_const_lv32_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        ap_phi_reg_pp0_iter1_p_Val2_s_reg_116 = ap_phi_reg_pp0_iter0_p_Val2_s_reg_116.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        ap_phi_reg_pp0_iter2_p_Val2_s_reg_116 = ap_phi_reg_pp0_iter1_p_Val2_s_reg_116.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        icmp_ln268_reg_207 = icmp_ln268_fu_141_p2.read();
        icmp_ln268_reg_207_pp0_iter1_reg = icmp_ln268_reg_207.read();
    }
    if (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) {
        icmp_ln268_reg_207_pp0_iter2_reg = icmp_ln268_reg_207_pp0_iter1_reg.read();
        icmp_ln271_reg_226_pp0_iter2_reg = icmp_ln271_reg_226.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln268_reg_207.read(), ap_const_lv1_0))) {
        icmp_ln271_reg_226 = icmp_ln271_fu_164_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln268_fu_141_p2.read()))) {
        icmp_ln282_reg_221 = icmp_ln282_fu_158_p2.read();
        o_reg_216 = o_fu_152_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, numReps_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, numReps_out_full_n.read())))) {
        numReps_read_reg_196 = numReps_dout.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        totalIters_reg_202 = totalIters_fu_135_p2.read();
    }
}

void StreamingDataWidthCo_8::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[2];
}

void StreamingDataWidthCo_8::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void StreamingDataWidthCo_8::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void StreamingDataWidthCo_8::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[3];
}

void StreamingDataWidthCo_8::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void StreamingDataWidthCo_8::thread_ap_block_pp0_stage0_01001() {
    ap_block_pp0_stage0_01001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op28_read_state5.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln268_reg_207_pp0_iter2_reg.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_V_V_full_n.read())));
}

void StreamingDataWidthCo_8::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op28_read_state5.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln268_reg_207_pp0_iter2_reg.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_V_V_full_n.read())));
}

void StreamingDataWidthCo_8::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op28_read_state5.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln268_reg_207_pp0_iter2_reg.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_V_V_full_n.read())));
}

void StreamingDataWidthCo_8::thread_ap_block_state1() {
    ap_block_state1 = (esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, numReps_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, numReps_out_full_n.read()));
}

void StreamingDataWidthCo_8::thread_ap_block_state3_pp0_stage0_iter0() {
    ap_block_state3_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void StreamingDataWidthCo_8::thread_ap_block_state4_pp0_stage0_iter1() {
    ap_block_state4_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void StreamingDataWidthCo_8::thread_ap_block_state5_pp0_stage0_iter2() {
    ap_block_state5_pp0_stage0_iter2 = (esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op28_read_state5.read()));
}

void StreamingDataWidthCo_8::thread_ap_block_state6_pp0_stage0_iter3() {
    ap_block_state6_pp0_stage0_iter3 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln268_reg_207_pp0_iter2_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_0, out_V_V_full_n.read()));
}

void StreamingDataWidthCo_8::thread_ap_condition_pp0_exit_iter0_state3() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln268_fu_141_p2.read())) {
        ap_condition_pp0_exit_iter0_state3 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state3 = ap_const_logic_0;
    }
}

void StreamingDataWidthCo_8::thread_ap_done() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_done_reg.read();
    }
}

void StreamingDataWidthCo_8::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void StreamingDataWidthCo_8::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void StreamingDataWidthCo_8::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter3.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void StreamingDataWidthCo_8::thread_ap_phi_mux_o_0_i_phi_fu_97_p4() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(icmp_ln268_reg_207.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        ap_phi_mux_o_0_i_phi_fu_97_p4 = select_ln282_fu_170_p3.read();
    } else {
        ap_phi_mux_o_0_i_phi_fu_97_p4 = o_0_i_reg_93.read();
    }
}

void StreamingDataWidthCo_8::thread_ap_phi_mux_p_Val2_s_phi_fu_119_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln268_reg_207_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln271_reg_226_pp0_iter2_reg.read()))) {
        ap_phi_mux_p_Val2_s_phi_fu_119_p4 = zext_ln268_fu_176_p1.read();
    } else {
        ap_phi_mux_p_Val2_s_phi_fu_119_p4 = ap_phi_reg_pp0_iter3_p_Val2_s_reg_116.read();
    }
}

void StreamingDataWidthCo_8::thread_ap_phi_reg_pp0_iter0_p_Val2_s_reg_116() {
    ap_phi_reg_pp0_iter0_p_Val2_s_reg_116 =  (sc_lv<256>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void StreamingDataWidthCo_8::thread_ap_predicate_op28_read_state5() {
    ap_predicate_op28_read_state5 = (esl_seteq<1,1,1>(icmp_ln268_reg_207_pp0_iter1_reg.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(icmp_ln271_reg_226.read(), ap_const_lv1_1));
}

void StreamingDataWidthCo_8::thread_ap_ready() {
    ap_ready = internal_ap_ready.read();
}

void StreamingDataWidthCo_8::thread_icmp_ln268_fu_141_p2() {
    icmp_ln268_fu_141_p2 = (!t_0_i_reg_105.read().is_01() || !totalIters_reg_202.read().is_01())? sc_lv<1>(): sc_lv<1>(t_0_i_reg_105.read() == totalIters_reg_202.read());
}

void StreamingDataWidthCo_8::thread_icmp_ln271_fu_164_p2() {
    icmp_ln271_fu_164_p2 = (!o_0_i_reg_93.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(o_0_i_reg_93.read() == ap_const_lv32_0);
}

void StreamingDataWidthCo_8::thread_icmp_ln282_fu_158_p2() {
    icmp_ln282_fu_158_p2 = (!o_fu_152_p2.read().is_01() || !ap_const_lv32_8.is_01())? sc_lv<1>(): sc_lv<1>(o_fu_152_p2.read() == ap_const_lv32_8);
}

void StreamingDataWidthCo_8::thread_in_V_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln268_reg_207_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(icmp_ln271_reg_226.read(), ap_const_lv1_1))) {
        in_V_V_blk_n = in_V_V_empty_n.read();
    } else {
        in_V_V_blk_n = ap_const_logic_1;
    }
}

void StreamingDataWidthCo_8::thread_in_V_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op28_read_state5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        in_V_V_read = ap_const_logic_1;
    } else {
        in_V_V_read = ap_const_logic_0;
    }
}

void StreamingDataWidthCo_8::thread_internal_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        internal_ap_ready = ap_const_logic_1;
    } else {
        internal_ap_ready = ap_const_logic_0;
    }
}

void StreamingDataWidthCo_8::thread_numReps_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        numReps_blk_n = numReps_empty_n.read();
    } else {
        numReps_blk_n = ap_const_logic_1;
    }
}

void StreamingDataWidthCo_8::thread_numReps_out_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        numReps_out_blk_n = numReps_out_full_n.read();
    } else {
        numReps_out_blk_n = ap_const_logic_1;
    }
}

void StreamingDataWidthCo_8::thread_numReps_out_din() {
    numReps_out_din = numReps_dout.read();
}

void StreamingDataWidthCo_8::thread_numReps_out_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, numReps_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, numReps_out_full_n.read())))) {
        numReps_out_write = ap_const_logic_1;
    } else {
        numReps_out_write = ap_const_logic_0;
    }
}

void StreamingDataWidthCo_8::thread_numReps_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, numReps_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, numReps_out_full_n.read())))) {
        numReps_read = ap_const_logic_1;
    } else {
        numReps_read = ap_const_logic_0;
    }
}

void StreamingDataWidthCo_8::thread_o_fu_152_p2() {
    o_fu_152_p2 = (!ap_const_lv32_1.is_01() || !ap_phi_mux_o_0_i_phi_fu_97_p4.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_1) + sc_biguint<32>(ap_phi_mux_o_0_i_phi_fu_97_p4.read()));
}

void StreamingDataWidthCo_8::thread_out_V_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln268_reg_207_pp0_iter2_reg.read()))) {
        out_V_V_blk_n = out_V_V_full_n.read();
    } else {
        out_V_V_blk_n = ap_const_logic_1;
    }
}

void StreamingDataWidthCo_8::thread_out_V_V_din() {
    out_V_V_din = ap_phi_mux_p_Val2_s_phi_fu_119_p4.read().range(32-1, 0);
}

void StreamingDataWidthCo_8::thread_out_V_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln268_reg_207_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        out_V_V_write = ap_const_logic_1;
    } else {
        out_V_V_write = ap_const_logic_0;
    }
}

void StreamingDataWidthCo_8::thread_real_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, start_full_n.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, start_once_reg.read()))) {
        real_start = ap_const_logic_0;
    } else {
        real_start = ap_start.read();
    }
}

void StreamingDataWidthCo_8::thread_select_ln282_fu_170_p3() {
    select_ln282_fu_170_p3 = (!icmp_ln282_reg_221.read()[0].is_01())? sc_lv<32>(): ((icmp_ln282_reg_221.read()[0].to_bool())? ap_const_lv32_0: o_reg_216.read());
}

void StreamingDataWidthCo_8::thread_shl_ln265_1_fu_130_p2() {
    shl_ln265_1_fu_130_p2 = (!ap_const_lv32_3.is_01())? sc_lv<32>(): numReps_read_reg_196.read() << (unsigned short)ap_const_lv32_3.to_uint();
}

void StreamingDataWidthCo_8::thread_shl_ln265_fu_125_p2() {
    shl_ln265_fu_125_p2 = (!ap_const_lv32_6.is_01())? sc_lv<32>(): numReps_read_reg_196.read() << (unsigned short)ap_const_lv32_6.to_uint();
}

void StreamingDataWidthCo_8::thread_start_out() {
    start_out = real_start.read();
}

void StreamingDataWidthCo_8::thread_start_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, start_once_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, real_start.read()))) {
        start_write = ap_const_logic_1;
    } else {
        start_write = ap_const_logic_0;
    }
}

void StreamingDataWidthCo_8::thread_t_fu_146_p2() {
    t_fu_146_p2 = (!t_0_i_reg_105.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(t_0_i_reg_105.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void StreamingDataWidthCo_8::thread_totalIters_fu_135_p2() {
    totalIters_fu_135_p2 = (!shl_ln265_fu_125_p2.read().is_01() || !shl_ln265_1_fu_130_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(shl_ln265_fu_125_p2.read()) + sc_biguint<32>(shl_ln265_1_fu_130_p2.read()));
}

void StreamingDataWidthCo_8::thread_zext_ln268_fu_176_p1() {
    zext_ln268_fu_176_p1 = esl_zext<256,224>(p_025_0_i_reg_81.read());
}

void StreamingDataWidthCo_8::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, numReps_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, numReps_out_full_n.read())))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            break;
        case 4 : 
            if ((!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter2.read(), ap_const_logic_0)) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln268_fu_141_p2.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter2.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln268_fu_141_p2.read()) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_state7;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm = "XXXX";
            break;
    }
}

}


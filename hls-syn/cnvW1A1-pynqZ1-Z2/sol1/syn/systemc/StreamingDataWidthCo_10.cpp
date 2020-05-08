// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "StreamingDataWidthCo_10.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic StreamingDataWidthCo_10::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic StreamingDataWidthCo_10::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<3> StreamingDataWidthCo_10::ap_ST_fsm_state1 = "1";
const sc_lv<3> StreamingDataWidthCo_10::ap_ST_fsm_pp0_stage0 = "10";
const sc_lv<3> StreamingDataWidthCo_10::ap_ST_fsm_state4 = "100";
const bool StreamingDataWidthCo_10::ap_const_boolean_1 = true;
const sc_lv<32> StreamingDataWidthCo_10::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> StreamingDataWidthCo_10::ap_const_lv32_1 = "1";
const bool StreamingDataWidthCo_10::ap_const_boolean_0 = false;
const sc_lv<1> StreamingDataWidthCo_10::ap_const_lv1_0 = "0";
const sc_lv<1> StreamingDataWidthCo_10::ap_const_lv1_1 = "1";
const sc_lv<63> StreamingDataWidthCo_10::ap_const_lv63_0 = "000000000000000000000000000000000000000000000000000000000000000";
const sc_lv<32> StreamingDataWidthCo_10::ap_const_lv32_9 = "1001";
const sc_lv<32> StreamingDataWidthCo_10::ap_const_lv32_40 = "1000000";
const sc_lv<32> StreamingDataWidthCo_10::ap_const_lv32_3E = "111110";
const sc_lv<32> StreamingDataWidthCo_10::ap_const_lv32_2 = "10";

StreamingDataWidthCo_10::StreamingDataWidthCo_10(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_pp0_stage0);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_block_pp0_stage0);

    SC_METHOD(thread_ap_block_pp0_stage0_01001);
    sensitive << ( in_V_V_empty_n );
    sensitive << ( out_V_V_full_n );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( icmp_ln300_reg_189 );
    sensitive << ( icmp_ln309_reg_198 );

    SC_METHOD(thread_ap_block_pp0_stage0_11001);
    sensitive << ( in_V_V_empty_n );
    sensitive << ( out_V_V_full_n );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( icmp_ln300_reg_189 );
    sensitive << ( icmp_ln309_reg_198 );

    SC_METHOD(thread_ap_block_pp0_stage0_subdone);
    sensitive << ( in_V_V_empty_n );
    sensitive << ( out_V_V_full_n );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( icmp_ln300_reg_189 );
    sensitive << ( icmp_ln309_reg_198 );

    SC_METHOD(thread_ap_block_state1);
    sensitive << ( real_start );
    sensitive << ( ap_done_reg );
    sensitive << ( numReps_empty_n );
    sensitive << ( numReps_out_full_n );

    SC_METHOD(thread_ap_block_state2_pp0_stage0_iter0);

    SC_METHOD(thread_ap_block_state3_pp0_stage0_iter1);
    sensitive << ( in_V_V_empty_n );
    sensitive << ( out_V_V_full_n );
    sensitive << ( icmp_ln300_reg_189 );
    sensitive << ( icmp_ln309_reg_198 );

    SC_METHOD(thread_ap_condition_pp0_exit_iter0_state2);
    sensitive << ( icmp_ln300_fu_119_p2 );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_ap_enable_pp0);
    sensitive << ( ap_idle_pp0 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( real_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_idle_pp0);
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_enable_reg_pp0_iter0 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( internal_ap_ready );

    SC_METHOD(thread_i_fu_133_p2);
    sensitive << ( i_9_fu_54 );

    SC_METHOD(thread_icmp_ln300_fu_119_p2);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( t_0_i_reg_97 );
    sensitive << ( shl_ln300_reg_184 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_enable_reg_pp0_iter0 );

    SC_METHOD(thread_icmp_ln309_fu_139_p2);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( icmp_ln300_fu_119_p2 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( i_fu_133_p2 );

    SC_METHOD(thread_in_V_V_blk_n);
    sensitive << ( in_V_V_empty_n );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( icmp_ln300_reg_189 );

    SC_METHOD(thread_in_V_V_read);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( icmp_ln300_reg_189 );
    sensitive << ( ap_block_pp0_stage0_11001 );

    SC_METHOD(thread_internal_ap_ready);
    sensitive << ( ap_CS_fsm_state4 );

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

    SC_METHOD(thread_out_V_V_blk_n);
    sensitive << ( out_V_V_full_n );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( icmp_ln309_reg_198 );

    SC_METHOD(thread_out_V_V_din);
    sensitive << ( in_V_V_dout );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( icmp_ln309_reg_198 );
    sensitive << ( r_V_reg_85 );
    sensitive << ( ap_block_pp0_stage0_01001 );

    SC_METHOD(thread_out_V_V_write);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( icmp_ln309_reg_198 );
    sensitive << ( ap_block_pp0_stage0_11001 );

    SC_METHOD(thread_real_start);
    sensitive << ( ap_start );
    sensitive << ( start_full_n );
    sensitive << ( start_once_reg );

    SC_METHOD(thread_shl_ln300_fu_113_p2);
    sensitive << ( numReps_dout );

    SC_METHOD(thread_start_out);
    sensitive << ( real_start );

    SC_METHOD(thread_start_write);
    sensitive << ( real_start );
    sensitive << ( start_once_reg );

    SC_METHOD(thread_t_fu_124_p2);
    sensitive << ( t_0_i_reg_97 );

    SC_METHOD(thread_tmp_s_fu_159_p4);
    sensitive << ( r_V_reg_85 );

    SC_METHOD(thread_trunc_ln_fu_169_p3);
    sensitive << ( in_V_V_dout );
    sensitive << ( tmp_s_fu_159_p4 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( real_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( numReps_empty_n );
    sensitive << ( numReps_out_full_n );
    sensitive << ( icmp_ln300_fu_119_p2 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_block_pp0_stage0_subdone );

    start_once_reg = SC_LOGIC_0;
    ap_done_reg = SC_LOGIC_0;
    ap_CS_fsm = "001";
    ap_enable_reg_pp0_iter1 = SC_LOGIC_0;
    ap_enable_reg_pp0_iter0 = SC_LOGIC_0;
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "StreamingDataWidthCo_10_sc_trace_" << apTFileNum ++;
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
    sc_trace(mVcdFile, ap_CS_fsm_pp0_stage0, "ap_CS_fsm_pp0_stage0");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter1, "ap_enable_reg_pp0_iter1");
    sc_trace(mVcdFile, ap_block_pp0_stage0, "ap_block_pp0_stage0");
    sc_trace(mVcdFile, icmp_ln300_reg_189, "icmp_ln300_reg_189");
    sc_trace(mVcdFile, out_V_V_blk_n, "out_V_V_blk_n");
    sc_trace(mVcdFile, icmp_ln309_reg_198, "icmp_ln309_reg_198");
    sc_trace(mVcdFile, numReps_blk_n, "numReps_blk_n");
    sc_trace(mVcdFile, numReps_out_blk_n, "numReps_out_blk_n");
    sc_trace(mVcdFile, r_V_reg_85, "r_V_reg_85");
    sc_trace(mVcdFile, t_0_i_reg_97, "t_0_i_reg_97");
    sc_trace(mVcdFile, shl_ln300_fu_113_p2, "shl_ln300_fu_113_p2");
    sc_trace(mVcdFile, shl_ln300_reg_184, "shl_ln300_reg_184");
    sc_trace(mVcdFile, ap_block_state1, "ap_block_state1");
    sc_trace(mVcdFile, icmp_ln300_fu_119_p2, "icmp_ln300_fu_119_p2");
    sc_trace(mVcdFile, ap_block_state2_pp0_stage0_iter0, "ap_block_state2_pp0_stage0_iter0");
    sc_trace(mVcdFile, ap_block_state3_pp0_stage0_iter1, "ap_block_state3_pp0_stage0_iter1");
    sc_trace(mVcdFile, ap_block_pp0_stage0_11001, "ap_block_pp0_stage0_11001");
    sc_trace(mVcdFile, t_fu_124_p2, "t_fu_124_p2");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter0, "ap_enable_reg_pp0_iter0");
    sc_trace(mVcdFile, icmp_ln309_fu_139_p2, "icmp_ln309_fu_139_p2");
    sc_trace(mVcdFile, trunc_ln_fu_169_p3, "trunc_ln_fu_169_p3");
    sc_trace(mVcdFile, ap_block_pp0_stage0_subdone, "ap_block_pp0_stage0_subdone");
    sc_trace(mVcdFile, ap_condition_pp0_exit_iter0_state2, "ap_condition_pp0_exit_iter0_state2");
    sc_trace(mVcdFile, i_9_fu_54, "i_9_fu_54");
    sc_trace(mVcdFile, i_fu_133_p2, "i_fu_133_p2");
    sc_trace(mVcdFile, ap_block_pp0_stage0_01001, "ap_block_pp0_stage0_01001");
    sc_trace(mVcdFile, tmp_s_fu_159_p4, "tmp_s_fu_159_p4");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
    sc_trace(mVcdFile, ap_idle_pp0, "ap_idle_pp0");
    sc_trace(mVcdFile, ap_enable_pp0, "ap_enable_pp0");
#endif

    }
}

StreamingDataWidthCo_10::~StreamingDataWidthCo_10() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void StreamingDataWidthCo_10::thread_ap_clk_no_reset_() {
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
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state2.read()))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, numReps_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, numReps_out_full_n.read())))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state2.read()))) {
            ap_enable_reg_pp0_iter1 = (ap_condition_pp0_exit_iter0_state2.read() ^ ap_const_logic_1);
        } else if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, numReps_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, numReps_out_full_n.read())))) {
            ap_enable_reg_pp0_iter1 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln300_fu_119_p2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln309_fu_139_p2.read()))) {
        i_9_fu_54 = i_fu_133_p2.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                 !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, numReps_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, numReps_out_full_n.read()))) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln300_fu_119_p2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln309_fu_139_p2.read())))) {
        i_9_fu_54 = ap_const_lv32_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln300_reg_189.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        r_V_reg_85 = trunc_ln_fu_169_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, numReps_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, numReps_out_full_n.read())))) {
        r_V_reg_85 = ap_const_lv63_0;
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
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln300_fu_119_p2.read()))) {
        t_0_i_reg_97 = t_fu_124_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, numReps_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, numReps_out_full_n.read())))) {
        t_0_i_reg_97 = ap_const_lv32_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        icmp_ln300_reg_189 = icmp_ln300_fu_119_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln300_fu_119_p2.read()))) {
        icmp_ln309_reg_198 = icmp_ln309_fu_139_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, numReps_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, numReps_out_full_n.read())))) {
        shl_ln300_reg_184 = shl_ln300_fu_113_p2.read();
    }
}

void StreamingDataWidthCo_10::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[1];
}

void StreamingDataWidthCo_10::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void StreamingDataWidthCo_10::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[2];
}

void StreamingDataWidthCo_10::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void StreamingDataWidthCo_10::thread_ap_block_pp0_stage0_01001() {
    ap_block_pp0_stage0_01001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && ((esl_seteq<1,1,1>(icmp_ln300_reg_189.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read())) || 
  (esl_seteq<1,1,1>(icmp_ln309_reg_198.read(), ap_const_lv1_1) && 
   esl_seteq<1,1,1>(ap_const_logic_0, out_V_V_full_n.read()))));
}

void StreamingDataWidthCo_10::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && ((esl_seteq<1,1,1>(icmp_ln300_reg_189.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read())) || 
  (esl_seteq<1,1,1>(icmp_ln309_reg_198.read(), ap_const_lv1_1) && 
   esl_seteq<1,1,1>(ap_const_logic_0, out_V_V_full_n.read()))));
}

void StreamingDataWidthCo_10::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && ((esl_seteq<1,1,1>(icmp_ln300_reg_189.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read())) || 
  (esl_seteq<1,1,1>(icmp_ln309_reg_198.read(), ap_const_lv1_1) && 
   esl_seteq<1,1,1>(ap_const_logic_0, out_V_V_full_n.read()))));
}

void StreamingDataWidthCo_10::thread_ap_block_state1() {
    ap_block_state1 = (esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, numReps_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, numReps_out_full_n.read()));
}

void StreamingDataWidthCo_10::thread_ap_block_state2_pp0_stage0_iter0() {
    ap_block_state2_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void StreamingDataWidthCo_10::thread_ap_block_state3_pp0_stage0_iter1() {
    ap_block_state3_pp0_stage0_iter1 = ((esl_seteq<1,1,1>(icmp_ln300_reg_189.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read())) || (esl_seteq<1,1,1>(icmp_ln309_reg_198.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_V_V_full_n.read())));
}

void StreamingDataWidthCo_10::thread_ap_condition_pp0_exit_iter0_state2() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln300_fu_119_p2.read())) {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_0;
    }
}

void StreamingDataWidthCo_10::thread_ap_done() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_done_reg.read();
    }
}

void StreamingDataWidthCo_10::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void StreamingDataWidthCo_10::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void StreamingDataWidthCo_10::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void StreamingDataWidthCo_10::thread_ap_ready() {
    ap_ready = internal_ap_ready.read();
}

void StreamingDataWidthCo_10::thread_i_fu_133_p2() {
    i_fu_133_p2 = (!i_9_fu_54.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(i_9_fu_54.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void StreamingDataWidthCo_10::thread_icmp_ln300_fu_119_p2() {
    icmp_ln300_fu_119_p2 = (!t_0_i_reg_97.read().is_01() || !shl_ln300_reg_184.read().is_01())? sc_lv<1>(): sc_lv<1>(t_0_i_reg_97.read() == shl_ln300_reg_184.read());
}

void StreamingDataWidthCo_10::thread_icmp_ln309_fu_139_p2() {
    icmp_ln309_fu_139_p2 = (!i_fu_133_p2.read().is_01() || !ap_const_lv32_40.is_01())? sc_lv<1>(): sc_lv<1>(i_fu_133_p2.read() == ap_const_lv32_40);
}

void StreamingDataWidthCo_10::thread_in_V_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln300_reg_189.read(), ap_const_lv1_0))) {
        in_V_V_blk_n = in_V_V_empty_n.read();
    } else {
        in_V_V_blk_n = ap_const_logic_1;
    }
}

void StreamingDataWidthCo_10::thread_in_V_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln300_reg_189.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        in_V_V_read = ap_const_logic_1;
    } else {
        in_V_V_read = ap_const_logic_0;
    }
}

void StreamingDataWidthCo_10::thread_internal_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        internal_ap_ready = ap_const_logic_1;
    } else {
        internal_ap_ready = ap_const_logic_0;
    }
}

void StreamingDataWidthCo_10::thread_numReps_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        numReps_blk_n = numReps_empty_n.read();
    } else {
        numReps_blk_n = ap_const_logic_1;
    }
}

void StreamingDataWidthCo_10::thread_numReps_out_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        numReps_out_blk_n = numReps_out_full_n.read();
    } else {
        numReps_out_blk_n = ap_const_logic_1;
    }
}

void StreamingDataWidthCo_10::thread_numReps_out_din() {
    numReps_out_din = numReps_dout.read();
}

void StreamingDataWidthCo_10::thread_numReps_out_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, numReps_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, numReps_out_full_n.read())))) {
        numReps_out_write = ap_const_logic_1;
    } else {
        numReps_out_write = ap_const_logic_0;
    }
}

void StreamingDataWidthCo_10::thread_numReps_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, numReps_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, numReps_out_full_n.read())))) {
        numReps_read = ap_const_logic_1;
    } else {
        numReps_read = ap_const_logic_0;
    }
}

void StreamingDataWidthCo_10::thread_out_V_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln309_reg_198.read(), ap_const_lv1_1))) {
        out_V_V_blk_n = out_V_V_full_n.read();
    } else {
        out_V_V_blk_n = ap_const_logic_1;
    }
}

void StreamingDataWidthCo_10::thread_out_V_V_din() {
    out_V_V_din = esl_concat<1,63>(in_V_V_dout.read(), r_V_reg_85.read());
}

void StreamingDataWidthCo_10::thread_out_V_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln309_reg_198.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        out_V_V_write = ap_const_logic_1;
    } else {
        out_V_V_write = ap_const_logic_0;
    }
}

void StreamingDataWidthCo_10::thread_real_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, start_full_n.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, start_once_reg.read()))) {
        real_start = ap_const_logic_0;
    } else {
        real_start = ap_start.read();
    }
}

void StreamingDataWidthCo_10::thread_shl_ln300_fu_113_p2() {
    shl_ln300_fu_113_p2 = (!ap_const_lv32_9.is_01())? sc_lv<32>(): numReps_dout.read() << (unsigned short)ap_const_lv32_9.to_uint();
}

void StreamingDataWidthCo_10::thread_start_out() {
    start_out = real_start.read();
}

void StreamingDataWidthCo_10::thread_start_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, start_once_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, real_start.read()))) {
        start_write = ap_const_logic_1;
    } else {
        start_write = ap_const_logic_0;
    }
}

void StreamingDataWidthCo_10::thread_t_fu_124_p2() {
    t_fu_124_p2 = (!t_0_i_reg_97.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(t_0_i_reg_97.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void StreamingDataWidthCo_10::thread_tmp_s_fu_159_p4() {
    tmp_s_fu_159_p4 = r_V_reg_85.read().range(62, 1);
}

void StreamingDataWidthCo_10::thread_trunc_ln_fu_169_p3() {
    trunc_ln_fu_169_p3 = esl_concat<1,62>(in_V_V_dout.read(), tmp_s_fu_159_p4.read());
}

void StreamingDataWidthCo_10::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, numReps_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, numReps_out_full_n.read())))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln300_fu_119_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln300_fu_119_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state4;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm = "XXX";
            break;
    }
}

}


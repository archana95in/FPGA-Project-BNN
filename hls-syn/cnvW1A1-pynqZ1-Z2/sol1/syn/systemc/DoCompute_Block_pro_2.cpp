// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "DoCompute_Block_pro_2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic DoCompute_Block_pro_2::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic DoCompute_Block_pro_2::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<3> DoCompute_Block_pro_2::ap_ST_fsm_state1 = "1";
const sc_lv<3> DoCompute_Block_pro_2::ap_ST_fsm_state2 = "10";
const sc_lv<3> DoCompute_Block_pro_2::ap_ST_fsm_state3 = "100";
const sc_lv<32> DoCompute_Block_pro_2::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> DoCompute_Block_pro_2::ap_const_lv32_2 = "10";
const sc_lv<32> DoCompute_Block_pro_2::ap_const_lv32_1 = "1";
const sc_lv<32> DoCompute_Block_pro_2::ap_const_lv32_7 = "111";
const sc_lv<32> DoCompute_Block_pro_2::ap_const_lv32_4 = "100";
const bool DoCompute_Block_pro_2::ap_const_boolean_1 = true;

DoCompute_Block_pro_2::DoCompute_Block_pro_2(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_add_ln120_fu_49_p2);
    sensitive << ( shl_ln120_fu_39_p2 );
    sensitive << ( shl_ln120_1_fu_44_p2 );

    SC_METHOD(thread_add_ln120_out_out_blk_n);
    sensitive << ( add_ln120_out_out_full_n );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_add_ln120_out_out_din);
    sensitive << ( add_ln120_out_out_full_n );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( add_ln120_reg_61 );

    SC_METHOD(thread_add_ln120_out_out_write);
    sensitive << ( add_ln120_out_out_full_n );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_block_state1);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( numReps_empty_n );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_done_reg );
    sensitive << ( add_ln120_out_out_full_n );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( add_ln120_out_out_full_n );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_numReps_blk_n);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( numReps_empty_n );

    SC_METHOD(thread_numReps_read);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( numReps_empty_n );

    SC_METHOD(thread_shl_ln120_1_fu_44_p2);
    sensitive << ( numReps_read_reg_55 );

    SC_METHOD(thread_shl_ln120_fu_39_p2);
    sensitive << ( numReps_read_reg_55 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( numReps_empty_n );
    sensitive << ( add_ln120_out_out_full_n );
    sensitive << ( ap_CS_fsm_state3 );

    ap_done_reg = SC_LOGIC_0;
    ap_CS_fsm = "001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "DoCompute_Block_pro_2_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_continue, "(port)ap_continue");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, numReps_dout, "(port)numReps_dout");
    sc_trace(mVcdFile, numReps_empty_n, "(port)numReps_empty_n");
    sc_trace(mVcdFile, numReps_read, "(port)numReps_read");
    sc_trace(mVcdFile, add_ln120_out_out_din, "(port)add_ln120_out_out_din");
    sc_trace(mVcdFile, add_ln120_out_out_full_n, "(port)add_ln120_out_out_full_n");
    sc_trace(mVcdFile, add_ln120_out_out_write, "(port)add_ln120_out_out_write");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_done_reg, "ap_done_reg");
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, numReps_blk_n, "numReps_blk_n");
    sc_trace(mVcdFile, add_ln120_out_out_blk_n, "add_ln120_out_out_blk_n");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, numReps_read_reg_55, "numReps_read_reg_55");
    sc_trace(mVcdFile, ap_block_state1, "ap_block_state1");
    sc_trace(mVcdFile, add_ln120_fu_49_p2, "add_ln120_fu_49_p2");
    sc_trace(mVcdFile, add_ln120_reg_61, "add_ln120_reg_61");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, shl_ln120_fu_39_p2, "shl_ln120_fu_39_p2");
    sc_trace(mVcdFile, shl_ln120_1_fu_44_p2, "shl_ln120_1_fu_44_p2");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

DoCompute_Block_pro_2::~DoCompute_Block_pro_2() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void DoCompute_Block_pro_2::thread_ap_clk_no_reset_() {
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
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                    esl_seteq<1,1,1>(add_ln120_out_out_full_n.read(), ap_const_logic_1))) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        add_ln120_reg_61 = add_ln120_fu_49_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, numReps_empty_n.read())))) {
        numReps_read_reg_55 = numReps_dout.read();
    }
}

void DoCompute_Block_pro_2::thread_add_ln120_fu_49_p2() {
    add_ln120_fu_49_p2 = (!shl_ln120_fu_39_p2.read().is_01() || !shl_ln120_1_fu_44_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(shl_ln120_fu_39_p2.read()) + sc_biguint<32>(shl_ln120_1_fu_44_p2.read()));
}

void DoCompute_Block_pro_2::thread_add_ln120_out_out_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        add_ln120_out_out_blk_n = add_ln120_out_out_full_n.read();
    } else {
        add_ln120_out_out_blk_n = ap_const_logic_1;
    }
}

void DoCompute_Block_pro_2::thread_add_ln120_out_out_din() {
    add_ln120_out_out_din = add_ln120_reg_61.read();
}

void DoCompute_Block_pro_2::thread_add_ln120_out_out_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(add_ln120_out_out_full_n.read(), ap_const_logic_1))) {
        add_ln120_out_out_write = ap_const_logic_1;
    } else {
        add_ln120_out_out_write = ap_const_logic_0;
    }
}

void DoCompute_Block_pro_2::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void DoCompute_Block_pro_2::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void DoCompute_Block_pro_2::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void DoCompute_Block_pro_2::thread_ap_block_state1() {
    ap_block_state1 = (esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, numReps_empty_n.read()));
}

void DoCompute_Block_pro_2::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(add_ln120_out_out_full_n.read(), ap_const_logic_1))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_done_reg.read();
    }
}

void DoCompute_Block_pro_2::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void DoCompute_Block_pro_2::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(add_ln120_out_out_full_n.read(), ap_const_logic_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void DoCompute_Block_pro_2::thread_numReps_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        numReps_blk_n = numReps_empty_n.read();
    } else {
        numReps_blk_n = ap_const_logic_1;
    }
}

void DoCompute_Block_pro_2::thread_numReps_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, numReps_empty_n.read())))) {
        numReps_read = ap_const_logic_1;
    } else {
        numReps_read = ap_const_logic_0;
    }
}

void DoCompute_Block_pro_2::thread_shl_ln120_1_fu_44_p2() {
    shl_ln120_1_fu_44_p2 = (!ap_const_lv32_4.is_01())? sc_lv<32>(): numReps_read_reg_55.read() << (unsigned short)ap_const_lv32_4.to_uint();
}

void DoCompute_Block_pro_2::thread_shl_ln120_fu_39_p2() {
    shl_ln120_fu_39_p2 = (!ap_const_lv32_7.is_01())? sc_lv<32>(): numReps_read_reg_55.read() << (unsigned short)ap_const_lv32_7.to_uint();
}

void DoCompute_Block_pro_2::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, numReps_empty_n.read())))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(add_ln120_out_out_full_n.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        default : 
            ap_NS_fsm = "XXX";
            break;
    }
}

}


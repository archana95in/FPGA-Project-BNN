// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "Stream2Mem_1.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic Stream2Mem_1::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic Stream2Mem_1::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<8> Stream2Mem_1::ap_ST_fsm_state1 = "1";
const sc_lv<8> Stream2Mem_1::ap_ST_fsm_state2 = "10";
const sc_lv<8> Stream2Mem_1::ap_ST_fsm_pp0_stage0 = "100";
const sc_lv<8> Stream2Mem_1::ap_ST_fsm_state6 = "1000";
const sc_lv<8> Stream2Mem_1::ap_ST_fsm_state7 = "10000";
const sc_lv<8> Stream2Mem_1::ap_ST_fsm_state8 = "100000";
const sc_lv<8> Stream2Mem_1::ap_ST_fsm_state9 = "1000000";
const sc_lv<8> Stream2Mem_1::ap_ST_fsm_state10 = "10000000";
const bool Stream2Mem_1::ap_const_boolean_1 = true;
const sc_lv<32> Stream2Mem_1::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<64> Stream2Mem_1::ap_const_lv64_0 = "0000000000000000000000000000000000000000000000000000000000000000";
const sc_lv<1> Stream2Mem_1::ap_const_lv1_0 = "0";
const sc_lv<3> Stream2Mem_1::ap_const_lv3_0 = "000";
const sc_lv<2> Stream2Mem_1::ap_const_lv2_0 = "00";
const sc_lv<4> Stream2Mem_1::ap_const_lv4_0 = "0000";
const sc_lv<32> Stream2Mem_1::ap_const_lv32_2 = "10";
const bool Stream2Mem_1::ap_const_boolean_0 = false;
const sc_lv<32> Stream2Mem_1::ap_const_lv32_1 = "1";
const sc_lv<32> Stream2Mem_1::ap_const_lv32_7 = "111";
const sc_lv<1> Stream2Mem_1::ap_const_lv1_1 = "1";
const sc_lv<5> Stream2Mem_1::ap_const_lv5_0 = "00000";
const sc_lv<32> Stream2Mem_1::ap_const_lv32_10 = "10000";
const sc_lv<8> Stream2Mem_1::ap_const_lv8_FF = "11111111";
const sc_lv<5> Stream2Mem_1::ap_const_lv5_10 = "10000";
const sc_lv<5> Stream2Mem_1::ap_const_lv5_1 = "1";

Stream2Mem_1::Stream2Mem_1(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_add_ln321_fu_113_p2);
    sensitive << ( zext_ln321_1_fu_109_p1 );
    sensitive << ( zext_ln321_fu_105_p1 );

    SC_METHOD(thread_ap_CS_fsm_pp0_stage0);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state10);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_block_pp0_stage0);

    SC_METHOD(thread_ap_block_pp0_stage0_01001);
    sensitive << ( in_V_V_empty_n );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( icmp_ln153_reg_152 );

    SC_METHOD(thread_ap_block_pp0_stage0_11001);
    sensitive << ( in_V_V_empty_n );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( icmp_ln153_reg_152 );
    sensitive << ( ap_enable_reg_pp0_iter2 );
    sensitive << ( ap_block_state5_io );

    SC_METHOD(thread_ap_block_pp0_stage0_subdone);
    sensitive << ( in_V_V_empty_n );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( icmp_ln153_reg_152 );
    sensitive << ( ap_enable_reg_pp0_iter2 );
    sensitive << ( ap_block_state5_io );

    SC_METHOD(thread_ap_block_state3_pp0_stage0_iter0);

    SC_METHOD(thread_ap_block_state4_pp0_stage0_iter1);
    sensitive << ( in_V_V_empty_n );
    sensitive << ( icmp_ln153_reg_152 );

    SC_METHOD(thread_ap_block_state5_io);
    sensitive << ( m_axi_out_V_WREADY );
    sensitive << ( icmp_ln153_reg_152_pp0_iter1_reg );

    SC_METHOD(thread_ap_block_state5_pp0_stage0_iter2);

    SC_METHOD(thread_ap_condition_pp0_exit_iter0_state3);
    sensitive << ( icmp_ln153_fu_129_p2 );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( m_axi_out_V_BVALID );
    sensitive << ( ap_CS_fsm_state10 );

    SC_METHOD(thread_ap_enable_pp0);
    sensitive << ( ap_idle_pp0 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_idle_pp0);
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_enable_reg_pp0_iter2 );
    sensitive << ( ap_enable_reg_pp0_iter0 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( m_axi_out_V_BVALID );
    sensitive << ( ap_CS_fsm_state10 );

    SC_METHOD(thread_i_fu_135_p2);
    sensitive << ( i_0_reg_94 );

    SC_METHOD(thread_icmp_ln153_fu_129_p2);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( i_0_reg_94 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_enable_reg_pp0_iter0 );

    SC_METHOD(thread_in_V_V_blk_n);
    sensitive << ( in_V_V_empty_n );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( icmp_ln153_reg_152 );

    SC_METHOD(thread_in_V_V_read);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( icmp_ln153_reg_152 );
    sensitive << ( ap_block_pp0_stage0_11001 );

    SC_METHOD(thread_m_axi_out_V_ARADDR);

    SC_METHOD(thread_m_axi_out_V_ARBURST);

    SC_METHOD(thread_m_axi_out_V_ARCACHE);

    SC_METHOD(thread_m_axi_out_V_ARID);

    SC_METHOD(thread_m_axi_out_V_ARLEN);

    SC_METHOD(thread_m_axi_out_V_ARLOCK);

    SC_METHOD(thread_m_axi_out_V_ARPROT);

    SC_METHOD(thread_m_axi_out_V_ARQOS);

    SC_METHOD(thread_m_axi_out_V_ARREGION);

    SC_METHOD(thread_m_axi_out_V_ARSIZE);

    SC_METHOD(thread_m_axi_out_V_ARUSER);

    SC_METHOD(thread_m_axi_out_V_ARVALID);

    SC_METHOD(thread_m_axi_out_V_AWADDR);
    sensitive << ( m_axi_out_V_AWREADY );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( zext_ln321_2_fu_119_p1 );

    SC_METHOD(thread_m_axi_out_V_AWBURST);

    SC_METHOD(thread_m_axi_out_V_AWCACHE);

    SC_METHOD(thread_m_axi_out_V_AWID);

    SC_METHOD(thread_m_axi_out_V_AWLEN);
    sensitive << ( m_axi_out_V_AWREADY );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_m_axi_out_V_AWLOCK);

    SC_METHOD(thread_m_axi_out_V_AWPROT);

    SC_METHOD(thread_m_axi_out_V_AWQOS);

    SC_METHOD(thread_m_axi_out_V_AWREGION);

    SC_METHOD(thread_m_axi_out_V_AWSIZE);

    SC_METHOD(thread_m_axi_out_V_AWUSER);

    SC_METHOD(thread_m_axi_out_V_AWVALID);
    sensitive << ( m_axi_out_V_AWREADY );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_m_axi_out_V_BREADY);
    sensitive << ( m_axi_out_V_BVALID );
    sensitive << ( ap_CS_fsm_state10 );

    SC_METHOD(thread_m_axi_out_V_RREADY);

    SC_METHOD(thread_m_axi_out_V_WDATA);
    sensitive << ( ap_enable_reg_pp0_iter2 );
    sensitive << ( icmp_ln153_reg_152_pp0_iter1_reg );
    sensitive << ( tmp_V_reg_161 );
    sensitive << ( ap_block_pp0_stage0_01001 );

    SC_METHOD(thread_m_axi_out_V_WID);

    SC_METHOD(thread_m_axi_out_V_WLAST);

    SC_METHOD(thread_m_axi_out_V_WSTRB);
    sensitive << ( ap_enable_reg_pp0_iter2 );
    sensitive << ( icmp_ln153_reg_152_pp0_iter1_reg );
    sensitive << ( ap_block_pp0_stage0_01001 );

    SC_METHOD(thread_m_axi_out_V_WUSER);

    SC_METHOD(thread_m_axi_out_V_WVALID);
    sensitive << ( ap_enable_reg_pp0_iter2 );
    sensitive << ( icmp_ln153_reg_152_pp0_iter1_reg );
    sensitive << ( ap_block_pp0_stage0_11001 );

    SC_METHOD(thread_out_V_blk_n_AW);
    sensitive << ( m_axi_out_V_AWREADY );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_out_V_blk_n_B);
    sensitive << ( m_axi_out_V_BVALID );
    sensitive << ( ap_CS_fsm_state10 );

    SC_METHOD(thread_out_V_blk_n_W);
    sensitive << ( m_axi_out_V_WREADY );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter2 );
    sensitive << ( icmp_ln153_reg_152_pp0_iter1_reg );

    SC_METHOD(thread_zext_ln321_1_fu_109_p1);
    sensitive << ( out_V_offset );

    SC_METHOD(thread_zext_ln321_2_fu_119_p1);
    sensitive << ( add_ln321_reg_141 );

    SC_METHOD(thread_zext_ln321_fu_105_p1);
    sensitive << ( out_V_offset1 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( m_axi_out_V_AWREADY );
    sensitive << ( m_axi_out_V_BVALID );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_enable_reg_pp0_iter2 );
    sensitive << ( ap_CS_fsm_state10 );
    sensitive << ( icmp_ln153_fu_129_p2 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_block_pp0_stage0_subdone );

    ap_CS_fsm = "00000001";
    ap_enable_reg_pp0_iter1 = SC_LOGIC_0;
    ap_enable_reg_pp0_iter2 = SC_LOGIC_0;
    ap_enable_reg_pp0_iter0 = SC_LOGIC_0;
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "Stream2Mem_1_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, in_V_V_dout, "(port)in_V_V_dout");
    sc_trace(mVcdFile, in_V_V_empty_n, "(port)in_V_V_empty_n");
    sc_trace(mVcdFile, in_V_V_read, "(port)in_V_V_read");
    sc_trace(mVcdFile, m_axi_out_V_AWVALID, "(port)m_axi_out_V_AWVALID");
    sc_trace(mVcdFile, m_axi_out_V_AWREADY, "(port)m_axi_out_V_AWREADY");
    sc_trace(mVcdFile, m_axi_out_V_AWADDR, "(port)m_axi_out_V_AWADDR");
    sc_trace(mVcdFile, m_axi_out_V_AWID, "(port)m_axi_out_V_AWID");
    sc_trace(mVcdFile, m_axi_out_V_AWLEN, "(port)m_axi_out_V_AWLEN");
    sc_trace(mVcdFile, m_axi_out_V_AWSIZE, "(port)m_axi_out_V_AWSIZE");
    sc_trace(mVcdFile, m_axi_out_V_AWBURST, "(port)m_axi_out_V_AWBURST");
    sc_trace(mVcdFile, m_axi_out_V_AWLOCK, "(port)m_axi_out_V_AWLOCK");
    sc_trace(mVcdFile, m_axi_out_V_AWCACHE, "(port)m_axi_out_V_AWCACHE");
    sc_trace(mVcdFile, m_axi_out_V_AWPROT, "(port)m_axi_out_V_AWPROT");
    sc_trace(mVcdFile, m_axi_out_V_AWQOS, "(port)m_axi_out_V_AWQOS");
    sc_trace(mVcdFile, m_axi_out_V_AWREGION, "(port)m_axi_out_V_AWREGION");
    sc_trace(mVcdFile, m_axi_out_V_AWUSER, "(port)m_axi_out_V_AWUSER");
    sc_trace(mVcdFile, m_axi_out_V_WVALID, "(port)m_axi_out_V_WVALID");
    sc_trace(mVcdFile, m_axi_out_V_WREADY, "(port)m_axi_out_V_WREADY");
    sc_trace(mVcdFile, m_axi_out_V_WDATA, "(port)m_axi_out_V_WDATA");
    sc_trace(mVcdFile, m_axi_out_V_WSTRB, "(port)m_axi_out_V_WSTRB");
    sc_trace(mVcdFile, m_axi_out_V_WLAST, "(port)m_axi_out_V_WLAST");
    sc_trace(mVcdFile, m_axi_out_V_WID, "(port)m_axi_out_V_WID");
    sc_trace(mVcdFile, m_axi_out_V_WUSER, "(port)m_axi_out_V_WUSER");
    sc_trace(mVcdFile, m_axi_out_V_ARVALID, "(port)m_axi_out_V_ARVALID");
    sc_trace(mVcdFile, m_axi_out_V_ARREADY, "(port)m_axi_out_V_ARREADY");
    sc_trace(mVcdFile, m_axi_out_V_ARADDR, "(port)m_axi_out_V_ARADDR");
    sc_trace(mVcdFile, m_axi_out_V_ARID, "(port)m_axi_out_V_ARID");
    sc_trace(mVcdFile, m_axi_out_V_ARLEN, "(port)m_axi_out_V_ARLEN");
    sc_trace(mVcdFile, m_axi_out_V_ARSIZE, "(port)m_axi_out_V_ARSIZE");
    sc_trace(mVcdFile, m_axi_out_V_ARBURST, "(port)m_axi_out_V_ARBURST");
    sc_trace(mVcdFile, m_axi_out_V_ARLOCK, "(port)m_axi_out_V_ARLOCK");
    sc_trace(mVcdFile, m_axi_out_V_ARCACHE, "(port)m_axi_out_V_ARCACHE");
    sc_trace(mVcdFile, m_axi_out_V_ARPROT, "(port)m_axi_out_V_ARPROT");
    sc_trace(mVcdFile, m_axi_out_V_ARQOS, "(port)m_axi_out_V_ARQOS");
    sc_trace(mVcdFile, m_axi_out_V_ARREGION, "(port)m_axi_out_V_ARREGION");
    sc_trace(mVcdFile, m_axi_out_V_ARUSER, "(port)m_axi_out_V_ARUSER");
    sc_trace(mVcdFile, m_axi_out_V_RVALID, "(port)m_axi_out_V_RVALID");
    sc_trace(mVcdFile, m_axi_out_V_RREADY, "(port)m_axi_out_V_RREADY");
    sc_trace(mVcdFile, m_axi_out_V_RDATA, "(port)m_axi_out_V_RDATA");
    sc_trace(mVcdFile, m_axi_out_V_RLAST, "(port)m_axi_out_V_RLAST");
    sc_trace(mVcdFile, m_axi_out_V_RID, "(port)m_axi_out_V_RID");
    sc_trace(mVcdFile, m_axi_out_V_RUSER, "(port)m_axi_out_V_RUSER");
    sc_trace(mVcdFile, m_axi_out_V_RRESP, "(port)m_axi_out_V_RRESP");
    sc_trace(mVcdFile, m_axi_out_V_BVALID, "(port)m_axi_out_V_BVALID");
    sc_trace(mVcdFile, m_axi_out_V_BREADY, "(port)m_axi_out_V_BREADY");
    sc_trace(mVcdFile, m_axi_out_V_BRESP, "(port)m_axi_out_V_BRESP");
    sc_trace(mVcdFile, m_axi_out_V_BID, "(port)m_axi_out_V_BID");
    sc_trace(mVcdFile, m_axi_out_V_BUSER, "(port)m_axi_out_V_BUSER");
    sc_trace(mVcdFile, out_V_offset, "(port)out_V_offset");
    sc_trace(mVcdFile, out_V_offset1, "(port)out_V_offset1");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, in_V_V_blk_n, "in_V_V_blk_n");
    sc_trace(mVcdFile, ap_CS_fsm_pp0_stage0, "ap_CS_fsm_pp0_stage0");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter1, "ap_enable_reg_pp0_iter1");
    sc_trace(mVcdFile, ap_block_pp0_stage0, "ap_block_pp0_stage0");
    sc_trace(mVcdFile, icmp_ln153_reg_152, "icmp_ln153_reg_152");
    sc_trace(mVcdFile, out_V_blk_n_AW, "out_V_blk_n_AW");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, out_V_blk_n_W, "out_V_blk_n_W");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter2, "ap_enable_reg_pp0_iter2");
    sc_trace(mVcdFile, icmp_ln153_reg_152_pp0_iter1_reg, "icmp_ln153_reg_152_pp0_iter1_reg");
    sc_trace(mVcdFile, out_V_blk_n_B, "out_V_blk_n_B");
    sc_trace(mVcdFile, ap_CS_fsm_state10, "ap_CS_fsm_state10");
    sc_trace(mVcdFile, i_0_reg_94, "i_0_reg_94");
    sc_trace(mVcdFile, add_ln321_fu_113_p2, "add_ln321_fu_113_p2");
    sc_trace(mVcdFile, add_ln321_reg_141, "add_ln321_reg_141");
    sc_trace(mVcdFile, icmp_ln153_fu_129_p2, "icmp_ln153_fu_129_p2");
    sc_trace(mVcdFile, ap_block_state3_pp0_stage0_iter0, "ap_block_state3_pp0_stage0_iter0");
    sc_trace(mVcdFile, ap_block_state4_pp0_stage0_iter1, "ap_block_state4_pp0_stage0_iter1");
    sc_trace(mVcdFile, ap_block_state5_pp0_stage0_iter2, "ap_block_state5_pp0_stage0_iter2");
    sc_trace(mVcdFile, ap_block_state5_io, "ap_block_state5_io");
    sc_trace(mVcdFile, ap_block_pp0_stage0_11001, "ap_block_pp0_stage0_11001");
    sc_trace(mVcdFile, i_fu_135_p2, "i_fu_135_p2");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter0, "ap_enable_reg_pp0_iter0");
    sc_trace(mVcdFile, tmp_V_reg_161, "tmp_V_reg_161");
    sc_trace(mVcdFile, ap_block_pp0_stage0_subdone, "ap_block_pp0_stage0_subdone");
    sc_trace(mVcdFile, ap_condition_pp0_exit_iter0_state3, "ap_condition_pp0_exit_iter0_state3");
    sc_trace(mVcdFile, zext_ln321_2_fu_119_p1, "zext_ln321_2_fu_119_p1");
    sc_trace(mVcdFile, ap_block_pp0_stage0_01001, "ap_block_pp0_stage0_01001");
    sc_trace(mVcdFile, zext_ln321_1_fu_109_p1, "zext_ln321_1_fu_109_p1");
    sc_trace(mVcdFile, zext_ln321_fu_105_p1, "zext_ln321_fu_105_p1");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
    sc_trace(mVcdFile, ap_idle_pp0, "ap_idle_pp0");
    sc_trace(mVcdFile, ap_enable_pp0, "ap_enable_pp0");
#endif

    }
}

Stream2Mem_1::~Stream2Mem_1() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void Stream2Mem_1::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state3.read()))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                    esl_seteq<1,1,1>(m_axi_out_V_AWREADY.read(), ap_const_logic_1))) {
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
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                    esl_seteq<1,1,1>(m_axi_out_V_AWREADY.read(), ap_const_logic_1))) {
            ap_enable_reg_pp0_iter2 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln153_fu_129_p2.read()))) {
        i_0_reg_94 = i_fu_135_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(m_axi_out_V_AWREADY.read(), ap_const_logic_1))) {
        i_0_reg_94 = ap_const_lv5_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        add_ln321_reg_141 = add_ln321_fu_113_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        icmp_ln153_reg_152 = icmp_ln153_fu_129_p2.read();
        icmp_ln153_reg_152_pp0_iter1_reg = icmp_ln153_reg_152.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln153_reg_152.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        tmp_V_reg_161 = in_V_V_dout.read();
    }
}

void Stream2Mem_1::thread_add_ln321_fu_113_p2() {
    add_ln321_fu_113_p2 = (!zext_ln321_1_fu_109_p1.read().is_01() || !zext_ln321_fu_105_p1.read().is_01())? sc_lv<62>(): (sc_biguint<62>(zext_ln321_1_fu_109_p1.read()) + sc_biguint<62>(zext_ln321_fu_105_p1.read()));
}

void Stream2Mem_1::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[2];
}

void Stream2Mem_1::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void Stream2Mem_1::thread_ap_CS_fsm_state10() {
    ap_CS_fsm_state10 = ap_CS_fsm.read()[7];
}

void Stream2Mem_1::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void Stream2Mem_1::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void Stream2Mem_1::thread_ap_block_pp0_stage0_01001() {
    ap_block_pp0_stage0_01001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln153_reg_152.read()) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()));
}

void Stream2Mem_1::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln153_reg_152.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state5_io.read())));
}

void Stream2Mem_1::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln153_reg_152.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state5_io.read())));
}

void Stream2Mem_1::thread_ap_block_state3_pp0_stage0_iter0() {
    ap_block_state3_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void Stream2Mem_1::thread_ap_block_state4_pp0_stage0_iter1() {
    ap_block_state4_pp0_stage0_iter1 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln153_reg_152.read()) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()));
}

void Stream2Mem_1::thread_ap_block_state5_io() {
    ap_block_state5_io = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln153_reg_152_pp0_iter1_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_0, m_axi_out_V_WREADY.read()));
}

void Stream2Mem_1::thread_ap_block_state5_pp0_stage0_iter2() {
    ap_block_state5_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void Stream2Mem_1::thread_ap_condition_pp0_exit_iter0_state3() {
    if (esl_seteq<1,1,1>(icmp_ln153_fu_129_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp0_exit_iter0_state3 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state3 = ap_const_logic_0;
    }
}

void Stream2Mem_1::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(m_axi_out_V_BVALID.read(), ap_const_logic_1)))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void Stream2Mem_1::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void Stream2Mem_1::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void Stream2Mem_1::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void Stream2Mem_1::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
         esl_seteq<1,1,1>(m_axi_out_V_BVALID.read(), ap_const_logic_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void Stream2Mem_1::thread_i_fu_135_p2() {
    i_fu_135_p2 = (!i_0_reg_94.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i_0_reg_94.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void Stream2Mem_1::thread_icmp_ln153_fu_129_p2() {
    icmp_ln153_fu_129_p2 = (!i_0_reg_94.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i_0_reg_94.read() == ap_const_lv5_10);
}

void Stream2Mem_1::thread_in_V_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln153_reg_152.read()))) {
        in_V_V_blk_n = in_V_V_empty_n.read();
    } else {
        in_V_V_blk_n = ap_const_logic_1;
    }
}

void Stream2Mem_1::thread_in_V_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln153_reg_152.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        in_V_V_read = ap_const_logic_1;
    } else {
        in_V_V_read = ap_const_logic_0;
    }
}

void Stream2Mem_1::thread_m_axi_out_V_ARADDR() {
    m_axi_out_V_ARADDR = ap_const_lv64_0;
}

void Stream2Mem_1::thread_m_axi_out_V_ARBURST() {
    m_axi_out_V_ARBURST = ap_const_lv2_0;
}

void Stream2Mem_1::thread_m_axi_out_V_ARCACHE() {
    m_axi_out_V_ARCACHE = ap_const_lv4_0;
}

void Stream2Mem_1::thread_m_axi_out_V_ARID() {
    m_axi_out_V_ARID = ap_const_lv1_0;
}

void Stream2Mem_1::thread_m_axi_out_V_ARLEN() {
    m_axi_out_V_ARLEN = ap_const_lv32_0;
}

void Stream2Mem_1::thread_m_axi_out_V_ARLOCK() {
    m_axi_out_V_ARLOCK = ap_const_lv2_0;
}

void Stream2Mem_1::thread_m_axi_out_V_ARPROT() {
    m_axi_out_V_ARPROT = ap_const_lv3_0;
}

void Stream2Mem_1::thread_m_axi_out_V_ARQOS() {
    m_axi_out_V_ARQOS = ap_const_lv4_0;
}

void Stream2Mem_1::thread_m_axi_out_V_ARREGION() {
    m_axi_out_V_ARREGION = ap_const_lv4_0;
}

void Stream2Mem_1::thread_m_axi_out_V_ARSIZE() {
    m_axi_out_V_ARSIZE = ap_const_lv3_0;
}

void Stream2Mem_1::thread_m_axi_out_V_ARUSER() {
    m_axi_out_V_ARUSER = ap_const_lv1_0;
}

void Stream2Mem_1::thread_m_axi_out_V_ARVALID() {
    m_axi_out_V_ARVALID = ap_const_logic_0;
}

void Stream2Mem_1::thread_m_axi_out_V_AWADDR() {
    m_axi_out_V_AWADDR = zext_ln321_2_fu_119_p1.read();
}

void Stream2Mem_1::thread_m_axi_out_V_AWBURST() {
    m_axi_out_V_AWBURST = ap_const_lv2_0;
}

void Stream2Mem_1::thread_m_axi_out_V_AWCACHE() {
    m_axi_out_V_AWCACHE = ap_const_lv4_0;
}

void Stream2Mem_1::thread_m_axi_out_V_AWID() {
    m_axi_out_V_AWID = ap_const_lv1_0;
}

void Stream2Mem_1::thread_m_axi_out_V_AWLEN() {
    m_axi_out_V_AWLEN = ap_const_lv32_10;
}

void Stream2Mem_1::thread_m_axi_out_V_AWLOCK() {
    m_axi_out_V_AWLOCK = ap_const_lv2_0;
}

void Stream2Mem_1::thread_m_axi_out_V_AWPROT() {
    m_axi_out_V_AWPROT = ap_const_lv3_0;
}

void Stream2Mem_1::thread_m_axi_out_V_AWQOS() {
    m_axi_out_V_AWQOS = ap_const_lv4_0;
}

void Stream2Mem_1::thread_m_axi_out_V_AWREGION() {
    m_axi_out_V_AWREGION = ap_const_lv4_0;
}

void Stream2Mem_1::thread_m_axi_out_V_AWSIZE() {
    m_axi_out_V_AWSIZE = ap_const_lv3_0;
}

void Stream2Mem_1::thread_m_axi_out_V_AWUSER() {
    m_axi_out_V_AWUSER = ap_const_lv1_0;
}

void Stream2Mem_1::thread_m_axi_out_V_AWVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(m_axi_out_V_AWREADY.read(), ap_const_logic_1))) {
        m_axi_out_V_AWVALID = ap_const_logic_1;
    } else {
        m_axi_out_V_AWVALID = ap_const_logic_0;
    }
}

void Stream2Mem_1::thread_m_axi_out_V_BREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
         esl_seteq<1,1,1>(m_axi_out_V_BVALID.read(), ap_const_logic_1))) {
        m_axi_out_V_BREADY = ap_const_logic_1;
    } else {
        m_axi_out_V_BREADY = ap_const_logic_0;
    }
}

void Stream2Mem_1::thread_m_axi_out_V_RREADY() {
    m_axi_out_V_RREADY = ap_const_logic_0;
}

void Stream2Mem_1::thread_m_axi_out_V_WDATA() {
    m_axi_out_V_WDATA = tmp_V_reg_161.read();
}

void Stream2Mem_1::thread_m_axi_out_V_WID() {
    m_axi_out_V_WID = ap_const_lv1_0;
}

void Stream2Mem_1::thread_m_axi_out_V_WLAST() {
    m_axi_out_V_WLAST = ap_const_logic_0;
}

void Stream2Mem_1::thread_m_axi_out_V_WSTRB() {
    m_axi_out_V_WSTRB = ap_const_lv8_FF;
}

void Stream2Mem_1::thread_m_axi_out_V_WUSER() {
    m_axi_out_V_WUSER = ap_const_lv1_0;
}

void Stream2Mem_1::thread_m_axi_out_V_WVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln153_reg_152_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        m_axi_out_V_WVALID = ap_const_logic_1;
    } else {
        m_axi_out_V_WVALID = ap_const_logic_0;
    }
}

void Stream2Mem_1::thread_out_V_blk_n_AW() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        out_V_blk_n_AW = m_axi_out_V_AWREADY.read();
    } else {
        out_V_blk_n_AW = ap_const_logic_1;
    }
}

void Stream2Mem_1::thread_out_V_blk_n_B() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        out_V_blk_n_B = m_axi_out_V_BVALID.read();
    } else {
        out_V_blk_n_B = ap_const_logic_1;
    }
}

void Stream2Mem_1::thread_out_V_blk_n_W() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln153_reg_152_pp0_iter1_reg.read()))) {
        out_V_blk_n_W = m_axi_out_V_WREADY.read();
    } else {
        out_V_blk_n_W = ap_const_logic_1;
    }
}

void Stream2Mem_1::thread_zext_ln321_1_fu_109_p1() {
    zext_ln321_1_fu_109_p1 = esl_zext<62,61>(out_V_offset.read());
}

void Stream2Mem_1::thread_zext_ln321_2_fu_119_p1() {
    zext_ln321_2_fu_119_p1 = esl_zext<64,62>(add_ln321_reg_141.read());
}

void Stream2Mem_1::thread_zext_ln321_fu_105_p1() {
    zext_ln321_fu_105_p1 = esl_zext<62,32>(out_V_offset1.read());
}

void Stream2Mem_1::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(m_axi_out_V_AWREADY.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state2;
            }
            break;
        case 4 : 
            if ((!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln153_fu_129_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(icmp_ln153_fu_129_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_state6;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state7;
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state8;
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state9;
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state10;
            break;
        case 128 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && esl_seteq<1,1,1>(m_axi_out_V_BVALID.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state10;
            }
            break;
        default : 
            ap_NS_fsm = "XXXXXXXX";
            break;
    }
}

}


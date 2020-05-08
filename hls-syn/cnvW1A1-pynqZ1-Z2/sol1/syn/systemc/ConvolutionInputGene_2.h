// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _ConvolutionInputGene_2_HH_
#define _ConvolutionInputGene_2_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "BlackBoxJam_mux_4fYi.h"
#include "ConvolutionInputGbkb.h"

namespace ap_rtl {

struct ConvolutionInputGene_2 : public sc_module {
    // Port declarations 19
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<24> > in_V_V_dout;
    sc_in< sc_logic > in_V_V_empty_n;
    sc_out< sc_logic > in_V_V_read;
    sc_out< sc_lv<24> > out_V_V_din;
    sc_in< sc_logic > out_V_V_full_n;
    sc_out< sc_logic > out_V_V_write;
    sc_in< sc_lv<32> > numReps_dout;
    sc_in< sc_logic > numReps_empty_n;
    sc_out< sc_logic > numReps_read;
    sc_out< sc_lv<32> > numReps_out_din;
    sc_in< sc_logic > numReps_out_full_n;
    sc_out< sc_logic > numReps_out_write;


    // Module declarations
    ConvolutionInputGene_2(sc_module_name name);
    SC_HAS_PROCESS(ConvolutionInputGene_2);

    ~ConvolutionInputGene_2();

    sc_trace_file* mVcdFile;

    ConvolutionInputGbkb* inputBuf_0_V_U;
    ConvolutionInputGbkb* inputBuf_1_V_U;
    ConvolutionInputGbkb* inputBuf_2_V_U;
    ConvolutionInputGbkb* inputBuf_3_V_U;
    BlackBoxJam_mux_4fYi<1,1,24,24,24,24,2,24>* BlackBoxJam_mux_4fYi_U33;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<4> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > in_V_V_blk_n;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<1> > icmp_ln107_reg_1003;
    sc_signal< sc_lv<1> > and_ln153_reg_1047;
    sc_signal< sc_logic > out_V_V_blk_n;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter4;
    sc_signal< sc_lv<1> > icmp_ln107_reg_1003_pp0_iter3_reg;
    sc_signal< sc_lv<1> > icmp_ln123_reg_1007;
    sc_signal< sc_lv<1> > icmp_ln123_reg_1007_pp0_iter3_reg;
    sc_signal< sc_logic > numReps_blk_n;
    sc_signal< sc_logic > numReps_out_blk_n;
    sc_signal< sc_lv<46> > indvar_flatten_reg_307;
    sc_signal< sc_lv<14> > i_0_i_reg_318;
    sc_signal< sc_lv<32> > reg_396;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter1;
    sc_signal< bool > ap_predicate_op167_read_state5;
    sc_signal< bool > ap_block_state5_pp0_stage0_iter2;
    sc_signal< bool > ap_block_state6_pp0_stage0_iter3;
    sc_signal< bool > ap_predicate_op221_write_state7;
    sc_signal< bool > ap_block_state7_pp0_stage0_iter4;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<1> > icmp_ln107_fu_497_p2;
    sc_signal< sc_lv<1> > and_ln153_fu_664_p2;
    sc_signal< sc_lv<32> > numReps_read_reg_973;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_lv<46> > bound_fu_442_p2;
    sc_signal< sc_lv<46> > bound_reg_979;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > icmp_ln104_fu_448_p2;
    sc_signal< sc_lv<1> > icmp_ln104_reg_984;
    sc_signal< sc_lv<46> > add_ln104_fu_453_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<1> > icmp_ln105_fu_459_p2;
    sc_signal< sc_lv<1> > icmp_ln105_reg_993;
    sc_signal< sc_lv<14> > i_fu_471_p3;
    sc_signal< sc_lv<1> > icmp_ln107_reg_1003_pp0_iter2_reg;
    sc_signal< sc_lv<1> > icmp_ln123_fu_506_p2;
    sc_signal< sc_lv<1> > icmp_ln123_reg_1007_pp0_iter2_reg;
    sc_signal< sc_lv<2> > trunc_ln124_fu_524_p1;
    sc_signal< sc_lv<2> > trunc_ln124_reg_1011;
    sc_signal< sc_lv<32> > current_line_in_bloc_fu_540_p2;
    sc_signal< sc_lv<32> > current_line_in_bloc_reg_1016;
    sc_signal< sc_lv<1> > icmp_ln132_fu_552_p2;
    sc_signal< sc_lv<1> > icmp_ln132_reg_1021;
    sc_signal< sc_lv<1> > icmp_ln135_fu_569_p2;
    sc_signal< sc_lv<1> > icmp_ln135_reg_1025;
    sc_signal< sc_lv<1> > icmp_ln138_fu_580_p2;
    sc_signal< sc_lv<1> > icmp_ln138_reg_1029;
    sc_signal< sc_lv<1> > icmp_ln141_fu_600_p2;
    sc_signal< sc_lv<1> > icmp_ln141_reg_1033;
    sc_signal< sc_lv<32> > ofm_y_fu_614_p2;
    sc_signal< sc_lv<32> > ofm_y_reg_1037;
    sc_signal< sc_lv<1> > icmp_ln144_fu_620_p2;
    sc_signal< sc_lv<1> > icmp_ln144_reg_1042;
    sc_signal< sc_lv<1> > icmp_ln160_fu_378_p2;
    sc_signal< sc_lv<1> > icmp_ln160_reg_1051;
    sc_signal< sc_lv<1> > icmp_ln113_fu_384_p2;
    sc_signal< sc_lv<1> > icmp_ln113_reg_1056;
    sc_signal< sc_lv<2> > add_ln129_fu_778_p2;
    sc_signal< sc_lv<2> > add_ln129_reg_1060;
    sc_signal< sc_lv<24> > outElem_V_fu_878_p6;
    sc_signal< sc_lv<24> > outElem_V_reg_1091;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter3;
    sc_signal< sc_lv<5> > inputBuf_0_V_address0;
    sc_signal< sc_logic > inputBuf_0_V_ce0;
    sc_signal< sc_lv<24> > inputBuf_0_V_q0;
    sc_signal< sc_lv<5> > inputBuf_0_V_address1;
    sc_signal< sc_logic > inputBuf_0_V_ce1;
    sc_signal< sc_logic > inputBuf_0_V_we1;
    sc_signal< sc_lv<5> > inputBuf_1_V_address0;
    sc_signal< sc_logic > inputBuf_1_V_ce0;
    sc_signal< sc_lv<24> > inputBuf_1_V_q0;
    sc_signal< sc_lv<5> > inputBuf_1_V_address1;
    sc_signal< sc_logic > inputBuf_1_V_ce1;
    sc_signal< sc_logic > inputBuf_1_V_we1;
    sc_signal< sc_lv<5> > inputBuf_2_V_address0;
    sc_signal< sc_logic > inputBuf_2_V_ce0;
    sc_signal< sc_lv<24> > inputBuf_2_V_q0;
    sc_signal< sc_lv<5> > inputBuf_2_V_address1;
    sc_signal< sc_logic > inputBuf_2_V_ce1;
    sc_signal< sc_logic > inputBuf_2_V_we1;
    sc_signal< sc_lv<5> > inputBuf_3_V_address0;
    sc_signal< sc_logic > inputBuf_3_V_ce0;
    sc_signal< sc_lv<24> > inputBuf_3_V_q0;
    sc_signal< sc_lv<5> > inputBuf_3_V_address1;
    sc_signal< sc_logic > inputBuf_3_V_ce1;
    sc_signal< sc_logic > inputBuf_3_V_we1;
    sc_signal< sc_lv<64> > zext_ln129_fu_765_p1;
    sc_signal< sc_lv<64> > zext_ln156_fu_794_p1;
    sc_signal< sc_lv<64> > zext_ln110_fu_841_p1;
    sc_signal< sc_lv<32> > read_block_8_fu_100;
    sc_signal< sc_lv<32> > select_ln105_fu_485_p3;
    sc_signal< sc_lv<32> > zext_ln160_fu_692_p1;
    sc_signal< sc_lv<32> > read_block_fu_750_p2;
    sc_signal< sc_lv<32> > ofm_y_1_i_fu_104;
    sc_signal< sc_lv<32> > select_ln144_3_fu_783_p3;
    sc_signal< sc_lv<32> > ap_sig_allocacmp_ofm_y_1_i_load;
    sc_signal< sc_lv<32> > ofm_x_4_fu_108;
    sc_signal< sc_lv<32> > ofm_x_fu_594_p2;
    sc_signal< sc_lv<32> > k_y_4_fu_112;
    sc_signal< sc_lv<32> > k_y_fu_528_p2;
    sc_signal< sc_lv<32> > inp_4_fu_116;
    sc_signal< sc_lv<32> > select_ln144_fu_626_p3;
    sc_signal< sc_lv<32> > inp_fu_734_p2;
    sc_signal< sc_lv<32> > k_x_4_fu_120;
    sc_signal< sc_lv<32> > k_x_fu_563_p2;
    sc_signal< sc_lv<32> > count_simd_4_fu_124;
    sc_signal< sc_lv<32> > count_simd_fu_546_p2;
    sc_signal< sc_lv<32> > current_block_write_20_fu_128;
    sc_signal< sc_lv<32> > current_block_write_24_fu_829_p3;
    sc_signal< sc_lv<32> > current_block_write_21_fu_865_p3;
    sc_signal< sc_lv<32> > current_line_8_fu_132;
    sc_signal< sc_lv<32> > select_ln160_fu_676_p3;
    sc_signal< sc_lv<32> > grp_fu_372_p2;
    sc_signal< sc_lv<32> > counter_internal_blo_fu_136;
    sc_signal< sc_lv<32> > select_ln172_fu_721_p3;
    sc_signal< bool > ap_block_pp0_stage0_01001;
    sc_signal< sc_lv<2> > trunc_ln321_18_fu_802_p1;
    sc_signal< sc_lv<2> > trunc_ln321_fu_849_p1;
    sc_signal< sc_lv<45> > tmp_fu_420_p3;
    sc_signal< sc_lv<34> > tmp_s_fu_431_p3;
    sc_signal< sc_lv<46> > p_shl_fu_427_p1;
    sc_signal< sc_lv<46> > p_shl70_fu_438_p1;
    sc_signal< sc_lv<14> > add_ln105_fu_465_p2;
    sc_signal< sc_lv<32> > add_ln128_fu_534_p2;
    sc_signal< sc_lv<27> > tmp_1_fu_648_p4;
    sc_signal< sc_lv<1> > icmp_ln153_fu_642_p2;
    sc_signal< sc_lv<1> > icmp_ln153_4_fu_658_p2;
    sc_signal< sc_lv<6> > trunc_ln105_fu_493_p1;
    sc_signal< sc_lv<6> > add_ln163_fu_670_p2;
    sc_signal< sc_lv<6> > read_block_9_fu_684_p3;
    sc_signal< sc_lv<32> > counter_internal_blo_16_fu_709_p2;
    sc_signal< sc_lv<1> > icmp_ln172_fu_715_p2;
    sc_signal< sc_lv<2> > trunc_ln124_4_fu_761_p1;
    sc_signal< sc_lv<2> > add_ln129_3_fu_772_p2;
    sc_signal< sc_lv<32> > current_block_write_22_fu_809_p2;
    sc_signal< sc_lv<1> > icmp_ln165_fu_815_p2;
    sc_signal< sc_lv<32> > current_block_write_23_fu_821_p3;
    sc_signal< sc_lv<32> > current_block_write_fu_853_p2;
    sc_signal< sc_lv<1> > icmp_ln116_fu_859_p2;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<4> > ap_NS_fsm;
    sc_signal< bool > ap_block_pp0;
    sc_signal< bool > ap_predicate_op175_store_state5;
    sc_signal< bool > ap_enable_operation_175;
    sc_signal< bool > ap_enable_state5_pp0_iter2_stage0;
    sc_signal< bool > ap_predicate_op159_load_state5;
    sc_signal< bool > ap_enable_operation_159;
    sc_signal< bool > ap_predicate_op218_load_state6;
    sc_signal< bool > ap_enable_operation_218;
    sc_signal< bool > ap_enable_state6_pp0_iter3_stage0;
    sc_signal< bool > ap_predicate_op202_store_state5;
    sc_signal< bool > ap_enable_operation_202;
    sc_signal< bool > ap_predicate_op177_store_state5;
    sc_signal< bool > ap_enable_operation_177;
    sc_signal< bool > ap_predicate_op157_load_state5;
    sc_signal< bool > ap_enable_operation_157;
    sc_signal< bool > ap_predicate_op217_load_state6;
    sc_signal< bool > ap_enable_operation_217;
    sc_signal< bool > ap_predicate_op204_store_state5;
    sc_signal< bool > ap_enable_operation_204;
    sc_signal< bool > ap_predicate_op179_store_state5;
    sc_signal< bool > ap_enable_operation_179;
    sc_signal< bool > ap_predicate_op155_load_state5;
    sc_signal< bool > ap_enable_operation_155;
    sc_signal< bool > ap_predicate_op216_load_state6;
    sc_signal< bool > ap_enable_operation_216;
    sc_signal< bool > ap_predicate_op206_store_state5;
    sc_signal< bool > ap_enable_operation_206;
    sc_signal< bool > ap_predicate_op181_store_state5;
    sc_signal< bool > ap_enable_operation_181;
    sc_signal< bool > ap_predicate_op161_load_state5;
    sc_signal< bool > ap_enable_operation_161;
    sc_signal< bool > ap_predicate_op219_load_state6;
    sc_signal< bool > ap_enable_operation_219;
    sc_signal< bool > ap_predicate_op208_store_state5;
    sc_signal< bool > ap_enable_operation_208;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< bool > ap_condition_438;
    sc_signal< bool > ap_condition_450;
    sc_signal< bool > ap_condition_461;
    sc_signal< bool > ap_condition_472;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<4> ap_ST_fsm_state1;
    static const sc_lv<4> ap_ST_fsm_state2;
    static const sc_lv<4> ap_ST_fsm_pp0_stage0;
    static const sc_lv<4> ap_ST_fsm_state8;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<46> ap_const_lv46_0;
    static const sc_lv<14> ap_const_lv14_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<2> ap_const_lv2_2;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<13> ap_const_lv13_0;
    static const sc_lv<46> ap_const_lv46_1;
    static const sc_lv<14> ap_const_lv14_2004;
    static const sc_lv<14> ap_const_lv14_1;
    static const sc_lv<32> ap_const_lv32_60;
    static const sc_lv<32> ap_const_lv32_10D;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<27> ap_const_lv27_0;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<32> ap_const_lv32_4;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_add_ln104_fu_453_p2();
    void thread_add_ln105_fu_465_p2();
    void thread_add_ln128_fu_534_p2();
    void thread_add_ln129_3_fu_772_p2();
    void thread_add_ln129_fu_778_p2();
    void thread_add_ln163_fu_670_p2();
    void thread_and_ln153_fu_664_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state8();
    void thread_ap_block_pp0();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_01001();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state1();
    void thread_ap_block_state3_pp0_stage0_iter0();
    void thread_ap_block_state4_pp0_stage0_iter1();
    void thread_ap_block_state5_pp0_stage0_iter2();
    void thread_ap_block_state6_pp0_stage0_iter3();
    void thread_ap_block_state7_pp0_stage0_iter4();
    void thread_ap_condition_438();
    void thread_ap_condition_450();
    void thread_ap_condition_461();
    void thread_ap_condition_472();
    void thread_ap_condition_pp0_exit_iter0_state3();
    void thread_ap_done();
    void thread_ap_enable_operation_155();
    void thread_ap_enable_operation_157();
    void thread_ap_enable_operation_159();
    void thread_ap_enable_operation_161();
    void thread_ap_enable_operation_175();
    void thread_ap_enable_operation_177();
    void thread_ap_enable_operation_179();
    void thread_ap_enable_operation_181();
    void thread_ap_enable_operation_202();
    void thread_ap_enable_operation_204();
    void thread_ap_enable_operation_206();
    void thread_ap_enable_operation_208();
    void thread_ap_enable_operation_216();
    void thread_ap_enable_operation_217();
    void thread_ap_enable_operation_218();
    void thread_ap_enable_operation_219();
    void thread_ap_enable_pp0();
    void thread_ap_enable_state5_pp0_iter2_stage0();
    void thread_ap_enable_state6_pp0_iter3_stage0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_predicate_op155_load_state5();
    void thread_ap_predicate_op157_load_state5();
    void thread_ap_predicate_op159_load_state5();
    void thread_ap_predicate_op161_load_state5();
    void thread_ap_predicate_op167_read_state5();
    void thread_ap_predicate_op175_store_state5();
    void thread_ap_predicate_op177_store_state5();
    void thread_ap_predicate_op179_store_state5();
    void thread_ap_predicate_op181_store_state5();
    void thread_ap_predicate_op202_store_state5();
    void thread_ap_predicate_op204_store_state5();
    void thread_ap_predicate_op206_store_state5();
    void thread_ap_predicate_op208_store_state5();
    void thread_ap_predicate_op216_load_state6();
    void thread_ap_predicate_op217_load_state6();
    void thread_ap_predicate_op218_load_state6();
    void thread_ap_predicate_op219_load_state6();
    void thread_ap_predicate_op221_write_state7();
    void thread_ap_ready();
    void thread_ap_sig_allocacmp_ofm_y_1_i_load();
    void thread_bound_fu_442_p2();
    void thread_count_simd_fu_546_p2();
    void thread_counter_internal_blo_16_fu_709_p2();
    void thread_current_block_write_21_fu_865_p3();
    void thread_current_block_write_22_fu_809_p2();
    void thread_current_block_write_23_fu_821_p3();
    void thread_current_block_write_24_fu_829_p3();
    void thread_current_block_write_fu_853_p2();
    void thread_current_line_in_bloc_fu_540_p2();
    void thread_grp_fu_372_p2();
    void thread_i_fu_471_p3();
    void thread_icmp_ln104_fu_448_p2();
    void thread_icmp_ln105_fu_459_p2();
    void thread_icmp_ln107_fu_497_p2();
    void thread_icmp_ln113_fu_384_p2();
    void thread_icmp_ln116_fu_859_p2();
    void thread_icmp_ln123_fu_506_p2();
    void thread_icmp_ln132_fu_552_p2();
    void thread_icmp_ln135_fu_569_p2();
    void thread_icmp_ln138_fu_580_p2();
    void thread_icmp_ln141_fu_600_p2();
    void thread_icmp_ln144_fu_620_p2();
    void thread_icmp_ln153_4_fu_658_p2();
    void thread_icmp_ln153_fu_642_p2();
    void thread_icmp_ln160_fu_378_p2();
    void thread_icmp_ln165_fu_815_p2();
    void thread_icmp_ln172_fu_715_p2();
    void thread_in_V_V_blk_n();
    void thread_in_V_V_read();
    void thread_inp_fu_734_p2();
    void thread_inputBuf_0_V_address0();
    void thread_inputBuf_0_V_address1();
    void thread_inputBuf_0_V_ce0();
    void thread_inputBuf_0_V_ce1();
    void thread_inputBuf_0_V_we1();
    void thread_inputBuf_1_V_address0();
    void thread_inputBuf_1_V_address1();
    void thread_inputBuf_1_V_ce0();
    void thread_inputBuf_1_V_ce1();
    void thread_inputBuf_1_V_we1();
    void thread_inputBuf_2_V_address0();
    void thread_inputBuf_2_V_address1();
    void thread_inputBuf_2_V_ce0();
    void thread_inputBuf_2_V_ce1();
    void thread_inputBuf_2_V_we1();
    void thread_inputBuf_3_V_address0();
    void thread_inputBuf_3_V_address1();
    void thread_inputBuf_3_V_ce0();
    void thread_inputBuf_3_V_ce1();
    void thread_inputBuf_3_V_we1();
    void thread_k_x_fu_563_p2();
    void thread_k_y_fu_528_p2();
    void thread_numReps_blk_n();
    void thread_numReps_out_blk_n();
    void thread_numReps_out_din();
    void thread_numReps_out_write();
    void thread_numReps_read();
    void thread_ofm_x_fu_594_p2();
    void thread_ofm_y_fu_614_p2();
    void thread_out_V_V_blk_n();
    void thread_out_V_V_din();
    void thread_out_V_V_write();
    void thread_p_shl70_fu_438_p1();
    void thread_p_shl_fu_427_p1();
    void thread_read_block_9_fu_684_p3();
    void thread_read_block_fu_750_p2();
    void thread_select_ln105_fu_485_p3();
    void thread_select_ln144_3_fu_783_p3();
    void thread_select_ln144_fu_626_p3();
    void thread_select_ln160_fu_676_p3();
    void thread_select_ln172_fu_721_p3();
    void thread_tmp_1_fu_648_p4();
    void thread_tmp_fu_420_p3();
    void thread_tmp_s_fu_431_p3();
    void thread_trunc_ln105_fu_493_p1();
    void thread_trunc_ln124_4_fu_761_p1();
    void thread_trunc_ln124_fu_524_p1();
    void thread_trunc_ln321_18_fu_802_p1();
    void thread_trunc_ln321_fu_849_p1();
    void thread_zext_ln110_fu_841_p1();
    void thread_zext_ln129_fu_765_p1();
    void thread_zext_ln156_fu_794_p1();
    void thread_zext_ln160_fu_692_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
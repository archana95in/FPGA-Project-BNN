// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _ConvolutionInputGene_1_HH_
#define _ConvolutionInputGene_1_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "BlackBoxJam_mul_3xdS.h"
#include "BlackBoxJam_mux_4pcA.h"
#include "ConvolutionInputGtde.h"

namespace ap_rtl {

struct ConvolutionInputGene_1 : public sc_module {
    // Port declarations 19
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<32> > in_V_V_dout;
    sc_in< sc_logic > in_V_V_empty_n;
    sc_out< sc_logic > in_V_V_read;
    sc_out< sc_lv<32> > out_V_V_din;
    sc_in< sc_logic > out_V_V_full_n;
    sc_out< sc_logic > out_V_V_write;
    sc_in< sc_lv<32> > numReps_dout;
    sc_in< sc_logic > numReps_empty_n;
    sc_out< sc_logic > numReps_read;
    sc_out< sc_lv<32> > numReps_out_din;
    sc_in< sc_logic > numReps_out_full_n;
    sc_out< sc_logic > numReps_out_write;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    ConvolutionInputGene_1(sc_module_name name);
    SC_HAS_PROCESS(ConvolutionInputGene_1);

    ~ConvolutionInputGene_1();

    sc_trace_file* mVcdFile;

    ConvolutionInputGtde* inputBuf_0_V_U;
    ConvolutionInputGtde* inputBuf_1_V_U;
    ConvolutionInputGtde* inputBuf_2_V_U;
    ConvolutionInputGtde* inputBuf_3_V_U;
    BlackBoxJam_mul_3xdS<1,5,32,13,44>* BlackBoxJam_mul_3xdS_U192;
    BlackBoxJam_mux_4pcA<1,1,32,32,32,32,2,32>* BlackBoxJam_mux_4pcA_U193;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<8> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > in_V_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<1> > icmp_ln107_reg_983;
    sc_signal< sc_lv<1> > and_ln153_reg_1042;
    sc_signal< sc_logic > out_V_V_blk_n;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_lv<1> > icmp_ln107_reg_983_pp0_iter1_reg;
    sc_signal< sc_lv<1> > icmp_ln123_reg_987;
    sc_signal< sc_lv<1> > icmp_ln123_reg_987_pp0_iter1_reg;
    sc_signal< sc_logic > numReps_blk_n;
    sc_signal< sc_logic > numReps_out_blk_n;
    sc_signal< sc_lv<44> > indvar_flatten_reg_303;
    sc_signal< sc_lv<12> > i_0_i_reg_314;
    sc_signal< sc_lv<32> > reg_392;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< bool > ap_block_state7_pp0_stage0_iter0;
    sc_signal< bool > ap_predicate_op177_read_state8;
    sc_signal< bool > ap_block_state8_pp0_stage0_iter1;
    sc_signal< bool > ap_predicate_op226_write_state9;
    sc_signal< bool > ap_block_state9_pp0_stage0_iter2;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<1> > icmp_ln104_fu_425_p2;
    sc_signal< sc_lv<1> > icmp_ln107_fu_461_p2;
    sc_signal< sc_lv<1> > and_ln153_fu_642_p2;
    sc_signal< sc_lv<32> > numReps_read_reg_959;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<44> > grp_fu_419_p2;
    sc_signal< sc_lv<44> > bound_reg_969;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<44> > add_ln104_fu_430_p2;
    sc_signal< sc_lv<1> > icmp_ln123_fu_470_p2;
    sc_signal< sc_lv<2> > trunc_ln124_fu_488_p1;
    sc_signal< sc_lv<2> > trunc_ln124_reg_991;
    sc_signal< sc_lv<1> > icmp_ln132_fu_540_p2;
    sc_signal< sc_lv<1> > icmp_ln132_reg_1016;
    sc_signal< sc_lv<1> > icmp_ln135_fu_557_p2;
    sc_signal< sc_lv<1> > icmp_ln135_reg_1020;
    sc_signal< sc_lv<1> > icmp_ln138_fu_568_p2;
    sc_signal< sc_lv<1> > icmp_ln138_reg_1024;
    sc_signal< sc_lv<1> > icmp_ln141_fu_588_p2;
    sc_signal< sc_lv<1> > icmp_ln141_reg_1028;
    sc_signal< sc_lv<32> > ofm_y_fu_602_p2;
    sc_signal< sc_lv<32> > ofm_y_reg_1032;
    sc_signal< sc_lv<1> > icmp_ln144_fu_608_p2;
    sc_signal< sc_lv<1> > icmp_ln144_reg_1037;
    sc_signal< sc_lv<1> > icmp_ln160_fu_374_p2;
    sc_signal< sc_lv<1> > icmp_ln160_reg_1046;
    sc_signal< sc_lv<1> > icmp_ln113_fu_380_p2;
    sc_signal< sc_lv<1> > icmp_ln113_reg_1051;
    sc_signal< sc_lv<12> > i_fu_745_p3;
    sc_signal< sc_lv<32> > outElem_V_fu_768_p6;
    sc_signal< sc_lv<32> > outElem_V_reg_1060;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state7;
    sc_signal< sc_lv<5> > inputBuf_0_V_address0;
    sc_signal< sc_logic > inputBuf_0_V_ce0;
    sc_signal< sc_lv<32> > inputBuf_0_V_q0;
    sc_signal< sc_lv<5> > inputBuf_0_V_address1;
    sc_signal< sc_logic > inputBuf_0_V_ce1;
    sc_signal< sc_logic > inputBuf_0_V_we1;
    sc_signal< sc_lv<5> > inputBuf_1_V_address0;
    sc_signal< sc_logic > inputBuf_1_V_ce0;
    sc_signal< sc_lv<32> > inputBuf_1_V_q0;
    sc_signal< sc_lv<5> > inputBuf_1_V_address1;
    sc_signal< sc_logic > inputBuf_1_V_ce1;
    sc_signal< sc_logic > inputBuf_1_V_we1;
    sc_signal< sc_lv<5> > inputBuf_2_V_address0;
    sc_signal< sc_logic > inputBuf_2_V_ce0;
    sc_signal< sc_lv<32> > inputBuf_2_V_q0;
    sc_signal< sc_lv<5> > inputBuf_2_V_address1;
    sc_signal< sc_logic > inputBuf_2_V_ce1;
    sc_signal< sc_logic > inputBuf_2_V_we1;
    sc_signal< sc_lv<5> > inputBuf_3_V_address0;
    sc_signal< sc_logic > inputBuf_3_V_ce0;
    sc_signal< sc_lv<32> > inputBuf_3_V_q0;
    sc_signal< sc_lv<5> > inputBuf_3_V_address1;
    sc_signal< sc_logic > inputBuf_3_V_ce1;
    sc_signal< sc_logic > inputBuf_3_V_we1;
    sc_signal< sc_lv<64> > zext_ln129_fu_526_p1;
    sc_signal< sc_lv<64> > zext_ln156_fu_793_p1;
    sc_signal< sc_lv<64> > zext_ln110_fu_840_p1;
    sc_signal< sc_lv<32> > read_block_10_fu_96;
    sc_signal< sc_lv<32> > select_ln105_fu_448_p3;
    sc_signal< sc_lv<32> > zext_ln160_fu_670_p1;
    sc_signal< sc_lv<32> > read_block_fu_728_p2;
    sc_signal< sc_lv<32> > ofm_y_1_i_fu_100;
    sc_signal< sc_lv<32> > select_ln144_2_fu_782_p3;
    sc_signal< sc_lv<32> > ap_sig_allocacmp_ofm_y_1_i_load;
    sc_signal< sc_lv<32> > ofm_x_5_fu_104;
    sc_signal< sc_lv<32> > ofm_x_fu_582_p2;
    sc_signal< sc_lv<32> > k_y_5_fu_108;
    sc_signal< sc_lv<32> > k_y_fu_492_p2;
    sc_signal< sc_lv<32> > inp_5_fu_112;
    sc_signal< sc_lv<32> > select_ln144_fu_614_p3;
    sc_signal< sc_lv<32> > inp_fu_712_p2;
    sc_signal< sc_lv<32> > k_x_5_fu_116;
    sc_signal< sc_lv<32> > k_x_fu_551_p2;
    sc_signal< sc_lv<32> > count_simd_5_fu_120;
    sc_signal< sc_lv<32> > count_simd_fu_534_p2;
    sc_signal< sc_lv<32> > current_block_write_25_fu_124;
    sc_signal< sc_lv<32> > current_block_write_29_fu_828_p3;
    sc_signal< sc_lv<32> > current_block_write_26_fu_864_p3;
    sc_signal< sc_lv<32> > current_line_10_fu_128;
    sc_signal< sc_lv<32> > select_ln160_fu_654_p3;
    sc_signal< sc_lv<32> > grp_fu_368_p2;
    sc_signal< sc_lv<32> > counter_internal_blo_fu_132;
    sc_signal< sc_lv<32> > select_ln172_fu_699_p3;
    sc_signal< bool > ap_block_pp0_stage0_01001;
    sc_signal< sc_lv<2> > trunc_ln321_19_fu_801_p1;
    sc_signal< sc_lv<2> > trunc_ln321_fu_848_p1;
    sc_signal< sc_lv<32> > grp_fu_419_p0;
    sc_signal< sc_lv<13> > grp_fu_419_p1;
    sc_signal< sc_lv<1> > icmp_ln105_fu_442_p2;
    sc_signal< sc_lv<31> > trunc_ln128_4_fu_502_p1;
    sc_signal< sc_lv<31> > trunc_ln128_fu_498_p1;
    sc_signal< sc_lv<31> > add_ln128_fu_506_p2;
    sc_signal< sc_lv<32> > shl_ln_fu_512_p3;
    sc_signal< sc_lv<32> > current_line_in_bloc_fu_520_p2;
    sc_signal< sc_lv<1> > icmp_ln153_fu_630_p2;
    sc_signal< sc_lv<1> > icmp_ln153_2_fu_636_p2;
    sc_signal< sc_lv<4> > trunc_ln105_fu_457_p1;
    sc_signal< sc_lv<4> > add_ln163_fu_648_p2;
    sc_signal< sc_lv<4> > read_block_11_fu_662_p3;
    sc_signal< sc_lv<32> > counter_internal_blo_20_fu_687_p2;
    sc_signal< sc_lv<1> > icmp_ln172_fu_693_p2;
    sc_signal< sc_lv<12> > add_ln105_fu_739_p2;
    sc_signal< sc_lv<2> > trunc_ln124_5_fu_753_p1;
    sc_signal< sc_lv<2> > add_ln129_2_fu_757_p2;
    sc_signal< sc_lv<2> > outElem_V_fu_768_p5;
    sc_signal< sc_lv<32> > current_block_write_27_fu_808_p2;
    sc_signal< sc_lv<1> > icmp_ln165_fu_814_p2;
    sc_signal< sc_lv<32> > current_block_write_28_fu_820_p3;
    sc_signal< sc_lv<32> > current_block_write_fu_852_p2;
    sc_signal< sc_lv<1> > icmp_ln116_fu_858_p2;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<8> > ap_NS_fsm;
    sc_signal< bool > ap_block_pp0;
    sc_signal< bool > ap_predicate_op79_load_state7;
    sc_signal< bool > ap_enable_operation_79;
    sc_signal< bool > ap_enable_state7_pp0_iter0_stage0;
    sc_signal< bool > ap_predicate_op167_load_state8;
    sc_signal< bool > ap_enable_operation_167;
    sc_signal< bool > ap_enable_state8_pp0_iter1_stage0;
    sc_signal< bool > ap_predicate_op189_store_state8;
    sc_signal< bool > ap_enable_operation_189;
    sc_signal< bool > ap_predicate_op216_store_state8;
    sc_signal< bool > ap_enable_operation_216;
    sc_signal< bool > ap_predicate_op81_load_state7;
    sc_signal< bool > ap_enable_operation_81;
    sc_signal< bool > ap_predicate_op168_load_state8;
    sc_signal< bool > ap_enable_operation_168;
    sc_signal< bool > ap_predicate_op187_store_state8;
    sc_signal< bool > ap_enable_operation_187;
    sc_signal< bool > ap_predicate_op214_store_state8;
    sc_signal< bool > ap_enable_operation_214;
    sc_signal< bool > ap_predicate_op83_load_state7;
    sc_signal< bool > ap_enable_operation_83;
    sc_signal< bool > ap_predicate_op169_load_state8;
    sc_signal< bool > ap_enable_operation_169;
    sc_signal< bool > ap_predicate_op185_store_state8;
    sc_signal< bool > ap_enable_operation_185;
    sc_signal< bool > ap_predicate_op212_store_state8;
    sc_signal< bool > ap_enable_operation_212;
    sc_signal< bool > ap_predicate_op85_load_state7;
    sc_signal< bool > ap_enable_operation_85;
    sc_signal< bool > ap_predicate_op170_load_state8;
    sc_signal< bool > ap_enable_operation_170;
    sc_signal< bool > ap_predicate_op191_store_state8;
    sc_signal< bool > ap_enable_operation_191;
    sc_signal< bool > ap_predicate_op218_store_state8;
    sc_signal< bool > ap_enable_operation_218;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_lv<44> > grp_fu_419_p00;
    sc_signal< bool > ap_condition_426;
    sc_signal< bool > ap_condition_59;
    sc_signal< bool > ap_condition_438;
    sc_signal< bool > ap_condition_449;
    sc_signal< bool > ap_condition_460;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<8> ap_ST_fsm_state1;
    static const sc_lv<8> ap_ST_fsm_state2;
    static const sc_lv<8> ap_ST_fsm_state3;
    static const sc_lv<8> ap_ST_fsm_state4;
    static const sc_lv<8> ap_ST_fsm_state5;
    static const sc_lv<8> ap_ST_fsm_state6;
    static const sc_lv<8> ap_ST_fsm_pp0_stage0;
    static const sc_lv<8> ap_ST_fsm_state10;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_6;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<44> ap_const_lv44_0;
    static const sc_lv<12> ap_const_lv12_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<2> ap_const_lv2_2;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<32> ap_const_lv32_1C;
    static const sc_lv<44> ap_const_lv44_A74;
    static const sc_lv<44> ap_const_lv44_1;
    static const sc_lv<12> ap_const_lv12_A74;
    static const sc_lv<32> ap_const_lv32_54;
    static const sc_lv<32> ap_const_lv32_D7;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_1B;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<12> ap_const_lv12_1;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_7;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_add_ln104_fu_430_p2();
    void thread_add_ln105_fu_739_p2();
    void thread_add_ln128_fu_506_p2();
    void thread_add_ln129_2_fu_757_p2();
    void thread_add_ln163_fu_648_p2();
    void thread_and_ln153_fu_642_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state6();
    void thread_ap_block_pp0();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_01001();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state1();
    void thread_ap_block_state7_pp0_stage0_iter0();
    void thread_ap_block_state8_pp0_stage0_iter1();
    void thread_ap_block_state9_pp0_stage0_iter2();
    void thread_ap_condition_426();
    void thread_ap_condition_438();
    void thread_ap_condition_449();
    void thread_ap_condition_460();
    void thread_ap_condition_59();
    void thread_ap_condition_pp0_exit_iter0_state7();
    void thread_ap_done();
    void thread_ap_enable_operation_167();
    void thread_ap_enable_operation_168();
    void thread_ap_enable_operation_169();
    void thread_ap_enable_operation_170();
    void thread_ap_enable_operation_185();
    void thread_ap_enable_operation_187();
    void thread_ap_enable_operation_189();
    void thread_ap_enable_operation_191();
    void thread_ap_enable_operation_212();
    void thread_ap_enable_operation_214();
    void thread_ap_enable_operation_216();
    void thread_ap_enable_operation_218();
    void thread_ap_enable_operation_79();
    void thread_ap_enable_operation_81();
    void thread_ap_enable_operation_83();
    void thread_ap_enable_operation_85();
    void thread_ap_enable_pp0();
    void thread_ap_enable_state7_pp0_iter0_stage0();
    void thread_ap_enable_state8_pp0_iter1_stage0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_predicate_op167_load_state8();
    void thread_ap_predicate_op168_load_state8();
    void thread_ap_predicate_op169_load_state8();
    void thread_ap_predicate_op170_load_state8();
    void thread_ap_predicate_op177_read_state8();
    void thread_ap_predicate_op185_store_state8();
    void thread_ap_predicate_op187_store_state8();
    void thread_ap_predicate_op189_store_state8();
    void thread_ap_predicate_op191_store_state8();
    void thread_ap_predicate_op212_store_state8();
    void thread_ap_predicate_op214_store_state8();
    void thread_ap_predicate_op216_store_state8();
    void thread_ap_predicate_op218_store_state8();
    void thread_ap_predicate_op226_write_state9();
    void thread_ap_predicate_op79_load_state7();
    void thread_ap_predicate_op81_load_state7();
    void thread_ap_predicate_op83_load_state7();
    void thread_ap_predicate_op85_load_state7();
    void thread_ap_ready();
    void thread_ap_sig_allocacmp_ofm_y_1_i_load();
    void thread_count_simd_fu_534_p2();
    void thread_counter_internal_blo_20_fu_687_p2();
    void thread_current_block_write_26_fu_864_p3();
    void thread_current_block_write_27_fu_808_p2();
    void thread_current_block_write_28_fu_820_p3();
    void thread_current_block_write_29_fu_828_p3();
    void thread_current_block_write_fu_852_p2();
    void thread_current_line_in_bloc_fu_520_p2();
    void thread_grp_fu_368_p2();
    void thread_grp_fu_419_p0();
    void thread_grp_fu_419_p00();
    void thread_grp_fu_419_p1();
    void thread_i_fu_745_p3();
    void thread_icmp_ln104_fu_425_p2();
    void thread_icmp_ln105_fu_442_p2();
    void thread_icmp_ln107_fu_461_p2();
    void thread_icmp_ln113_fu_380_p2();
    void thread_icmp_ln116_fu_858_p2();
    void thread_icmp_ln123_fu_470_p2();
    void thread_icmp_ln132_fu_540_p2();
    void thread_icmp_ln135_fu_557_p2();
    void thread_icmp_ln138_fu_568_p2();
    void thread_icmp_ln141_fu_588_p2();
    void thread_icmp_ln144_fu_608_p2();
    void thread_icmp_ln153_2_fu_636_p2();
    void thread_icmp_ln153_fu_630_p2();
    void thread_icmp_ln160_fu_374_p2();
    void thread_icmp_ln165_fu_814_p2();
    void thread_icmp_ln172_fu_693_p2();
    void thread_in_V_V_blk_n();
    void thread_in_V_V_read();
    void thread_inp_fu_712_p2();
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
    void thread_k_x_fu_551_p2();
    void thread_k_y_fu_492_p2();
    void thread_numReps_blk_n();
    void thread_numReps_out_blk_n();
    void thread_numReps_out_din();
    void thread_numReps_out_write();
    void thread_numReps_read();
    void thread_ofm_x_fu_582_p2();
    void thread_ofm_y_fu_602_p2();
    void thread_outElem_V_fu_768_p5();
    void thread_out_V_V_blk_n();
    void thread_out_V_V_din();
    void thread_out_V_V_write();
    void thread_read_block_11_fu_662_p3();
    void thread_read_block_fu_728_p2();
    void thread_select_ln105_fu_448_p3();
    void thread_select_ln144_2_fu_782_p3();
    void thread_select_ln144_fu_614_p3();
    void thread_select_ln160_fu_654_p3();
    void thread_select_ln172_fu_699_p3();
    void thread_shl_ln_fu_512_p3();
    void thread_trunc_ln105_fu_457_p1();
    void thread_trunc_ln124_5_fu_753_p1();
    void thread_trunc_ln124_fu_488_p1();
    void thread_trunc_ln128_4_fu_502_p1();
    void thread_trunc_ln128_fu_498_p1();
    void thread_trunc_ln321_19_fu_801_p1();
    void thread_trunc_ln321_fu_848_p1();
    void thread_zext_ln110_fu_840_p1();
    void thread_zext_ln129_fu_526_p1();
    void thread_zext_ln156_fu_793_p1();
    void thread_zext_ln160_fu_670_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif

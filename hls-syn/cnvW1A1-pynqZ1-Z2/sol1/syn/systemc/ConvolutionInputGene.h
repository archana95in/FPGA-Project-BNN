// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _ConvolutionInputGene_HH_
#define _ConvolutionInputGene_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "BlackBoxJam_mul_3ocq.h"
#include "BlackBoxJam_mux_4pcA.h"
#include "ConvolutionInputGkbM.h"

namespace ap_rtl {

struct ConvolutionInputGene : public sc_module {
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
    ConvolutionInputGene(sc_module_name name);
    SC_HAS_PROCESS(ConvolutionInputGene);

    ~ConvolutionInputGene();

    sc_trace_file* mVcdFile;

    ConvolutionInputGkbM* inputBuf_0_V_U;
    ConvolutionInputGkbM* inputBuf_1_V_U;
    ConvolutionInputGkbM* inputBuf_2_V_U;
    ConvolutionInputGkbM* inputBuf_3_V_U;
    BlackBoxJam_mul_3ocq<1,5,32,15,46>* BlackBoxJam_mul_3ocq_U93;
    BlackBoxJam_mux_4pcA<1,1,32,32,32,32,2,32>* BlackBoxJam_mux_4pcA_U94;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<8> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > in_V_V_blk_n;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<1> > icmp_ln107_reg_992;
    sc_signal< sc_lv<1> > and_ln153_reg_1051;
    sc_signal< sc_logic > out_V_V_blk_n;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter3;
    sc_signal< sc_lv<1> > icmp_ln107_reg_992_pp0_iter2_reg;
    sc_signal< sc_lv<1> > icmp_ln123_reg_996;
    sc_signal< sc_lv<1> > icmp_ln123_reg_996_pp0_iter2_reg;
    sc_signal< sc_logic > numReps_blk_n;
    sc_signal< sc_logic > numReps_out_blk_n;
    sc_signal< sc_lv<46> > indvar_flatten_reg_303;
    sc_signal< sc_lv<14> > i_0_i_reg_314;
    sc_signal< sc_lv<32> > reg_392;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_state7_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state8_pp0_stage0_iter1;
    sc_signal< bool > ap_predicate_op178_read_state9;
    sc_signal< bool > ap_block_state9_pp0_stage0_iter2;
    sc_signal< bool > ap_predicate_op227_write_state10;
    sc_signal< bool > ap_block_state10_pp0_stage0_iter3;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<1> > icmp_ln107_fu_474_p2;
    sc_signal< sc_lv<1> > and_ln153_fu_655_p2;
    sc_signal< sc_lv<32> > numReps_read_reg_958;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<46> > grp_fu_419_p2;
    sc_signal< sc_lv<46> > bound_reg_968;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<1> > icmp_ln104_fu_425_p2;
    sc_signal< sc_lv<1> > icmp_ln104_reg_973;
    sc_signal< sc_lv<46> > add_ln104_fu_430_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<1> > icmp_ln105_fu_436_p2;
    sc_signal< sc_lv<1> > icmp_ln105_reg_982;
    sc_signal< sc_lv<14> > i_fu_448_p3;
    sc_signal< sc_lv<1> > icmp_ln123_fu_483_p2;
    sc_signal< sc_lv<2> > trunc_ln124_fu_501_p1;
    sc_signal< sc_lv<2> > trunc_ln124_reg_1000;
    sc_signal< sc_lv<1> > icmp_ln132_fu_553_p2;
    sc_signal< sc_lv<1> > icmp_ln132_reg_1025;
    sc_signal< sc_lv<1> > icmp_ln135_fu_570_p2;
    sc_signal< sc_lv<1> > icmp_ln135_reg_1029;
    sc_signal< sc_lv<1> > icmp_ln138_fu_581_p2;
    sc_signal< sc_lv<1> > icmp_ln138_reg_1033;
    sc_signal< sc_lv<1> > icmp_ln141_fu_601_p2;
    sc_signal< sc_lv<1> > icmp_ln141_reg_1037;
    sc_signal< sc_lv<32> > ofm_y_fu_615_p2;
    sc_signal< sc_lv<32> > ofm_y_reg_1041;
    sc_signal< sc_lv<1> > icmp_ln144_fu_621_p2;
    sc_signal< sc_lv<1> > icmp_ln144_reg_1046;
    sc_signal< sc_lv<1> > icmp_ln160_fu_374_p2;
    sc_signal< sc_lv<1> > icmp_ln160_reg_1055;
    sc_signal< sc_lv<1> > icmp_ln113_fu_380_p2;
    sc_signal< sc_lv<1> > icmp_ln113_reg_1060;
    sc_signal< sc_lv<32> > outElem_V_fu_767_p6;
    sc_signal< sc_lv<32> > outElem_V_reg_1064;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state7;
    sc_signal< sc_lv<6> > inputBuf_0_V_address0;
    sc_signal< sc_logic > inputBuf_0_V_ce0;
    sc_signal< sc_lv<32> > inputBuf_0_V_q0;
    sc_signal< sc_lv<6> > inputBuf_0_V_address1;
    sc_signal< sc_logic > inputBuf_0_V_ce1;
    sc_signal< sc_logic > inputBuf_0_V_we1;
    sc_signal< sc_lv<6> > inputBuf_1_V_address0;
    sc_signal< sc_logic > inputBuf_1_V_ce0;
    sc_signal< sc_lv<32> > inputBuf_1_V_q0;
    sc_signal< sc_lv<6> > inputBuf_1_V_address1;
    sc_signal< sc_logic > inputBuf_1_V_ce1;
    sc_signal< sc_logic > inputBuf_1_V_we1;
    sc_signal< sc_lv<6> > inputBuf_2_V_address0;
    sc_signal< sc_logic > inputBuf_2_V_ce0;
    sc_signal< sc_lv<32> > inputBuf_2_V_q0;
    sc_signal< sc_lv<6> > inputBuf_2_V_address1;
    sc_signal< sc_logic > inputBuf_2_V_ce1;
    sc_signal< sc_logic > inputBuf_2_V_we1;
    sc_signal< sc_lv<6> > inputBuf_3_V_address0;
    sc_signal< sc_logic > inputBuf_3_V_ce0;
    sc_signal< sc_lv<32> > inputBuf_3_V_q0;
    sc_signal< sc_lv<6> > inputBuf_3_V_address1;
    sc_signal< sc_logic > inputBuf_3_V_ce1;
    sc_signal< sc_logic > inputBuf_3_V_we1;
    sc_signal< sc_lv<64> > zext_ln129_fu_539_p1;
    sc_signal< sc_lv<64> > zext_ln156_fu_792_p1;
    sc_signal< sc_lv<64> > zext_ln110_fu_839_p1;
    sc_signal< sc_lv<32> > read_block_12_fu_96;
    sc_signal< sc_lv<32> > select_ln105_fu_462_p3;
    sc_signal< sc_lv<32> > zext_ln160_fu_683_p1;
    sc_signal< sc_lv<32> > read_block_fu_741_p2;
    sc_signal< sc_lv<32> > ofm_y_1_i_fu_100;
    sc_signal< sc_lv<32> > select_ln144_1_fu_781_p3;
    sc_signal< sc_lv<32> > ap_sig_allocacmp_ofm_y_1_i_load;
    sc_signal< sc_lv<32> > ofm_x_6_fu_104;
    sc_signal< sc_lv<32> > ofm_x_fu_595_p2;
    sc_signal< sc_lv<32> > k_y_6_fu_108;
    sc_signal< sc_lv<32> > k_y_fu_505_p2;
    sc_signal< sc_lv<32> > inp_6_fu_112;
    sc_signal< sc_lv<32> > select_ln144_fu_627_p3;
    sc_signal< sc_lv<32> > inp_fu_725_p2;
    sc_signal< sc_lv<32> > k_x_6_fu_116;
    sc_signal< sc_lv<32> > k_x_fu_564_p2;
    sc_signal< sc_lv<32> > count_simd_6_fu_120;
    sc_signal< sc_lv<32> > count_simd_fu_547_p2;
    sc_signal< sc_lv<32> > current_block_write_30_fu_124;
    sc_signal< sc_lv<32> > current_block_write_34_fu_827_p3;
    sc_signal< sc_lv<32> > current_block_write_31_fu_863_p3;
    sc_signal< sc_lv<32> > current_line_12_fu_128;
    sc_signal< sc_lv<32> > select_ln160_fu_667_p3;
    sc_signal< sc_lv<32> > grp_fu_368_p2;
    sc_signal< sc_lv<32> > counter_internal_blo_fu_132;
    sc_signal< sc_lv<32> > select_ln172_fu_712_p3;
    sc_signal< bool > ap_block_pp0_stage0_01001;
    sc_signal< sc_lv<2> > trunc_ln321_20_fu_800_p1;
    sc_signal< sc_lv<2> > trunc_ln321_fu_847_p1;
    sc_signal< sc_lv<32> > grp_fu_419_p0;
    sc_signal< sc_lv<15> > grp_fu_419_p1;
    sc_signal< sc_lv<14> > add_ln105_fu_442_p2;
    sc_signal< sc_lv<31> > trunc_ln128_5_fu_515_p1;
    sc_signal< sc_lv<31> > trunc_ln128_fu_511_p1;
    sc_signal< sc_lv<31> > add_ln128_fu_519_p2;
    sc_signal< sc_lv<32> > shl_ln_fu_525_p3;
    sc_signal< sc_lv<32> > current_line_in_bloc_fu_533_p2;
    sc_signal< sc_lv<1> > icmp_ln153_fu_643_p2;
    sc_signal< sc_lv<1> > icmp_ln153_1_fu_649_p2;
    sc_signal< sc_lv<5> > trunc_ln105_fu_470_p1;
    sc_signal< sc_lv<5> > add_ln163_fu_661_p2;
    sc_signal< sc_lv<5> > read_block_13_fu_675_p3;
    sc_signal< sc_lv<32> > counter_internal_blo_24_fu_700_p2;
    sc_signal< sc_lv<1> > icmp_ln172_fu_706_p2;
    sc_signal< sc_lv<2> > trunc_ln124_6_fu_752_p1;
    sc_signal< sc_lv<2> > add_ln129_1_fu_756_p2;
    sc_signal< sc_lv<2> > outElem_V_fu_767_p5;
    sc_signal< sc_lv<32> > current_block_write_32_fu_807_p2;
    sc_signal< sc_lv<1> > icmp_ln165_fu_813_p2;
    sc_signal< sc_lv<32> > current_block_write_33_fu_819_p3;
    sc_signal< sc_lv<32> > current_block_write_fu_851_p2;
    sc_signal< sc_lv<1> > icmp_ln116_fu_857_p2;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<8> > ap_NS_fsm;
    sc_signal< bool > ap_block_pp0;
    sc_signal< bool > ap_predicate_op84_load_state8;
    sc_signal< bool > ap_enable_operation_84;
    sc_signal< bool > ap_enable_state8_pp0_iter1_stage0;
    sc_signal< bool > ap_predicate_op168_load_state9;
    sc_signal< bool > ap_enable_operation_168;
    sc_signal< bool > ap_enable_state9_pp0_iter2_stage0;
    sc_signal< bool > ap_predicate_op190_store_state9;
    sc_signal< bool > ap_enable_operation_190;
    sc_signal< bool > ap_predicate_op217_store_state9;
    sc_signal< bool > ap_enable_operation_217;
    sc_signal< bool > ap_predicate_op86_load_state8;
    sc_signal< bool > ap_enable_operation_86;
    sc_signal< bool > ap_predicate_op169_load_state9;
    sc_signal< bool > ap_enable_operation_169;
    sc_signal< bool > ap_predicate_op188_store_state9;
    sc_signal< bool > ap_enable_operation_188;
    sc_signal< bool > ap_predicate_op215_store_state9;
    sc_signal< bool > ap_enable_operation_215;
    sc_signal< bool > ap_predicate_op88_load_state8;
    sc_signal< bool > ap_enable_operation_88;
    sc_signal< bool > ap_predicate_op170_load_state9;
    sc_signal< bool > ap_enable_operation_170;
    sc_signal< bool > ap_predicate_op186_store_state9;
    sc_signal< bool > ap_enable_operation_186;
    sc_signal< bool > ap_predicate_op213_store_state9;
    sc_signal< bool > ap_enable_operation_213;
    sc_signal< bool > ap_predicate_op90_load_state8;
    sc_signal< bool > ap_enable_operation_90;
    sc_signal< bool > ap_predicate_op171_load_state9;
    sc_signal< bool > ap_enable_operation_171;
    sc_signal< bool > ap_predicate_op192_store_state9;
    sc_signal< bool > ap_enable_operation_192;
    sc_signal< bool > ap_predicate_op219_store_state9;
    sc_signal< bool > ap_enable_operation_219;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_lv<46> > grp_fu_419_p00;
    sc_signal< bool > ap_condition_436;
    sc_signal< bool > ap_condition_448;
    sc_signal< bool > ap_condition_459;
    sc_signal< bool > ap_condition_470;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<8> ap_ST_fsm_state1;
    static const sc_lv<8> ap_ST_fsm_state2;
    static const sc_lv<8> ap_ST_fsm_state3;
    static const sc_lv<8> ap_ST_fsm_state4;
    static const sc_lv<8> ap_ST_fsm_state5;
    static const sc_lv<8> ap_ST_fsm_state6;
    static const sc_lv<8> ap_ST_fsm_pp0_stage0;
    static const sc_lv<8> ap_ST_fsm_state11;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<46> ap_const_lv46_0;
    static const sc_lv<14> ap_const_lv14_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<2> ap_const_lv2_2;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<32> ap_const_lv32_3C;
    static const sc_lv<46> ap_const_lv46_37D4;
    static const sc_lv<46> ap_const_lv46_1;
    static const sc_lv<14> ap_const_lv14_37D4;
    static const sc_lv<14> ap_const_lv14_1;
    static const sc_lv<32> ap_const_lv32_B4;
    static const sc_lv<32> ap_const_lv32_1F7;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_1C;
    static const sc_lv<32> ap_const_lv32_3B;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_7;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_add_ln104_fu_430_p2();
    void thread_add_ln105_fu_442_p2();
    void thread_add_ln128_fu_519_p2();
    void thread_add_ln129_1_fu_756_p2();
    void thread_add_ln163_fu_661_p2();
    void thread_and_ln153_fu_655_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state6();
    void thread_ap_block_pp0();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_01001();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state1();
    void thread_ap_block_state10_pp0_stage0_iter3();
    void thread_ap_block_state7_pp0_stage0_iter0();
    void thread_ap_block_state8_pp0_stage0_iter1();
    void thread_ap_block_state9_pp0_stage0_iter2();
    void thread_ap_condition_436();
    void thread_ap_condition_448();
    void thread_ap_condition_459();
    void thread_ap_condition_470();
    void thread_ap_condition_pp0_exit_iter0_state7();
    void thread_ap_done();
    void thread_ap_enable_operation_168();
    void thread_ap_enable_operation_169();
    void thread_ap_enable_operation_170();
    void thread_ap_enable_operation_171();
    void thread_ap_enable_operation_186();
    void thread_ap_enable_operation_188();
    void thread_ap_enable_operation_190();
    void thread_ap_enable_operation_192();
    void thread_ap_enable_operation_213();
    void thread_ap_enable_operation_215();
    void thread_ap_enable_operation_217();
    void thread_ap_enable_operation_219();
    void thread_ap_enable_operation_84();
    void thread_ap_enable_operation_86();
    void thread_ap_enable_operation_88();
    void thread_ap_enable_operation_90();
    void thread_ap_enable_pp0();
    void thread_ap_enable_state8_pp0_iter1_stage0();
    void thread_ap_enable_state9_pp0_iter2_stage0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_predicate_op168_load_state9();
    void thread_ap_predicate_op169_load_state9();
    void thread_ap_predicate_op170_load_state9();
    void thread_ap_predicate_op171_load_state9();
    void thread_ap_predicate_op178_read_state9();
    void thread_ap_predicate_op186_store_state9();
    void thread_ap_predicate_op188_store_state9();
    void thread_ap_predicate_op190_store_state9();
    void thread_ap_predicate_op192_store_state9();
    void thread_ap_predicate_op213_store_state9();
    void thread_ap_predicate_op215_store_state9();
    void thread_ap_predicate_op217_store_state9();
    void thread_ap_predicate_op219_store_state9();
    void thread_ap_predicate_op227_write_state10();
    void thread_ap_predicate_op84_load_state8();
    void thread_ap_predicate_op86_load_state8();
    void thread_ap_predicate_op88_load_state8();
    void thread_ap_predicate_op90_load_state8();
    void thread_ap_ready();
    void thread_ap_sig_allocacmp_ofm_y_1_i_load();
    void thread_count_simd_fu_547_p2();
    void thread_counter_internal_blo_24_fu_700_p2();
    void thread_current_block_write_31_fu_863_p3();
    void thread_current_block_write_32_fu_807_p2();
    void thread_current_block_write_33_fu_819_p3();
    void thread_current_block_write_34_fu_827_p3();
    void thread_current_block_write_fu_851_p2();
    void thread_current_line_in_bloc_fu_533_p2();
    void thread_grp_fu_368_p2();
    void thread_grp_fu_419_p0();
    void thread_grp_fu_419_p00();
    void thread_grp_fu_419_p1();
    void thread_i_fu_448_p3();
    void thread_icmp_ln104_fu_425_p2();
    void thread_icmp_ln105_fu_436_p2();
    void thread_icmp_ln107_fu_474_p2();
    void thread_icmp_ln113_fu_380_p2();
    void thread_icmp_ln116_fu_857_p2();
    void thread_icmp_ln123_fu_483_p2();
    void thread_icmp_ln132_fu_553_p2();
    void thread_icmp_ln135_fu_570_p2();
    void thread_icmp_ln138_fu_581_p2();
    void thread_icmp_ln141_fu_601_p2();
    void thread_icmp_ln144_fu_621_p2();
    void thread_icmp_ln153_1_fu_649_p2();
    void thread_icmp_ln153_fu_643_p2();
    void thread_icmp_ln160_fu_374_p2();
    void thread_icmp_ln165_fu_813_p2();
    void thread_icmp_ln172_fu_706_p2();
    void thread_in_V_V_blk_n();
    void thread_in_V_V_read();
    void thread_inp_fu_725_p2();
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
    void thread_k_x_fu_564_p2();
    void thread_k_y_fu_505_p2();
    void thread_numReps_blk_n();
    void thread_numReps_out_blk_n();
    void thread_numReps_out_din();
    void thread_numReps_out_write();
    void thread_numReps_read();
    void thread_ofm_x_fu_595_p2();
    void thread_ofm_y_fu_615_p2();
    void thread_outElem_V_fu_767_p5();
    void thread_out_V_V_blk_n();
    void thread_out_V_V_din();
    void thread_out_V_V_write();
    void thread_read_block_13_fu_675_p3();
    void thread_read_block_fu_741_p2();
    void thread_select_ln105_fu_462_p3();
    void thread_select_ln144_1_fu_781_p3();
    void thread_select_ln144_fu_627_p3();
    void thread_select_ln160_fu_667_p3();
    void thread_select_ln172_fu_712_p3();
    void thread_shl_ln_fu_525_p3();
    void thread_trunc_ln105_fu_470_p1();
    void thread_trunc_ln124_6_fu_752_p1();
    void thread_trunc_ln124_fu_501_p1();
    void thread_trunc_ln128_5_fu_515_p1();
    void thread_trunc_ln128_fu_511_p1();
    void thread_trunc_ln321_20_fu_800_p1();
    void thread_trunc_ln321_fu_847_p1();
    void thread_zext_ln110_fu_839_p1();
    void thread_zext_ln129_fu_539_p1();
    void thread_zext_ln156_fu_792_p1();
    void thread_zext_ln160_fu_683_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
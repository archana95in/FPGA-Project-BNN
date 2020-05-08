// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _Matrix_Vector_Activa_5_HH_
#define _Matrix_Vector_Activa_5_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "BlackBoxJam_mux_6OgC.h"

namespace ap_rtl {

struct Matrix_Vector_Activa_5 : public sc_module {
    // Port declarations 28
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
    sc_in< sc_lv<4> > in_V_V_dout;
    sc_in< sc_logic > in_V_V_empty_n;
    sc_out< sc_logic > in_V_V_read;
    sc_out< sc_lv<1> > out_V_V_din;
    sc_in< sc_logic > out_V_V_full_n;
    sc_out< sc_logic > out_V_V_write;
    sc_in< sc_lv<32> > reps_dout;
    sc_in< sc_logic > reps_empty_n;
    sc_out< sc_logic > reps_read;
    sc_out< sc_lv<32> > reps_out_din;
    sc_in< sc_logic > reps_out_full_n;
    sc_out< sc_logic > reps_out_write;
    sc_out< sc_lv<15> > weights6_m_weights_V_address0;
    sc_out< sc_logic > weights6_m_weights_V_ce0;
    sc_in< sc_lv<4> > weights6_m_weights_V_q0;
    sc_out< sc_lv<9> > threshs6_m_threshold_address0;
    sc_out< sc_logic > threshs6_m_threshold_ce0;
    sc_in< sc_lv<16> > threshs6_m_threshold_q0;


    // Module declarations
    Matrix_Vector_Activa_5(sc_module_name name);
    SC_HAS_PROCESS(Matrix_Vector_Activa_5);

    ~Matrix_Vector_Activa_5();

    sc_trace_file* mVcdFile;

    BlackBoxJam_mux_6OgC<1,1,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,6,4>* BlackBoxJam_mux_6OgC_U361;
    sc_signal< sc_logic > real_start;
    sc_signal< sc_logic > start_once_reg;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<3> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > internal_ap_ready;
    sc_signal< sc_logic > in_V_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<1> > icmp_ln122_reg_2048;
    sc_signal< sc_lv<1> > icmp_ln125_reg_2057;
    sc_signal< sc_logic > out_V_V_blk_n;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter5;
    sc_signal< sc_lv<1> > icmp_ln159_reg_2075;
    sc_signal< sc_lv<1> > icmp_ln159_reg_2075_pp0_iter4_reg;
    sc_signal< sc_logic > reps_blk_n;
    sc_signal< sc_logic > reps_out_blk_n;
    sc_signal< sc_lv<32> > i_0_i_reg_527;
    sc_signal< sc_lv<32> > shl_ln122_fu_678_p2;
    sc_signal< sc_lv<32> > shl_ln122_reg_2043;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_lv<1> > icmp_ln122_fu_694_p2;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter0;
    sc_signal< bool > ap_predicate_op178_read_state3;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter2;
    sc_signal< bool > ap_block_state5_pp0_stage0_iter3;
    sc_signal< bool > ap_block_state6_pp0_stage0_iter4;
    sc_signal< bool > ap_block_state7_pp0_stage0_iter5;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<32> > i_fu_699_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<1> > icmp_ln125_fu_708_p2;
    sc_signal< sc_lv<4> > inElem_V_4_fu_913_p66;
    sc_signal< sc_lv<4> > inElem_V_4_reg_2061;
    sc_signal< sc_lv<6> > trunc_ln321_fu_1047_p1;
    sc_signal< sc_lv<6> > trunc_ln321_reg_2066;
    sc_signal< sc_lv<1> > icmp_ln137_fu_1054_p2;
    sc_signal< sc_lv<1> > icmp_ln137_reg_2070;
    sc_signal< sc_lv<1> > icmp_ln137_reg_2070_pp0_iter1_reg;
    sc_signal< sc_lv<1> > icmp_ln137_reg_2070_pp0_iter2_reg;
    sc_signal< sc_lv<1> > icmp_ln159_fu_1066_p2;
    sc_signal< sc_lv<1> > icmp_ln159_reg_2075_pp0_iter1_reg;
    sc_signal< sc_lv<1> > icmp_ln159_reg_2075_pp0_iter2_reg;
    sc_signal< sc_lv<1> > icmp_ln159_reg_2075_pp0_iter3_reg;
    sc_signal< sc_lv<32> > nf_assign_load_reg_2079;
    sc_signal< sc_lv<32> > nf_assign_load_reg_2079_pp0_iter1_reg;
    sc_signal< sc_lv<32> > nf_assign_load_reg_2079_pp0_iter2_reg;
    sc_signal< sc_lv<32> > nf_fu_1080_p2;
    sc_signal< sc_lv<32> > nf_reg_2084;
    sc_signal< sc_lv<1> > xor_ln879_1342_fu_1477_p2;
    sc_signal< sc_lv<1> > xor_ln879_1342_reg_2163;
    sc_signal< sc_lv<1> > xor_ln879_1344_fu_1505_p2;
    sc_signal< sc_lv<1> > xor_ln879_1344_reg_2168;
    sc_signal< sc_lv<1> > xor_ln879_1344_reg_2168_pp0_iter3_reg;
    sc_signal< sc_lv<1> > xor_ln879_1346_fu_1533_p2;
    sc_signal< sc_lv<1> > xor_ln879_1346_reg_2173;
    sc_signal< sc_lv<1> > xor_ln879_1348_fu_1561_p2;
    sc_signal< sc_lv<1> > xor_ln879_1348_reg_2178;
    sc_signal< sc_lv<16> > res_V_fu_1570_p3;
    sc_signal< sc_lv<16> > res_V_reg_2183;
    sc_signal< sc_lv<2> > add_ln700_671_fu_1592_p2;
    sc_signal< sc_lv<2> > add_ln700_671_reg_2188;
    sc_signal< sc_lv<16> > add_ln700_672_fu_1613_p2;
    sc_signal< sc_lv<16> > add_ln700_672_reg_2198;
    sc_signal< sc_lv<16> > threshs6_m_threshold_2_reg_2203;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter4;
    sc_signal< sc_lv<4> > ap_phi_reg_pp0_iter0_act_m_val_V_reg_538;
    sc_signal< sc_lv<4> > ap_phi_reg_pp0_iter1_act_m_val_V_reg_538;
    sc_signal< sc_lv<4> > ap_phi_reg_pp0_iter2_act_m_val_V_reg_538;
    sc_signal< sc_lv<64> > zext_ln89_fu_1409_p1;
    sc_signal< sc_lv<64> > zext_ln142_fu_1598_p1;
    sc_signal< sc_lv<16> > accu_V_0_0_0_i_fu_202;
    sc_signal< sc_lv<16> > ap_sig_allocacmp_accu_V_0_0_0_i_load;
    sc_signal< sc_lv<32> > tile_assign_fu_206;
    sc_signal< sc_lv<32> > tile_fu_1414_p2;
    sc_signal< sc_lv<32> > tile_2_fu_1437_p3;
    sc_signal< sc_lv<32> > sf_4_fu_210;
    sc_signal< sc_lv<32> > sf_fu_1060_p2;
    sc_signal< sc_lv<4> > tmp_V_fu_214;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_load;
    sc_signal< sc_lv<4> > tmp_V_175_fu_218;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_175_load;
    sc_signal< sc_lv<4> > tmp_V_176_fu_222;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_176_load;
    sc_signal< sc_lv<4> > tmp_V_177_fu_226;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_177_load;
    sc_signal< sc_lv<4> > tmp_V_178_fu_230;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_178_load;
    sc_signal< sc_lv<4> > tmp_V_179_fu_234;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_179_load;
    sc_signal< sc_lv<4> > tmp_V_180_fu_238;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_180_load;
    sc_signal< sc_lv<4> > tmp_V_181_fu_242;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_181_load;
    sc_signal< sc_lv<4> > tmp_V_182_fu_246;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_182_load;
    sc_signal< sc_lv<4> > tmp_V_183_fu_250;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_183_load;
    sc_signal< sc_lv<4> > tmp_V_184_fu_254;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_184_load;
    sc_signal< sc_lv<4> > tmp_V_185_fu_258;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_185_load;
    sc_signal< sc_lv<4> > tmp_V_186_fu_262;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_186_load;
    sc_signal< sc_lv<4> > tmp_V_187_fu_266;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_187_load;
    sc_signal< sc_lv<4> > tmp_V_188_fu_270;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_188_load;
    sc_signal< sc_lv<4> > tmp_V_189_fu_274;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_189_load;
    sc_signal< sc_lv<4> > tmp_V_190_fu_278;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_190_load;
    sc_signal< sc_lv<4> > tmp_V_191_fu_282;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_191_load;
    sc_signal< sc_lv<4> > tmp_V_192_fu_286;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_192_load;
    sc_signal< sc_lv<4> > tmp_V_193_fu_290;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_193_load;
    sc_signal< sc_lv<4> > tmp_V_194_fu_294;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_194_load;
    sc_signal< sc_lv<4> > tmp_V_195_fu_298;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_195_load;
    sc_signal< sc_lv<4> > tmp_V_196_fu_302;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_196_load;
    sc_signal< sc_lv<4> > tmp_V_197_fu_306;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_197_load;
    sc_signal< sc_lv<4> > tmp_V_198_fu_310;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_198_load;
    sc_signal< sc_lv<4> > tmp_V_199_fu_314;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_199_load;
    sc_signal< sc_lv<4> > tmp_V_200_fu_318;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_200_load;
    sc_signal< sc_lv<4> > tmp_V_201_fu_322;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_201_load;
    sc_signal< sc_lv<4> > tmp_V_202_fu_326;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_202_load;
    sc_signal< sc_lv<4> > tmp_V_203_fu_330;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_203_load;
    sc_signal< sc_lv<4> > tmp_V_204_fu_334;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_204_load;
    sc_signal< sc_lv<4> > tmp_V_205_fu_338;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_205_load;
    sc_signal< sc_lv<4> > tmp_V_206_fu_342;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_206_load;
    sc_signal< sc_lv<4> > tmp_V_207_fu_346;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_207_load;
    sc_signal< sc_lv<4> > tmp_V_208_fu_350;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_208_load;
    sc_signal< sc_lv<4> > tmp_V_209_fu_354;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_209_load;
    sc_signal< sc_lv<4> > tmp_V_210_fu_358;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_210_load;
    sc_signal< sc_lv<4> > tmp_V_211_fu_362;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_211_load;
    sc_signal< sc_lv<4> > tmp_V_212_fu_366;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_212_load;
    sc_signal< sc_lv<4> > tmp_V_213_fu_370;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_213_load;
    sc_signal< sc_lv<4> > tmp_V_214_fu_374;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_214_load;
    sc_signal< sc_lv<4> > tmp_V_215_fu_378;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_215_load;
    sc_signal< sc_lv<4> > tmp_V_216_fu_382;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_216_load;
    sc_signal< sc_lv<4> > tmp_V_217_fu_386;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_217_load;
    sc_signal< sc_lv<4> > tmp_V_218_fu_390;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_218_load;
    sc_signal< sc_lv<4> > tmp_V_219_fu_394;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_219_load;
    sc_signal< sc_lv<4> > tmp_V_220_fu_398;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_220_load;
    sc_signal< sc_lv<4> > tmp_V_221_fu_402;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_221_load;
    sc_signal< sc_lv<4> > tmp_V_222_fu_406;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_222_load;
    sc_signal< sc_lv<4> > tmp_V_223_fu_410;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_223_load;
    sc_signal< sc_lv<4> > tmp_V_224_fu_414;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_224_load;
    sc_signal< sc_lv<4> > tmp_V_225_fu_418;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_225_load;
    sc_signal< sc_lv<4> > tmp_V_226_fu_422;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_226_load;
    sc_signal< sc_lv<4> > tmp_V_227_fu_426;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_227_load;
    sc_signal< sc_lv<4> > tmp_V_228_fu_430;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_228_load;
    sc_signal< sc_lv<4> > tmp_V_229_fu_434;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_229_load;
    sc_signal< sc_lv<4> > tmp_V_230_fu_438;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_230_load;
    sc_signal< sc_lv<4> > tmp_V_231_fu_442;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_231_load;
    sc_signal< sc_lv<4> > tmp_V_232_fu_446;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_232_load;
    sc_signal< sc_lv<4> > tmp_V_233_fu_450;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_233_load;
    sc_signal< sc_lv<4> > tmp_V_234_fu_454;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_234_load;
    sc_signal< sc_lv<4> > tmp_V_235_fu_458;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_235_load;
    sc_signal< sc_lv<4> > tmp_V_236_fu_462;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_236_load;
    sc_signal< sc_lv<4> > tmp_V_237_fu_466;
    sc_signal< sc_lv<4> > ap_sig_allocacmp_tmp_V_237_load;
    sc_signal< sc_lv<32> > nf_assign_fu_470;
    sc_signal< sc_lv<32> > nf_2_fu_1430_p3;
    sc_signal< sc_lv<32> > ap_sig_allocacmp_nf_assign_load_4;
    sc_signal< sc_lv<32> > ap_sig_allocacmp_nf_assign_load;
    sc_signal< bool > ap_block_pp0_stage0_01001;
    sc_signal< sc_lv<6> > inElem_V_4_fu_913_p65;
    sc_signal< sc_lv<1> > icmp_ln173_fu_1425_p2;
    sc_signal< sc_lv<1> > p_Result_9_i_fu_1463_p3;
    sc_signal< sc_lv<1> > p_Result_i_fu_1455_p3;
    sc_signal< sc_lv<1> > xor_ln879_fu_1471_p2;
    sc_signal< sc_lv<1> > p_Result_9_1_i_fu_1491_p3;
    sc_signal< sc_lv<1> > p_Result_1_i_fu_1483_p3;
    sc_signal< sc_lv<1> > xor_ln879_1343_fu_1499_p2;
    sc_signal< sc_lv<1> > p_Result_9_2_i_fu_1519_p3;
    sc_signal< sc_lv<1> > p_Result_2_i_fu_1511_p3;
    sc_signal< sc_lv<1> > xor_ln879_1345_fu_1527_p2;
    sc_signal< sc_lv<1> > p_Result_9_3_i_fu_1547_p3;
    sc_signal< sc_lv<1> > p_Result_3_i_fu_1539_p3;
    sc_signal< sc_lv<1> > xor_ln879_1347_fu_1555_p2;
    sc_signal< sc_lv<2> > zext_ln170_fu_1577_p1;
    sc_signal< sc_lv<2> > zext_ln700_586_fu_1583_p1;
    sc_signal< sc_lv<2> > add_ln700_670_fu_1586_p2;
    sc_signal< sc_lv<2> > zext_ln170_628_fu_1580_p1;
    sc_signal< sc_lv<16> > zext_ln700_fu_1602_p1;
    sc_signal< sc_lv<16> > zext_ln700_587_fu_1610_p1;
    sc_signal< sc_lv<16> > add_ln700_fu_1605_p2;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<3> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<3> ap_ST_fsm_state1;
    static const sc_lv<3> ap_ST_fsm_pp0_stage0;
    static const sc_lv<3> ap_ST_fsm_state8;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<6> ap_const_lv6_3F;
    static const sc_lv<6> ap_const_lv6_3E;
    static const sc_lv<6> ap_const_lv6_3D;
    static const sc_lv<6> ap_const_lv6_3C;
    static const sc_lv<6> ap_const_lv6_3B;
    static const sc_lv<6> ap_const_lv6_3A;
    static const sc_lv<6> ap_const_lv6_39;
    static const sc_lv<6> ap_const_lv6_38;
    static const sc_lv<6> ap_const_lv6_37;
    static const sc_lv<6> ap_const_lv6_36;
    static const sc_lv<6> ap_const_lv6_35;
    static const sc_lv<6> ap_const_lv6_34;
    static const sc_lv<6> ap_const_lv6_33;
    static const sc_lv<6> ap_const_lv6_32;
    static const sc_lv<6> ap_const_lv6_31;
    static const sc_lv<6> ap_const_lv6_30;
    static const sc_lv<6> ap_const_lv6_2F;
    static const sc_lv<6> ap_const_lv6_2E;
    static const sc_lv<6> ap_const_lv6_2D;
    static const sc_lv<6> ap_const_lv6_2C;
    static const sc_lv<6> ap_const_lv6_2B;
    static const sc_lv<6> ap_const_lv6_2A;
    static const sc_lv<6> ap_const_lv6_29;
    static const sc_lv<6> ap_const_lv6_28;
    static const sc_lv<6> ap_const_lv6_27;
    static const sc_lv<6> ap_const_lv6_26;
    static const sc_lv<6> ap_const_lv6_25;
    static const sc_lv<6> ap_const_lv6_24;
    static const sc_lv<6> ap_const_lv6_23;
    static const sc_lv<6> ap_const_lv6_22;
    static const sc_lv<6> ap_const_lv6_21;
    static const sc_lv<6> ap_const_lv6_20;
    static const sc_lv<6> ap_const_lv6_1F;
    static const sc_lv<6> ap_const_lv6_1E;
    static const sc_lv<6> ap_const_lv6_1D;
    static const sc_lv<6> ap_const_lv6_1C;
    static const sc_lv<6> ap_const_lv6_1B;
    static const sc_lv<6> ap_const_lv6_1A;
    static const sc_lv<6> ap_const_lv6_19;
    static const sc_lv<6> ap_const_lv6_18;
    static const sc_lv<6> ap_const_lv6_17;
    static const sc_lv<6> ap_const_lv6_16;
    static const sc_lv<6> ap_const_lv6_15;
    static const sc_lv<6> ap_const_lv6_14;
    static const sc_lv<6> ap_const_lv6_13;
    static const sc_lv<6> ap_const_lv6_12;
    static const sc_lv<6> ap_const_lv6_11;
    static const sc_lv<6> ap_const_lv6_10;
    static const sc_lv<6> ap_const_lv6_F;
    static const sc_lv<6> ap_const_lv6_E;
    static const sc_lv<6> ap_const_lv6_D;
    static const sc_lv<6> ap_const_lv6_C;
    static const sc_lv<6> ap_const_lv6_B;
    static const sc_lv<6> ap_const_lv6_A;
    static const sc_lv<6> ap_const_lv6_9;
    static const sc_lv<6> ap_const_lv6_8;
    static const sc_lv<6> ap_const_lv6_7;
    static const sc_lv<6> ap_const_lv6_6;
    static const sc_lv<6> ap_const_lv6_5;
    static const sc_lv<6> ap_const_lv6_4;
    static const sc_lv<6> ap_const_lv6_3;
    static const sc_lv<6> ap_const_lv6_2;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_40;
    static const sc_lv<32> ap_const_lv32_200;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<4> ap_const_lv4_2;
    static const sc_lv<4> ap_const_lv4_3;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_lv<32> ap_const_lv32_2;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_add_ln700_670_fu_1586_p2();
    void thread_add_ln700_671_fu_1592_p2();
    void thread_add_ln700_672_fu_1613_p2();
    void thread_add_ln700_fu_1605_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state8();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_01001();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state1();
    void thread_ap_block_state2_pp0_stage0_iter0();
    void thread_ap_block_state3_pp0_stage0_iter1();
    void thread_ap_block_state4_pp0_stage0_iter2();
    void thread_ap_block_state5_pp0_stage0_iter3();
    void thread_ap_block_state6_pp0_stage0_iter4();
    void thread_ap_block_state7_pp0_stage0_iter5();
    void thread_ap_condition_pp0_exit_iter0_state2();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_phi_reg_pp0_iter0_act_m_val_V_reg_538();
    void thread_ap_predicate_op178_read_state3();
    void thread_ap_ready();
    void thread_ap_sig_allocacmp_accu_V_0_0_0_i_load();
    void thread_ap_sig_allocacmp_nf_assign_load();
    void thread_ap_sig_allocacmp_nf_assign_load_4();
    void thread_ap_sig_allocacmp_tmp_V_175_load();
    void thread_ap_sig_allocacmp_tmp_V_176_load();
    void thread_ap_sig_allocacmp_tmp_V_177_load();
    void thread_ap_sig_allocacmp_tmp_V_178_load();
    void thread_ap_sig_allocacmp_tmp_V_179_load();
    void thread_ap_sig_allocacmp_tmp_V_180_load();
    void thread_ap_sig_allocacmp_tmp_V_181_load();
    void thread_ap_sig_allocacmp_tmp_V_182_load();
    void thread_ap_sig_allocacmp_tmp_V_183_load();
    void thread_ap_sig_allocacmp_tmp_V_184_load();
    void thread_ap_sig_allocacmp_tmp_V_185_load();
    void thread_ap_sig_allocacmp_tmp_V_186_load();
    void thread_ap_sig_allocacmp_tmp_V_187_load();
    void thread_ap_sig_allocacmp_tmp_V_188_load();
    void thread_ap_sig_allocacmp_tmp_V_189_load();
    void thread_ap_sig_allocacmp_tmp_V_190_load();
    void thread_ap_sig_allocacmp_tmp_V_191_load();
    void thread_ap_sig_allocacmp_tmp_V_192_load();
    void thread_ap_sig_allocacmp_tmp_V_193_load();
    void thread_ap_sig_allocacmp_tmp_V_194_load();
    void thread_ap_sig_allocacmp_tmp_V_195_load();
    void thread_ap_sig_allocacmp_tmp_V_196_load();
    void thread_ap_sig_allocacmp_tmp_V_197_load();
    void thread_ap_sig_allocacmp_tmp_V_198_load();
    void thread_ap_sig_allocacmp_tmp_V_199_load();
    void thread_ap_sig_allocacmp_tmp_V_200_load();
    void thread_ap_sig_allocacmp_tmp_V_201_load();
    void thread_ap_sig_allocacmp_tmp_V_202_load();
    void thread_ap_sig_allocacmp_tmp_V_203_load();
    void thread_ap_sig_allocacmp_tmp_V_204_load();
    void thread_ap_sig_allocacmp_tmp_V_205_load();
    void thread_ap_sig_allocacmp_tmp_V_206_load();
    void thread_ap_sig_allocacmp_tmp_V_207_load();
    void thread_ap_sig_allocacmp_tmp_V_208_load();
    void thread_ap_sig_allocacmp_tmp_V_209_load();
    void thread_ap_sig_allocacmp_tmp_V_210_load();
    void thread_ap_sig_allocacmp_tmp_V_211_load();
    void thread_ap_sig_allocacmp_tmp_V_212_load();
    void thread_ap_sig_allocacmp_tmp_V_213_load();
    void thread_ap_sig_allocacmp_tmp_V_214_load();
    void thread_ap_sig_allocacmp_tmp_V_215_load();
    void thread_ap_sig_allocacmp_tmp_V_216_load();
    void thread_ap_sig_allocacmp_tmp_V_217_load();
    void thread_ap_sig_allocacmp_tmp_V_218_load();
    void thread_ap_sig_allocacmp_tmp_V_219_load();
    void thread_ap_sig_allocacmp_tmp_V_220_load();
    void thread_ap_sig_allocacmp_tmp_V_221_load();
    void thread_ap_sig_allocacmp_tmp_V_222_load();
    void thread_ap_sig_allocacmp_tmp_V_223_load();
    void thread_ap_sig_allocacmp_tmp_V_224_load();
    void thread_ap_sig_allocacmp_tmp_V_225_load();
    void thread_ap_sig_allocacmp_tmp_V_226_load();
    void thread_ap_sig_allocacmp_tmp_V_227_load();
    void thread_ap_sig_allocacmp_tmp_V_228_load();
    void thread_ap_sig_allocacmp_tmp_V_229_load();
    void thread_ap_sig_allocacmp_tmp_V_230_load();
    void thread_ap_sig_allocacmp_tmp_V_231_load();
    void thread_ap_sig_allocacmp_tmp_V_232_load();
    void thread_ap_sig_allocacmp_tmp_V_233_load();
    void thread_ap_sig_allocacmp_tmp_V_234_load();
    void thread_ap_sig_allocacmp_tmp_V_235_load();
    void thread_ap_sig_allocacmp_tmp_V_236_load();
    void thread_ap_sig_allocacmp_tmp_V_237_load();
    void thread_ap_sig_allocacmp_tmp_V_load();
    void thread_i_fu_699_p2();
    void thread_icmp_ln122_fu_694_p2();
    void thread_icmp_ln125_fu_708_p2();
    void thread_icmp_ln137_fu_1054_p2();
    void thread_icmp_ln159_fu_1066_p2();
    void thread_icmp_ln173_fu_1425_p2();
    void thread_inElem_V_4_fu_913_p65();
    void thread_in_V_V_blk_n();
    void thread_in_V_V_read();
    void thread_internal_ap_ready();
    void thread_nf_2_fu_1430_p3();
    void thread_nf_fu_1080_p2();
    void thread_out_V_V_blk_n();
    void thread_out_V_V_din();
    void thread_out_V_V_write();
    void thread_p_Result_1_i_fu_1483_p3();
    void thread_p_Result_2_i_fu_1511_p3();
    void thread_p_Result_3_i_fu_1539_p3();
    void thread_p_Result_9_1_i_fu_1491_p3();
    void thread_p_Result_9_2_i_fu_1519_p3();
    void thread_p_Result_9_3_i_fu_1547_p3();
    void thread_p_Result_9_i_fu_1463_p3();
    void thread_p_Result_i_fu_1455_p3();
    void thread_real_start();
    void thread_reps_blk_n();
    void thread_reps_out_blk_n();
    void thread_reps_out_din();
    void thread_reps_out_write();
    void thread_reps_read();
    void thread_res_V_fu_1570_p3();
    void thread_sf_fu_1060_p2();
    void thread_shl_ln122_fu_678_p2();
    void thread_start_out();
    void thread_start_write();
    void thread_threshs6_m_threshold_address0();
    void thread_threshs6_m_threshold_ce0();
    void thread_tile_2_fu_1437_p3();
    void thread_tile_fu_1414_p2();
    void thread_trunc_ln321_fu_1047_p1();
    void thread_weights6_m_weights_V_address0();
    void thread_weights6_m_weights_V_ce0();
    void thread_xor_ln879_1342_fu_1477_p2();
    void thread_xor_ln879_1343_fu_1499_p2();
    void thread_xor_ln879_1344_fu_1505_p2();
    void thread_xor_ln879_1345_fu_1527_p2();
    void thread_xor_ln879_1346_fu_1533_p2();
    void thread_xor_ln879_1347_fu_1555_p2();
    void thread_xor_ln879_1348_fu_1561_p2();
    void thread_xor_ln879_fu_1471_p2();
    void thread_zext_ln142_fu_1598_p1();
    void thread_zext_ln170_628_fu_1580_p1();
    void thread_zext_ln170_fu_1577_p1();
    void thread_zext_ln700_586_fu_1583_p1();
    void thread_zext_ln700_587_fu_1610_p1();
    void thread_zext_ln700_fu_1602_p1();
    void thread_zext_ln89_fu_1409_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif

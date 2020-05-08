-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
-- Version: 2019.2
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity StreamingDataWidthCo_12 is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    start_full_n : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_continue : IN STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    start_out : OUT STD_LOGIC;
    start_write : OUT STD_LOGIC;
    in_V_V_dout : IN STD_LOGIC_VECTOR (191 downto 0);
    in_V_V_empty_n : IN STD_LOGIC;
    in_V_V_read : OUT STD_LOGIC;
    out_V_V_din : OUT STD_LOGIC_VECTOR (23 downto 0);
    out_V_V_full_n : IN STD_LOGIC;
    out_V_V_write : OUT STD_LOGIC;
    numReps_dout : IN STD_LOGIC_VECTOR (31 downto 0);
    numReps_empty_n : IN STD_LOGIC;
    numReps_read : OUT STD_LOGIC;
    numReps_out_din : OUT STD_LOGIC_VECTOR (31 downto 0);
    numReps_out_full_n : IN STD_LOGIC;
    numReps_out_write : OUT STD_LOGIC );
end;


architecture behav of StreamingDataWidthCo_12 is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (2 downto 0) := "001";
    constant ap_ST_fsm_pp0_stage0 : STD_LOGIC_VECTOR (2 downto 0) := "010";
    constant ap_ST_fsm_state6 : STD_LOGIC_VECTOR (2 downto 0) := "100";
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_boolean_0 : BOOLEAN := false;
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv168_lc_1 : STD_LOGIC_VECTOR (167 downto 0) := "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000";
    constant ap_const_lv32_A : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001010";
    constant ap_const_lv32_8 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001000";
    constant ap_const_lv32_18 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011000";
    constant ap_const_lv32_BF : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000010111111";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";

    signal real_start : STD_LOGIC;
    signal start_once_reg : STD_LOGIC := '0';
    signal ap_done_reg : STD_LOGIC := '0';
    signal ap_CS_fsm : STD_LOGIC_VECTOR (2 downto 0) := "001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal internal_ap_ready : STD_LOGIC;
    signal in_V_V_blk_n : STD_LOGIC;
    signal ap_enable_reg_pp0_iter2 : STD_LOGIC := '0';
    signal ap_block_pp0_stage0 : BOOLEAN;
    signal icmp_ln268_reg_189 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln268_reg_189_pp0_iter1_reg : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln271_reg_208 : STD_LOGIC_VECTOR (0 downto 0);
    signal out_V_V_blk_n : STD_LOGIC;
    signal ap_enable_reg_pp0_iter3 : STD_LOGIC := '0';
    signal icmp_ln268_reg_189_pp0_iter2_reg : STD_LOGIC_VECTOR (0 downto 0);
    signal numReps_blk_n : STD_LOGIC;
    signal numReps_out_blk_n : STD_LOGIC;
    signal p_025_0_i_reg_79 : STD_LOGIC_VECTOR (167 downto 0);
    signal o_0_i_reg_91 : STD_LOGIC_VECTOR (31 downto 0);
    signal t_0_i_reg_103 : STD_LOGIC_VECTOR (31 downto 0);
    signal shl_ln268_fu_123_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal shl_ln268_reg_184 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_block_state1 : BOOLEAN;
    signal icmp_ln268_fu_129_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_CS_fsm_pp0_stage0 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_pp0_stage0 : signal is "none";
    signal ap_block_state2_pp0_stage0_iter0 : BOOLEAN;
    signal ap_block_state3_pp0_stage0_iter1 : BOOLEAN;
    signal ap_predicate_op25_read_state4 : BOOLEAN;
    signal ap_block_state4_pp0_stage0_iter2 : BOOLEAN;
    signal ap_block_state5_pp0_stage0_iter3 : BOOLEAN;
    signal ap_block_pp0_stage0_11001 : BOOLEAN;
    signal t_fu_134_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_enable_reg_pp0_iter0 : STD_LOGIC := '0';
    signal o_fu_140_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal o_reg_198 : STD_LOGIC_VECTOR (31 downto 0);
    signal icmp_ln282_fu_146_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln282_reg_203 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln271_fu_152_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln271_reg_208_pp0_iter2_reg : STD_LOGIC_VECTOR (0 downto 0);
    signal select_ln282_fu_158_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_enable_reg_pp0_iter1 : STD_LOGIC := '0';
    signal ap_block_pp0_stage0_subdone : BOOLEAN;
    signal ap_condition_pp0_exit_iter0_state2 : STD_LOGIC;
    signal ap_phi_mux_o_0_i_phi_fu_95_p4 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_phi_mux_p_Val2_s_phi_fu_117_p4 : STD_LOGIC_VECTOR (191 downto 0);
    signal ap_phi_reg_pp0_iter0_p_Val2_s_reg_114 : STD_LOGIC_VECTOR (191 downto 0);
    signal ap_phi_reg_pp0_iter1_p_Val2_s_reg_114 : STD_LOGIC_VECTOR (191 downto 0);
    signal ap_phi_reg_pp0_iter2_p_Val2_s_reg_114 : STD_LOGIC_VECTOR (191 downto 0);
    signal ap_phi_reg_pp0_iter3_p_Val2_s_reg_114 : STD_LOGIC_VECTOR (191 downto 0);
    signal zext_ln268_fu_164_p1 : STD_LOGIC_VECTOR (191 downto 0);
    signal ap_block_pp0_stage0_01001 : BOOLEAN;
    signal ap_CS_fsm_state6 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state6 : signal is "none";
    signal ap_NS_fsm : STD_LOGIC_VECTOR (2 downto 0);
    signal ap_idle_pp0 : STD_LOGIC;
    signal ap_enable_pp0 : STD_LOGIC;


begin




    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_state1;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    ap_done_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_done_reg <= ap_const_logic_0;
            else
                if ((ap_continue = ap_const_logic_1)) then 
                    ap_done_reg <= ap_const_logic_0;
                elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
                    ap_done_reg <= ap_const_logic_1;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter0_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter0 <= ap_const_logic_0;
            else
                if (((ap_const_logic_1 = ap_condition_pp0_exit_iter0_state2) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone))) then 
                    ap_enable_reg_pp0_iter0 <= ap_const_logic_0;
                elsif ((not(((real_start = ap_const_logic_0) or (numReps_out_full_n = ap_const_logic_0) or (numReps_empty_n = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                    ap_enable_reg_pp0_iter0 <= ap_const_logic_1;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter1_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter1 <= ap_const_logic_0;
            else
                if ((ap_const_boolean_0 = ap_block_pp0_stage0_subdone)) then
                    if ((ap_const_logic_1 = ap_condition_pp0_exit_iter0_state2)) then 
                        ap_enable_reg_pp0_iter1 <= (ap_const_logic_1 xor ap_condition_pp0_exit_iter0_state2);
                    elsif ((ap_const_boolean_1 = ap_const_boolean_1)) then 
                        ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
                    end if;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter2_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter2 <= ap_const_logic_0;
            else
                if ((ap_const_boolean_0 = ap_block_pp0_stage0_subdone)) then 
                    ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter3_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter3 <= ap_const_logic_0;
            else
                if ((ap_const_boolean_0 = ap_block_pp0_stage0_subdone)) then 
                    ap_enable_reg_pp0_iter3 <= ap_enable_reg_pp0_iter2;
                elsif ((not(((real_start = ap_const_logic_0) or (numReps_out_full_n = ap_const_logic_0) or (numReps_empty_n = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                    ap_enable_reg_pp0_iter3 <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    start_once_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                start_once_reg <= ap_const_logic_0;
            else
                if (((internal_ap_ready = ap_const_logic_0) and (real_start = ap_const_logic_1))) then 
                    start_once_reg <= ap_const_logic_1;
                elsif ((internal_ap_ready = ap_const_logic_1)) then 
                    start_once_reg <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    ap_phi_reg_pp0_iter3_p_Val2_s_reg_114_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_enable_reg_pp0_iter2 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then
                if (((icmp_ln271_reg_208 = ap_const_lv1_1) and (icmp_ln268_reg_189_pp0_iter1_reg = ap_const_lv1_0))) then 
                    ap_phi_reg_pp0_iter3_p_Val2_s_reg_114 <= in_V_V_dout;
                elsif ((ap_const_boolean_1 = ap_const_boolean_1)) then 
                    ap_phi_reg_pp0_iter3_p_Val2_s_reg_114 <= ap_phi_reg_pp0_iter2_p_Val2_s_reg_114;
                end if;
            end if; 
        end if;
    end process;

    o_0_i_reg_91_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln268_reg_189 = ap_const_lv1_0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then 
                o_0_i_reg_91 <= select_ln282_fu_158_p3;
            elsif ((not(((real_start = ap_const_logic_0) or (numReps_out_full_n = ap_const_logic_0) or (numReps_empty_n = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                o_0_i_reg_91 <= ap_const_lv32_0;
            end if; 
        end if;
    end process;

    p_025_0_i_reg_79_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln268_reg_189_pp0_iter2_reg = ap_const_lv1_0) and (ap_enable_reg_pp0_iter3 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then 
                p_025_0_i_reg_79 <= ap_phi_mux_p_Val2_s_phi_fu_117_p4(191 downto 24);
            elsif ((not(((real_start = ap_const_logic_0) or (numReps_out_full_n = ap_const_logic_0) or (numReps_empty_n = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                p_025_0_i_reg_79 <= ap_const_lv168_lc_1;
            end if; 
        end if;
    end process;

    t_0_i_reg_103_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln268_fu_129_p2 = ap_const_lv1_0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then 
                t_0_i_reg_103 <= t_fu_134_p2;
            elsif ((not(((real_start = ap_const_logic_0) or (numReps_out_full_n = ap_const_logic_0) or (numReps_empty_n = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                t_0_i_reg_103 <= ap_const_lv32_0;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then
                ap_phi_reg_pp0_iter1_p_Val2_s_reg_114 <= ap_phi_reg_pp0_iter0_p_Val2_s_reg_114;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then
                ap_phi_reg_pp0_iter2_p_Val2_s_reg_114 <= ap_phi_reg_pp0_iter1_p_Val2_s_reg_114;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then
                icmp_ln268_reg_189 <= icmp_ln268_fu_129_p2;
                icmp_ln268_reg_189_pp0_iter1_reg <= icmp_ln268_reg_189;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_boolean_0 = ap_block_pp0_stage0_11001)) then
                icmp_ln268_reg_189_pp0_iter2_reg <= icmp_ln268_reg_189_pp0_iter1_reg;
                icmp_ln271_reg_208_pp0_iter2_reg <= icmp_ln271_reg_208;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln268_reg_189 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then
                icmp_ln271_reg_208 <= icmp_ln271_fu_152_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln268_fu_129_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then
                icmp_ln282_reg_203 <= icmp_ln282_fu_146_p2;
                o_reg_198 <= o_fu_140_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((not(((real_start = ap_const_logic_0) or (numReps_out_full_n = ap_const_logic_0) or (numReps_empty_n = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then
                    shl_ln268_reg_184(31 downto 10) <= shl_ln268_fu_123_p2(31 downto 10);
            end if;
        end if;
    end process;
    shl_ln268_reg_184(9 downto 0) <= "0000000000";

    ap_NS_fsm_assign_proc : process (real_start, ap_done_reg, ap_CS_fsm, ap_CS_fsm_state1, numReps_empty_n, numReps_out_full_n, ap_enable_reg_pp0_iter2, ap_enable_reg_pp0_iter3, icmp_ln268_fu_129_p2, ap_enable_reg_pp0_iter0, ap_enable_reg_pp0_iter1, ap_block_pp0_stage0_subdone)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if ((not(((real_start = ap_const_logic_0) or (numReps_out_full_n = ap_const_logic_0) or (numReps_empty_n = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_pp0_stage0 => 
                if ((not(((icmp_ln268_fu_129_p2 = ap_const_lv1_1) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone) and (ap_enable_reg_pp0_iter1 = ap_const_logic_0))) and not(((ap_enable_reg_pp0_iter2 = ap_const_logic_0) and (ap_enable_reg_pp0_iter3 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone))))) then
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
                elsif ((((ap_enable_reg_pp0_iter2 = ap_const_logic_0) and (ap_enable_reg_pp0_iter3 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone)) or ((icmp_ln268_fu_129_p2 = ap_const_lv1_1) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone) and (ap_enable_reg_pp0_iter1 = ap_const_logic_0)))) then
                    ap_NS_fsm <= ap_ST_fsm_state6;
                else
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
                end if;
            when ap_ST_fsm_state6 => 
                ap_NS_fsm <= ap_ST_fsm_state1;
            when others =>  
                ap_NS_fsm <= "XXX";
        end case;
    end process;
    ap_CS_fsm_pp0_stage0 <= ap_CS_fsm(1);
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state6 <= ap_CS_fsm(2);
        ap_block_pp0_stage0 <= not((ap_const_boolean_1 = ap_const_boolean_1));

    ap_block_pp0_stage0_01001_assign_proc : process(in_V_V_empty_n, out_V_V_full_n, ap_enable_reg_pp0_iter2, ap_enable_reg_pp0_iter3, icmp_ln268_reg_189_pp0_iter2_reg, ap_predicate_op25_read_state4)
    begin
                ap_block_pp0_stage0_01001 <= (((icmp_ln268_reg_189_pp0_iter2_reg = ap_const_lv1_0) and (out_V_V_full_n = ap_const_logic_0) and (ap_enable_reg_pp0_iter3 = ap_const_logic_1)) or ((in_V_V_empty_n = ap_const_logic_0) and (ap_enable_reg_pp0_iter2 = ap_const_logic_1) and (ap_predicate_op25_read_state4 = ap_const_boolean_1)));
    end process;


    ap_block_pp0_stage0_11001_assign_proc : process(in_V_V_empty_n, out_V_V_full_n, ap_enable_reg_pp0_iter2, ap_enable_reg_pp0_iter3, icmp_ln268_reg_189_pp0_iter2_reg, ap_predicate_op25_read_state4)
    begin
                ap_block_pp0_stage0_11001 <= (((icmp_ln268_reg_189_pp0_iter2_reg = ap_const_lv1_0) and (out_V_V_full_n = ap_const_logic_0) and (ap_enable_reg_pp0_iter3 = ap_const_logic_1)) or ((in_V_V_empty_n = ap_const_logic_0) and (ap_enable_reg_pp0_iter2 = ap_const_logic_1) and (ap_predicate_op25_read_state4 = ap_const_boolean_1)));
    end process;


    ap_block_pp0_stage0_subdone_assign_proc : process(in_V_V_empty_n, out_V_V_full_n, ap_enable_reg_pp0_iter2, ap_enable_reg_pp0_iter3, icmp_ln268_reg_189_pp0_iter2_reg, ap_predicate_op25_read_state4)
    begin
                ap_block_pp0_stage0_subdone <= (((icmp_ln268_reg_189_pp0_iter2_reg = ap_const_lv1_0) and (out_V_V_full_n = ap_const_logic_0) and (ap_enable_reg_pp0_iter3 = ap_const_logic_1)) or ((in_V_V_empty_n = ap_const_logic_0) and (ap_enable_reg_pp0_iter2 = ap_const_logic_1) and (ap_predicate_op25_read_state4 = ap_const_boolean_1)));
    end process;


    ap_block_state1_assign_proc : process(real_start, ap_done_reg, numReps_empty_n, numReps_out_full_n)
    begin
                ap_block_state1 <= ((real_start = ap_const_logic_0) or (numReps_out_full_n = ap_const_logic_0) or (numReps_empty_n = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1));
    end process;

        ap_block_state2_pp0_stage0_iter0 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state3_pp0_stage0_iter1 <= not((ap_const_boolean_1 = ap_const_boolean_1));

    ap_block_state4_pp0_stage0_iter2_assign_proc : process(in_V_V_empty_n, ap_predicate_op25_read_state4)
    begin
                ap_block_state4_pp0_stage0_iter2 <= ((in_V_V_empty_n = ap_const_logic_0) and (ap_predicate_op25_read_state4 = ap_const_boolean_1));
    end process;


    ap_block_state5_pp0_stage0_iter3_assign_proc : process(out_V_V_full_n, icmp_ln268_reg_189_pp0_iter2_reg)
    begin
                ap_block_state5_pp0_stage0_iter3 <= ((icmp_ln268_reg_189_pp0_iter2_reg = ap_const_lv1_0) and (out_V_V_full_n = ap_const_logic_0));
    end process;


    ap_condition_pp0_exit_iter0_state2_assign_proc : process(icmp_ln268_fu_129_p2)
    begin
        if ((icmp_ln268_fu_129_p2 = ap_const_lv1_1)) then 
            ap_condition_pp0_exit_iter0_state2 <= ap_const_logic_1;
        else 
            ap_condition_pp0_exit_iter0_state2 <= ap_const_logic_0;
        end if; 
    end process;


    ap_done_assign_proc : process(ap_done_reg, ap_CS_fsm_state6)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_done_reg;
        end if; 
    end process;

    ap_enable_pp0 <= (ap_idle_pp0 xor ap_const_logic_1);

    ap_idle_assign_proc : process(real_start, ap_CS_fsm_state1)
    begin
        if (((real_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_pp0_assign_proc : process(ap_enable_reg_pp0_iter2, ap_enable_reg_pp0_iter3, ap_enable_reg_pp0_iter0, ap_enable_reg_pp0_iter1)
    begin
        if (((ap_enable_reg_pp0_iter3 = ap_const_logic_0) and (ap_enable_reg_pp0_iter2 = ap_const_logic_0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_0))) then 
            ap_idle_pp0 <= ap_const_logic_1;
        else 
            ap_idle_pp0 <= ap_const_logic_0;
        end if; 
    end process;


    ap_phi_mux_o_0_i_phi_fu_95_p4_assign_proc : process(ap_block_pp0_stage0, icmp_ln268_reg_189, o_0_i_reg_91, ap_CS_fsm_pp0_stage0, select_ln282_fu_158_p3, ap_enable_reg_pp0_iter1)
    begin
        if (((icmp_ln268_reg_189 = ap_const_lv1_0) and (ap_const_boolean_0 = ap_block_pp0_stage0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            ap_phi_mux_o_0_i_phi_fu_95_p4 <= select_ln282_fu_158_p3;
        else 
            ap_phi_mux_o_0_i_phi_fu_95_p4 <= o_0_i_reg_91;
        end if; 
    end process;


    ap_phi_mux_p_Val2_s_phi_fu_117_p4_assign_proc : process(icmp_ln268_reg_189_pp0_iter2_reg, icmp_ln271_reg_208_pp0_iter2_reg, ap_phi_reg_pp0_iter3_p_Val2_s_reg_114, zext_ln268_fu_164_p1)
    begin
        if (((icmp_ln268_reg_189_pp0_iter2_reg = ap_const_lv1_0) and (icmp_ln271_reg_208_pp0_iter2_reg = ap_const_lv1_0))) then 
            ap_phi_mux_p_Val2_s_phi_fu_117_p4 <= zext_ln268_fu_164_p1;
        else 
            ap_phi_mux_p_Val2_s_phi_fu_117_p4 <= ap_phi_reg_pp0_iter3_p_Val2_s_reg_114;
        end if; 
    end process;

    ap_phi_reg_pp0_iter0_p_Val2_s_reg_114 <= "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";

    ap_predicate_op25_read_state4_assign_proc : process(icmp_ln268_reg_189_pp0_iter1_reg, icmp_ln271_reg_208)
    begin
                ap_predicate_op25_read_state4 <= ((icmp_ln271_reg_208 = ap_const_lv1_1) and (icmp_ln268_reg_189_pp0_iter1_reg = ap_const_lv1_0));
    end process;

    ap_ready <= internal_ap_ready;
    icmp_ln268_fu_129_p2 <= "1" when (t_0_i_reg_103 = shl_ln268_reg_184) else "0";
    icmp_ln271_fu_152_p2 <= "1" when (o_0_i_reg_91 = ap_const_lv32_0) else "0";
    icmp_ln282_fu_146_p2 <= "1" when (o_fu_140_p2 = ap_const_lv32_8) else "0";

    in_V_V_blk_n_assign_proc : process(in_V_V_empty_n, ap_enable_reg_pp0_iter2, ap_block_pp0_stage0, icmp_ln268_reg_189_pp0_iter1_reg, icmp_ln271_reg_208)
    begin
        if (((icmp_ln271_reg_208 = ap_const_lv1_1) and (icmp_ln268_reg_189_pp0_iter1_reg = ap_const_lv1_0) and (ap_const_boolean_0 = ap_block_pp0_stage0) and (ap_enable_reg_pp0_iter2 = ap_const_logic_1))) then 
            in_V_V_blk_n <= in_V_V_empty_n;
        else 
            in_V_V_blk_n <= ap_const_logic_1;
        end if; 
    end process;


    in_V_V_read_assign_proc : process(ap_enable_reg_pp0_iter2, ap_predicate_op25_read_state4, ap_block_pp0_stage0_11001)
    begin
        if (((ap_enable_reg_pp0_iter2 = ap_const_logic_1) and (ap_predicate_op25_read_state4 = ap_const_boolean_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then 
            in_V_V_read <= ap_const_logic_1;
        else 
            in_V_V_read <= ap_const_logic_0;
        end if; 
    end process;


    internal_ap_ready_assign_proc : process(ap_CS_fsm_state6)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            internal_ap_ready <= ap_const_logic_1;
        else 
            internal_ap_ready <= ap_const_logic_0;
        end if; 
    end process;


    numReps_blk_n_assign_proc : process(real_start, ap_done_reg, ap_CS_fsm_state1, numReps_empty_n)
    begin
        if ((not(((real_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            numReps_blk_n <= numReps_empty_n;
        else 
            numReps_blk_n <= ap_const_logic_1;
        end if; 
    end process;


    numReps_out_blk_n_assign_proc : process(real_start, ap_done_reg, ap_CS_fsm_state1, numReps_out_full_n)
    begin
        if ((not(((real_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            numReps_out_blk_n <= numReps_out_full_n;
        else 
            numReps_out_blk_n <= ap_const_logic_1;
        end if; 
    end process;

    numReps_out_din <= numReps_dout;

    numReps_out_write_assign_proc : process(real_start, ap_done_reg, ap_CS_fsm_state1, numReps_empty_n, numReps_out_full_n)
    begin
        if ((not(((real_start = ap_const_logic_0) or (numReps_out_full_n = ap_const_logic_0) or (numReps_empty_n = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            numReps_out_write <= ap_const_logic_1;
        else 
            numReps_out_write <= ap_const_logic_0;
        end if; 
    end process;


    numReps_read_assign_proc : process(real_start, ap_done_reg, ap_CS_fsm_state1, numReps_empty_n, numReps_out_full_n)
    begin
        if ((not(((real_start = ap_const_logic_0) or (numReps_out_full_n = ap_const_logic_0) or (numReps_empty_n = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            numReps_read <= ap_const_logic_1;
        else 
            numReps_read <= ap_const_logic_0;
        end if; 
    end process;

    o_fu_140_p2 <= std_logic_vector(unsigned(ap_const_lv32_1) + unsigned(ap_phi_mux_o_0_i_phi_fu_95_p4));

    out_V_V_blk_n_assign_proc : process(out_V_V_full_n, ap_block_pp0_stage0, ap_enable_reg_pp0_iter3, icmp_ln268_reg_189_pp0_iter2_reg)
    begin
        if (((icmp_ln268_reg_189_pp0_iter2_reg = ap_const_lv1_0) and (ap_const_boolean_0 = ap_block_pp0_stage0) and (ap_enable_reg_pp0_iter3 = ap_const_logic_1))) then 
            out_V_V_blk_n <= out_V_V_full_n;
        else 
            out_V_V_blk_n <= ap_const_logic_1;
        end if; 
    end process;

    out_V_V_din <= ap_phi_mux_p_Val2_s_phi_fu_117_p4(24 - 1 downto 0);

    out_V_V_write_assign_proc : process(ap_enable_reg_pp0_iter3, icmp_ln268_reg_189_pp0_iter2_reg, ap_block_pp0_stage0_11001)
    begin
        if (((icmp_ln268_reg_189_pp0_iter2_reg = ap_const_lv1_0) and (ap_enable_reg_pp0_iter3 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then 
            out_V_V_write <= ap_const_logic_1;
        else 
            out_V_V_write <= ap_const_logic_0;
        end if; 
    end process;


    real_start_assign_proc : process(ap_start, start_full_n, start_once_reg)
    begin
        if (((start_once_reg = ap_const_logic_0) and (start_full_n = ap_const_logic_0))) then 
            real_start <= ap_const_logic_0;
        else 
            real_start <= ap_start;
        end if; 
    end process;

    select_ln282_fu_158_p3 <= 
        ap_const_lv32_0 when (icmp_ln282_reg_203(0) = '1') else 
        o_reg_198;
    shl_ln268_fu_123_p2 <= std_logic_vector(shift_left(unsigned(numReps_dout),to_integer(unsigned('0' & ap_const_lv32_A(31-1 downto 0)))));
    start_out <= real_start;

    start_write_assign_proc : process(real_start, start_once_reg)
    begin
        if (((start_once_reg = ap_const_logic_0) and (real_start = ap_const_logic_1))) then 
            start_write <= ap_const_logic_1;
        else 
            start_write <= ap_const_logic_0;
        end if; 
    end process;

    t_fu_134_p2 <= std_logic_vector(unsigned(t_0_i_reg_103) + unsigned(ap_const_lv32_1));
    zext_ln268_fu_164_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(p_025_0_i_reg_79),192));
end behav;

// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module StreamingMaxPool_1 (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        in_V_V_dout,
        in_V_V_empty_n,
        in_V_V_read,
        out_V_V_din,
        out_V_V_full_n,
        out_V_V_write
);

parameter    ap_ST_fsm_state1 = 9'd1;
parameter    ap_ST_fsm_state2 = 9'd2;
parameter    ap_ST_fsm_state3 = 9'd4;
parameter    ap_ST_fsm_state4 = 9'd8;
parameter    ap_ST_fsm_pp0_stage0 = 9'd16;
parameter    ap_ST_fsm_pp0_stage1 = 9'd32;
parameter    ap_ST_fsm_state9 = 9'd64;
parameter    ap_ST_fsm_pp1_stage0 = 9'd128;
parameter    ap_ST_fsm_state13 = 9'd256;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input  [127:0] in_V_V_dout;
input   in_V_V_empty_n;
output   in_V_V_read;
output  [127:0] out_V_V_din;
input   out_V_V_full_n;
output   out_V_V_write;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg in_V_V_read;
reg out_V_V_write;

(* fsm_encoding = "none" *) reg   [8:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg    in_V_V_blk_n;
wire    ap_CS_fsm_pp0_stage1;
reg    ap_enable_reg_pp0_iter0;
wire    ap_block_pp0_stage1;
reg   [0:0] icmp_ln74_reg_273;
wire    ap_CS_fsm_pp0_stage0;
reg    ap_enable_reg_pp0_iter1;
wire    ap_block_pp0_stage0;
reg    out_V_V_blk_n;
reg    ap_enable_reg_pp1_iter2;
wire    ap_block_pp1_stage0;
reg   [0:0] icmp_ln85_reg_309;
reg   [0:0] icmp_ln85_reg_309_pp1_iter1_reg;
reg   [3:0] indvar_flatten_reg_156;
reg   [2:0] xp_0_reg_167;
reg   [2:0] outpix_0_reg_178;
wire   [0:0] icmp_ln73_fu_189_p2;
wire    ap_CS_fsm_state4;
wire   [2:0] yp_fu_195_p2;
reg   [2:0] yp_reg_268;
wire   [0:0] icmp_ln74_fu_201_p2;
wire    ap_block_state5_pp0_stage0_iter0;
reg    ap_block_state7_pp0_stage0_iter1;
reg    ap_block_pp0_stage0_11001;
reg   [0:0] icmp_ln74_reg_273_pp0_iter1_reg;
wire   [3:0] add_ln74_fu_207_p2;
reg   [3:0] add_ln74_reg_277;
wire   [2:0] select_ln75_fu_219_p3;
reg   [2:0] select_ln75_reg_282;
reg   [127:0] tmp_V_reg_288;
reg    ap_block_state6_pp0_stage1_iter0;
wire    ap_block_state8_pp0_stage1_iter1;
reg    ap_block_pp0_stage1_11001;
reg   [2:0] buf_V_addr_4_reg_293;
wire   [2:0] xp_fu_231_p2;
reg   [2:0] xp_reg_299;
wire   [127:0] or_ln718_fu_241_p2;
reg   [127:0] or_ln718_reg_304;
wire   [0:0] icmp_ln85_fu_247_p2;
wire    ap_CS_fsm_pp1_stage0;
wire    ap_block_state10_pp1_stage0_iter0;
wire    ap_block_state11_pp1_stage0_iter1;
reg    ap_block_state12_pp1_stage0_iter2;
reg    ap_block_pp1_stage0_11001;
wire   [2:0] outpix_fu_253_p2;
reg    ap_enable_reg_pp1_iter0;
wire   [127:0] buf_V_q1;
reg   [127:0] tmp_V_2_reg_323;
reg    ap_enable_reg_pp1_iter1;
reg    ap_block_pp0_stage0_subdone;
reg    ap_condition_pp0_exit_iter0_state5;
reg    ap_block_pp0_stage1_subdone;
wire    ap_CS_fsm_state9;
reg    ap_block_pp1_stage0_subdone;
reg    ap_condition_pp1_exit_iter0_state10;
reg   [2:0] buf_V_address0;
reg    buf_V_ce0;
reg    buf_V_we0;
reg   [127:0] buf_V_d0;
reg   [2:0] buf_V_address1;
reg    buf_V_ce1;
reg    buf_V_we1;
reg   [2:0] yp_0_reg_145;
wire    ap_CS_fsm_state3;
wire    ap_CS_fsm_state13;
reg   [3:0] ap_phi_mux_indvar_flatten_phi_fu_160_p4;
reg   [2:0] ap_phi_mux_xp_0_phi_fu_171_p4;
wire    ap_CS_fsm_state2;
wire   [63:0] zext_ln82_fu_227_p1;
wire   [63:0] zext_ln87_fu_259_p1;
reg    ap_block_pp1_stage0_01001;
wire   [0:0] icmp_ln75_fu_213_p2;
wire   [127:0] or_ln718_1_fu_236_p2;
reg   [8:0] ap_NS_fsm;
reg    ap_idle_pp0;
wire    ap_enable_pp0;
reg    ap_idle_pp1;
wire    ap_enable_pp1;

// power-on initialization
initial begin
#0 ap_CS_fsm = 9'd1;
#0 ap_enable_reg_pp0_iter0 = 1'b0;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_enable_reg_pp1_iter2 = 1'b0;
#0 ap_enable_reg_pp1_iter0 = 1'b0;
#0 ap_enable_reg_pp1_iter1 = 1'b0;
end

StreamingMaxPool_Ee0 #(
    .DataWidth( 128 ),
    .AddressRange( 5 ),
    .AddressWidth( 3 ))
buf_V_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(buf_V_address0),
    .ce0(buf_V_ce0),
    .we0(buf_V_we0),
    .d0(buf_V_d0),
    .address1(buf_V_address1),
    .ce1(buf_V_ce1),
    .we1(buf_V_we1),
    .d1(128'd0),
    .q1(buf_V_q1)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter0 <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b1 == ap_condition_pp0_exit_iter0_state5) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
            ap_enable_reg_pp0_iter0 <= 1'b0;
        end else if (((icmp_ln73_fu_189_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state4))) begin
            ap_enable_reg_pp0_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1_subdone))) begin
            ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
        end else if (((icmp_ln73_fu_189_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state4))) begin
            ap_enable_reg_pp0_iter1 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp1_iter0 <= 1'b0;
    end else begin
        if (((1'b1 == ap_condition_pp1_exit_iter0_state10) & (1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_subdone))) begin
            ap_enable_reg_pp1_iter0 <= 1'b0;
        end else if ((1'b1 == ap_CS_fsm_state9)) begin
            ap_enable_reg_pp1_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp1_iter1 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp1_stage0_subdone)) begin
            if ((1'b1 == ap_condition_pp1_exit_iter0_state10)) begin
                ap_enable_reg_pp1_iter1 <= (1'b1 ^ ap_condition_pp1_exit_iter0_state10);
            end else if ((1'b1 == 1'b1)) begin
                ap_enable_reg_pp1_iter1 <= ap_enable_reg_pp1_iter0;
            end
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp1_iter2 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp1_stage0_subdone)) begin
            ap_enable_reg_pp1_iter2 <= ap_enable_reg_pp1_iter1;
        end else if ((1'b1 == ap_CS_fsm_state9)) begin
            ap_enable_reg_pp1_iter2 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln73_fu_189_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state4))) begin
        indvar_flatten_reg_156 <= 4'd0;
    end else if (((icmp_ln74_reg_273 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        indvar_flatten_reg_156 <= add_ln74_reg_277;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        outpix_0_reg_178 <= 3'd0;
    end else if (((icmp_ln85_fu_247_p2 == 1'd0) & (ap_enable_reg_pp1_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_11001))) begin
        outpix_0_reg_178 <= outpix_fu_253_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln73_fu_189_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state4))) begin
        xp_0_reg_167 <= 3'd0;
    end else if (((icmp_ln74_reg_273 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        xp_0_reg_167 <= xp_reg_299;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state13)) begin
        yp_0_reg_145 <= yp_reg_268;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        yp_0_reg_145 <= 3'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        add_ln74_reg_277 <= add_ln74_fu_207_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln74_reg_273 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1_11001))) begin
        buf_V_addr_4_reg_293 <= zext_ln82_fu_227_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        icmp_ln74_reg_273 <= icmp_ln74_fu_201_p2;
        icmp_ln74_reg_273_pp0_iter1_reg <= icmp_ln74_reg_273;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_11001))) begin
        icmp_ln85_reg_309 <= icmp_ln85_fu_247_p2;
        icmp_ln85_reg_309_pp1_iter1_reg <= icmp_ln85_reg_309;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln74_reg_273 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        or_ln718_reg_304 <= or_ln718_fu_241_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln74_fu_201_p2 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        select_ln75_reg_282 <= select_ln75_fu_219_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln85_reg_309 == 1'd0) & (ap_enable_reg_pp1_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_11001))) begin
        tmp_V_2_reg_323 <= buf_V_q1;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln74_reg_273 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1_11001))) begin
        tmp_V_reg_288 <= in_V_V_dout;
        xp_reg_299 <= xp_fu_231_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        yp_reg_268 <= yp_fu_195_p2;
    end
end

always @ (*) begin
    if ((icmp_ln74_fu_201_p2 == 1'd1)) begin
        ap_condition_pp0_exit_iter0_state5 = 1'b1;
    end else begin
        ap_condition_pp0_exit_iter0_state5 = 1'b0;
    end
end

always @ (*) begin
    if ((icmp_ln85_fu_247_p2 == 1'd1)) begin
        ap_condition_pp1_exit_iter0_state10 = 1'b1;
    end else begin
        ap_condition_pp1_exit_iter0_state10 = 1'b0;
    end
end

always @ (*) begin
    if ((((icmp_ln73_fu_189_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4)) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp1_iter2 == 1'b0) & (ap_enable_reg_pp1_iter1 == 1'b0) & (ap_enable_reg_pp1_iter0 == 1'b0))) begin
        ap_idle_pp1 = 1'b1;
    end else begin
        ap_idle_pp1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (icmp_ln74_reg_273 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_phi_mux_indvar_flatten_phi_fu_160_p4 = add_ln74_reg_277;
    end else begin
        ap_phi_mux_indvar_flatten_phi_fu_160_p4 = indvar_flatten_reg_156;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (icmp_ln74_reg_273 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_phi_mux_xp_0_phi_fu_171_p4 = xp_reg_299;
    end else begin
        ap_phi_mux_xp_0_phi_fu_171_p4 = xp_0_reg_167;
    end
end

always @ (*) begin
    if (((icmp_ln73_fu_189_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage1) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
        buf_V_address0 = buf_V_addr_4_reg_293;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        buf_V_address0 = 64'd4;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        buf_V_address0 = 64'd1;
    end else if ((1'b1 == ap_CS_fsm_state1)) begin
        buf_V_address0 = 64'd0;
    end else begin
        buf_V_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp1_stage0) & (icmp_ln85_fu_247_p2 == 1'd0) & (ap_enable_reg_pp1_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0))) begin
        buf_V_address1 = zext_ln87_fu_259_p1;
    end else if (((1'b0 == ap_block_pp0_stage1) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
        buf_V_address1 = zext_ln82_fu_227_p1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        buf_V_address1 = 64'd3;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        buf_V_address1 = 64'd2;
    end else begin
        buf_V_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state3) | ((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1_11001)) | ((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)))) begin
        buf_V_ce0 = 1'b1;
    end else begin
        buf_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state3) | ((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1_11001)) | ((icmp_ln85_fu_247_p2 == 1'd0) & (ap_enable_reg_pp1_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_11001)))) begin
        buf_V_ce1 = 1'b1;
    end else begin
        buf_V_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage1) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
        buf_V_d0 = or_ln718_reg_304;
    end else if (((1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state1) | (1'b1 == ap_CS_fsm_state3))) begin
        buf_V_d0 = 128'd0;
    end else begin
        buf_V_d0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state3) | ((icmp_ln74_reg_273_pp0_iter1_reg == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1_11001)) | ((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)))) begin
        buf_V_we0 = 1'b1;
    end else begin
        buf_V_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state3) | ((icmp_ln85_fu_247_p2 == 1'd0) & (ap_enable_reg_pp1_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_11001)))) begin
        buf_V_we1 = 1'b1;
    end else begin
        buf_V_we1 = 1'b0;
    end
end

always @ (*) begin
    if ((((1'b0 == ap_block_pp0_stage0) & (icmp_ln74_reg_273 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)) | ((icmp_ln74_reg_273 == 1'd0) & (1'b0 == ap_block_pp0_stage1) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1)))) begin
        in_V_V_blk_n = in_V_V_empty_n;
    end else begin
        in_V_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((((icmp_ln74_reg_273 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001)) | ((icmp_ln74_reg_273 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1_11001)))) begin
        in_V_V_read = 1'b1;
    end else begin
        in_V_V_read = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp1_stage0) & (icmp_ln85_reg_309_pp1_iter1_reg == 1'd0) & (ap_enable_reg_pp1_iter2 == 1'b1))) begin
        out_V_V_blk_n = out_V_V_full_n;
    end else begin
        out_V_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((icmp_ln85_reg_309_pp1_iter1_reg == 1'd0) & (ap_enable_reg_pp1_iter2 == 1'b1) & (1'b0 == ap_block_pp1_stage0_11001))) begin
        out_V_V_write = 1'b1;
    end else begin
        out_V_V_write = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            ap_NS_fsm = ap_ST_fsm_state3;
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        ap_ST_fsm_state4 : begin
            if (((icmp_ln73_fu_189_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_pp0_stage0 : begin
            if ((~((icmp_ln74_fu_201_p2 == 1'd1) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone)) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            end else if (((icmp_ln74_fu_201_p2 == 1'd1) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
                ap_NS_fsm = ap_ST_fsm_state9;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_pp0_stage1 : begin
            if ((~((ap_enable_reg_pp0_iter0 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1_subdone)) & (1'b0 == ap_block_pp0_stage1_subdone))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else if (((ap_enable_reg_pp0_iter0 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1_subdone))) begin
                ap_NS_fsm = ap_ST_fsm_state9;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            end
        end
        ap_ST_fsm_state9 : begin
            ap_NS_fsm = ap_ST_fsm_pp1_stage0;
        end
        ap_ST_fsm_pp1_stage0 : begin
            if ((~((ap_enable_reg_pp1_iter0 == 1'b1) & (1'b0 == ap_block_pp1_stage0_subdone) & (ap_enable_reg_pp1_iter1 == 1'b0) & (icmp_ln85_fu_247_p2 == 1'd1)) & ~((ap_enable_reg_pp1_iter2 == 1'b1) & (1'b0 == ap_block_pp1_stage0_subdone) & (ap_enable_reg_pp1_iter1 == 1'b0)))) begin
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            end else if ((((ap_enable_reg_pp1_iter2 == 1'b1) & (1'b0 == ap_block_pp1_stage0_subdone) & (ap_enable_reg_pp1_iter1 == 1'b0)) | ((ap_enable_reg_pp1_iter0 == 1'b1) & (1'b0 == ap_block_pp1_stage0_subdone) & (ap_enable_reg_pp1_iter1 == 1'b0) & (icmp_ln85_fu_247_p2 == 1'd1)))) begin
                ap_NS_fsm = ap_ST_fsm_state13;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            end
        end
        ap_ST_fsm_state13 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln74_fu_207_p2 = (ap_phi_mux_indvar_flatten_phi_fu_160_p4 + 4'd1);

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_pp0_stage1 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_pp1_stage0 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state13 = ap_CS_fsm[32'd8];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd6];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_pp0_stage0_11001 = ((icmp_ln74_reg_273 == 1'd0) & (in_V_V_empty_n == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b1));
end

always @ (*) begin
    ap_block_pp0_stage0_subdone = ((icmp_ln74_reg_273 == 1'd0) & (in_V_V_empty_n == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b1));
end

assign ap_block_pp0_stage1 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_pp0_stage1_11001 = ((icmp_ln74_reg_273 == 1'd0) & (in_V_V_empty_n == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b1));
end

always @ (*) begin
    ap_block_pp0_stage1_subdone = ((icmp_ln74_reg_273 == 1'd0) & (in_V_V_empty_n == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b1));
end

assign ap_block_pp1_stage0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_pp1_stage0_01001 = ((icmp_ln85_reg_309_pp1_iter1_reg == 1'd0) & (out_V_V_full_n == 1'b0) & (ap_enable_reg_pp1_iter2 == 1'b1));
end

always @ (*) begin
    ap_block_pp1_stage0_11001 = ((icmp_ln85_reg_309_pp1_iter1_reg == 1'd0) & (out_V_V_full_n == 1'b0) & (ap_enable_reg_pp1_iter2 == 1'b1));
end

always @ (*) begin
    ap_block_pp1_stage0_subdone = ((icmp_ln85_reg_309_pp1_iter1_reg == 1'd0) & (out_V_V_full_n == 1'b0) & (ap_enable_reg_pp1_iter2 == 1'b1));
end

assign ap_block_state10_pp1_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state11_pp1_stage0_iter1 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_state12_pp1_stage0_iter2 = ((icmp_ln85_reg_309_pp1_iter1_reg == 1'd0) & (out_V_V_full_n == 1'b0));
end

assign ap_block_state5_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_state6_pp0_stage1_iter0 = ((icmp_ln74_reg_273 == 1'd0) & (in_V_V_empty_n == 1'b0));
end

always @ (*) begin
    ap_block_state7_pp0_stage0_iter1 = ((icmp_ln74_reg_273 == 1'd0) & (in_V_V_empty_n == 1'b0));
end

assign ap_block_state8_pp0_stage1_iter1 = ~(1'b1 == 1'b1);

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign ap_enable_pp1 = (ap_idle_pp1 ^ 1'b1);

assign icmp_ln73_fu_189_p2 = ((yp_0_reg_145 == 3'd5) ? 1'b1 : 1'b0);

assign icmp_ln74_fu_201_p2 = ((ap_phi_mux_indvar_flatten_phi_fu_160_p4 == 4'd10) ? 1'b1 : 1'b0);

assign icmp_ln75_fu_213_p2 = ((ap_phi_mux_xp_0_phi_fu_171_p4 == 3'd5) ? 1'b1 : 1'b0);

assign icmp_ln85_fu_247_p2 = ((outpix_0_reg_178 == 3'd5) ? 1'b1 : 1'b0);

assign or_ln718_1_fu_236_p2 = (tmp_V_reg_288 | buf_V_q1);

assign or_ln718_fu_241_p2 = (or_ln718_1_fu_236_p2 | in_V_V_dout);

assign out_V_V_din = tmp_V_2_reg_323;

assign outpix_fu_253_p2 = (outpix_0_reg_178 + 3'd1);

assign select_ln75_fu_219_p3 = ((icmp_ln75_fu_213_p2[0:0] === 1'b1) ? 3'd0 : ap_phi_mux_xp_0_phi_fu_171_p4);

assign xp_fu_231_p2 = (select_ln75_reg_282 + 3'd1);

assign yp_fu_195_p2 = (yp_0_reg_145 + 3'd1);

assign zext_ln82_fu_227_p1 = select_ln75_reg_282;

assign zext_ln87_fu_259_p1 = outpix_0_reg_178;

endmodule //StreamingMaxPool_1

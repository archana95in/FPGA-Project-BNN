// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module StreamingMaxPool_Bat (
        ap_clk,
        ap_rst,
        ap_start,
        start_full_n,
        ap_done,
        ap_continue,
        ap_idle,
        ap_ready,
        start_out,
        start_write,
        in_V_V_dout,
        in_V_V_empty_n,
        in_V_V_read,
        out_V_V_din,
        out_V_V_full_n,
        out_V_V_write,
        numReps_dout,
        numReps_empty_n,
        numReps_read,
        numReps_out_din,
        numReps_out_full_n,
        numReps_out_write
);

parameter    ap_ST_fsm_state1 = 3'd1;
parameter    ap_ST_fsm_state2 = 3'd2;
parameter    ap_ST_fsm_state3 = 3'd4;

input   ap_clk;
input   ap_rst;
input   ap_start;
input   start_full_n;
output   ap_done;
input   ap_continue;
output   ap_idle;
output   ap_ready;
output   start_out;
output   start_write;
input  [63:0] in_V_V_dout;
input   in_V_V_empty_n;
output   in_V_V_read;
output  [63:0] out_V_V_din;
input   out_V_V_full_n;
output   out_V_V_write;
input  [31:0] numReps_dout;
input   numReps_empty_n;
output   numReps_read;
output  [31:0] numReps_out_din;
input   numReps_out_full_n;
output   numReps_out_write;

reg ap_done;
reg ap_idle;
reg start_write;
reg in_V_V_read;
reg out_V_V_write;
reg numReps_read;
reg numReps_out_write;

reg    real_start;
reg    start_once_reg;
reg    ap_done_reg;
(* fsm_encoding = "none" *) reg   [2:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg    internal_ap_ready;
reg    numReps_blk_n;
reg    numReps_out_blk_n;
reg   [31:0] numReps_read_reg_74;
reg    ap_block_state1;
wire   [31:0] rep_fu_68_p2;
reg   [31:0] rep_reg_82;
wire    ap_CS_fsm_state2;
wire    grp_StreamingMaxPool_fu_55_ap_start;
wire    grp_StreamingMaxPool_fu_55_ap_done;
wire    grp_StreamingMaxPool_fu_55_ap_idle;
wire    grp_StreamingMaxPool_fu_55_ap_ready;
wire    grp_StreamingMaxPool_fu_55_in_V_V_read;
wire   [63:0] grp_StreamingMaxPool_fu_55_out_V_V_din;
wire    grp_StreamingMaxPool_fu_55_out_V_V_write;
reg   [31:0] rep_0_i_reg_44;
wire    ap_CS_fsm_state3;
reg    grp_StreamingMaxPool_fu_55_ap_start_reg;
wire   [0:0] icmp_ln109_fu_63_p2;
reg   [2:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 start_once_reg = 1'b0;
#0 ap_done_reg = 1'b0;
#0 ap_CS_fsm = 3'd1;
#0 grp_StreamingMaxPool_fu_55_ap_start_reg = 1'b0;
end

StreamingMaxPool grp_StreamingMaxPool_fu_55(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_StreamingMaxPool_fu_55_ap_start),
    .ap_done(grp_StreamingMaxPool_fu_55_ap_done),
    .ap_idle(grp_StreamingMaxPool_fu_55_ap_idle),
    .ap_ready(grp_StreamingMaxPool_fu_55_ap_ready),
    .in_V_V_dout(in_V_V_dout),
    .in_V_V_empty_n(in_V_V_empty_n),
    .in_V_V_read(grp_StreamingMaxPool_fu_55_in_V_V_read),
    .out_V_V_din(grp_StreamingMaxPool_fu_55_out_V_V_din),
    .out_V_V_full_n(out_V_V_full_n),
    .out_V_V_write(grp_StreamingMaxPool_fu_55_out_V_V_write)
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
        ap_done_reg <= 1'b0;
    end else begin
        if ((ap_continue == 1'b1)) begin
            ap_done_reg <= 1'b0;
        end else if (((1'b1 == ap_CS_fsm_state2) & (icmp_ln109_fu_63_p2 == 1'd1))) begin
            ap_done_reg <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_StreamingMaxPool_fu_55_ap_start_reg <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_state2) & (icmp_ln109_fu_63_p2 == 1'd0))) begin
            grp_StreamingMaxPool_fu_55_ap_start_reg <= 1'b1;
        end else if ((grp_StreamingMaxPool_fu_55_ap_ready == 1'b1)) begin
            grp_StreamingMaxPool_fu_55_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        start_once_reg <= 1'b0;
    end else begin
        if (((internal_ap_ready == 1'b0) & (real_start == 1'b1))) begin
            start_once_reg <= 1'b1;
        end else if ((internal_ap_ready == 1'b1)) begin
            start_once_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((grp_StreamingMaxPool_fu_55_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state3))) begin
        rep_0_i_reg_44 <= rep_reg_82;
    end else if ((~((real_start == 1'b0) | (numReps_out_full_n == 1'b0) | (numReps_empty_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        rep_0_i_reg_44 <= 32'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((~((real_start == 1'b0) | (numReps_out_full_n == 1'b0) | (numReps_empty_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        numReps_read_reg_74 <= numReps_dout;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        rep_reg_82 <= rep_fu_68_p2;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) & (icmp_ln109_fu_63_p2 == 1'd1))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = ap_done_reg;
    end
end

always @ (*) begin
    if (((real_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        in_V_V_read = grp_StreamingMaxPool_fu_55_in_V_V_read;
    end else begin
        in_V_V_read = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) & (icmp_ln109_fu_63_p2 == 1'd1))) begin
        internal_ap_ready = 1'b1;
    end else begin
        internal_ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        numReps_blk_n = numReps_empty_n;
    end else begin
        numReps_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        numReps_out_blk_n = numReps_out_full_n;
    end else begin
        numReps_out_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((real_start == 1'b0) | (numReps_out_full_n == 1'b0) | (numReps_empty_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        numReps_out_write = 1'b1;
    end else begin
        numReps_out_write = 1'b0;
    end
end

always @ (*) begin
    if ((~((real_start == 1'b0) | (numReps_out_full_n == 1'b0) | (numReps_empty_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        numReps_read = 1'b1;
    end else begin
        numReps_read = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        out_V_V_write = grp_StreamingMaxPool_fu_55_out_V_V_write;
    end else begin
        out_V_V_write = 1'b0;
    end
end

always @ (*) begin
    if (((start_once_reg == 1'b0) & (start_full_n == 1'b0))) begin
        real_start = 1'b0;
    end else begin
        real_start = ap_start;
    end
end

always @ (*) begin
    if (((start_once_reg == 1'b0) & (real_start == 1'b1))) begin
        start_write = 1'b1;
    end else begin
        start_write = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if ((~((real_start == 1'b0) | (numReps_out_full_n == 1'b0) | (numReps_empty_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((1'b1 == ap_CS_fsm_state2) & (icmp_ln109_fu_63_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((grp_StreamingMaxPool_fu_55_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

always @ (*) begin
    ap_block_state1 = ((real_start == 1'b0) | (numReps_out_full_n == 1'b0) | (numReps_empty_n == 1'b0) | (ap_done_reg == 1'b1));
end

assign ap_ready = internal_ap_ready;

assign grp_StreamingMaxPool_fu_55_ap_start = grp_StreamingMaxPool_fu_55_ap_start_reg;

assign icmp_ln109_fu_63_p2 = ((rep_0_i_reg_44 == numReps_read_reg_74) ? 1'b1 : 1'b0);

assign numReps_out_din = numReps_dout;

assign out_V_V_din = grp_StreamingMaxPool_fu_55_out_V_V_din;

assign rep_fu_68_p2 = (rep_0_i_reg_44 + 32'd1);

assign start_out = real_start;

endmodule //StreamingMaxPool_Bat

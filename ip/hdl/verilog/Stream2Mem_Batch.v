// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module Stream2Mem_Batch (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_continue,
        ap_idle,
        ap_ready,
        memOutStrm_V_V_dout,
        memOutStrm_V_V_empty_n,
        memOutStrm_V_V_read,
        m_axi_in_V_AWVALID,
        m_axi_in_V_AWREADY,
        m_axi_in_V_AWADDR,
        m_axi_in_V_AWID,
        m_axi_in_V_AWLEN,
        m_axi_in_V_AWSIZE,
        m_axi_in_V_AWBURST,
        m_axi_in_V_AWLOCK,
        m_axi_in_V_AWCACHE,
        m_axi_in_V_AWPROT,
        m_axi_in_V_AWQOS,
        m_axi_in_V_AWREGION,
        m_axi_in_V_AWUSER,
        m_axi_in_V_WVALID,
        m_axi_in_V_WREADY,
        m_axi_in_V_WDATA,
        m_axi_in_V_WSTRB,
        m_axi_in_V_WLAST,
        m_axi_in_V_WID,
        m_axi_in_V_WUSER,
        m_axi_in_V_ARVALID,
        m_axi_in_V_ARREADY,
        m_axi_in_V_ARADDR,
        m_axi_in_V_ARID,
        m_axi_in_V_ARLEN,
        m_axi_in_V_ARSIZE,
        m_axi_in_V_ARBURST,
        m_axi_in_V_ARLOCK,
        m_axi_in_V_ARCACHE,
        m_axi_in_V_ARPROT,
        m_axi_in_V_ARQOS,
        m_axi_in_V_ARREGION,
        m_axi_in_V_ARUSER,
        m_axi_in_V_RVALID,
        m_axi_in_V_RREADY,
        m_axi_in_V_RDATA,
        m_axi_in_V_RLAST,
        m_axi_in_V_RID,
        m_axi_in_V_RUSER,
        m_axi_in_V_RRESP,
        m_axi_in_V_BVALID,
        m_axi_in_V_BREADY,
        m_axi_in_V_BRESP,
        m_axi_in_V_BID,
        m_axi_in_V_BUSER,
        out_V_offset_dout,
        out_V_offset_empty_n,
        out_V_offset_read,
        numReps_c129_dout,
        numReps_c129_empty_n,
        numReps_c129_read
);

parameter    ap_ST_fsm_state1 = 3'd1;
parameter    ap_ST_fsm_state2 = 3'd2;
parameter    ap_ST_fsm_state3 = 3'd4;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
input   ap_continue;
output   ap_idle;
output   ap_ready;
input  [63:0] memOutStrm_V_V_dout;
input   memOutStrm_V_V_empty_n;
output   memOutStrm_V_V_read;
output   m_axi_in_V_AWVALID;
input   m_axi_in_V_AWREADY;
output  [63:0] m_axi_in_V_AWADDR;
output  [0:0] m_axi_in_V_AWID;
output  [31:0] m_axi_in_V_AWLEN;
output  [2:0] m_axi_in_V_AWSIZE;
output  [1:0] m_axi_in_V_AWBURST;
output  [1:0] m_axi_in_V_AWLOCK;
output  [3:0] m_axi_in_V_AWCACHE;
output  [2:0] m_axi_in_V_AWPROT;
output  [3:0] m_axi_in_V_AWQOS;
output  [3:0] m_axi_in_V_AWREGION;
output  [0:0] m_axi_in_V_AWUSER;
output   m_axi_in_V_WVALID;
input   m_axi_in_V_WREADY;
output  [63:0] m_axi_in_V_WDATA;
output  [7:0] m_axi_in_V_WSTRB;
output   m_axi_in_V_WLAST;
output  [0:0] m_axi_in_V_WID;
output  [0:0] m_axi_in_V_WUSER;
output   m_axi_in_V_ARVALID;
input   m_axi_in_V_ARREADY;
output  [63:0] m_axi_in_V_ARADDR;
output  [0:0] m_axi_in_V_ARID;
output  [31:0] m_axi_in_V_ARLEN;
output  [2:0] m_axi_in_V_ARSIZE;
output  [1:0] m_axi_in_V_ARBURST;
output  [1:0] m_axi_in_V_ARLOCK;
output  [3:0] m_axi_in_V_ARCACHE;
output  [2:0] m_axi_in_V_ARPROT;
output  [3:0] m_axi_in_V_ARQOS;
output  [3:0] m_axi_in_V_ARREGION;
output  [0:0] m_axi_in_V_ARUSER;
input   m_axi_in_V_RVALID;
output   m_axi_in_V_RREADY;
input  [63:0] m_axi_in_V_RDATA;
input   m_axi_in_V_RLAST;
input  [0:0] m_axi_in_V_RID;
input  [0:0] m_axi_in_V_RUSER;
input  [1:0] m_axi_in_V_RRESP;
input   m_axi_in_V_BVALID;
output   m_axi_in_V_BREADY;
input  [1:0] m_axi_in_V_BRESP;
input  [0:0] m_axi_in_V_BID;
input  [0:0] m_axi_in_V_BUSER;
input  [60:0] out_V_offset_dout;
input   out_V_offset_empty_n;
output   out_V_offset_read;
input  [31:0] numReps_c129_dout;
input   numReps_c129_empty_n;
output   numReps_c129_read;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg memOutStrm_V_V_read;
reg m_axi_in_V_AWVALID;
reg[63:0] m_axi_in_V_AWADDR;
reg[0:0] m_axi_in_V_AWID;
reg[31:0] m_axi_in_V_AWLEN;
reg[2:0] m_axi_in_V_AWSIZE;
reg[1:0] m_axi_in_V_AWBURST;
reg[1:0] m_axi_in_V_AWLOCK;
reg[3:0] m_axi_in_V_AWCACHE;
reg[2:0] m_axi_in_V_AWPROT;
reg[3:0] m_axi_in_V_AWQOS;
reg[3:0] m_axi_in_V_AWREGION;
reg[0:0] m_axi_in_V_AWUSER;
reg m_axi_in_V_WVALID;
reg[63:0] m_axi_in_V_WDATA;
reg[7:0] m_axi_in_V_WSTRB;
reg m_axi_in_V_WLAST;
reg[0:0] m_axi_in_V_WID;
reg[0:0] m_axi_in_V_WUSER;
reg m_axi_in_V_BREADY;
reg out_V_offset_read;
reg numReps_c129_read;

reg    ap_done_reg;
(* fsm_encoding = "none" *) reg   [2:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg    out_V_offset_blk_n;
reg    numReps_c129_blk_n;
reg   [60:0] out_V_offset_read_reg_144;
reg    ap_block_state1;
reg   [31:0] numReps_c129_read_reg_150;
wire   [0:0] icmp_ln189_fu_100_p2;
reg   [0:0] icmp_ln189_reg_159;
wire    ap_CS_fsm_state2;
wire   [0:0] icmp_ln187_fu_86_p2;
wire   [31:0] shl_ln191_fu_106_p2;
reg   [31:0] shl_ln191_reg_163;
wire    grp_Stream2Mem_fu_58_ap_start;
wire    grp_Stream2Mem_fu_58_ap_done;
wire    grp_Stream2Mem_fu_58_ap_idle;
wire    grp_Stream2Mem_fu_58_ap_ready;
wire    grp_Stream2Mem_fu_58_in_V_V_read;
wire    grp_Stream2Mem_fu_58_m_axi_out_V_AWVALID;
wire   [63:0] grp_Stream2Mem_fu_58_m_axi_out_V_AWADDR;
wire   [0:0] grp_Stream2Mem_fu_58_m_axi_out_V_AWID;
wire   [31:0] grp_Stream2Mem_fu_58_m_axi_out_V_AWLEN;
wire   [2:0] grp_Stream2Mem_fu_58_m_axi_out_V_AWSIZE;
wire   [1:0] grp_Stream2Mem_fu_58_m_axi_out_V_AWBURST;
wire   [1:0] grp_Stream2Mem_fu_58_m_axi_out_V_AWLOCK;
wire   [3:0] grp_Stream2Mem_fu_58_m_axi_out_V_AWCACHE;
wire   [2:0] grp_Stream2Mem_fu_58_m_axi_out_V_AWPROT;
wire   [3:0] grp_Stream2Mem_fu_58_m_axi_out_V_AWQOS;
wire   [3:0] grp_Stream2Mem_fu_58_m_axi_out_V_AWREGION;
wire   [0:0] grp_Stream2Mem_fu_58_m_axi_out_V_AWUSER;
wire    grp_Stream2Mem_fu_58_m_axi_out_V_WVALID;
wire   [63:0] grp_Stream2Mem_fu_58_m_axi_out_V_WDATA;
wire   [7:0] grp_Stream2Mem_fu_58_m_axi_out_V_WSTRB;
wire    grp_Stream2Mem_fu_58_m_axi_out_V_WLAST;
wire   [0:0] grp_Stream2Mem_fu_58_m_axi_out_V_WID;
wire   [0:0] grp_Stream2Mem_fu_58_m_axi_out_V_WUSER;
wire    grp_Stream2Mem_fu_58_m_axi_out_V_ARVALID;
wire   [63:0] grp_Stream2Mem_fu_58_m_axi_out_V_ARADDR;
wire   [0:0] grp_Stream2Mem_fu_58_m_axi_out_V_ARID;
wire   [31:0] grp_Stream2Mem_fu_58_m_axi_out_V_ARLEN;
wire   [2:0] grp_Stream2Mem_fu_58_m_axi_out_V_ARSIZE;
wire   [1:0] grp_Stream2Mem_fu_58_m_axi_out_V_ARBURST;
wire   [1:0] grp_Stream2Mem_fu_58_m_axi_out_V_ARLOCK;
wire   [3:0] grp_Stream2Mem_fu_58_m_axi_out_V_ARCACHE;
wire   [2:0] grp_Stream2Mem_fu_58_m_axi_out_V_ARPROT;
wire   [3:0] grp_Stream2Mem_fu_58_m_axi_out_V_ARQOS;
wire   [3:0] grp_Stream2Mem_fu_58_m_axi_out_V_ARREGION;
wire   [0:0] grp_Stream2Mem_fu_58_m_axi_out_V_ARUSER;
wire    grp_Stream2Mem_fu_58_m_axi_out_V_RREADY;
wire    grp_Stream2Mem_fu_58_m_axi_out_V_BREADY;
wire    grp_Stream2Mem_1_fu_68_ap_start;
wire    grp_Stream2Mem_1_fu_68_ap_done;
wire    grp_Stream2Mem_1_fu_68_ap_idle;
wire    grp_Stream2Mem_1_fu_68_ap_ready;
wire    grp_Stream2Mem_1_fu_68_in_V_V_read;
wire    grp_Stream2Mem_1_fu_68_m_axi_out_V_AWVALID;
wire   [63:0] grp_Stream2Mem_1_fu_68_m_axi_out_V_AWADDR;
wire   [0:0] grp_Stream2Mem_1_fu_68_m_axi_out_V_AWID;
wire   [31:0] grp_Stream2Mem_1_fu_68_m_axi_out_V_AWLEN;
wire   [2:0] grp_Stream2Mem_1_fu_68_m_axi_out_V_AWSIZE;
wire   [1:0] grp_Stream2Mem_1_fu_68_m_axi_out_V_AWBURST;
wire   [1:0] grp_Stream2Mem_1_fu_68_m_axi_out_V_AWLOCK;
wire   [3:0] grp_Stream2Mem_1_fu_68_m_axi_out_V_AWCACHE;
wire   [2:0] grp_Stream2Mem_1_fu_68_m_axi_out_V_AWPROT;
wire   [3:0] grp_Stream2Mem_1_fu_68_m_axi_out_V_AWQOS;
wire   [3:0] grp_Stream2Mem_1_fu_68_m_axi_out_V_AWREGION;
wire   [0:0] grp_Stream2Mem_1_fu_68_m_axi_out_V_AWUSER;
wire    grp_Stream2Mem_1_fu_68_m_axi_out_V_WVALID;
wire   [63:0] grp_Stream2Mem_1_fu_68_m_axi_out_V_WDATA;
wire   [7:0] grp_Stream2Mem_1_fu_68_m_axi_out_V_WSTRB;
wire    grp_Stream2Mem_1_fu_68_m_axi_out_V_WLAST;
wire   [0:0] grp_Stream2Mem_1_fu_68_m_axi_out_V_WID;
wire   [0:0] grp_Stream2Mem_1_fu_68_m_axi_out_V_WUSER;
wire    grp_Stream2Mem_1_fu_68_m_axi_out_V_ARVALID;
wire   [63:0] grp_Stream2Mem_1_fu_68_m_axi_out_V_ARADDR;
wire   [0:0] grp_Stream2Mem_1_fu_68_m_axi_out_V_ARID;
wire   [31:0] grp_Stream2Mem_1_fu_68_m_axi_out_V_ARLEN;
wire   [2:0] grp_Stream2Mem_1_fu_68_m_axi_out_V_ARSIZE;
wire   [1:0] grp_Stream2Mem_1_fu_68_m_axi_out_V_ARBURST;
wire   [1:0] grp_Stream2Mem_1_fu_68_m_axi_out_V_ARLOCK;
wire   [3:0] grp_Stream2Mem_1_fu_68_m_axi_out_V_ARCACHE;
wire   [2:0] grp_Stream2Mem_1_fu_68_m_axi_out_V_ARPROT;
wire   [3:0] grp_Stream2Mem_1_fu_68_m_axi_out_V_ARQOS;
wire   [3:0] grp_Stream2Mem_1_fu_68_m_axi_out_V_ARREGION;
wire   [0:0] grp_Stream2Mem_1_fu_68_m_axi_out_V_ARUSER;
wire    grp_Stream2Mem_1_fu_68_m_axi_out_V_RREADY;
wire    grp_Stream2Mem_1_fu_68_m_axi_out_V_BREADY;
reg    grp_Stream2Mem_fu_58_ap_start_reg;
wire    ap_CS_fsm_state3;
reg    grp_Stream2Mem_1_fu_68_ap_start_reg;
reg   [31:0] rep_fu_42;
wire   [31:0] rep_2_fu_114_p2;
wire   [31:0] rep_1_fu_125_p2;
wire   [31:0] repsLeft_fu_91_p2;
wire   [3:0] trunc_ln188_fu_96_p1;
reg   [2:0] ap_NS_fsm;
reg    ap_block_state3_on_subcall_done;

// power-on initialization
initial begin
#0 ap_done_reg = 1'b0;
#0 ap_CS_fsm = 3'd1;
#0 grp_Stream2Mem_fu_58_ap_start_reg = 1'b0;
#0 grp_Stream2Mem_1_fu_68_ap_start_reg = 1'b0;
end

Stream2Mem grp_Stream2Mem_fu_58(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_Stream2Mem_fu_58_ap_start),
    .ap_done(grp_Stream2Mem_fu_58_ap_done),
    .ap_idle(grp_Stream2Mem_fu_58_ap_idle),
    .ap_ready(grp_Stream2Mem_fu_58_ap_ready),
    .in_V_V_dout(memOutStrm_V_V_dout),
    .in_V_V_empty_n(memOutStrm_V_V_empty_n),
    .in_V_V_read(grp_Stream2Mem_fu_58_in_V_V_read),
    .m_axi_out_V_AWVALID(grp_Stream2Mem_fu_58_m_axi_out_V_AWVALID),
    .m_axi_out_V_AWREADY(m_axi_in_V_AWREADY),
    .m_axi_out_V_AWADDR(grp_Stream2Mem_fu_58_m_axi_out_V_AWADDR),
    .m_axi_out_V_AWID(grp_Stream2Mem_fu_58_m_axi_out_V_AWID),
    .m_axi_out_V_AWLEN(grp_Stream2Mem_fu_58_m_axi_out_V_AWLEN),
    .m_axi_out_V_AWSIZE(grp_Stream2Mem_fu_58_m_axi_out_V_AWSIZE),
    .m_axi_out_V_AWBURST(grp_Stream2Mem_fu_58_m_axi_out_V_AWBURST),
    .m_axi_out_V_AWLOCK(grp_Stream2Mem_fu_58_m_axi_out_V_AWLOCK),
    .m_axi_out_V_AWCACHE(grp_Stream2Mem_fu_58_m_axi_out_V_AWCACHE),
    .m_axi_out_V_AWPROT(grp_Stream2Mem_fu_58_m_axi_out_V_AWPROT),
    .m_axi_out_V_AWQOS(grp_Stream2Mem_fu_58_m_axi_out_V_AWQOS),
    .m_axi_out_V_AWREGION(grp_Stream2Mem_fu_58_m_axi_out_V_AWREGION),
    .m_axi_out_V_AWUSER(grp_Stream2Mem_fu_58_m_axi_out_V_AWUSER),
    .m_axi_out_V_WVALID(grp_Stream2Mem_fu_58_m_axi_out_V_WVALID),
    .m_axi_out_V_WREADY(m_axi_in_V_WREADY),
    .m_axi_out_V_WDATA(grp_Stream2Mem_fu_58_m_axi_out_V_WDATA),
    .m_axi_out_V_WSTRB(grp_Stream2Mem_fu_58_m_axi_out_V_WSTRB),
    .m_axi_out_V_WLAST(grp_Stream2Mem_fu_58_m_axi_out_V_WLAST),
    .m_axi_out_V_WID(grp_Stream2Mem_fu_58_m_axi_out_V_WID),
    .m_axi_out_V_WUSER(grp_Stream2Mem_fu_58_m_axi_out_V_WUSER),
    .m_axi_out_V_ARVALID(grp_Stream2Mem_fu_58_m_axi_out_V_ARVALID),
    .m_axi_out_V_ARREADY(1'b0),
    .m_axi_out_V_ARADDR(grp_Stream2Mem_fu_58_m_axi_out_V_ARADDR),
    .m_axi_out_V_ARID(grp_Stream2Mem_fu_58_m_axi_out_V_ARID),
    .m_axi_out_V_ARLEN(grp_Stream2Mem_fu_58_m_axi_out_V_ARLEN),
    .m_axi_out_V_ARSIZE(grp_Stream2Mem_fu_58_m_axi_out_V_ARSIZE),
    .m_axi_out_V_ARBURST(grp_Stream2Mem_fu_58_m_axi_out_V_ARBURST),
    .m_axi_out_V_ARLOCK(grp_Stream2Mem_fu_58_m_axi_out_V_ARLOCK),
    .m_axi_out_V_ARCACHE(grp_Stream2Mem_fu_58_m_axi_out_V_ARCACHE),
    .m_axi_out_V_ARPROT(grp_Stream2Mem_fu_58_m_axi_out_V_ARPROT),
    .m_axi_out_V_ARQOS(grp_Stream2Mem_fu_58_m_axi_out_V_ARQOS),
    .m_axi_out_V_ARREGION(grp_Stream2Mem_fu_58_m_axi_out_V_ARREGION),
    .m_axi_out_V_ARUSER(grp_Stream2Mem_fu_58_m_axi_out_V_ARUSER),
    .m_axi_out_V_RVALID(1'b0),
    .m_axi_out_V_RREADY(grp_Stream2Mem_fu_58_m_axi_out_V_RREADY),
    .m_axi_out_V_RDATA(64'd0),
    .m_axi_out_V_RLAST(1'b0),
    .m_axi_out_V_RID(1'd0),
    .m_axi_out_V_RUSER(1'd0),
    .m_axi_out_V_RRESP(2'd0),
    .m_axi_out_V_BVALID(m_axi_in_V_BVALID),
    .m_axi_out_V_BREADY(grp_Stream2Mem_fu_58_m_axi_out_V_BREADY),
    .m_axi_out_V_BRESP(m_axi_in_V_BRESP),
    .m_axi_out_V_BID(m_axi_in_V_BID),
    .m_axi_out_V_BUSER(m_axi_in_V_BUSER),
    .out_V_offset(out_V_offset_read_reg_144),
    .out_V_offset1(shl_ln191_reg_163)
);

Stream2Mem_1 grp_Stream2Mem_1_fu_68(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_Stream2Mem_1_fu_68_ap_start),
    .ap_done(grp_Stream2Mem_1_fu_68_ap_done),
    .ap_idle(grp_Stream2Mem_1_fu_68_ap_idle),
    .ap_ready(grp_Stream2Mem_1_fu_68_ap_ready),
    .in_V_V_dout(memOutStrm_V_V_dout),
    .in_V_V_empty_n(memOutStrm_V_V_empty_n),
    .in_V_V_read(grp_Stream2Mem_1_fu_68_in_V_V_read),
    .m_axi_out_V_AWVALID(grp_Stream2Mem_1_fu_68_m_axi_out_V_AWVALID),
    .m_axi_out_V_AWREADY(m_axi_in_V_AWREADY),
    .m_axi_out_V_AWADDR(grp_Stream2Mem_1_fu_68_m_axi_out_V_AWADDR),
    .m_axi_out_V_AWID(grp_Stream2Mem_1_fu_68_m_axi_out_V_AWID),
    .m_axi_out_V_AWLEN(grp_Stream2Mem_1_fu_68_m_axi_out_V_AWLEN),
    .m_axi_out_V_AWSIZE(grp_Stream2Mem_1_fu_68_m_axi_out_V_AWSIZE),
    .m_axi_out_V_AWBURST(grp_Stream2Mem_1_fu_68_m_axi_out_V_AWBURST),
    .m_axi_out_V_AWLOCK(grp_Stream2Mem_1_fu_68_m_axi_out_V_AWLOCK),
    .m_axi_out_V_AWCACHE(grp_Stream2Mem_1_fu_68_m_axi_out_V_AWCACHE),
    .m_axi_out_V_AWPROT(grp_Stream2Mem_1_fu_68_m_axi_out_V_AWPROT),
    .m_axi_out_V_AWQOS(grp_Stream2Mem_1_fu_68_m_axi_out_V_AWQOS),
    .m_axi_out_V_AWREGION(grp_Stream2Mem_1_fu_68_m_axi_out_V_AWREGION),
    .m_axi_out_V_AWUSER(grp_Stream2Mem_1_fu_68_m_axi_out_V_AWUSER),
    .m_axi_out_V_WVALID(grp_Stream2Mem_1_fu_68_m_axi_out_V_WVALID),
    .m_axi_out_V_WREADY(m_axi_in_V_WREADY),
    .m_axi_out_V_WDATA(grp_Stream2Mem_1_fu_68_m_axi_out_V_WDATA),
    .m_axi_out_V_WSTRB(grp_Stream2Mem_1_fu_68_m_axi_out_V_WSTRB),
    .m_axi_out_V_WLAST(grp_Stream2Mem_1_fu_68_m_axi_out_V_WLAST),
    .m_axi_out_V_WID(grp_Stream2Mem_1_fu_68_m_axi_out_V_WID),
    .m_axi_out_V_WUSER(grp_Stream2Mem_1_fu_68_m_axi_out_V_WUSER),
    .m_axi_out_V_ARVALID(grp_Stream2Mem_1_fu_68_m_axi_out_V_ARVALID),
    .m_axi_out_V_ARREADY(1'b0),
    .m_axi_out_V_ARADDR(grp_Stream2Mem_1_fu_68_m_axi_out_V_ARADDR),
    .m_axi_out_V_ARID(grp_Stream2Mem_1_fu_68_m_axi_out_V_ARID),
    .m_axi_out_V_ARLEN(grp_Stream2Mem_1_fu_68_m_axi_out_V_ARLEN),
    .m_axi_out_V_ARSIZE(grp_Stream2Mem_1_fu_68_m_axi_out_V_ARSIZE),
    .m_axi_out_V_ARBURST(grp_Stream2Mem_1_fu_68_m_axi_out_V_ARBURST),
    .m_axi_out_V_ARLOCK(grp_Stream2Mem_1_fu_68_m_axi_out_V_ARLOCK),
    .m_axi_out_V_ARCACHE(grp_Stream2Mem_1_fu_68_m_axi_out_V_ARCACHE),
    .m_axi_out_V_ARPROT(grp_Stream2Mem_1_fu_68_m_axi_out_V_ARPROT),
    .m_axi_out_V_ARQOS(grp_Stream2Mem_1_fu_68_m_axi_out_V_ARQOS),
    .m_axi_out_V_ARREGION(grp_Stream2Mem_1_fu_68_m_axi_out_V_ARREGION),
    .m_axi_out_V_ARUSER(grp_Stream2Mem_1_fu_68_m_axi_out_V_ARUSER),
    .m_axi_out_V_RVALID(1'b0),
    .m_axi_out_V_RREADY(grp_Stream2Mem_1_fu_68_m_axi_out_V_RREADY),
    .m_axi_out_V_RDATA(64'd0),
    .m_axi_out_V_RLAST(1'b0),
    .m_axi_out_V_RID(1'd0),
    .m_axi_out_V_RUSER(1'd0),
    .m_axi_out_V_RRESP(2'd0),
    .m_axi_out_V_BVALID(m_axi_in_V_BVALID),
    .m_axi_out_V_BREADY(grp_Stream2Mem_1_fu_68_m_axi_out_V_BREADY),
    .m_axi_out_V_BRESP(m_axi_in_V_BRESP),
    .m_axi_out_V_BID(m_axi_in_V_BID),
    .m_axi_out_V_BUSER(m_axi_in_V_BUSER),
    .out_V_offset(out_V_offset_read_reg_144),
    .out_V_offset1(shl_ln191_reg_163)
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
        end else if (((1'b1 == ap_CS_fsm_state2) & (icmp_ln187_fu_86_p2 == 1'd1))) begin
            ap_done_reg <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_Stream2Mem_1_fu_68_ap_start_reg <= 1'b0;
    end else begin
        if (((icmp_ln187_fu_86_p2 == 1'd0) & (icmp_ln189_fu_100_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
            grp_Stream2Mem_1_fu_68_ap_start_reg <= 1'b1;
        end else if ((grp_Stream2Mem_1_fu_68_ap_ready == 1'b1)) begin
            grp_Stream2Mem_1_fu_68_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_Stream2Mem_fu_58_ap_start_reg <= 1'b0;
    end else begin
        if (((icmp_ln187_fu_86_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2) & (icmp_ln189_fu_100_p2 == 1'd1))) begin
            grp_Stream2Mem_fu_58_ap_start_reg <= 1'b1;
        end else if ((grp_Stream2Mem_fu_58_ap_ready == 1'b1)) begin
            grp_Stream2Mem_fu_58_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln187_fu_86_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2) & (icmp_ln189_fu_100_p2 == 1'd1))) begin
        rep_fu_42 <= rep_1_fu_125_p2;
    end else if (((icmp_ln187_fu_86_p2 == 1'd0) & (icmp_ln189_fu_100_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        rep_fu_42 <= rep_2_fu_114_p2;
    end else if ((~((numReps_c129_empty_n == 1'b0) | (out_V_offset_empty_n == 1'b0) | (ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        rep_fu_42 <= 32'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln187_fu_86_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        icmp_ln189_reg_159 <= icmp_ln189_fu_100_p2;
        shl_ln191_reg_163[31 : 4] <= shl_ln191_fu_106_p2[31 : 4];
    end
end

always @ (posedge ap_clk) begin
    if ((~((numReps_c129_empty_n == 1'b0) | (out_V_offset_empty_n == 1'b0) | (ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        numReps_c129_read_reg_150 <= numReps_c129_dout;
        out_V_offset_read_reg_144 <= out_V_offset_dout;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) & (icmp_ln187_fu_86_p2 == 1'd1))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = ap_done_reg;
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
    if (((1'b1 == ap_CS_fsm_state2) & (icmp_ln187_fu_86_p2 == 1'd1))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((((icmp_ln189_reg_159 == 1'd0) & (1'b1 == ap_CS_fsm_state3)) | ((icmp_ln187_fu_86_p2 == 1'd0) & (icmp_ln189_fu_100_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)))) begin
        m_axi_in_V_AWADDR = grp_Stream2Mem_1_fu_68_m_axi_out_V_AWADDR;
    end else if ((((1'b1 == ap_CS_fsm_state3) & (icmp_ln189_reg_159 == 1'd1)) | ((icmp_ln187_fu_86_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2) & (icmp_ln189_fu_100_p2 == 1'd1)))) begin
        m_axi_in_V_AWADDR = grp_Stream2Mem_fu_58_m_axi_out_V_AWADDR;
    end else begin
        m_axi_in_V_AWADDR = 'bx;
    end
end

always @ (*) begin
    if ((((icmp_ln189_reg_159 == 1'd0) & (1'b1 == ap_CS_fsm_state3)) | ((icmp_ln187_fu_86_p2 == 1'd0) & (icmp_ln189_fu_100_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)))) begin
        m_axi_in_V_AWBURST = grp_Stream2Mem_1_fu_68_m_axi_out_V_AWBURST;
    end else if ((((1'b1 == ap_CS_fsm_state3) & (icmp_ln189_reg_159 == 1'd1)) | ((icmp_ln187_fu_86_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2) & (icmp_ln189_fu_100_p2 == 1'd1)))) begin
        m_axi_in_V_AWBURST = grp_Stream2Mem_fu_58_m_axi_out_V_AWBURST;
    end else begin
        m_axi_in_V_AWBURST = 'bx;
    end
end

always @ (*) begin
    if ((((icmp_ln189_reg_159 == 1'd0) & (1'b1 == ap_CS_fsm_state3)) | ((icmp_ln187_fu_86_p2 == 1'd0) & (icmp_ln189_fu_100_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)))) begin
        m_axi_in_V_AWCACHE = grp_Stream2Mem_1_fu_68_m_axi_out_V_AWCACHE;
    end else if ((((1'b1 == ap_CS_fsm_state3) & (icmp_ln189_reg_159 == 1'd1)) | ((icmp_ln187_fu_86_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2) & (icmp_ln189_fu_100_p2 == 1'd1)))) begin
        m_axi_in_V_AWCACHE = grp_Stream2Mem_fu_58_m_axi_out_V_AWCACHE;
    end else begin
        m_axi_in_V_AWCACHE = 'bx;
    end
end

always @ (*) begin
    if ((((icmp_ln189_reg_159 == 1'd0) & (1'b1 == ap_CS_fsm_state3)) | ((icmp_ln187_fu_86_p2 == 1'd0) & (icmp_ln189_fu_100_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)))) begin
        m_axi_in_V_AWID = grp_Stream2Mem_1_fu_68_m_axi_out_V_AWID;
    end else if ((((1'b1 == ap_CS_fsm_state3) & (icmp_ln189_reg_159 == 1'd1)) | ((icmp_ln187_fu_86_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2) & (icmp_ln189_fu_100_p2 == 1'd1)))) begin
        m_axi_in_V_AWID = grp_Stream2Mem_fu_58_m_axi_out_V_AWID;
    end else begin
        m_axi_in_V_AWID = 'bx;
    end
end

always @ (*) begin
    if ((((icmp_ln189_reg_159 == 1'd0) & (1'b1 == ap_CS_fsm_state3)) | ((icmp_ln187_fu_86_p2 == 1'd0) & (icmp_ln189_fu_100_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)))) begin
        m_axi_in_V_AWLEN = grp_Stream2Mem_1_fu_68_m_axi_out_V_AWLEN;
    end else if ((((1'b1 == ap_CS_fsm_state3) & (icmp_ln189_reg_159 == 1'd1)) | ((icmp_ln187_fu_86_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2) & (icmp_ln189_fu_100_p2 == 1'd1)))) begin
        m_axi_in_V_AWLEN = grp_Stream2Mem_fu_58_m_axi_out_V_AWLEN;
    end else begin
        m_axi_in_V_AWLEN = 'bx;
    end
end

always @ (*) begin
    if ((((icmp_ln189_reg_159 == 1'd0) & (1'b1 == ap_CS_fsm_state3)) | ((icmp_ln187_fu_86_p2 == 1'd0) & (icmp_ln189_fu_100_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)))) begin
        m_axi_in_V_AWLOCK = grp_Stream2Mem_1_fu_68_m_axi_out_V_AWLOCK;
    end else if ((((1'b1 == ap_CS_fsm_state3) & (icmp_ln189_reg_159 == 1'd1)) | ((icmp_ln187_fu_86_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2) & (icmp_ln189_fu_100_p2 == 1'd1)))) begin
        m_axi_in_V_AWLOCK = grp_Stream2Mem_fu_58_m_axi_out_V_AWLOCK;
    end else begin
        m_axi_in_V_AWLOCK = 'bx;
    end
end

always @ (*) begin
    if ((((icmp_ln189_reg_159 == 1'd0) & (1'b1 == ap_CS_fsm_state3)) | ((icmp_ln187_fu_86_p2 == 1'd0) & (icmp_ln189_fu_100_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)))) begin
        m_axi_in_V_AWPROT = grp_Stream2Mem_1_fu_68_m_axi_out_V_AWPROT;
    end else if ((((1'b1 == ap_CS_fsm_state3) & (icmp_ln189_reg_159 == 1'd1)) | ((icmp_ln187_fu_86_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2) & (icmp_ln189_fu_100_p2 == 1'd1)))) begin
        m_axi_in_V_AWPROT = grp_Stream2Mem_fu_58_m_axi_out_V_AWPROT;
    end else begin
        m_axi_in_V_AWPROT = 'bx;
    end
end

always @ (*) begin
    if ((((icmp_ln189_reg_159 == 1'd0) & (1'b1 == ap_CS_fsm_state3)) | ((icmp_ln187_fu_86_p2 == 1'd0) & (icmp_ln189_fu_100_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)))) begin
        m_axi_in_V_AWQOS = grp_Stream2Mem_1_fu_68_m_axi_out_V_AWQOS;
    end else if ((((1'b1 == ap_CS_fsm_state3) & (icmp_ln189_reg_159 == 1'd1)) | ((icmp_ln187_fu_86_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2) & (icmp_ln189_fu_100_p2 == 1'd1)))) begin
        m_axi_in_V_AWQOS = grp_Stream2Mem_fu_58_m_axi_out_V_AWQOS;
    end else begin
        m_axi_in_V_AWQOS = 'bx;
    end
end

always @ (*) begin
    if ((((icmp_ln189_reg_159 == 1'd0) & (1'b1 == ap_CS_fsm_state3)) | ((icmp_ln187_fu_86_p2 == 1'd0) & (icmp_ln189_fu_100_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)))) begin
        m_axi_in_V_AWREGION = grp_Stream2Mem_1_fu_68_m_axi_out_V_AWREGION;
    end else if ((((1'b1 == ap_CS_fsm_state3) & (icmp_ln189_reg_159 == 1'd1)) | ((icmp_ln187_fu_86_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2) & (icmp_ln189_fu_100_p2 == 1'd1)))) begin
        m_axi_in_V_AWREGION = grp_Stream2Mem_fu_58_m_axi_out_V_AWREGION;
    end else begin
        m_axi_in_V_AWREGION = 'bx;
    end
end

always @ (*) begin
    if ((((icmp_ln189_reg_159 == 1'd0) & (1'b1 == ap_CS_fsm_state3)) | ((icmp_ln187_fu_86_p2 == 1'd0) & (icmp_ln189_fu_100_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)))) begin
        m_axi_in_V_AWSIZE = grp_Stream2Mem_1_fu_68_m_axi_out_V_AWSIZE;
    end else if ((((1'b1 == ap_CS_fsm_state3) & (icmp_ln189_reg_159 == 1'd1)) | ((icmp_ln187_fu_86_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2) & (icmp_ln189_fu_100_p2 == 1'd1)))) begin
        m_axi_in_V_AWSIZE = grp_Stream2Mem_fu_58_m_axi_out_V_AWSIZE;
    end else begin
        m_axi_in_V_AWSIZE = 'bx;
    end
end

always @ (*) begin
    if ((((icmp_ln189_reg_159 == 1'd0) & (1'b1 == ap_CS_fsm_state3)) | ((icmp_ln187_fu_86_p2 == 1'd0) & (icmp_ln189_fu_100_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)))) begin
        m_axi_in_V_AWUSER = grp_Stream2Mem_1_fu_68_m_axi_out_V_AWUSER;
    end else if ((((1'b1 == ap_CS_fsm_state3) & (icmp_ln189_reg_159 == 1'd1)) | ((icmp_ln187_fu_86_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2) & (icmp_ln189_fu_100_p2 == 1'd1)))) begin
        m_axi_in_V_AWUSER = grp_Stream2Mem_fu_58_m_axi_out_V_AWUSER;
    end else begin
        m_axi_in_V_AWUSER = 'bx;
    end
end

always @ (*) begin
    if ((((icmp_ln189_reg_159 == 1'd0) & (1'b1 == ap_CS_fsm_state3)) | ((icmp_ln187_fu_86_p2 == 1'd0) & (icmp_ln189_fu_100_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)))) begin
        m_axi_in_V_AWVALID = grp_Stream2Mem_1_fu_68_m_axi_out_V_AWVALID;
    end else if ((((1'b1 == ap_CS_fsm_state3) & (icmp_ln189_reg_159 == 1'd1)) | ((icmp_ln187_fu_86_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2) & (icmp_ln189_fu_100_p2 == 1'd1)))) begin
        m_axi_in_V_AWVALID = grp_Stream2Mem_fu_58_m_axi_out_V_AWVALID;
    end else begin
        m_axi_in_V_AWVALID = 1'b0;
    end
end

always @ (*) begin
    if ((((icmp_ln189_reg_159 == 1'd0) & (1'b1 == ap_CS_fsm_state3)) | ((icmp_ln187_fu_86_p2 == 1'd0) & (icmp_ln189_fu_100_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)))) begin
        m_axi_in_V_BREADY = grp_Stream2Mem_1_fu_68_m_axi_out_V_BREADY;
    end else if ((((1'b1 == ap_CS_fsm_state3) & (icmp_ln189_reg_159 == 1'd1)) | ((icmp_ln187_fu_86_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2) & (icmp_ln189_fu_100_p2 == 1'd1)))) begin
        m_axi_in_V_BREADY = grp_Stream2Mem_fu_58_m_axi_out_V_BREADY;
    end else begin
        m_axi_in_V_BREADY = 1'b0;
    end
end

always @ (*) begin
    if ((((icmp_ln189_reg_159 == 1'd0) & (1'b1 == ap_CS_fsm_state3)) | ((icmp_ln187_fu_86_p2 == 1'd0) & (icmp_ln189_fu_100_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)))) begin
        m_axi_in_V_WDATA = grp_Stream2Mem_1_fu_68_m_axi_out_V_WDATA;
    end else if ((((1'b1 == ap_CS_fsm_state3) & (icmp_ln189_reg_159 == 1'd1)) | ((icmp_ln187_fu_86_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2) & (icmp_ln189_fu_100_p2 == 1'd1)))) begin
        m_axi_in_V_WDATA = grp_Stream2Mem_fu_58_m_axi_out_V_WDATA;
    end else begin
        m_axi_in_V_WDATA = 'bx;
    end
end

always @ (*) begin
    if ((((icmp_ln189_reg_159 == 1'd0) & (1'b1 == ap_CS_fsm_state3)) | ((icmp_ln187_fu_86_p2 == 1'd0) & (icmp_ln189_fu_100_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)))) begin
        m_axi_in_V_WID = grp_Stream2Mem_1_fu_68_m_axi_out_V_WID;
    end else if ((((1'b1 == ap_CS_fsm_state3) & (icmp_ln189_reg_159 == 1'd1)) | ((icmp_ln187_fu_86_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2) & (icmp_ln189_fu_100_p2 == 1'd1)))) begin
        m_axi_in_V_WID = grp_Stream2Mem_fu_58_m_axi_out_V_WID;
    end else begin
        m_axi_in_V_WID = 'bx;
    end
end

always @ (*) begin
    if ((((icmp_ln189_reg_159 == 1'd0) & (1'b1 == ap_CS_fsm_state3)) | ((icmp_ln187_fu_86_p2 == 1'd0) & (icmp_ln189_fu_100_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)))) begin
        m_axi_in_V_WLAST = grp_Stream2Mem_1_fu_68_m_axi_out_V_WLAST;
    end else if ((((1'b1 == ap_CS_fsm_state3) & (icmp_ln189_reg_159 == 1'd1)) | ((icmp_ln187_fu_86_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2) & (icmp_ln189_fu_100_p2 == 1'd1)))) begin
        m_axi_in_V_WLAST = grp_Stream2Mem_fu_58_m_axi_out_V_WLAST;
    end else begin
        m_axi_in_V_WLAST = 'bx;
    end
end

always @ (*) begin
    if ((((icmp_ln189_reg_159 == 1'd0) & (1'b1 == ap_CS_fsm_state3)) | ((icmp_ln187_fu_86_p2 == 1'd0) & (icmp_ln189_fu_100_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)))) begin
        m_axi_in_V_WSTRB = grp_Stream2Mem_1_fu_68_m_axi_out_V_WSTRB;
    end else if ((((1'b1 == ap_CS_fsm_state3) & (icmp_ln189_reg_159 == 1'd1)) | ((icmp_ln187_fu_86_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2) & (icmp_ln189_fu_100_p2 == 1'd1)))) begin
        m_axi_in_V_WSTRB = grp_Stream2Mem_fu_58_m_axi_out_V_WSTRB;
    end else begin
        m_axi_in_V_WSTRB = 'bx;
    end
end

always @ (*) begin
    if ((((icmp_ln189_reg_159 == 1'd0) & (1'b1 == ap_CS_fsm_state3)) | ((icmp_ln187_fu_86_p2 == 1'd0) & (icmp_ln189_fu_100_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)))) begin
        m_axi_in_V_WUSER = grp_Stream2Mem_1_fu_68_m_axi_out_V_WUSER;
    end else if ((((1'b1 == ap_CS_fsm_state3) & (icmp_ln189_reg_159 == 1'd1)) | ((icmp_ln187_fu_86_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2) & (icmp_ln189_fu_100_p2 == 1'd1)))) begin
        m_axi_in_V_WUSER = grp_Stream2Mem_fu_58_m_axi_out_V_WUSER;
    end else begin
        m_axi_in_V_WUSER = 'bx;
    end
end

always @ (*) begin
    if ((((icmp_ln189_reg_159 == 1'd0) & (1'b1 == ap_CS_fsm_state3)) | ((icmp_ln187_fu_86_p2 == 1'd0) & (icmp_ln189_fu_100_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)))) begin
        m_axi_in_V_WVALID = grp_Stream2Mem_1_fu_68_m_axi_out_V_WVALID;
    end else if ((((1'b1 == ap_CS_fsm_state3) & (icmp_ln189_reg_159 == 1'd1)) | ((icmp_ln187_fu_86_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2) & (icmp_ln189_fu_100_p2 == 1'd1)))) begin
        m_axi_in_V_WVALID = grp_Stream2Mem_fu_58_m_axi_out_V_WVALID;
    end else begin
        m_axi_in_V_WVALID = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        if ((icmp_ln189_reg_159 == 1'd0)) begin
            memOutStrm_V_V_read = grp_Stream2Mem_1_fu_68_in_V_V_read;
        end else if ((icmp_ln189_reg_159 == 1'd1)) begin
            memOutStrm_V_V_read = grp_Stream2Mem_fu_58_in_V_V_read;
        end else begin
            memOutStrm_V_V_read = 1'b0;
        end
    end else begin
        memOutStrm_V_V_read = 1'b0;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        numReps_c129_blk_n = numReps_c129_empty_n;
    end else begin
        numReps_c129_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((numReps_c129_empty_n == 1'b0) | (out_V_offset_empty_n == 1'b0) | (ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        numReps_c129_read = 1'b1;
    end else begin
        numReps_c129_read = 1'b0;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        out_V_offset_blk_n = out_V_offset_empty_n;
    end else begin
        out_V_offset_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((numReps_c129_empty_n == 1'b0) | (out_V_offset_empty_n == 1'b0) | (ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        out_V_offset_read = 1'b1;
    end else begin
        out_V_offset_read = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if ((~((numReps_c129_empty_n == 1'b0) | (out_V_offset_empty_n == 1'b0) | (ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((1'b1 == ap_CS_fsm_state2) & (icmp_ln187_fu_86_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((1'b0 == ap_block_state3_on_subcall_done) & (1'b1 == ap_CS_fsm_state3))) begin
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
    ap_block_state1 = ((numReps_c129_empty_n == 1'b0) | (out_V_offset_empty_n == 1'b0) | (ap_start == 1'b0) | (ap_done_reg == 1'b1));
end

always @ (*) begin
    ap_block_state3_on_subcall_done = (((icmp_ln189_reg_159 == 1'd0) & (grp_Stream2Mem_1_fu_68_ap_done == 1'b0)) | ((grp_Stream2Mem_fu_58_ap_done == 1'b0) & (icmp_ln189_reg_159 == 1'd1)));
end

assign grp_Stream2Mem_1_fu_68_ap_start = grp_Stream2Mem_1_fu_68_ap_start_reg;

assign grp_Stream2Mem_fu_58_ap_start = grp_Stream2Mem_fu_58_ap_start_reg;

assign icmp_ln187_fu_86_p2 = ((rep_fu_42 == numReps_c129_read_reg_150) ? 1'b1 : 1'b0);

assign icmp_ln189_fu_100_p2 = ((trunc_ln188_fu_96_p1 == 4'd0) ? 1'b1 : 1'b0);

assign m_axi_in_V_ARADDR = 64'd0;

assign m_axi_in_V_ARBURST = 2'd0;

assign m_axi_in_V_ARCACHE = 4'd0;

assign m_axi_in_V_ARID = 1'd0;

assign m_axi_in_V_ARLEN = 32'd0;

assign m_axi_in_V_ARLOCK = 2'd0;

assign m_axi_in_V_ARPROT = 3'd0;

assign m_axi_in_V_ARQOS = 4'd0;

assign m_axi_in_V_ARREGION = 4'd0;

assign m_axi_in_V_ARSIZE = 3'd0;

assign m_axi_in_V_ARUSER = 1'd0;

assign m_axi_in_V_ARVALID = 1'b0;

assign m_axi_in_V_RREADY = 1'b0;

assign rep_1_fu_125_p2 = (rep_fu_42 + 32'd16);

assign rep_2_fu_114_p2 = (rep_fu_42 + 32'd1);

assign repsLeft_fu_91_p2 = (numReps_c129_read_reg_150 - rep_fu_42);

assign shl_ln191_fu_106_p2 = rep_fu_42 << 32'd4;

assign trunc_ln188_fu_96_p1 = repsLeft_fu_91_p2[3:0];

always @ (posedge ap_clk) begin
    shl_ln191_reg_163[3:0] <= 4'b0000;
end

endmodule //Stream2Mem_Batch

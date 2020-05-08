-- (c) Copyright 1995-2020 Xilinx, Inc. All rights reserved.
-- 
-- This file contains confidential and proprietary information
-- of Xilinx, Inc. and is protected under U.S. and
-- international copyright and other intellectual property
-- laws.
-- 
-- DISCLAIMER
-- This disclaimer is not a license and does not grant any
-- rights to the materials distributed herewith. Except as
-- otherwise provided in a valid license issued to you by
-- Xilinx, and to the maximum extent permitted by applicable
-- law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
-- WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
-- AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
-- BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
-- INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
-- (2) Xilinx shall not be liable (whether in contract or tort,
-- including negligence, or under any other theory of
-- liability) for any loss or damage of any kind or nature
-- related to, arising under or in connection with these
-- materials, including for any direct, or any indirect,
-- special, incidental, or consequential loss or damage
-- (including loss of data, profits, goodwill, or any type of
-- loss or damage suffered as a result of any action brought
-- by a third party) even if such damage or loss was
-- reasonably foreseeable or Xilinx had been advised of the
-- possibility of the same.
-- 
-- CRITICAL APPLICATIONS
-- Xilinx products are not designed or intended to be fail-
-- safe, or for use in any application requiring fail-safe
-- performance, such as life-support or safety devices or
-- systems, Class III medical devices, nuclear facilities,
-- applications related to the deployment of airbags, or any
-- other applications that could lead to death, personal
-- injury, or severe property or environmental damage
-- (individually and collectively, "Critical
-- Applications"). Customer assumes the sole risk and
-- liability of any use of Xilinx products in Critical
-- Applications, subject only to applicable laws and
-- regulations governing limitations on product liability.
-- 
-- THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
-- PART OF THIS FILE AT ALL TIMES.
-- 
-- DO NOT MODIFY THIS FILE.

-- IP VLNV: xilinx.com:hls:BlackBoxJam:1.0
-- IP Revision: 2004251308

LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;

ENTITY procsys_BlackBoxJam_0_0 IS
  PORT (
    s_axi_control_AWADDR : IN STD_LOGIC_VECTOR(6 DOWNTO 0);
    s_axi_control_AWVALID : IN STD_LOGIC;
    s_axi_control_AWREADY : OUT STD_LOGIC;
    s_axi_control_WDATA : IN STD_LOGIC_VECTOR(31 DOWNTO 0);
    s_axi_control_WSTRB : IN STD_LOGIC_VECTOR(3 DOWNTO 0);
    s_axi_control_WVALID : IN STD_LOGIC;
    s_axi_control_WREADY : OUT STD_LOGIC;
    s_axi_control_BRESP : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    s_axi_control_BVALID : OUT STD_LOGIC;
    s_axi_control_BREADY : IN STD_LOGIC;
    s_axi_control_ARADDR : IN STD_LOGIC_VECTOR(6 DOWNTO 0);
    s_axi_control_ARVALID : IN STD_LOGIC;
    s_axi_control_ARREADY : OUT STD_LOGIC;
    s_axi_control_RDATA : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
    s_axi_control_RRESP : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    s_axi_control_RVALID : OUT STD_LOGIC;
    s_axi_control_RREADY : IN STD_LOGIC;
    ap_clk : IN STD_LOGIC;
    ap_rst_n : IN STD_LOGIC;
    interrupt : OUT STD_LOGIC;
    m_axi_hostmem_AWADDR : OUT STD_LOGIC_VECTOR(63 DOWNTO 0);
    m_axi_hostmem_AWLEN : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
    m_axi_hostmem_AWSIZE : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    m_axi_hostmem_AWBURST : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_hostmem_AWLOCK : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_hostmem_AWREGION : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_hostmem_AWCACHE : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_hostmem_AWPROT : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    m_axi_hostmem_AWQOS : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_hostmem_AWVALID : OUT STD_LOGIC;
    m_axi_hostmem_AWREADY : IN STD_LOGIC;
    m_axi_hostmem_WDATA : OUT STD_LOGIC_VECTOR(63 DOWNTO 0);
    m_axi_hostmem_WSTRB : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
    m_axi_hostmem_WLAST : OUT STD_LOGIC;
    m_axi_hostmem_WVALID : OUT STD_LOGIC;
    m_axi_hostmem_WREADY : IN STD_LOGIC;
    m_axi_hostmem_BRESP : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_hostmem_BVALID : IN STD_LOGIC;
    m_axi_hostmem_BREADY : OUT STD_LOGIC;
    m_axi_hostmem_ARADDR : OUT STD_LOGIC_VECTOR(63 DOWNTO 0);
    m_axi_hostmem_ARLEN : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
    m_axi_hostmem_ARSIZE : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    m_axi_hostmem_ARBURST : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_hostmem_ARLOCK : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_hostmem_ARREGION : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_hostmem_ARCACHE : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_hostmem_ARPROT : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    m_axi_hostmem_ARQOS : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_hostmem_ARVALID : OUT STD_LOGIC;
    m_axi_hostmem_ARREADY : IN STD_LOGIC;
    m_axi_hostmem_RDATA : IN STD_LOGIC_VECTOR(63 DOWNTO 0);
    m_axi_hostmem_RRESP : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_hostmem_RLAST : IN STD_LOGIC;
    m_axi_hostmem_RVALID : IN STD_LOGIC;
    m_axi_hostmem_RREADY : OUT STD_LOGIC
  );
END procsys_BlackBoxJam_0_0;

ARCHITECTURE procsys_BlackBoxJam_0_0_arch OF procsys_BlackBoxJam_0_0 IS
  ATTRIBUTE DowngradeIPIdentifiedWarnings : STRING;
  ATTRIBUTE DowngradeIPIdentifiedWarnings OF procsys_BlackBoxJam_0_0_arch: ARCHITECTURE IS "yes";
  COMPONENT BlackBoxJam IS
    GENERIC (
      C_S_AXI_CONTROL_ADDR_WIDTH : INTEGER;
      C_S_AXI_CONTROL_DATA_WIDTH : INTEGER;
      C_M_AXI_HOSTMEM_ID_WIDTH : INTEGER;
      C_M_AXI_HOSTMEM_ADDR_WIDTH : INTEGER;
      C_M_AXI_HOSTMEM_DATA_WIDTH : INTEGER;
      C_M_AXI_HOSTMEM_AWUSER_WIDTH : INTEGER;
      C_M_AXI_HOSTMEM_ARUSER_WIDTH : INTEGER;
      C_M_AXI_HOSTMEM_WUSER_WIDTH : INTEGER;
      C_M_AXI_HOSTMEM_RUSER_WIDTH : INTEGER;
      C_M_AXI_HOSTMEM_BUSER_WIDTH : INTEGER;
      C_M_AXI_HOSTMEM_USER_VALUE : INTEGER;
      C_M_AXI_HOSTMEM_PROT_VALUE : INTEGER;
      C_M_AXI_HOSTMEM_CACHE_VALUE : INTEGER
    );
    PORT (
      s_axi_control_AWADDR : IN STD_LOGIC_VECTOR(6 DOWNTO 0);
      s_axi_control_AWVALID : IN STD_LOGIC;
      s_axi_control_AWREADY : OUT STD_LOGIC;
      s_axi_control_WDATA : IN STD_LOGIC_VECTOR(31 DOWNTO 0);
      s_axi_control_WSTRB : IN STD_LOGIC_VECTOR(3 DOWNTO 0);
      s_axi_control_WVALID : IN STD_LOGIC;
      s_axi_control_WREADY : OUT STD_LOGIC;
      s_axi_control_BRESP : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      s_axi_control_BVALID : OUT STD_LOGIC;
      s_axi_control_BREADY : IN STD_LOGIC;
      s_axi_control_ARADDR : IN STD_LOGIC_VECTOR(6 DOWNTO 0);
      s_axi_control_ARVALID : IN STD_LOGIC;
      s_axi_control_ARREADY : OUT STD_LOGIC;
      s_axi_control_RDATA : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
      s_axi_control_RRESP : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      s_axi_control_RVALID : OUT STD_LOGIC;
      s_axi_control_RREADY : IN STD_LOGIC;
      ap_clk : IN STD_LOGIC;
      ap_rst_n : IN STD_LOGIC;
      interrupt : OUT STD_LOGIC;
      m_axi_hostmem_AWID : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_hostmem_AWADDR : OUT STD_LOGIC_VECTOR(63 DOWNTO 0);
      m_axi_hostmem_AWLEN : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
      m_axi_hostmem_AWSIZE : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
      m_axi_hostmem_AWBURST : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_hostmem_AWLOCK : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_hostmem_AWREGION : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_hostmem_AWCACHE : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_hostmem_AWPROT : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
      m_axi_hostmem_AWQOS : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_hostmem_AWUSER : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_hostmem_AWVALID : OUT STD_LOGIC;
      m_axi_hostmem_AWREADY : IN STD_LOGIC;
      m_axi_hostmem_WID : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_hostmem_WDATA : OUT STD_LOGIC_VECTOR(63 DOWNTO 0);
      m_axi_hostmem_WSTRB : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
      m_axi_hostmem_WLAST : OUT STD_LOGIC;
      m_axi_hostmem_WUSER : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_hostmem_WVALID : OUT STD_LOGIC;
      m_axi_hostmem_WREADY : IN STD_LOGIC;
      m_axi_hostmem_BID : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_hostmem_BRESP : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_hostmem_BUSER : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_hostmem_BVALID : IN STD_LOGIC;
      m_axi_hostmem_BREADY : OUT STD_LOGIC;
      m_axi_hostmem_ARID : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_hostmem_ARADDR : OUT STD_LOGIC_VECTOR(63 DOWNTO 0);
      m_axi_hostmem_ARLEN : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
      m_axi_hostmem_ARSIZE : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
      m_axi_hostmem_ARBURST : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_hostmem_ARLOCK : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_hostmem_ARREGION : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_hostmem_ARCACHE : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_hostmem_ARPROT : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
      m_axi_hostmem_ARQOS : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_hostmem_ARUSER : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_hostmem_ARVALID : OUT STD_LOGIC;
      m_axi_hostmem_ARREADY : IN STD_LOGIC;
      m_axi_hostmem_RID : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_hostmem_RDATA : IN STD_LOGIC_VECTOR(63 DOWNTO 0);
      m_axi_hostmem_RRESP : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_hostmem_RLAST : IN STD_LOGIC;
      m_axi_hostmem_RUSER : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_hostmem_RVALID : IN STD_LOGIC;
      m_axi_hostmem_RREADY : OUT STD_LOGIC
    );
  END COMPONENT BlackBoxJam;
  ATTRIBUTE X_CORE_INFO : STRING;
  ATTRIBUTE X_CORE_INFO OF procsys_BlackBoxJam_0_0_arch: ARCHITECTURE IS "BlackBoxJam,Vivado 2019.2";
  ATTRIBUTE CHECK_LICENSE_TYPE : STRING;
  ATTRIBUTE CHECK_LICENSE_TYPE OF procsys_BlackBoxJam_0_0_arch : ARCHITECTURE IS "procsys_BlackBoxJam_0_0,BlackBoxJam,{}";
  ATTRIBUTE CORE_GENERATION_INFO : STRING;
  ATTRIBUTE CORE_GENERATION_INFO OF procsys_BlackBoxJam_0_0_arch: ARCHITECTURE IS "procsys_BlackBoxJam_0_0,BlackBoxJam,{x_ipProduct=Vivado 2019.2,x_ipVendor=xilinx.com,x_ipLibrary=hls,x_ipName=BlackBoxJam,x_ipVersion=1.0,x_ipCoreRevision=2004251308,x_ipLanguage=VHDL,x_ipSimLanguage=MIXED,C_S_AXI_CONTROL_ADDR_WIDTH=7,C_S_AXI_CONTROL_DATA_WIDTH=32,C_M_AXI_HOSTMEM_ID_WIDTH=1,C_M_AXI_HOSTMEM_ADDR_WIDTH=64,C_M_AXI_HOSTMEM_DATA_WIDTH=64,C_M_AXI_HOSTMEM_AWUSER_WIDTH=1,C_M_AXI_HOSTMEM_ARUSER_WIDTH=1,C_M_AXI_HOSTMEM_WUSER_WIDTH=1,C_M_AXI_HOSTMEM_RUSER_WIDTH=1,C_M_AXI_HOSTMEM_BUSER_WIDT" & 
"H=1,C_M_AXI_HOSTMEM_USER_VALUE=0x00000000,C_M_AXI_HOSTMEM_PROT_VALUE=000,C_M_AXI_HOSTMEM_CACHE_VALUE=0011}";
  ATTRIBUTE IP_DEFINITION_SOURCE : STRING;
  ATTRIBUTE IP_DEFINITION_SOURCE OF procsys_BlackBoxJam_0_0_arch: ARCHITECTURE IS "HLS";
  ATTRIBUTE X_INTERFACE_INFO : STRING;
  ATTRIBUTE X_INTERFACE_PARAMETER : STRING;
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_hostmem_RREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_hostmem RREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_hostmem_RVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_hostmem RVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_hostmem_RLAST: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_hostmem RLAST";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_hostmem_RRESP: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_hostmem RRESP";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_hostmem_RDATA: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_hostmem RDATA";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_hostmem_ARREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_hostmem ARREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_hostmem_ARVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_hostmem ARVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_hostmem_ARQOS: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_hostmem ARQOS";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_hostmem_ARPROT: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_hostmem ARPROT";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_hostmem_ARCACHE: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_hostmem ARCACHE";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_hostmem_ARREGION: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_hostmem ARREGION";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_hostmem_ARLOCK: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_hostmem ARLOCK";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_hostmem_ARBURST: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_hostmem ARBURST";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_hostmem_ARSIZE: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_hostmem ARSIZE";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_hostmem_ARLEN: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_hostmem ARLEN";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_hostmem_ARADDR: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_hostmem ARADDR";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_hostmem_BREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_hostmem BREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_hostmem_BVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_hostmem BVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_hostmem_BRESP: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_hostmem BRESP";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_hostmem_WREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_hostmem WREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_hostmem_WVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_hostmem WVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_hostmem_WLAST: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_hostmem WLAST";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_hostmem_WSTRB: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_hostmem WSTRB";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_hostmem_WDATA: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_hostmem WDATA";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_hostmem_AWREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_hostmem AWREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_hostmem_AWVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_hostmem AWVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_hostmem_AWQOS: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_hostmem AWQOS";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_hostmem_AWPROT: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_hostmem AWPROT";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_hostmem_AWCACHE: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_hostmem AWCACHE";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_hostmem_AWREGION: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_hostmem AWREGION";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_hostmem_AWLOCK: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_hostmem AWLOCK";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_hostmem_AWBURST: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_hostmem AWBURST";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_hostmem_AWSIZE: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_hostmem AWSIZE";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_hostmem_AWLEN: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_hostmem AWLEN";
  ATTRIBUTE X_INTERFACE_PARAMETER OF m_axi_hostmem_AWADDR: SIGNAL IS "XIL_INTERFACENAME m_axi_hostmem, ADDR_WIDTH 64, MAX_BURST_LENGTH 256, NUM_READ_OUTSTANDING 16, NUM_WRITE_OUTSTANDING 16, MAX_READ_BURST_LENGTH 16, MAX_WRITE_BURST_LENGTH 16, PROTOCOL AXI4, READ_WRITE_MODE READ_WRITE, HAS_BURST 0, SUPPORTS_NARROW_BURST 0, DATA_WIDTH 64, FREQ_HZ 100000000, ID_WIDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_LOCK 1, HAS_PROT 1, HAS_CACHE 1, HAS_QOS 1, HAS_REGION 1, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, PHASE 0.000, CLK_DOMA" & 
"IN procsys_ps7_0_FCLK_CLK0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_hostmem_AWADDR: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_hostmem AWADDR";
  ATTRIBUTE X_INTERFACE_PARAMETER OF interrupt: SIGNAL IS "XIL_INTERFACENAME interrupt, SENSITIVITY LEVEL_HIGH, PortWidth 1";
  ATTRIBUTE X_INTERFACE_INFO OF interrupt: SIGNAL IS "xilinx.com:signal:interrupt:1.0 interrupt INTERRUPT";
  ATTRIBUTE X_INTERFACE_PARAMETER OF ap_rst_n: SIGNAL IS "XIL_INTERFACENAME ap_rst_n, POLARITY ACTIVE_LOW, INSERT_VIP 0";
  ATTRIBUTE X_INTERFACE_INFO OF ap_rst_n: SIGNAL IS "xilinx.com:signal:reset:1.0 ap_rst_n RST";
  ATTRIBUTE X_INTERFACE_PARAMETER OF ap_clk: SIGNAL IS "XIL_INTERFACENAME ap_clk, ASSOCIATED_BUSIF s_axi_control:m_axi_hostmem, ASSOCIATED_RESET ap_rst_n, FREQ_HZ 100000000, PHASE 0.000, CLK_DOMAIN procsys_ps7_0_FCLK_CLK0, INSERT_VIP 0";
  ATTRIBUTE X_INTERFACE_INFO OF ap_clk: SIGNAL IS "xilinx.com:signal:clock:1.0 ap_clk CLK";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_control_RREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_control RREADY";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_control_RVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_control RVALID";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_control_RRESP: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_control RRESP";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_control_RDATA: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_control RDATA";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_control_ARREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_control ARREADY";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_control_ARVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_control ARVALID";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_control_ARADDR: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_control ARADDR";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_control_BREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_control BREADY";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_control_BVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_control BVALID";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_control_BRESP: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_control BRESP";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_control_WREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_control WREADY";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_control_WVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_control WVALID";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_control_WSTRB: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_control WSTRB";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_control_WDATA: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_control WDATA";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_control_AWREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_control AWREADY";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_control_AWVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_control AWVALID";
  ATTRIBUTE X_INTERFACE_PARAMETER OF s_axi_control_AWADDR: SIGNAL IS "XIL_INTERFACENAME s_axi_control, ADDR_WIDTH 7, DATA_WIDTH 32, PROTOCOL AXI4LITE, READ_WRITE_MODE READ_WRITE, FREQ_HZ 100000000, ID_WIDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_BURST 0, HAS_LOCK 0, HAS_PROT 0, HAS_CACHE 0, HAS_QOS 0, HAS_REGION 0, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, SUPPORTS_NARROW_BURST 0, NUM_READ_OUTSTANDING 1, NUM_WRITE_OUTSTANDING 1, MAX_BURST_LENGTH 1, PHASE 0.000, CLK_DOMAIN procsys_ps7_0_FCLK_CLK0, NUM_READ_THREADS 1, NUM_WR" & 
"ITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_control_AWADDR: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_control AWADDR";
BEGIN
  U0 : BlackBoxJam
    GENERIC MAP (
      C_S_AXI_CONTROL_ADDR_WIDTH => 7,
      C_S_AXI_CONTROL_DATA_WIDTH => 32,
      C_M_AXI_HOSTMEM_ID_WIDTH => 1,
      C_M_AXI_HOSTMEM_ADDR_WIDTH => 64,
      C_M_AXI_HOSTMEM_DATA_WIDTH => 64,
      C_M_AXI_HOSTMEM_AWUSER_WIDTH => 1,
      C_M_AXI_HOSTMEM_ARUSER_WIDTH => 1,
      C_M_AXI_HOSTMEM_WUSER_WIDTH => 1,
      C_M_AXI_HOSTMEM_RUSER_WIDTH => 1,
      C_M_AXI_HOSTMEM_BUSER_WIDTH => 1,
      C_M_AXI_HOSTMEM_USER_VALUE => 0,
      C_M_AXI_HOSTMEM_PROT_VALUE => 0,
      C_M_AXI_HOSTMEM_CACHE_VALUE => 3
    )
    PORT MAP (
      s_axi_control_AWADDR => s_axi_control_AWADDR,
      s_axi_control_AWVALID => s_axi_control_AWVALID,
      s_axi_control_AWREADY => s_axi_control_AWREADY,
      s_axi_control_WDATA => s_axi_control_WDATA,
      s_axi_control_WSTRB => s_axi_control_WSTRB,
      s_axi_control_WVALID => s_axi_control_WVALID,
      s_axi_control_WREADY => s_axi_control_WREADY,
      s_axi_control_BRESP => s_axi_control_BRESP,
      s_axi_control_BVALID => s_axi_control_BVALID,
      s_axi_control_BREADY => s_axi_control_BREADY,
      s_axi_control_ARADDR => s_axi_control_ARADDR,
      s_axi_control_ARVALID => s_axi_control_ARVALID,
      s_axi_control_ARREADY => s_axi_control_ARREADY,
      s_axi_control_RDATA => s_axi_control_RDATA,
      s_axi_control_RRESP => s_axi_control_RRESP,
      s_axi_control_RVALID => s_axi_control_RVALID,
      s_axi_control_RREADY => s_axi_control_RREADY,
      ap_clk => ap_clk,
      ap_rst_n => ap_rst_n,
      interrupt => interrupt,
      m_axi_hostmem_AWADDR => m_axi_hostmem_AWADDR,
      m_axi_hostmem_AWLEN => m_axi_hostmem_AWLEN,
      m_axi_hostmem_AWSIZE => m_axi_hostmem_AWSIZE,
      m_axi_hostmem_AWBURST => m_axi_hostmem_AWBURST,
      m_axi_hostmem_AWLOCK => m_axi_hostmem_AWLOCK,
      m_axi_hostmem_AWREGION => m_axi_hostmem_AWREGION,
      m_axi_hostmem_AWCACHE => m_axi_hostmem_AWCACHE,
      m_axi_hostmem_AWPROT => m_axi_hostmem_AWPROT,
      m_axi_hostmem_AWQOS => m_axi_hostmem_AWQOS,
      m_axi_hostmem_AWVALID => m_axi_hostmem_AWVALID,
      m_axi_hostmem_AWREADY => m_axi_hostmem_AWREADY,
      m_axi_hostmem_WDATA => m_axi_hostmem_WDATA,
      m_axi_hostmem_WSTRB => m_axi_hostmem_WSTRB,
      m_axi_hostmem_WLAST => m_axi_hostmem_WLAST,
      m_axi_hostmem_WVALID => m_axi_hostmem_WVALID,
      m_axi_hostmem_WREADY => m_axi_hostmem_WREADY,
      m_axi_hostmem_BID => STD_LOGIC_VECTOR(TO_UNSIGNED(0, 1)),
      m_axi_hostmem_BRESP => m_axi_hostmem_BRESP,
      m_axi_hostmem_BUSER => STD_LOGIC_VECTOR(TO_UNSIGNED(0, 1)),
      m_axi_hostmem_BVALID => m_axi_hostmem_BVALID,
      m_axi_hostmem_BREADY => m_axi_hostmem_BREADY,
      m_axi_hostmem_ARADDR => m_axi_hostmem_ARADDR,
      m_axi_hostmem_ARLEN => m_axi_hostmem_ARLEN,
      m_axi_hostmem_ARSIZE => m_axi_hostmem_ARSIZE,
      m_axi_hostmem_ARBURST => m_axi_hostmem_ARBURST,
      m_axi_hostmem_ARLOCK => m_axi_hostmem_ARLOCK,
      m_axi_hostmem_ARREGION => m_axi_hostmem_ARREGION,
      m_axi_hostmem_ARCACHE => m_axi_hostmem_ARCACHE,
      m_axi_hostmem_ARPROT => m_axi_hostmem_ARPROT,
      m_axi_hostmem_ARQOS => m_axi_hostmem_ARQOS,
      m_axi_hostmem_ARVALID => m_axi_hostmem_ARVALID,
      m_axi_hostmem_ARREADY => m_axi_hostmem_ARREADY,
      m_axi_hostmem_RID => STD_LOGIC_VECTOR(TO_UNSIGNED(0, 1)),
      m_axi_hostmem_RDATA => m_axi_hostmem_RDATA,
      m_axi_hostmem_RRESP => m_axi_hostmem_RRESP,
      m_axi_hostmem_RLAST => m_axi_hostmem_RLAST,
      m_axi_hostmem_RUSER => STD_LOGIC_VECTOR(TO_UNSIGNED(0, 1)),
      m_axi_hostmem_RVALID => m_axi_hostmem_RVALID,
      m_axi_hostmem_RREADY => m_axi_hostmem_RREADY
    );
END procsys_BlackBoxJam_0_0_arch;

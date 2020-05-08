-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2019.2 (win64) Build 2708876 Wed Nov  6 21:40:23 MST 2019
-- Date        : Mon Apr 27 05:11:11 2020
-- Host        : DESKTOP-UVQQVTK running 64-bit major release  (build 9200)
-- Command     : write_vhdl -force -mode synth_stub -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
--               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ procsys_BlackBoxJam_0_0_stub.vhdl
-- Design      : procsys_BlackBoxJam_0_0
-- Purpose     : Stub declaration of top-level module interface
-- Device      : xc7z020clg400-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix is
  Port ( 
    s_axi_control_AWADDR : in STD_LOGIC_VECTOR ( 6 downto 0 );
    s_axi_control_AWVALID : in STD_LOGIC;
    s_axi_control_AWREADY : out STD_LOGIC;
    s_axi_control_WDATA : in STD_LOGIC_VECTOR ( 31 downto 0 );
    s_axi_control_WSTRB : in STD_LOGIC_VECTOR ( 3 downto 0 );
    s_axi_control_WVALID : in STD_LOGIC;
    s_axi_control_WREADY : out STD_LOGIC;
    s_axi_control_BRESP : out STD_LOGIC_VECTOR ( 1 downto 0 );
    s_axi_control_BVALID : out STD_LOGIC;
    s_axi_control_BREADY : in STD_LOGIC;
    s_axi_control_ARADDR : in STD_LOGIC_VECTOR ( 6 downto 0 );
    s_axi_control_ARVALID : in STD_LOGIC;
    s_axi_control_ARREADY : out STD_LOGIC;
    s_axi_control_RDATA : out STD_LOGIC_VECTOR ( 31 downto 0 );
    s_axi_control_RRESP : out STD_LOGIC_VECTOR ( 1 downto 0 );
    s_axi_control_RVALID : out STD_LOGIC;
    s_axi_control_RREADY : in STD_LOGIC;
    ap_clk : in STD_LOGIC;
    ap_rst_n : in STD_LOGIC;
    interrupt : out STD_LOGIC;
    m_axi_hostmem_AWADDR : out STD_LOGIC_VECTOR ( 63 downto 0 );
    m_axi_hostmem_AWLEN : out STD_LOGIC_VECTOR ( 7 downto 0 );
    m_axi_hostmem_AWSIZE : out STD_LOGIC_VECTOR ( 2 downto 0 );
    m_axi_hostmem_AWBURST : out STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_hostmem_AWLOCK : out STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_hostmem_AWREGION : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_hostmem_AWCACHE : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_hostmem_AWPROT : out STD_LOGIC_VECTOR ( 2 downto 0 );
    m_axi_hostmem_AWQOS : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_hostmem_AWVALID : out STD_LOGIC;
    m_axi_hostmem_AWREADY : in STD_LOGIC;
    m_axi_hostmem_WDATA : out STD_LOGIC_VECTOR ( 63 downto 0 );
    m_axi_hostmem_WSTRB : out STD_LOGIC_VECTOR ( 7 downto 0 );
    m_axi_hostmem_WLAST : out STD_LOGIC;
    m_axi_hostmem_WVALID : out STD_LOGIC;
    m_axi_hostmem_WREADY : in STD_LOGIC;
    m_axi_hostmem_BRESP : in STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_hostmem_BVALID : in STD_LOGIC;
    m_axi_hostmem_BREADY : out STD_LOGIC;
    m_axi_hostmem_ARADDR : out STD_LOGIC_VECTOR ( 63 downto 0 );
    m_axi_hostmem_ARLEN : out STD_LOGIC_VECTOR ( 7 downto 0 );
    m_axi_hostmem_ARSIZE : out STD_LOGIC_VECTOR ( 2 downto 0 );
    m_axi_hostmem_ARBURST : out STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_hostmem_ARLOCK : out STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_hostmem_ARREGION : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_hostmem_ARCACHE : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_hostmem_ARPROT : out STD_LOGIC_VECTOR ( 2 downto 0 );
    m_axi_hostmem_ARQOS : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_hostmem_ARVALID : out STD_LOGIC;
    m_axi_hostmem_ARREADY : in STD_LOGIC;
    m_axi_hostmem_RDATA : in STD_LOGIC_VECTOR ( 63 downto 0 );
    m_axi_hostmem_RRESP : in STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_hostmem_RLAST : in STD_LOGIC;
    m_axi_hostmem_RVALID : in STD_LOGIC;
    m_axi_hostmem_RREADY : out STD_LOGIC
  );

end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix;

architecture stub of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix is
attribute syn_black_box : boolean;
attribute black_box_pad_pin : string;
attribute syn_black_box of stub : architecture is true;
attribute black_box_pad_pin of stub : architecture is "s_axi_control_AWADDR[6:0],s_axi_control_AWVALID,s_axi_control_AWREADY,s_axi_control_WDATA[31:0],s_axi_control_WSTRB[3:0],s_axi_control_WVALID,s_axi_control_WREADY,s_axi_control_BRESP[1:0],s_axi_control_BVALID,s_axi_control_BREADY,s_axi_control_ARADDR[6:0],s_axi_control_ARVALID,s_axi_control_ARREADY,s_axi_control_RDATA[31:0],s_axi_control_RRESP[1:0],s_axi_control_RVALID,s_axi_control_RREADY,ap_clk,ap_rst_n,interrupt,m_axi_hostmem_AWADDR[63:0],m_axi_hostmem_AWLEN[7:0],m_axi_hostmem_AWSIZE[2:0],m_axi_hostmem_AWBURST[1:0],m_axi_hostmem_AWLOCK[1:0],m_axi_hostmem_AWREGION[3:0],m_axi_hostmem_AWCACHE[3:0],m_axi_hostmem_AWPROT[2:0],m_axi_hostmem_AWQOS[3:0],m_axi_hostmem_AWVALID,m_axi_hostmem_AWREADY,m_axi_hostmem_WDATA[63:0],m_axi_hostmem_WSTRB[7:0],m_axi_hostmem_WLAST,m_axi_hostmem_WVALID,m_axi_hostmem_WREADY,m_axi_hostmem_BRESP[1:0],m_axi_hostmem_BVALID,m_axi_hostmem_BREADY,m_axi_hostmem_ARADDR[63:0],m_axi_hostmem_ARLEN[7:0],m_axi_hostmem_ARSIZE[2:0],m_axi_hostmem_ARBURST[1:0],m_axi_hostmem_ARLOCK[1:0],m_axi_hostmem_ARREGION[3:0],m_axi_hostmem_ARCACHE[3:0],m_axi_hostmem_ARPROT[2:0],m_axi_hostmem_ARQOS[3:0],m_axi_hostmem_ARVALID,m_axi_hostmem_ARREADY,m_axi_hostmem_RDATA[63:0],m_axi_hostmem_RRESP[1:0],m_axi_hostmem_RLAST,m_axi_hostmem_RVALID,m_axi_hostmem_RREADY";
attribute x_core_info : string;
attribute x_core_info of stub : architecture is "BlackBoxJam,Vivado 2019.2";
begin
end;

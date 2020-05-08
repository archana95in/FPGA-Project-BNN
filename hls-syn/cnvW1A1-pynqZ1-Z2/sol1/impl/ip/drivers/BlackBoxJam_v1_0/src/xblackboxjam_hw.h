// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
// control
// 0x00 : Control signals
//        bit 0  - ap_start (Read/Write/COH)
//        bit 1  - ap_done (Read/COR)
//        bit 2  - ap_idle (Read)
//        bit 3  - ap_ready (Read)
//        bit 7  - auto_restart (Read/Write)
//        others - reserved
// 0x04 : Global Interrupt Enable Register
//        bit 0  - Global Interrupt Enable (Read/Write)
//        others - reserved
// 0x08 : IP Interrupt Enable Register (Read/Write)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x0c : IP Interrupt Status Register (Read/TOW)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x10 : Data signal of in_V
//        bit 31~0 - in_V[31:0] (Read/Write)
// 0x14 : Data signal of in_V
//        bit 31~0 - in_V[63:32] (Read/Write)
// 0x18 : reserved
// 0x1c : Data signal of out_V
//        bit 31~0 - out_V[31:0] (Read/Write)
// 0x20 : Data signal of out_V
//        bit 31~0 - out_V[63:32] (Read/Write)
// 0x24 : reserved
// 0x28 : Data signal of doInit
//        bit 0  - doInit[0] (Read/Write)
//        others - reserved
// 0x2c : reserved
// 0x30 : Data signal of targetLayer
//        bit 31~0 - targetLayer[31:0] (Read/Write)
// 0x34 : reserved
// 0x38 : Data signal of targetMem
//        bit 31~0 - targetMem[31:0] (Read/Write)
// 0x3c : reserved
// 0x40 : Data signal of targetInd
//        bit 31~0 - targetInd[31:0] (Read/Write)
// 0x44 : reserved
// 0x48 : Data signal of targetThresh
//        bit 31~0 - targetThresh[31:0] (Read/Write)
// 0x4c : reserved
// 0x50 : Data signal of val_V
//        bit 31~0 - val_V[31:0] (Read/Write)
// 0x54 : Data signal of val_V
//        bit 31~0 - val_V[63:32] (Read/Write)
// 0x58 : reserved
// 0x5c : Data signal of numReps
//        bit 31~0 - numReps[31:0] (Read/Write)
// 0x60 : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XBLACKBOXJAM_CONTROL_ADDR_AP_CTRL           0x00
#define XBLACKBOXJAM_CONTROL_ADDR_GIE               0x04
#define XBLACKBOXJAM_CONTROL_ADDR_IER               0x08
#define XBLACKBOXJAM_CONTROL_ADDR_ISR               0x0c
#define XBLACKBOXJAM_CONTROL_ADDR_IN_V_DATA         0x10
#define XBLACKBOXJAM_CONTROL_BITS_IN_V_DATA         64
#define XBLACKBOXJAM_CONTROL_ADDR_OUT_V_DATA        0x1c
#define XBLACKBOXJAM_CONTROL_BITS_OUT_V_DATA        64
#define XBLACKBOXJAM_CONTROL_ADDR_DOINIT_DATA       0x28
#define XBLACKBOXJAM_CONTROL_BITS_DOINIT_DATA       1
#define XBLACKBOXJAM_CONTROL_ADDR_TARGETLAYER_DATA  0x30
#define XBLACKBOXJAM_CONTROL_BITS_TARGETLAYER_DATA  32
#define XBLACKBOXJAM_CONTROL_ADDR_TARGETMEM_DATA    0x38
#define XBLACKBOXJAM_CONTROL_BITS_TARGETMEM_DATA    32
#define XBLACKBOXJAM_CONTROL_ADDR_TARGETIND_DATA    0x40
#define XBLACKBOXJAM_CONTROL_BITS_TARGETIND_DATA    32
#define XBLACKBOXJAM_CONTROL_ADDR_TARGETTHRESH_DATA 0x48
#define XBLACKBOXJAM_CONTROL_BITS_TARGETTHRESH_DATA 32
#define XBLACKBOXJAM_CONTROL_ADDR_VAL_V_DATA        0x50
#define XBLACKBOXJAM_CONTROL_BITS_VAL_V_DATA        64
#define XBLACKBOXJAM_CONTROL_ADDR_NUMREPS_DATA      0x5c
#define XBLACKBOXJAM_CONTROL_BITS_NUMREPS_DATA      32


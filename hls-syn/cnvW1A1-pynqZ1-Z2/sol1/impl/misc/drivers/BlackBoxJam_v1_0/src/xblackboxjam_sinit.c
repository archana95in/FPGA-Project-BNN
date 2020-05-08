// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xblackboxjam.h"

extern XBlackboxjam_Config XBlackboxjam_ConfigTable[];

XBlackboxjam_Config *XBlackboxjam_LookupConfig(u16 DeviceId) {
	XBlackboxjam_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XBLACKBOXJAM_NUM_INSTANCES; Index++) {
		if (XBlackboxjam_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XBlackboxjam_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XBlackboxjam_Initialize(XBlackboxjam *InstancePtr, u16 DeviceId) {
	XBlackboxjam_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XBlackboxjam_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XBlackboxjam_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif


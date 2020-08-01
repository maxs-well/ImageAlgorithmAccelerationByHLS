// ==============================================================
// File generated on Sat Aug 01 11:38:23 +0800 2020
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xrgb2gray.h"

extern XRgb2gray_Config XRgb2gray_ConfigTable[];

XRgb2gray_Config *XRgb2gray_LookupConfig(u16 DeviceId) {
	XRgb2gray_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XRGB2GRAY_NUM_INSTANCES; Index++) {
		if (XRgb2gray_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XRgb2gray_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XRgb2gray_Initialize(XRgb2gray *InstancePtr, u16 DeviceId) {
	XRgb2gray_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XRgb2gray_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XRgb2gray_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif


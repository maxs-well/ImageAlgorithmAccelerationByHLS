// ==============================================================
// File generated on Sat Aug 01 11:38:23 +0800 2020
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xrgb2gray.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XRgb2gray_CfgInitialize(XRgb2gray *InstancePtr, XRgb2gray_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Control_bus_BaseAddress = ConfigPtr->Control_bus_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XRgb2gray_Set_rows(XRgb2gray *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XRgb2gray_WriteReg(InstancePtr->Control_bus_BaseAddress, XRGB2GRAY_CONTROL_BUS_ADDR_ROWS_DATA, Data);
}

u32 XRgb2gray_Get_rows(XRgb2gray *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XRgb2gray_ReadReg(InstancePtr->Control_bus_BaseAddress, XRGB2GRAY_CONTROL_BUS_ADDR_ROWS_DATA);
    return Data;
}

void XRgb2gray_Set_cols(XRgb2gray *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XRgb2gray_WriteReg(InstancePtr->Control_bus_BaseAddress, XRGB2GRAY_CONTROL_BUS_ADDR_COLS_DATA, Data);
}

u32 XRgb2gray_Get_cols(XRgb2gray *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XRgb2gray_ReadReg(InstancePtr->Control_bus_BaseAddress, XRGB2GRAY_CONTROL_BUS_ADDR_COLS_DATA);
    return Data;
}


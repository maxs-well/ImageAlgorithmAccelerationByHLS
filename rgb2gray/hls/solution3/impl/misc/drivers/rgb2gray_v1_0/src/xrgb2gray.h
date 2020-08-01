// ==============================================================
// File generated on Sat Aug 01 11:38:23 +0800 2020
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef XRGB2GRAY_H
#define XRGB2GRAY_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#ifndef __linux__
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xil_io.h"
#else
#include <stdint.h>
#include <assert.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stddef.h>
#endif
#include "xrgb2gray_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Control_bus_BaseAddress;
} XRgb2gray_Config;
#endif

typedef struct {
    u32 Control_bus_BaseAddress;
    u32 IsReady;
} XRgb2gray;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XRgb2gray_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XRgb2gray_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XRgb2gray_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XRgb2gray_ReadReg(BaseAddress, RegOffset) \
    *(volatile u32*)((BaseAddress) + (RegOffset))

#define Xil_AssertVoid(expr)    assert(expr)
#define Xil_AssertNonvoid(expr) assert(expr)

#define XST_SUCCESS             0
#define XST_DEVICE_NOT_FOUND    2
#define XST_OPEN_DEVICE_FAILED  3
#define XIL_COMPONENT_IS_READY  1
#endif

/************************** Function Prototypes *****************************/
#ifndef __linux__
int XRgb2gray_Initialize(XRgb2gray *InstancePtr, u16 DeviceId);
XRgb2gray_Config* XRgb2gray_LookupConfig(u16 DeviceId);
int XRgb2gray_CfgInitialize(XRgb2gray *InstancePtr, XRgb2gray_Config *ConfigPtr);
#else
int XRgb2gray_Initialize(XRgb2gray *InstancePtr, const char* InstanceName);
int XRgb2gray_Release(XRgb2gray *InstancePtr);
#endif


void XRgb2gray_Set_rows(XRgb2gray *InstancePtr, u32 Data);
u32 XRgb2gray_Get_rows(XRgb2gray *InstancePtr);
void XRgb2gray_Set_cols(XRgb2gray *InstancePtr, u32 Data);
u32 XRgb2gray_Get_cols(XRgb2gray *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif

// ==============================================================
// File generated on Sat Aug 01 11:38:23 +0800 2020
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
// CONTROL_BUS
// 0x00 : reserved
// 0x04 : reserved
// 0x08 : reserved
// 0x0c : reserved
// 0x14 : Data signal of rows
//        bit 31~0 - rows[31:0] (Read/Write)
// 0x18 : reserved
// 0x1c : Data signal of cols
//        bit 31~0 - cols[31:0] (Read/Write)
// 0x20 : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XRGB2GRAY_CONTROL_BUS_ADDR_ROWS_DATA 0x14
#define XRGB2GRAY_CONTROL_BUS_BITS_ROWS_DATA 32
#define XRGB2GRAY_CONTROL_BUS_ADDR_COLS_DATA 0x1c
#define XRGB2GRAY_CONTROL_BUS_BITS_COLS_DATA 32


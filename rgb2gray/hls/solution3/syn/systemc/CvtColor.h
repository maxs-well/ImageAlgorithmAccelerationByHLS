// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _CvtColor_HH_
#define _CvtColor_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "rgb2gray_mul_mul_bkb.h"
#include "rgb2gray_mac_mulacud.h"
#include "rgb2gray_mac_muladEe.h"

namespace ap_rtl {

struct CvtColor : public sc_module {
    // Port declarations 25
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<32> > p_src_rows_V_dout;
    sc_in< sc_logic > p_src_rows_V_empty_n;
    sc_out< sc_logic > p_src_rows_V_read;
    sc_in< sc_lv<32> > p_src_cols_V_dout;
    sc_in< sc_logic > p_src_cols_V_empty_n;
    sc_out< sc_logic > p_src_cols_V_read;
    sc_in< sc_lv<8> > p_src_data_stream_0_V_dout;
    sc_in< sc_logic > p_src_data_stream_0_V_empty_n;
    sc_out< sc_logic > p_src_data_stream_0_V_read;
    sc_in< sc_lv<8> > p_src_data_stream_1_V_dout;
    sc_in< sc_logic > p_src_data_stream_1_V_empty_n;
    sc_out< sc_logic > p_src_data_stream_1_V_read;
    sc_in< sc_lv<8> > p_src_data_stream_2_V_dout;
    sc_in< sc_logic > p_src_data_stream_2_V_empty_n;
    sc_out< sc_logic > p_src_data_stream_2_V_read;
    sc_out< sc_lv<8> > p_dst_data_stream_V_din;
    sc_in< sc_logic > p_dst_data_stream_V_full_n;
    sc_out< sc_logic > p_dst_data_stream_V_write;


    // Module declarations
    CvtColor(sc_module_name name);
    SC_HAS_PROCESS(CvtColor);

    ~CvtColor();

    sc_trace_file* mVcdFile;

    rgb2gray_mul_mul_bkb<1,1,22,8,29>* rgb2gray_mul_mul_bkb_U23;
    rgb2gray_mac_mulacud<1,1,23,8,29,30>* rgb2gray_mac_mulacud_U24;
    rgb2gray_mac_muladEe<1,1,20,8,29,29>* rgb2gray_mac_muladEe_U25;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<4> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > p_src_rows_V_blk_n;
    sc_signal< sc_logic > p_src_cols_V_blk_n;
    sc_signal< sc_logic > p_src_data_stream_0_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<1> > tmp_1_i_reg_294;
    sc_signal< sc_logic > p_src_data_stream_1_V_blk_n;
    sc_signal< sc_logic > p_src_data_stream_2_V_blk_n;
    sc_signal< sc_logic > p_dst_data_stream_V_blk_n;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter4;
    sc_signal< sc_lv<1> > tmp_1_i_reg_294_pp0_iter3_reg;
    sc_signal< sc_lv<31> > j_i_reg_138;
    sc_signal< sc_lv<32> > cols_reg_275;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_lv<32> > rows_reg_280;
    sc_signal< sc_lv<1> > tmp_i_fu_153_p2;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<31> > i_fu_158_p2;
    sc_signal< sc_lv<31> > i_reg_289;
    sc_signal< sc_lv<1> > tmp_1_i_fu_168_p2;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state5_pp0_stage0_iter2;
    sc_signal< bool > ap_block_state6_pp0_stage0_iter3;
    sc_signal< bool > ap_block_state7_pp0_stage0_iter4;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<1> > tmp_1_i_reg_294_pp0_iter1_reg;
    sc_signal< sc_lv<1> > tmp_1_i_reg_294_pp0_iter2_reg;
    sc_signal< sc_lv<31> > j_fu_173_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<8> > tmp_6_reg_303;
    sc_signal< sc_lv<8> > tmp_7_reg_308;
    sc_signal< sc_lv<8> > tmp_7_reg_308_pp0_iter2_reg;
    sc_signal< sc_lv<8> > tmp_8_reg_313;
    sc_signal< sc_lv<8> > tmp_8_reg_313_pp0_iter2_reg;
    sc_signal< sc_lv<29> > r_V_i_i_fu_251_p2;
    sc_signal< sc_lv<29> > r_V_i_i_reg_318;
    sc_signal< sc_lv<30> > grp_fu_257_p3;
    sc_signal< sc_lv<30> > ret_V_1_reg_323;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter3;
    sc_signal< sc_lv<8> > p_Val2_3_reg_328;
    sc_signal< sc_lv<1> > tmp_reg_333;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_lv<31> > i_i_reg_127;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< bool > ap_block_pp0_stage0_01001;
    sc_signal< sc_lv<32> > i_cast_i_fu_149_p1;
    sc_signal< sc_lv<32> > j_cast_i_fu_164_p1;
    sc_signal< sc_lv<29> > grp_fu_267_p3;
    sc_signal< sc_lv<8> > tmp_8_i_i_i_cast_i_fu_207_p1;
    sc_signal< sc_lv<1> > tmp_3_fu_215_p3;
    sc_signal< sc_lv<8> > p_Val2_4_fu_210_p2;
    sc_signal< sc_lv<1> > tmp_4_fu_228_p3;
    sc_signal< sc_lv<1> > rev_fu_222_p2;
    sc_signal< sc_lv<1> > deleted_zeros_fu_236_p2;
    sc_signal< sc_lv<22> > r_V_i_i_fu_251_p0;
    sc_signal< sc_lv<8> > r_V_i_i_fu_251_p1;
    sc_signal< sc_lv<23> > grp_fu_257_p0;
    sc_signal< sc_lv<8> > grp_fu_257_p1;
    sc_signal< sc_lv<29> > grp_fu_257_p2;
    sc_signal< sc_lv<20> > grp_fu_267_p0;
    sc_signal< sc_lv<8> > grp_fu_267_p1;
    sc_signal< sc_lv<4> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_lv<30> > grp_fu_257_p10;
    sc_signal< sc_lv<30> > grp_fu_257_p20;
    sc_signal< sc_lv<28> > grp_fu_267_p10;
    sc_signal< sc_lv<29> > r_V_i_i_fu_251_p10;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<4> ap_ST_fsm_state1;
    static const sc_lv<4> ap_ST_fsm_state2;
    static const sc_lv<4> ap_ST_fsm_pp0_stage0;
    static const sc_lv<4> ap_ST_fsm_state8;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<31> ap_const_lv31_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<31> ap_const_lv31_1;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<32> ap_const_lv32_1D;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<8> ap_const_lv8_FF;
    static const sc_lv<29> ap_const_lv29_1322D0;
    static const sc_lv<30> ap_const_lv30_259168;
    static const sc_lv<28> ap_const_lv28_74BC6;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state8();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_01001();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state1();
    void thread_ap_block_state3_pp0_stage0_iter0();
    void thread_ap_block_state4_pp0_stage0_iter1();
    void thread_ap_block_state5_pp0_stage0_iter2();
    void thread_ap_block_state6_pp0_stage0_iter3();
    void thread_ap_block_state7_pp0_stage0_iter4();
    void thread_ap_condition_pp0_exit_iter0_state3();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_ready();
    void thread_deleted_zeros_fu_236_p2();
    void thread_grp_fu_257_p0();
    void thread_grp_fu_257_p1();
    void thread_grp_fu_257_p10();
    void thread_grp_fu_257_p2();
    void thread_grp_fu_257_p20();
    void thread_grp_fu_267_p0();
    void thread_grp_fu_267_p1();
    void thread_grp_fu_267_p10();
    void thread_i_cast_i_fu_149_p1();
    void thread_i_fu_158_p2();
    void thread_j_cast_i_fu_164_p1();
    void thread_j_fu_173_p2();
    void thread_p_Val2_4_fu_210_p2();
    void thread_p_dst_data_stream_V_blk_n();
    void thread_p_dst_data_stream_V_din();
    void thread_p_dst_data_stream_V_write();
    void thread_p_src_cols_V_blk_n();
    void thread_p_src_cols_V_read();
    void thread_p_src_data_stream_0_V_blk_n();
    void thread_p_src_data_stream_0_V_read();
    void thread_p_src_data_stream_1_V_blk_n();
    void thread_p_src_data_stream_1_V_read();
    void thread_p_src_data_stream_2_V_blk_n();
    void thread_p_src_data_stream_2_V_read();
    void thread_p_src_rows_V_blk_n();
    void thread_p_src_rows_V_read();
    void thread_r_V_i_i_fu_251_p0();
    void thread_r_V_i_i_fu_251_p1();
    void thread_r_V_i_i_fu_251_p10();
    void thread_rev_fu_222_p2();
    void thread_tmp_1_i_fu_168_p2();
    void thread_tmp_3_fu_215_p3();
    void thread_tmp_4_fu_228_p3();
    void thread_tmp_8_i_i_i_cast_i_fu_207_p1();
    void thread_tmp_i_fu_153_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif

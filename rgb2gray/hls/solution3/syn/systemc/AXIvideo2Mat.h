// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _AXIvideo2Mat_HH_
#define _AXIvideo2Mat_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct AXIvideo2Mat : public sc_module {
    // Port declarations 40
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_in< sc_logic > start_full_n;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_logic > start_out;
    sc_out< sc_logic > start_write;
    sc_in< sc_lv<32> > INPUT_STREAM_TDATA;
    sc_in< sc_logic > INPUT_STREAM_TVALID;
    sc_out< sc_logic > INPUT_STREAM_TREADY;
    sc_in< sc_lv<4> > INPUT_STREAM_TKEEP;
    sc_in< sc_lv<4> > INPUT_STREAM_TSTRB;
    sc_in< sc_lv<1> > INPUT_STREAM_TUSER;
    sc_in< sc_lv<1> > INPUT_STREAM_TLAST;
    sc_in< sc_lv<1> > INPUT_STREAM_TID;
    sc_in< sc_lv<1> > INPUT_STREAM_TDEST;
    sc_in< sc_lv<32> > img_rows_V_dout;
    sc_in< sc_logic > img_rows_V_empty_n;
    sc_out< sc_logic > img_rows_V_read;
    sc_in< sc_lv<32> > img_cols_V_dout;
    sc_in< sc_logic > img_cols_V_empty_n;
    sc_out< sc_logic > img_cols_V_read;
    sc_out< sc_lv<8> > img_data_stream_0_V_din;
    sc_in< sc_logic > img_data_stream_0_V_full_n;
    sc_out< sc_logic > img_data_stream_0_V_write;
    sc_out< sc_lv<8> > img_data_stream_1_V_din;
    sc_in< sc_logic > img_data_stream_1_V_full_n;
    sc_out< sc_logic > img_data_stream_1_V_write;
    sc_out< sc_lv<8> > img_data_stream_2_V_din;
    sc_in< sc_logic > img_data_stream_2_V_full_n;
    sc_out< sc_logic > img_data_stream_2_V_write;
    sc_out< sc_lv<32> > img_rows_V_out_din;
    sc_in< sc_logic > img_rows_V_out_full_n;
    sc_out< sc_logic > img_rows_V_out_write;
    sc_out< sc_lv<32> > img_cols_V_out_din;
    sc_in< sc_logic > img_cols_V_out_full_n;
    sc_out< sc_logic > img_cols_V_out_write;


    // Module declarations
    AXIvideo2Mat(sc_module_name name);
    SC_HAS_PROCESS(AXIvideo2Mat);

    ~AXIvideo2Mat();

    sc_trace_file* mVcdFile;

    sc_signal< sc_logic > real_start;
    sc_signal< sc_logic > start_once_reg;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<8> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > internal_ap_ready;
    sc_signal< sc_lv<32> > AXI_video_strm_V_data_V_0_data_out;
    sc_signal< sc_logic > AXI_video_strm_V_data_V_0_vld_in;
    sc_signal< sc_logic > AXI_video_strm_V_data_V_0_vld_out;
    sc_signal< sc_logic > AXI_video_strm_V_data_V_0_ack_in;
    sc_signal< sc_logic > AXI_video_strm_V_data_V_0_ack_out;
    sc_signal< sc_lv<32> > AXI_video_strm_V_data_V_0_payload_A;
    sc_signal< sc_lv<32> > AXI_video_strm_V_data_V_0_payload_B;
    sc_signal< sc_logic > AXI_video_strm_V_data_V_0_sel_rd;
    sc_signal< sc_logic > AXI_video_strm_V_data_V_0_sel_wr;
    sc_signal< sc_logic > AXI_video_strm_V_data_V_0_sel;
    sc_signal< sc_logic > AXI_video_strm_V_data_V_0_load_A;
    sc_signal< sc_logic > AXI_video_strm_V_data_V_0_load_B;
    sc_signal< sc_lv<2> > AXI_video_strm_V_data_V_0_state;
    sc_signal< sc_logic > AXI_video_strm_V_data_V_0_state_cmp_full;
    sc_signal< sc_lv<1> > AXI_video_strm_V_user_V_0_data_out;
    sc_signal< sc_logic > AXI_video_strm_V_user_V_0_vld_in;
    sc_signal< sc_logic > AXI_video_strm_V_user_V_0_vld_out;
    sc_signal< sc_logic > AXI_video_strm_V_user_V_0_ack_in;
    sc_signal< sc_logic > AXI_video_strm_V_user_V_0_ack_out;
    sc_signal< sc_lv<1> > AXI_video_strm_V_user_V_0_payload_A;
    sc_signal< sc_lv<1> > AXI_video_strm_V_user_V_0_payload_B;
    sc_signal< sc_logic > AXI_video_strm_V_user_V_0_sel_rd;
    sc_signal< sc_logic > AXI_video_strm_V_user_V_0_sel_wr;
    sc_signal< sc_logic > AXI_video_strm_V_user_V_0_sel;
    sc_signal< sc_logic > AXI_video_strm_V_user_V_0_load_A;
    sc_signal< sc_logic > AXI_video_strm_V_user_V_0_load_B;
    sc_signal< sc_lv<2> > AXI_video_strm_V_user_V_0_state;
    sc_signal< sc_logic > AXI_video_strm_V_user_V_0_state_cmp_full;
    sc_signal< sc_lv<1> > AXI_video_strm_V_last_V_0_data_out;
    sc_signal< sc_logic > AXI_video_strm_V_last_V_0_vld_in;
    sc_signal< sc_logic > AXI_video_strm_V_last_V_0_vld_out;
    sc_signal< sc_logic > AXI_video_strm_V_last_V_0_ack_in;
    sc_signal< sc_logic > AXI_video_strm_V_last_V_0_ack_out;
    sc_signal< sc_lv<1> > AXI_video_strm_V_last_V_0_payload_A;
    sc_signal< sc_lv<1> > AXI_video_strm_V_last_V_0_payload_B;
    sc_signal< sc_logic > AXI_video_strm_V_last_V_0_sel_rd;
    sc_signal< sc_logic > AXI_video_strm_V_last_V_0_sel_wr;
    sc_signal< sc_logic > AXI_video_strm_V_last_V_0_sel;
    sc_signal< sc_logic > AXI_video_strm_V_last_V_0_load_A;
    sc_signal< sc_logic > AXI_video_strm_V_last_V_0_load_B;
    sc_signal< sc_lv<2> > AXI_video_strm_V_last_V_0_state;
    sc_signal< sc_logic > AXI_video_strm_V_last_V_0_state_cmp_full;
    sc_signal< sc_logic > AXI_video_strm_V_dest_V_0_vld_in;
    sc_signal< sc_logic > AXI_video_strm_V_dest_V_0_ack_out;
    sc_signal< sc_lv<2> > AXI_video_strm_V_dest_V_0_state;
    sc_signal< sc_logic > INPUT_STREAM_TDATA_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter0;
    sc_signal< bool > ap_block_pp1_stage0;
    sc_signal< sc_lv<1> > exitcond_i_fu_334_p2;
    sc_signal< sc_lv<1> > brmerge_i_fu_348_p2;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<1> > ap_phi_mux_eol_2_i_phi_fu_297_p4;
    sc_signal< sc_logic > img_rows_V_blk_n;
    sc_signal< sc_logic > img_cols_V_blk_n;
    sc_signal< sc_logic > img_data_stream_0_V_blk_n;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter1;
    sc_signal< sc_lv<1> > exitcond_i_reg_422;
    sc_signal< sc_logic > img_data_stream_1_V_blk_n;
    sc_signal< sc_logic > img_data_stream_2_V_blk_n;
    sc_signal< sc_logic > img_rows_V_out_blk_n;
    sc_signal< sc_logic > img_cols_V_out_blk_n;
    sc_signal< sc_lv<1> > eol_reg_200;
    sc_signal< sc_lv<32> > axi_data_V_1_i_reg_211;
    sc_signal< sc_lv<32> > t_V_2_reg_222;
    sc_signal< sc_lv<1> > eol_i_reg_233;
    sc_signal< sc_lv<1> > axi_last_V_2_i_reg_245;
    sc_signal< sc_lv<32> > p_Val2_s_reg_258;
    sc_signal< sc_lv<32> > rows_V_reg_383;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_lv<32> > cols_V_reg_388;
    sc_signal< sc_lv<32> > tmp_data_V_reg_393;
    sc_signal< sc_lv<1> > tmp_last_V_reg_401;
    sc_signal< sc_lv<1> > exitcond2_i_fu_323_p2;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<32> > i_V_fu_328_p2;
    sc_signal< sc_lv<32> > i_V_reg_417;
    sc_signal< bool > ap_predicate_op65_read_state5;
    sc_signal< bool > ap_block_state5_pp1_stage0_iter0;
    sc_signal< bool > ap_block_state6_pp1_stage0_iter1;
    sc_signal< bool > ap_block_pp1_stage0_11001;
    sc_signal< sc_lv<32> > j_V_fu_339_p2;
    sc_signal< sc_lv<8> > tmp_fu_354_p1;
    sc_signal< sc_lv<8> > tmp_reg_435;
    sc_signal< sc_lv<8> > tmp_5_reg_440;
    sc_signal< sc_lv<8> > tmp_6_reg_445;
    sc_signal< bool > ap_block_state8;
    sc_signal< bool > ap_block_pp1_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp1_exit_iter0_state5;
    sc_signal< sc_lv<1> > axi_last_V_3_i_reg_270;
    sc_signal< sc_lv<1> > axi_last_V1_i_reg_169;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<32> > axi_data_V_3_i_reg_282;
    sc_signal< sc_lv<32> > axi_data_V1_i_reg_179;
    sc_signal< sc_lv<32> > t_V_reg_189;
    sc_signal< sc_lv<1> > ap_phi_mux_eol_phi_fu_203_p4;
    sc_signal< sc_lv<32> > ap_phi_mux_axi_data_V_1_i_phi_fu_214_p4;
    sc_signal< sc_lv<1> > ap_phi_mux_eol_i_phi_fu_237_p4;
    sc_signal< sc_lv<1> > ap_phi_reg_pp1_iter0_axi_last_V_2_i_reg_245;
    sc_signal< sc_lv<32> > ap_phi_mux_p_Val2_s_phi_fu_262_p4;
    sc_signal< sc_lv<32> > ap_phi_reg_pp1_iter0_p_Val2_s_reg_258;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<1> > eol_2_i_reg_294;
    sc_signal< bool > ap_block_pp1_stage0_01001;
    sc_signal< sc_lv<1> > sof_1_i_fu_98;
    sc_signal< sc_lv<1> > tmp_user_V_fu_314_p1;
    sc_signal< sc_lv<8> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp1;
    sc_signal< sc_logic > ap_enable_pp1;
    sc_signal< bool > ap_condition_676;
    sc_signal< bool > ap_condition_598;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<8> ap_ST_fsm_state1;
    static const sc_lv<8> ap_ST_fsm_state2;
    static const sc_lv<8> ap_ST_fsm_state3;
    static const sc_lv<8> ap_ST_fsm_state4;
    static const sc_lv<8> ap_ST_fsm_pp1_stage0;
    static const sc_lv<8> ap_ST_fsm_state7;
    static const sc_lv<8> ap_ST_fsm_state8;
    static const sc_lv<8> ap_ST_fsm_state9;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<2> ap_const_lv2_2;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_4;
    static const bool ap_const_boolean_0;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_17;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_AXI_video_strm_V_data_V_0_ack_in();
    void thread_AXI_video_strm_V_data_V_0_ack_out();
    void thread_AXI_video_strm_V_data_V_0_data_out();
    void thread_AXI_video_strm_V_data_V_0_load_A();
    void thread_AXI_video_strm_V_data_V_0_load_B();
    void thread_AXI_video_strm_V_data_V_0_sel();
    void thread_AXI_video_strm_V_data_V_0_state_cmp_full();
    void thread_AXI_video_strm_V_data_V_0_vld_in();
    void thread_AXI_video_strm_V_data_V_0_vld_out();
    void thread_AXI_video_strm_V_dest_V_0_ack_out();
    void thread_AXI_video_strm_V_dest_V_0_vld_in();
    void thread_AXI_video_strm_V_last_V_0_ack_in();
    void thread_AXI_video_strm_V_last_V_0_ack_out();
    void thread_AXI_video_strm_V_last_V_0_data_out();
    void thread_AXI_video_strm_V_last_V_0_load_A();
    void thread_AXI_video_strm_V_last_V_0_load_B();
    void thread_AXI_video_strm_V_last_V_0_sel();
    void thread_AXI_video_strm_V_last_V_0_state_cmp_full();
    void thread_AXI_video_strm_V_last_V_0_vld_in();
    void thread_AXI_video_strm_V_last_V_0_vld_out();
    void thread_AXI_video_strm_V_user_V_0_ack_in();
    void thread_AXI_video_strm_V_user_V_0_ack_out();
    void thread_AXI_video_strm_V_user_V_0_data_out();
    void thread_AXI_video_strm_V_user_V_0_load_A();
    void thread_AXI_video_strm_V_user_V_0_load_B();
    void thread_AXI_video_strm_V_user_V_0_sel();
    void thread_AXI_video_strm_V_user_V_0_state_cmp_full();
    void thread_AXI_video_strm_V_user_V_0_vld_in();
    void thread_AXI_video_strm_V_user_V_0_vld_out();
    void thread_INPUT_STREAM_TDATA_blk_n();
    void thread_INPUT_STREAM_TREADY();
    void thread_ap_CS_fsm_pp1_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_block_pp1_stage0();
    void thread_ap_block_pp1_stage0_01001();
    void thread_ap_block_pp1_stage0_11001();
    void thread_ap_block_pp1_stage0_subdone();
    void thread_ap_block_state1();
    void thread_ap_block_state5_pp1_stage0_iter0();
    void thread_ap_block_state6_pp1_stage0_iter1();
    void thread_ap_block_state8();
    void thread_ap_condition_598();
    void thread_ap_condition_676();
    void thread_ap_condition_pp1_exit_iter0_state5();
    void thread_ap_done();
    void thread_ap_enable_pp1();
    void thread_ap_idle();
    void thread_ap_idle_pp1();
    void thread_ap_phi_mux_axi_data_V_1_i_phi_fu_214_p4();
    void thread_ap_phi_mux_eol_2_i_phi_fu_297_p4();
    void thread_ap_phi_mux_eol_i_phi_fu_237_p4();
    void thread_ap_phi_mux_eol_phi_fu_203_p4();
    void thread_ap_phi_mux_p_Val2_s_phi_fu_262_p4();
    void thread_ap_phi_reg_pp1_iter0_axi_last_V_2_i_reg_245();
    void thread_ap_phi_reg_pp1_iter0_p_Val2_s_reg_258();
    void thread_ap_predicate_op65_read_state5();
    void thread_ap_ready();
    void thread_brmerge_i_fu_348_p2();
    void thread_exitcond2_i_fu_323_p2();
    void thread_exitcond_i_fu_334_p2();
    void thread_i_V_fu_328_p2();
    void thread_img_cols_V_blk_n();
    void thread_img_cols_V_out_blk_n();
    void thread_img_cols_V_out_din();
    void thread_img_cols_V_out_write();
    void thread_img_cols_V_read();
    void thread_img_data_stream_0_V_blk_n();
    void thread_img_data_stream_0_V_din();
    void thread_img_data_stream_0_V_write();
    void thread_img_data_stream_1_V_blk_n();
    void thread_img_data_stream_1_V_din();
    void thread_img_data_stream_1_V_write();
    void thread_img_data_stream_2_V_blk_n();
    void thread_img_data_stream_2_V_din();
    void thread_img_data_stream_2_V_write();
    void thread_img_rows_V_blk_n();
    void thread_img_rows_V_out_blk_n();
    void thread_img_rows_V_out_din();
    void thread_img_rows_V_out_write();
    void thread_img_rows_V_read();
    void thread_internal_ap_ready();
    void thread_j_V_fu_339_p2();
    void thread_real_start();
    void thread_start_out();
    void thread_start_write();
    void thread_tmp_fu_354_p1();
    void thread_tmp_user_V_fu_314_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif

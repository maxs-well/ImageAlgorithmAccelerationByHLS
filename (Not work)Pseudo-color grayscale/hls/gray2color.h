#pragma once
#include "hls_video.h"
#include "ap_axi_sdata.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include "hls_math.h"
#include "hls_half.h"

#define MAX_WIDTH  1920
#define MAX_HEIGHT 1080
#define CHANNEL	   3


typedef hls::stream<ap_axiu<24,1,1,1> >  AXI_OUT_STREAM;
typedef hls::stream<ap_axiu<24,1,1,1> >  AXI_IN_STREAM;
typedef hls::Scalar<3, unsigned char>  RGB_PIXEL;
typedef hls::Mat<MAX_HEIGHT, MAX_WIDTH, HLS_8UC3> RGB_IMAGE;
typedef hls::Mat<MAX_HEIGHT, MAX_WIDTH, HLS_8UC1> RGB_GRAY;
typedef hls::Scalar<1, unsigned char>  GRAY_PIXEL;
//typedef ap_ufixed<16,8> PARAM_INT;
typedef unsigned int PARAM_INT;
typedef ap_uint<8> RGB_SINGLE;
typedef ap_uint<4> MODE;
typedef ap_ufixed<16,8> FIX_W16_Q8;


void color(AXI_OUT_STREAM& in, AXI_OUT_STREAM& out,  int rows, int cols , ap_uint<2> mode) ;

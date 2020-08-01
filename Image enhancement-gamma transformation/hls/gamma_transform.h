#pragma once
//#include "hls_video.h"
#include "hls_stream.h"

#include "ap_axi_sdata.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include "hls_math.h"
#include "hls_half.h"

#define MAX_WIDTH  1920
#define MAX_HEIGHT 1080
#define CHANNEL	   3


struct axis_t {
	ap_uint<24> data;
	ap_uint<1> last;
};


typedef hls::stream<ap_axiu<8,1,1,1> >  AXI_STREAM;
typedef hls::Scalar<3, unsigned char>  RGB_PIXEL;
typedef hls::Mat<MAX_HEIGHT, MAX_WIDTH, HLS_8UC3> RGB_IMAGE;
typedef hls::Mat<MAX_HEIGHT, MAX_WIDTH, HLS_8UC1> RGB_GRAY;
typedef hls::Scalar<1, unsigned char>  GRAY_PIXEL;
typedef unsigned int PARAM_INT;
typedef ap_uint<8> RGB_SINGLE;
typedef ap_uint<4> MODE;
typedef ap_ufixed<16,8> FIX_W16_Q8;

void gamma_transform(axis_t& in, axis_t& out,  int rows, int cols, PARAM_INT fc, PARAM_INT gamma, MODE mode);

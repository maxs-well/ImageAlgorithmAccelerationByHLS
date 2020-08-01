#include "gamma_transform.h"

void gamma_transform(AXI_STREAM& in, AXI_STREAM& out,  int rows, int cols, PARAM_INT fc, PARAM_INT gamma, MODE mode) {
#pragma HLS DATAFLOW
#pragma HLS INTERFACE s_axilite port=mode offset=0x34 clock=AXI_LITE_CLK
#pragma HLS INTERFACE s_axilite port=gamma offset=0x2C clock=AXI_LITE_CLK
#pragma HLS INTERFACE s_axilite port=fc offset=24 clock=AXI_LITE_CLK
#pragma HLS INTERFACE s_axilite port=cols offset=0x1c clock=AXI_LITE_CLK
#pragma HLS INTERFACE s_axilite port=rows offset=0x14 clock=AXI_LITE_CLK
#pragma HLS INTERFACE s_axilite port=return
#pragma HLS INTERFACE axis register both port=out
#pragma HLS INTERFACE axis register both port=in

	const int packet = (cols * rows);
	unsigned char rgb;
#pragma HLS ARRAY_MAP variable=rgb horizontal

	ap_ufixed<16,8> ffc, fgamma;
	ffc = fc / 256.0;
	fgamma = gamma / 256.0;

	GRAY_PIXEL data;
	RGB_PIXEL rgb_data;
	ap_ufixed<16,8> normalFactor = 1.0 / 255.0;

	ap_axiu<8,1,1,1> in_data;
	ap_axiu<8,1,1,1> out_data;
	unsigned char dat;

	loop_rgb: for (int r = 0; r < packet; r++) {
#pragma HLS PIPELINE II=4 rewind
		in_data = in.read();

		dat = in_data.data.to_char();

#pragma HLS DEPENDENCE intra true
//#pragma HLS UNROLL
			ap_ufixed<16,8> tmp1, foutput;
			tmp1 = (ap_ufixed<16,8>)dat * normalFactor;
			foutput = pow(tmp1.to_half(), fgamma.to_half());
			foutput = (ap_ufixed<16,8>)foutput * ffc;
			dat = (unsigned char)(foutput * 255);

#pragma HLS PIPELINE
		out_data.data = dat;
		out_data.keep = in_data.keep;
		out_data.strb = in_data.strb;
		out_data.user = in_data.user;
		out_data.last = in_data.last;
		out_data.id = in_data.id;
		out_data.dest = in_data.dest;

		out.write(out_data);

	}

}
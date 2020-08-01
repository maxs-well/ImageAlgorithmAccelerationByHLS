#include "gray2color.h"

void color(AXI_OUT_STREAM& in, AXI_OUT_STREAM& out,  int rows, int cols , ap_uint<2> mode) {
#pragma HLS INTERFACE s_axilite port=cols offset=0x14 clock=AXI_LITE_clk
#pragma HLS INTERFACE s_axilite port=rows offset=0x1C clock=AXI_LITE_clk
#pragma HLS INTERFACE s_axilite port=mode offset=0x24 clock=AXI_LITE_clk

#pragma HLS INTERFACE axis register both port=out
#pragma HLS INTERFACE axis register both port=in
//#pragma HLS INTERFACE s_axilite port=return
#pragma HLS INTERFACE s_axilite port=return bundle=CONTROL_BUS clock=AXI_LITE_clk
#pragma HLS DATAFLOW

#pragma HLS INTERFACE ap_stable port=rows
#pragma HLS INTERFACE ap_stable port=cols

	ap_axiu<24,1,1,1> axi_in;
	ap_axiu<24,1,1,1> axi_out;

	int mult_r_c = rows * cols;

	loop_outer: for (int i = 0; i < mult_r_c; i++) {
#pragma HLS LOOP_TRIPCOUNT max=207360
#pragma HLS PIPELINE II = 4
	    in.read(axi_in);

		unsigned int gray;
		unsigned char gray_data;
		gray = axi_in.data.to_uint();
		const int l = 256;
		unsigned char rgb[3];
#pragma HLS ARRAY_MAP variable=rgb horizontal
		rgb[0] = gray & 0x0000ff;
		rgb[1] = (gray >> 8) & 0x0000ff;
		rgb[2] = (gray >> 16) & 0x0000ff;

		gray_data = (rgb[0] * 19595 + rgb[1] * 38469 + rgb[2] * 7472) >> 16;

			if (gray_data < l / 4 && mode) {
				rgb[0] = 0;
				rgb[1] = gray_data << 2; // * 4
				rgb[2] = (unsigned char)l;
			}
			else if (gray_data < l / 2 && mode) {
				rgb[0] = 0;
				rgb[1] = (unsigned char)l;
				rgb[2] = ((l >> 1) - gray_data) << 2; // * 4
			}
			else if (gray_data < 3*l / 4 && mode) {
				rgb[0] = (gray_data - (l >> 1)) << 2; // * 4
				rgb[1] = (unsigned char)l;
				rgb[2] = 0;
			}
			else if (mode){
				rgb[0] = (unsigned char)255;
				rgb[1] = (l-gray_data) << 2;
				rgb[2] = 0;
			}
			else {
				rgb[0] = gray_data;
				rgb[1] = gray_data;
				rgb[2] = gray_data;
			}

			ap_uint<24> new_rgb;
			new_rgb = (ap_uint<24>)((rgb[0] << 16) | (rgb[1] << 8) | rgb[2]);
//	#pragma HLS PIPELINE
			axi_out.data = new_rgb;
			axi_out.keep = axi_in.keep;
			axi_out.strb = axi_in.strb;
			axi_out.user = axi_in.user;
			if (i == mult_r_c)
				axi_out.last = 1;
			else
				axi_out.last = 0;
			axi_out.id = axi_in.id;
			axi_out.dest = axi_in.dest;

			out.write(axi_out);
	}
}
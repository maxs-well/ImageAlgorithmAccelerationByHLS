#include "rgb2gray.h"



void rgb2gray(AXI_STREAM & INPUT_STREAM,AXI_STREAM & OUTPUT_STREAM,int rows,int cols){
#pragma HLS DATAFLOW
#pragma HLS INTERFACE ap_ctrl_none port=return
#pragma HLS INTERFACE s_axilite port=rows bundle=CONTROL_BUS offset=0x14 clock=AXI_LITE_clk
#pragma HLS INTERFACE s_axilite port=cols bundle=CONTROL_BUS offset=0x1C clock=AXI_LITE_clk
#pragma HLS INTERFACE axis port=OUTPUT_STREAM bundle=OUTPUT
#pragma HLS INTERFACE axis port=INPUT_STREAM  bundle=INPUT

	//hls::mat 格式变量
	RGB_IMAGE  img_0(rows,cols);
	GRAY_IMAGE img_1(rows,cols);
	RGB_IMAGE  img_2(rows,cols);

	//将 AXI4 Stream 数据转换成 hls::mat 格式
	hls::AXIvideo2Mat(INPUT_STREAM,img_0);
	//将 RGB888 格式的彩色数据转换成灰度数据
	hls::CvtColor<HLS_RGB2GRAY,HLS_8UC3,HLS_8UC1>(img_0,img_1);
	//将灰度数据转换成三个通道的灰度图像
	hls::CvtColor<HLS_GRAY2RGB,HLS_8UC1,HLS_8UC3>(img_1,img_2);
	//将 hls::mat 格式数据转换成 AXI4 Stream 格式
	hls::Mat2AXIvideo(img_2,OUTPUT_STREAM);
}

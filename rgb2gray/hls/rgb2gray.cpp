#include "rgb2gray.h"



void rgb2gray(AXI_STREAM & INPUT_STREAM,AXI_STREAM & OUTPUT_STREAM,int rows,int cols){
#pragma HLS DATAFLOW
#pragma HLS INTERFACE ap_ctrl_none port=return
#pragma HLS INTERFACE s_axilite port=rows bundle=CONTROL_BUS offset=0x14 clock=AXI_LITE_clk
#pragma HLS INTERFACE s_axilite port=cols bundle=CONTROL_BUS offset=0x1C clock=AXI_LITE_clk
#pragma HLS INTERFACE axis port=OUTPUT_STREAM bundle=OUTPUT
#pragma HLS INTERFACE axis port=INPUT_STREAM  bundle=INPUT

	//hls::mat ��ʽ����
	RGB_IMAGE  img_0(rows,cols);
	GRAY_IMAGE img_1(rows,cols);
	RGB_IMAGE  img_2(rows,cols);

	//�� AXI4 Stream ����ת���� hls::mat ��ʽ
	hls::AXIvideo2Mat(INPUT_STREAM,img_0);
	//�� RGB888 ��ʽ�Ĳ�ɫ����ת���ɻҶ�����
	hls::CvtColor<HLS_RGB2GRAY,HLS_8UC3,HLS_8UC1>(img_0,img_1);
	//���Ҷ�����ת��������ͨ���ĻҶ�ͼ��
	hls::CvtColor<HLS_GRAY2RGB,HLS_8UC1,HLS_8UC3>(img_1,img_2);
	//�� hls::mat ��ʽ����ת���� AXI4 Stream ��ʽ
	hls::Mat2AXIvideo(img_2,OUTPUT_STREAM);
}

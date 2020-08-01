#include "hls_video.h"
#include "ap_axi_sdata.h"

#define MAX_HEIGHT 720			//图像最大高度
#define MAX_WIDTH 1280			//图像最大宽度

typedef hls::stream<ap_axiu<32,1,1,1> >  			AXI_STREAM;
typedef hls::Mat<MAX_HEIGHT,MAX_WIDTH,HLS_8UC3>  	RGB_IMAGE;
typedef hls::Mat<MAX_HEIGHT,MAX_WIDTH,HLS_8UC1>  	GRAY_IMAGE;

void rgb2gray(AXI_STREAM & INPUT_STREAM,AXI_STREAM & OUTPUT_STREAM,int rows,int cols); 

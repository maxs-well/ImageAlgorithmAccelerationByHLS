#include "hls_opencv.h"
#include "hls_video.h"
#include "rgb2gray.h"
#include "gray2color.h"

#define ERROR_THRESHOLD 2

int main(int argc, char** argv) {
	IplImage* src = cvLoadImage("3.jpg", 1);
	IplImage* dst = cvCreateImage(cvGetSize(src), src->depth, src->nChannels);
	cv::Mat inputimg,outputimg,ocv_outputimg,error_img0;

	AXI_OUT_STREAM dst_axi,  tmp_axi,src_axi;

	inputimg = src;

	cv::Size S0(cvGetSize(src));
	outputimg.create(S0, CV_8UC3);
	error_img0.create(S0, CV_8UC1);


	GRAY_IMAGE gray(src->height,src->width);

	RGB_IMAGE  img(src->height,src->width);
	int rows = src->height;
	int cols = src->width;

	cvMat2AXIvideo(inputimg, tmp_axi);
//	hls::AXIvideo2Mat(src_axi, img);


	RGB_IMAGE  img_0(rows,cols);
	GRAY_IMAGE img_1(rows,cols);
	RGB_IMAGE  img_2(rows,cols);

	//将 AXI4 Stream 数据转换成 hls::mat 格式
	hls::AXIvideo2Mat(tmp_axi,img_0);
	//将 RGB888 格式的彩色数据转换成灰度数据
	hls::CvtColor<HLS_RGB2GRAY,HLS_8UC3,HLS_8UC1>(img_0,img_1);
	//将灰度数据转换成三个通道的灰度图像
//	hls::CvtColor<HLS_GRAY2RGB,HLS_8UC1,HLS_8UC3>(img_1,img_2);
	//将 hls::mat 格式数据转换成 AXI4 Stream 格式
	hls::Mat2AXIvideo(img_1,src_axi);
//	ov5640_rgb2gray(tmp_axi, src_axi);
//	hls::CvtColor<HLS_RGB2GRAY,HLS_8UC3,HLS_8UC1>(img, gray);

//	hls::Mat2AXIvideo(gray,src_axi);

	color(src_axi, dst_axi, src->height, src->height, 1);
	AXIvideo2cvMat(dst_axi, outputimg);



	cvShowImage("inputimg",src);
	*dst = (IplImage)(outputimg);
	cvShowImage("outputimg",dst);

	cvWaitKey(0);

	return 0;
}

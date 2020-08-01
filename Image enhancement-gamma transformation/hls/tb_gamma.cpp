#include "hls_opencv.h"
#include "gamma_transform.h"

#define ERROR_THRESHOLD 2

int main(int argc, char** argv) {
	IplImage* src = cvLoadImage("1.jpg", 1);
	IplImage* dst = cvCreateImage(cvGetSize(src), src->depth, src->nChannels);
	cv::Mat inputimg,outputimg,ocv_outputimg,error_img0;
	AXI_STREAM  src_axi, dst_axi;

	inputimg = src;

	cv::Size S0(cvGetSize(src));
	outputimg.create(S0, CV_8UC3);
	error_img0.create(S0, CV_8UC1);

	cvMat2AXIvideo(inputimg, src_axi);
	gamma_transform(src_axi, dst_axi, src->height, src->width, 256,128, 1);
	AXIvideo2cvMat(dst_axi, outputimg);



	cvShowImage("inputimg",src);
	*dst = (IplImage)(outputimg);
	cvShowImage("outputimg",dst);

	cvWaitKey(0);

	return 0;
}

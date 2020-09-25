#include<opencv2/opencv.hpp>
#include<iostream>
using namespace cv;
int main()
{
	cv::Mat srcMat = imread("G:\\’’∆¨\\1543119099544.jpg");
	imshow("src", srcMat);
	waitKey(0);
	return 0;
}



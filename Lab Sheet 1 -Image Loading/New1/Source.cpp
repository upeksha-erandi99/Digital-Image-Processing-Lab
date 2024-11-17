#include "cv.h" //main opencv header
#include "highgui.h" //GUI header

int main(int argc, char* argv[])
{
	IplImage* img;
	img = cvLoadImage(argv[1]);
	if (!img)
		printf("Could not load image file: %s\n", argv[1]);

	cvNamedWindow("Image");
	cvShowImage("Image", img);
	cvWaitKey(0);
	cvDestroyWindow("Image");
	cvReleaseImage(&img);

	return 0;

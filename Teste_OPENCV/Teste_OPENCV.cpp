// Teste_OPENCV.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <highgui.h>

int _tmain(int argc, _TCHAR* argv[])
{
	int c;
	IplImage *img;
	CvCapture *capture = cvCaptureFromCAM(0);
	cvNamedWindow("mainWin", CV_WINDOW_AUTOSIZE);
	cvMoveWindow("mainWin", 5, 5);
	while (1) {
		img = cvQueryFrame(capture);
		cvShowImage("mainWin", img);
		c = cvWaitKey(10);
		if (c == 27) {
			break;
		}
	}
	return 0;
}


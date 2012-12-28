#include "stdafx.h"
#define SCREENSHOTFORMAT "JPEG"

bool saveScreenshot(std::string filename){
	int error = 0;
	RECT rect;
	GetWindowRect(GetDesktopWindow(), &rect);
	imDib* imdib = imDibCaptureScreen(0, 0, rect.right, rect.bottom);
	imImage* image = imDibToImage(imdib);
	imDibDestroy(imdib);
	error = imFileImageSave(filename.c_str(), SCREENSHOTFORMAT, image);
	imImageDestroy(image);
	return true;
}
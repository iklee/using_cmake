//
//  MyExample.cpp
//  MyOpenCV
//
//  Created by lee on 2016. 10. 2..
//  Copyright © 2016년 ik. All rights reserved.
//

#include "MyExample.hpp"

#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>

void LoadImage()
{
#if defined(__APPLE__) && defined(__MACH__)
    std::string path = "../data/test1.jpg";
#else
    std::string path = "data/test1.jpg";
#endif

    IplImage * img = cvLoadImage(path.data());
    cvNamedWindow("Load_Image", CV_WINDOW_AUTOSIZE);
    cvShowImage("Load_Image", img);
    cvWaitKey(0);
    
    cvReleaseImage(&img);
    cvDestroyWindow("Load_Image");
}

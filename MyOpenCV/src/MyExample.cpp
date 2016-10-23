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
    std::string path = "../data/test1.jpg";
    IplImage * img = cvLoadImage(path.data());
    cvNamedWindow("Load_Image", CV_WINDOW_AUTOSIZE);
    cvShowImage("Load_Image", img);
    cvWaitKey(0);
    
    cvReleaseImage(&img);
    cvDestroyWindow("Load_Image");
}

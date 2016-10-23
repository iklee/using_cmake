cmake_minimum_required(VERSION 3.6)

PROJECT(IK_OpenCV_Project)

include_directories(../lib/opencv31/include)
link_directories(../lib/opencv31/mac/lib)

ADD_EXECUTABLE(my_opencv_test_app main.cpp MyExample.cpp)
target_link_libraries(my_opencv_test_app opencv_core opencv_highgui opencv_imgcodecs)
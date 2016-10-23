cmake_minimum_required(VERSION 3.6)

PROJECT(IK_OpenCV_Project)

include_directories(../lib/opencv31/include)

if(APPLE)
    link_directories(../lib/opencv31/mac/lib)
else()  #windows
    link_directories(../lib/opencv31/win_x64/lib)
endif()

ADD_EXECUTABLE(my_opencv_test_app main.cpp MyExample.cpp)

if(APPLE)
    target_link_libraries(my_opencv_test_app opencv_core opencv_highgui opencv_imgcodecs)
else() #windows
    target_link_libraries(my_opencv_test_app opencv_core310d opencv_highgui310d opencv_imgcodecs310d)
endif()




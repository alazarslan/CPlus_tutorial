cmake_minimum_required(VERSION 3.30)
project(opencvdenemesi)

set(CMAKE_CXX_STANDARD 20)
set(ENV{OPENCV_DIR} "/usr/local/include/opencv4")
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(opencvdenemesi main.cpp)  # Target adıyla eşleşmeli

set(OpenCV_LIBS opencv_core opencv_imgproc opencv_highgui opencv_imgcodecs)

target_link_libraries(opencvdenemesi ${OpenCV_LIBS})  # Burada da aynı ismi kullan

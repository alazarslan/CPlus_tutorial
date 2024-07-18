cmake_minimum_required(VERSION 3.28)
project(calisma5)

set(CMAKE_CXX_STANDARD 17)

add_executable(calisma5 main.cpp
        calisma5_class.cpp
        calisma5_class.h
        myMacros.h)

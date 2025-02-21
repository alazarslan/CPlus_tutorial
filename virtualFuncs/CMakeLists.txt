cmake_minimum_required(VERSION 3.29)
project(virtualFuncs)

set(CMAKE_CXX_STANDARD 17)

add_executable(virtualFuncs main.cpp
        myClass.cpp
        myClass.h)

cmake_minimum_required(VERSION 3.29)
project(ch22DynMembers)

set(CMAKE_CXX_STANDARD 17)

add_executable(ch22DynMembers main.cpp
        floatArr.cpp
        floatArr.h)

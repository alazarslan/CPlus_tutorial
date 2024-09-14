cmake_minimum_required(VERSION 3.27)
project(mainPCcalisma)

set(CMAKE_CXX_STANDARD 20)

add_executable(mainPCcalisma main.cpp
        myClass.cpp
        myClass.h
        Array.cpp
        Array.h)

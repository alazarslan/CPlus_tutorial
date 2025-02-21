cmake_minimum_required(VERSION 3.29)
project(ornek)

set(CMAKE_CXX_STANDARD 17)

add_executable(ornek main.cpp
        parentClass.cpp
        parentClass.h
        childClass.cpp
        childClass.h
        class3.cpp
        class3.h)

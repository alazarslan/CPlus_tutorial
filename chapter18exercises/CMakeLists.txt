cmake_minimum_required(VERSION 3.30)
project(chapter18exercises)

set(CMAKE_CXX_STANDARD 20)

add_executable(chapter18exercises main.cpp
        DayTime.cpp
        DayTime.h
        fractions.cpp
        fractions.h)

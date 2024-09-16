cmake_minimum_required(VERSION 3.29)
project(inhertitence)

set(CMAKE_CXX_STANDARD 20)

add_executable(inhertitence main.cpp
        Vehicle.cpp
        Vehicle.h
        commissionEmployee.cpp
        commissionEmployee.h
        BasePlusCommissionEmployee.cpp
        BasePlusCommissionEmployee.h
        destructorDeneme.cpp
        destructorDeneme.h
)

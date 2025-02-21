cmake_minimum_required(VERSION 3.29)
project(polimorfizm)

set(CMAKE_CXX_STANDARD 20)

add_executable(polimorfizm main.cpp
        commissionEmployee.cpp
        commissionEmployee.h
        BasePlusCommissionEmployee.cpp
        BasePlusCommissionEmployee.h
        superLigTakimlari.cpp
        superLigTakimlari.h)

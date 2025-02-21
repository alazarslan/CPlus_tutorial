cmake_minimum_required(VERSION 3.29)
project(multipInheritence)

set(CMAKE_CXX_STANDARD 17)

add_executable(multipInheritence main.cpp
        Base.cpp
        Base.h
        MotorHome.cpp
        MotorHome.h
        Home.cpp
        Home.h
        Car.cpp
        Car.h)

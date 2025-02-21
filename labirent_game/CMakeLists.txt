cmake_minimum_required(VERSION 3.30)
project(labirent_game)

set(CMAKE_CXX_STANDARD 17)

add_executable(labirent_game main.cpp
        labirent.cpp
        labirent.h)

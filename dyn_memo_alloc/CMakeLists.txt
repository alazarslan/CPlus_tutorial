cmake_minimum_required(VERSION 3.29)
project(dyn_memo_alloc)

set(CMAKE_CXX_STANDARD 17)

add_executable(dyn_memo_alloc main.cpp
        linkedList.cpp
        linkedList.h
)

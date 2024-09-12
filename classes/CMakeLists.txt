cmake_minimum_required(VERSION 3.28)
project(classes)

set(CMAKE_CXX_STANDARD 17)

add_executable(classes main.cpp
        Account.cpp
        Account.h
        YeniClass.cpp
        YeniClass.h
        Date.cpp
        Date.h
        Demo.cpp
        Demo.h
        Article.cpp
        Article.h)

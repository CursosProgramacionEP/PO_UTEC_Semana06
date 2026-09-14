cmake_minimum_required(VERSION 4.3)
project(A2_HuertoDigital)

set(CMAKE_CXX_STANDARD 20)

add_executable(A2_HuertoDigital src/main.cpp
        src/matriz.cpp
        include/matriz.h
        src/huerto.cpp
        include/huerto.h)
target_include_directories(A2_HuertoDigital PRIVATE include)

cmake_minimum_required(VERSION 4.3)
project(A1_CodigoBase)

set(CMAKE_CXX_STANDARD 20)

add_executable(A1_CodigoBase src/main.cpp
        src/matriz.cpp
        include/matriz.h)
target_include_directories(A1_CodigoBase PRIVATE include)

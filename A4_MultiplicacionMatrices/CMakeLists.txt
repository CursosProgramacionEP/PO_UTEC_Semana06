cmake_minimum_required(VERSION 4.3)
project(A4_MultiplicacionMatrices)

set(CMAKE_CXX_STANDARD 20)

add_executable(A4_MultiplicacionMatrices src/main.cpp
        src/multiplicacion.cpp
        include/multiplicacion.h
        src/matriz.cpp
        include/matriz.h
)
target_include_directories(A4_MultiplicacionMatrices PRIVATE include)

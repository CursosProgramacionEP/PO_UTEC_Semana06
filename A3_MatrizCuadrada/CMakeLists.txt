cmake_minimum_required(VERSION 4.3)
project(A3_MatrizCuadrada)

set(CMAKE_CXX_STANDARD 20)

add_executable(A3_MatrizCuadrada src/main.cpp
        src/rotacion.cpp
        include/rotacion.h
        src/matriz.cpp
        include/matriz.h)
target_include_directories(A3_MatrizCuadrada PRIVATE include)

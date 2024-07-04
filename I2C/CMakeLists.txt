cmake_minimum_required(VERSION 3.29)
project(I2C)

set(CMAKE_CXX_STANDARD 20)

add_executable(I2C main.cpp
        I2C.h)

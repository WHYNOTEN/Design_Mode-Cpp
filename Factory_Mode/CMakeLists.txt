cmake_minimum_required(VERSION 3.23)
project(Factory_Mode)

set(CMAKE_CXX_STANDARD 11)

add_executable(Factory_Mode main.cpp Product.cpp Product.h Factory.cpp Factory.h)

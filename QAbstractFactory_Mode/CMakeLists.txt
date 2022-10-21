cmake_minimum_required(VERSION 3.23)
project(QAbstractFactory_Mode)

set(CMAKE_CXX_STANDARD 17)

add_executable(QAbstractFactory_Mode main.cpp Product.cpp Product.h Factory.cpp Factory.h)

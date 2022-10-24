cmake_minimum_required(VERSION 3.23)
project(Decorator_Mode)

set(CMAKE_CXX_STANDARD 11)

add_executable(Decorator_Mode main.cpp Component.cpp Component.h Decorator.cpp Decorator.h)

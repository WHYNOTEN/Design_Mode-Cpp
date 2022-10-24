cmake_minimum_required(VERSION 3.23)
project(Singleton_Mode)

set(CMAKE_CXX_STANDARD 11)

add_executable(Singleton_Mode main.cpp Singleton_Lazy.cpp Singleton_Lazy.h Single_Eager.cpp Single_Eager.h)

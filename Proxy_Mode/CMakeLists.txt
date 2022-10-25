cmake_minimum_required(VERSION 3.23)
project(Proxy_Mode)

set(CMAKE_CXX_STANDARD 11)

add_executable(Proxy_Mode main.cpp Operating_System.cpp Operating_System.h Proxy.cpp Proxy.h)

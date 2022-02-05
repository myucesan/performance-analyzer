cmake_minimum_required(VERSION 3.21)
project(performance_analyzer)

set(CMAKE_CXX_STANDARD 14)

add_executable(performance_analyzer main.cpp Computer.cpp Computer.h)

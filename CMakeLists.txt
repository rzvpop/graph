cmake_minimum_required(VERSION 3.8)
project(graph)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp domain/graph.hpp)
add_executable(graph ${SOURCE_FILES})
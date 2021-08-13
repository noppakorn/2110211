cmake_minimum_required(VERSION 3.21.1)

project(2110211 VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY bin)
add_executable(ex00e1 "grader/ex00/ex00e1.cpp")
add_executable(ex00e2 "grader/ex00/ex00e2.cpp")

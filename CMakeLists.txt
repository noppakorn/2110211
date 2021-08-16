cmake_minimum_required(VERSION 3.21.1)

project(2110211 VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY bin)

# in_class
add_executable(helloworld "in_class/2021-08-09/helloworld.cpp")

# grader
add_executable(ex00e1 "grader/ex00/ex00e1.cpp")
add_executable(ex00e2 "grader/ex00/ex00e2.cpp")

add_executable(ds00 "grader/ds00/ds00_reverse.cpp")
add_executable(d57_q0 "grader/d57/d57_q0_remove_even.cpp")
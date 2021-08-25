cmake_minimum_required(VERSION 3.21.1)

project(2110211 VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY bin)
SET(GCC_COVERAGE_COMPILE_FLAGS "-Wall -Wshadow")
SET(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}")


add_executable(scratch_pad "scratch_pad.cpp")

# grader
add_executable(ex00e1 "grader/ex00e1.cpp")
add_executable(ex00e2 "grader/ex00e2.cpp")

add_executable(ds00_reverse "grader/ds00_reverse.cpp")
add_executable(d57_q0_remove_even "grader/d57_q0_remove_even.cpp")
add_executable(ds00_reverse2 "grader/ds00_reverse2.cpp")
add_executable(d59_q0_vector_swap "grader/d59_q0_vector_swap.cpp")
add_executable(d62_q1a_punch "grader/d62_q1a_punch.cpp")
add_executable(d62_q1c_vector_op "grader/d62_q1c_vector_op.cpp")
add_executable(ds01_pair_sum "grader/ds01_pair_sum.cpp")
add_executable(ds_58_q0_rating "grader/ds58_q0_rating.cpp")
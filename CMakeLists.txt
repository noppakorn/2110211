cmake_minimum_required(VERSION 3.21.1)

project(2110211 VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY bin)
SET(GCC_COVERAGE_COMPILE_FLAGS "-Wall -Wshadow")
SET(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}")


add_executable(scratch_pad "scratch_pad.cpp")
add_executable(scratch_pad2 "scratch_pad2.cpp")

# grader
add_executable(ex00e1 "grader/ex00e1.cpp")
add_executable(ex00e2 "grader/ex00e2.cpp")
add_executable(ex00e3 "grader/ex00e3.cpp")
add_executable(ex00m1 "grader/ex00m1.cpp")
add_executable(ex00m2 "grader/ex00m2.cpp")

add_executable(ds00_reverse "grader/ds00_reverse.cpp")
add_executable(ds00_reverse2 "grader/ds00_reverse2.cpp")
add_executable(ds01_most "grader/ds01_most.cpp")
add_executable(ds01_pair_sum "grader/ds01_pair_sum.cpp")
add_executable(ds02_is_reverse "grader/ds02_is_reverse.cpp")

add_executable(d57_q0_remove_even "grader/d57_q0_remove_even.cpp")
add_executable(d57_q0_histogram "grader/d57_q0_histrogram.cpp")
add_executable(d57_q1_postfix "grader/d57_q1_postfix/main.cpp")
add_executable(d57_q1_vequal "grader/d57_q1_vequal/main.cpp")
add_executable(d57_q1_sbv "grader/d57_q1_sbv/test_stack.cpp")
add_executable(d57_q1_sbv2 "grader/d57_q1_sbv2/test_stack.cpp")

add_executable(ds_58_q0_rating "grader/ds58_q0_rating.cpp")
add_executable(d58_q1_erase_many "grader/d58_q1_erase_many/main.cpp")
add_executable(d58_q1_to_vector "grader/d58_q1_to_vector/main.cpp")

add_executable(d59_q0_vector_swap "grader/d59_q0_vector_swap.cpp")
add_executable(d59_q0_stack_concat.cpp "grader/d59_q0_stack_concat.cpp")
add_executable(d59_q1_range_insert "grader/d59_q1_range_insert/main.cpp")
add_executable(d59_q1_pop_many "grader/d59_q1_pop_many/main.cpp")
add_executable(d59_q2_queue_equality "grader/d59_q2_queue_equality/main.cpp")

add_executable(d60_q0_v2m "grader/d60_q0_v2m.cpp")
add_executable(d60_q0_zipcode "grader/d60_q0_zipcode.cpp")
add_executable(d60_q1_v_uniq "grader/d60_q1_v_uniq/main.cpp")
add_executable(d60_q2_split_queue "grader/d60_q2_split_queue/main.cpp")
add_executable(d60_q1_qat "grader/d60_q1_qat/main.cpp")

add_executable(d61_q1_ordered_set "grader/d61_q1_ordered_set/main.cpp")
add_executable(d61_q1_append "grader/d61_q1_append/main.cpp")

add_executable(d62_q1a_punch "grader/d62_q1a_punch.cpp")
add_executable(d62_q1c_vector_op "grader/d62_q1c_vector_op.cpp")
add_executable(d62_q1a_vote "grader/d62_q1a_vote.cpp")
add_executable(d62_q1b_grandfather "grader/d62_q1b_grandfather.cpp")
add_executable(d62_q1b_vector_intersection "grader/d62_q1b_grandfather.cpp")
add_executable(d62_q1b_queue_count "grader/d62_q1b_queue_count.cpp")
add_executable(d62_q2c_wasted_space "grader/d62_q2c_wasted_space.cpp")
add_executable(d62_q2a_iterator_check "grader/d62_q2a_iterator_check/main.cpp")
add_executable(d62_q2c_vector_swap "grader/d62_q2c_vector_swap/main.cpp")
add_executable(d62_q2b_insert_many "grader/d62_q2b_insert_many/main.cpp")
add_executable(d62_q2b_stack_deep_push "grader/d62_q2b_stack_deep_push/main.cpp")
add_executable(d62_q3b_queue_m2f "grader/d62_q3b_queue_m2f/main.cpp")
add_executable(d62_q2a_multi_count "grader/d62_q2a_multi_count/main.cpp")

add_executable(d63_q1a_hiatus "grader/d63_q1a_hiatus.cpp")
add_executable(d63_q1a_multi_insert "grader/d63_q1a_multi_insert.cpp")
add_executable(d63_q1b_interval_count "grader/d63_q1b_interval_count.cpp")
add_executable(d63_q1b_list_erase "grader/d63_q1b_list_erase.cpp")
add_executable(d63_qx_inside_interval "grader/d63_qx_inside_interval.cpp")
add_executable(d63_q2a_pair_gte "grader/d63_q2a_pair_gte/main.cpp")
add_executable(d63_q2a_vector_mirror "grader/d63_q2a_vector_mirror/main.cpp")
add_executable(d63_q2b_vector_compress "grader/d63_q2b_vector_compress/main.cpp")
add_executable(d63_q2b_stack_reserve "grader/d63_q2b_stack_reserve/main.cpp")
add_executable(d63_q3a_queue_m2b "grader/d63_q3a_queue_m2b/main.cpp")
add_executable(d63_q3b_queue_b2f "grader/d63_q3b_queue_b2f/main.cpp")

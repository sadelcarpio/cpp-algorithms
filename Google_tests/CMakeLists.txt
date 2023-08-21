cmake_minimum_required(VERSION 3.22)
project(Google_tests)
add_subdirectory(lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
include_directories(../)

add_executable(Google_Tests_run ../tests/codewars/test_magnets.cpp)
target_link_libraries(Google_Tests_run gtest gtest_main)

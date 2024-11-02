cmake_minimum_required(VERSION 3.10)
project(DivisorsUnitTest)

set(CMAKE_CXX_STANDARD 11)

add_executable(DivisorsUnitTest DivisorsUnitTest.cpp)

target_include_directories(DivisorsUnitTest PRIVATE ../DivisorsLib)

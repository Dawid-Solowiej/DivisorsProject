cmake_minimum_required(VERSION 3.10)
project(DivisorsApp)

set(CMAKE_CXX_STANDARD 11)

add_executable(DivisorsApp DivisorsApp.cpp)

target_include_directories(DivisorsApp PRIVATE ../DivisorsLib ../benchmark)

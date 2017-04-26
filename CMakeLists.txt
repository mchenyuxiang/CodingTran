cmake_minimum_required(VERSION 3.7)
project(cplusprimer)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES cplusprimer/chapt06/header/Chapter6.h cplusprimer/chapt06/function/fact.cpp cplusprimer/chapt06/6_9.cpp)
add_executable(cplusprimer ${SOURCE_FILES})

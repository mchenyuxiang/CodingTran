cmake_minimum_required(VERSION 3.7)
#project(cplusprimer)
#project(AlgorithmsInC)
project(AlgorithmMuke)

set(CMAKE_CXX_STANDARD 11)

#set(SOURCE_FILES  AlgorithmMuke/02-Sorting-Basic/02-Selection-Sort-Using-Templete/UsingTemplete.cpp AlgorithmMuke/02-Sorting-Basic/02-Selection-Sort-Using-Templete/Student.h)
set(SOURCE_FILES   AlgorithmMuke/02-Sorting-Basic/05-Insertion-Sort/InsertionSort.cpp )
add_executable(cplusprimer ${SOURCE_FILES})

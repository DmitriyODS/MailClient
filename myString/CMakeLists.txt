cmake_minimum_required(VERSION 3.17)
project(MyString)

set(CMAKE_CXX_STANDARD 20)

set(FILES MyString.h MyString.cpp IteratorMyString.h IteratorMyString.cpp)

add_library(MyString ${FILES})

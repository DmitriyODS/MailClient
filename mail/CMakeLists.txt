cmake_minimum_required(VERSION 3.17)
project(Mail)

set(CMAKE_CXX_STANDARD 20)

set(FILES Mail.h Mail.cpp)

add_library(Mail ${FILES})

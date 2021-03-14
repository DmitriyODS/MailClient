cmake_minimum_required(VERSION 3.17)
project(User)

set(CMAKE_CXX_STANDARD 14)

set(FILES User.h User.cpp)

add_library(User ${FILES})

cmake_minimum_required(VERSION 3.17)
project(App)

set(CMAKE_CXX_STANDARD 14)

set(FILES App.h App.cpp)

add_library(App ${FILES})

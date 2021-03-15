cmake_minimum_required(VERSION 3.17)
project(Screens)

set(CMAKE_CXX_STANDARD 14)

set(BASE_FILE ScreenInterface.h ScreenInterface.cpp)

add_library(Screens ${BASE_FILE})

cmake_minimum_required(VERSION 3.17)
project(App)

set(CMAKE_CXX_STANDARD 14)

set(FILES App.h App.cpp Context.cpp Context.h Intent.cpp Intent.h)

add_library(App ${FILES})

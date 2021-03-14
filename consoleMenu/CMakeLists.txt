cmake_minimum_required(VERSION 3.17)
project(CMenu)

set(CMAKE_CXX_STANDARD 14)

add_library(CMenu ConsoleMenu.cpp ConsoleMenu.h ItemMenu.cpp ItemMenu.h)
cmake_minimum_required(VERSION 3.17)
project(SqLite)

set(CMAKE_CXX_STANDARD 14)

set(FILES sqlite3.c sqlite3.h sqlite3ext.h)

add_library(SqLite ${FILES})

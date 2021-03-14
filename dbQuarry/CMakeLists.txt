cmake_minimum_required(VERSION 3.17)
project(Db)

set(CMAKE_CXX_STANDARD 14)

set(FILES ParsingInterface.h ParsingInterface.cpp DbTransaction.h DbTransaction.cpp)

add_library(Db ${FILES})

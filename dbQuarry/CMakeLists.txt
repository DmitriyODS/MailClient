cmake_minimum_required(VERSION 3.17)
project(Db)

set(CMAKE_CXX_STANDARD 20)

set(FILES ParsingInterface.h ParsingInterface.cpp Db.h Db.cpp dbCommand.h)

add_library(Db ${FILES})

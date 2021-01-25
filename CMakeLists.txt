cmake_minimum_required(VERSION 3.17)
project(MailClient)

set(CMAKE_CXX_STANDARD 20)

add_executable(MailClient main.cpp ./Libraries/MyString/MyString.cpp ./Models/User/User.cpp Libraries/MyString/IteratorMyString.cpp Libraries/MyString/IteratorMyString.h)
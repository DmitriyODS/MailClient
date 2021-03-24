cmake_minimum_required(VERSION 3.17)
project(Screens)

set(CMAKE_CXX_STANDARD 20)

set(BASE_FILE ScreenInterface.h ScreenInterface.cpp)

set(AUTH auth/Auth.cpp auth/Auth.h)

set(LOGO logo/Logo.cpp logo/Logo.h)

add_library(Screens ${BASE_FILE} ${AUTH} ${LOGO})

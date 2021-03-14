cmake_minimum_required(VERSION 3.17)
project(lr2)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES globals/itemsID.h globals/rolesID.h tools/tools.h tools/tools.cpp)

include_directories(consoleMenu)

include_directories(myString)

include_directories(app)

include_directories(user)

include_directories(mail)

include_directories(dbQuarry)

add_subdirectory(dbQuarry)

add_subdirectory(mail)

add_subdirectory(user)

add_subdirectory(app)

add_subdirectory(consoleMenu)

add_subdirectory(myString)

add_executable(lr2 main.cpp ${SOURCE_FILES})

target_link_libraries(lr2 CMenu MyString App User Mail Db)

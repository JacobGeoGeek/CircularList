cmake_minimum_required(VERSION 3.5)
project(CircularList)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp CircularList.cpp CircularList.h)
add_executable(CircularList ${SOURCE_FILES})
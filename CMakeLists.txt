cmake_minimum_required(VERSION 3.8)
project(HelloWorld)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Test.cpp Test.h Hanoi.cpp Hanoi.h Calendar.cpp Calendar.h)
add_executable(HelloWorld ${SOURCE_FILES})
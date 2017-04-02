cmake_minimum_required(VERSION 3.7)
project(KR_Exercises)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES main.c CH2.h CH1.h)
add_executable(KR_Exercises ${SOURCE_FILES})
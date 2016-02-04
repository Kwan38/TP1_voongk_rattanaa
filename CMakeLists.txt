cmake_minimum_required(VERSION 3.3)
project(TP1_voongk_rattanaa)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Dvector.h Dvector.cpp Dvector.h)
add_executable(TP1_voongk_rattanaa ${SOURCE_FILES})
cmake_minimum_required(VERSION 3.20.5)
project(cpptut)

if( NOT CMAKE_CXX_STANDARD)
    set( CMAKE_CXX_STANDARD 14)
endif()

set( SRC_FILES src/main.cpp )

add_executable(hello ${SRC_FILES})

target_include_directories(hello PUBLIC hdr\ )
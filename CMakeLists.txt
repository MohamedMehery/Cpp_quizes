cmake_minimum_required(VERSION 3.20.5)
project(cpptut)

if( NOT CMAKE_CXX_STANDARD)
    set( CMAKE_CXX_STANDARD 14)
endif()

set( SRC_FILES src/main.cpp)

add_executable(hello ${SRC_FILES})
message(Direction "Cmake file directory is:\n${CMAKE_CURRENT_SOURCE_DIR}")

target_include_directories(hello PUBLIC hdr\ )

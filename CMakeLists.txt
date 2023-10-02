cmake_minimum_required(VERSION 3.20.5)
project(cpptut)

if( NOT CMAKE_CXX_STANDARD)
    set( CMAKE_CXX_STANDARD 14)
else()
    set(CMAKE_CXX_STANDARD 14)
endif()

if(EXISTS ${CMAKE_SOURCE_DIR}/src/main.cpp)
    message(DEBUG "main file exist")
else()
    message(FATAL_ERROR "main file doesn't exist")
endif()

set( SRC_FILES
        src/main.cpp
        )

add_executable(hello ${SRC_FILES})
add_subdirectory(${CMAKE_SOURCE_DIR}/lib)

message(Direction "Cmake file directory is:\n${CMAKE_CURRENT_SOURCE_DIR}")

target_include_directories(hello PUBLIC hdr/ lib/)
target_link_libraries(hello PUBLIC example_lib)

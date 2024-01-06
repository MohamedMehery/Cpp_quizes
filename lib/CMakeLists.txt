cmake_minimum_required(VERSION 3.20.6)

add_library(example_lib
            example.cpp
            example.hpp)
message("Hello from lib cmake_current_source_dir:\n${CMAKE_CURRENT_SOURCE_DIR}")

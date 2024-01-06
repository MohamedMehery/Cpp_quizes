project(hellocmake)
cmake_minimum_required(VERSION 3.20.1)
if(NOT CMAKE_CXX_STANDARD)
    set(CMAKE_CXX_STANDARD 17)    
endif()

set(SRC_FILES src/main.cpp)
set(HRD_FILES hdr/*.hpp)

add_executable(hello ${SRC_FILES})
add_subdirectory(${CMAKE_SOURCE_DIR}/lib)

target_include_directories(hello PUBLIC hdr/)
target_link_libraries(hello PUBLIC example_lib)


#cmake -G "MinGW Makefiles" ..
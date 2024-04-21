cmake_minimum_required(VERSION 3.26.0)
project(hellocmake)

if(NOT CMAKE_CXX_STANDARD)
    set(CMAKE_CXX_STANDARD 17)
endif()

set(SRC_FILES ${CMAKE_SOURCE_DIR}/src/main.cpp)
set(HDR_FILES ${CMAKE_SOURCE_DIR}/hdr)

if( EXISTS ${CMAKE_SOURCE_DIR}/src/main.cpp)
    message(DEBUG "main files exists")
else()
    message(FETAL_ERROR "main files doesnot exist")
endif()

add_executable(hello  ${SRC_FILES}) #target name hello
target_include_directories(hello PUBLIC ${HDR_FILES})

add_subdirectory(${CMAKE_SOURCE_DIR}/lib)
target_link_libraries(hello PUBLIC example_lib)

#Go to build directory and type:
#cmake -G "MinGW Makefiles" ..
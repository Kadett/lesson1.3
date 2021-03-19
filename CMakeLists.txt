cmake_minimum_required(VERSION 3.16)
project(lesson1_3)

set(CMAKE_CXX_STANDARD 14)
add_library(test SHARED src/func.cpp src/func.h src/var.cpp)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE test)
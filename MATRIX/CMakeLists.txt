cmake_minimum_required(VERSION 3.27)
project(
    Matrix
    VERSION 0.0.1
    DESCRIPTION "Matrix_class"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_BUILD_TYPE  Debug)

add_executable(Matrix_class)

set(sources
   src/main.cpp
   src/matrix.h
   src/matrix.cpp
)

target_sources(Matrix_class PRIVATE ${sources})

target_include_directories (Matrix_class
    PUBLIC
    
    "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>"
    "$<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>"

) 
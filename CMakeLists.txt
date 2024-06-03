cmake_minimum_required(VERSION 3.27)
project(
    Cars
    VERSION 0.0.1
    DESCRIPTION "Cars"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_BUILD_TYPE  Debug)

add_executable(Cars)

set(sources
   src/main.cpp
   src/cars.h
   src/cars.cpp
)

target_sources(Cars PRIVATE ${sources})

target_include_directories (Cars
    PUBLIC
    
    "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>"
    "$<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>"

) 
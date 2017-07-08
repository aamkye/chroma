cmake_minimum_required(VERSION 3.7)
 
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

project(Chroma)

set(SOURCE_FILES
    src/Chroma.cpp
)

add_library(${PROJECT_NAME} ${SOURCE_FILES})

target_compile_options(${PROJECT_NAME} PUBLIC -std=c++1z -Wall -stdlib=libc++ -Wextra -O2)

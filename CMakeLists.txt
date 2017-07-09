cmake_minimum_required(VERSION 3.7)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

project(Chroma)

set(TEST_SOURCE_FILES
    src/main.cpp
)

set(COMPILE_OPTIONS
    -std=c++0x -Wall -Wextra -O2
)

if (${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
    set(COMPILE_OPTIONS ${COMPILE_OPTIONS} -stdlib=libc++)
endif()

add_executable(test${PROJECT_NAME} ${TEST_SOURCE_FILES})

target_compile_options(test${PROJECT_NAME} PUBLIC ${COMPILE_OPTIONS})

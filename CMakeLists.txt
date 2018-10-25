cmake_minimum_required(VERSION 3.0.2)

project(codewars)

set(CMAKE_CXX_STANDARD 14)

file(GLOB SOURCES ${CMAKE_SOURCE_DIR}/src/*.cpp)

include_directories(/usr/src/gtest)
add_executable(kata /usr/src/gtest/src/gtest-all.cc ${SOURCES})
target_link_libraries(kata pthread)
add_test(NAME kata COMMAND kata)

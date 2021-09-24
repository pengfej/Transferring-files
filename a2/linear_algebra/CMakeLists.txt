project(linear_algebra)

cmake_minimum_required(VERSION 3.8)

set(CMAKE_CXX_FLAGS "-std=c++17 -g -fopenmp -O3 -Wall")

set(LINKER_LANGUAGE CXX)

include_directories("../iml++")

file(GLOB SOURCES "*.*pp")

add_executable(linear_solve_test.exe ${SOURCES}) 





cmake_minimum_required(VERSION 4.0)
project(CPPTesting)

set(SRCS main.cpp)

add_executable(${PROJECT_NAME} ${SRCS})
target_compile_options(${PROJECT_NAME} PRIVATE /Od /Ob0)
cmake_minimum_required(VERSION 2.8.9)
project (Test)
file(GLOB SOURCES "src/*.c")
add_executable(Test ${SOURCES})

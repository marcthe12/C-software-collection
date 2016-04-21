cmake_minimum_required(VERSION 2.8.9)
project (float)
file(GLOB SOURCES "src/*.c")
add_executable(float ${SOURCES})

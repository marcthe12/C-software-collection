cmake_minimum_required(VERSION 2.8.9)
project (win64)
file(GLOB SOURCES "src/*.c")
add_executable(win64 ${SOURCES})

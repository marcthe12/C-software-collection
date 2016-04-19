cmake_minimum_required(VERSION 2.8.9)
project (hello)
file(GLOB SOURCES "src/*.c")
add_executable(hello ${SOURCES})

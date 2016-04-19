cmake_minimum_required(VERSION 2.8.9)
project (file)
file(GLOB SOURCES "src/*.c")
add_executable(file ${SOURCES})

cmake_minimum_required(VERSION 2.8.9)
project (Printfile)
file(GLOB SOURCES "src/*.c")
add_executable(printfile ${SOURCES})

cmake_minimum_required(VERSION 2.8.9)
project (Arkaman)
file(GLOB SOURCES "src/*.c")
add_executable(arkaman ${SOURCES})

cmake_minimum_required(VERSION 2.8.9)
project (Arkaman C)
file(GLOB SOURCES "src/*.c")
add_executable(arkaman ${SOURCES})

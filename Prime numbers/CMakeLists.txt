cmake_minimum_required(VERSION 2.8.9)
project (Prime)
file(GLOB SOURCES "src/*.c")
add_executable(prime ${SOURCES})

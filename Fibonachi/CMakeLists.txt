cmake_minimum_required(VERSION 2.8.9)
project (Fibonachi)
file(GLOB SOURCES "src/*.c")
add_executable(fibo ${SOURCES})

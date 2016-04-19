cmake_minimum_required(VERSION 2.8.9)
project (fact)
file(GLOB SOURCES "src/*.c")
add_executable(fact ${SOURCES})

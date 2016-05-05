cmake_minimum_required(VERSION 2.8.9)
project (curses)
file(GLOB SOURCES "src/*.c")
find_package(Curses)
SET(CURSES_NEED_NCURSES TRUE)

if(CURSES_HAVE_NCURSES_H)
	include_directories(${CURSES_INCLUDE_DIR})
elseif(CURSES_HAVE_NCURSES_NCURSES_H)
	include_directories(${CURSES_INCLUDE_DIR}/ncurses)
endif()

add_executable(curses ${SOURCES})
target_link_libraries(curses ${CURSES_LIBRARIES})

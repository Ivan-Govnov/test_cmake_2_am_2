cmake_minimum_required(VERSION 3.16)

project(App LANGUAGES C)

add_library(lib STATIC
	lib/calc.c
	lib/is_integer.c
)

target_include_directories(lib PUBLIC
	${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_executable(app
	src/main.c
)

target_link_libraries(app PRIVATE lib)
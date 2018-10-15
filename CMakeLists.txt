cmake_minimum_required(VERSION 3.9)


project(Assignment2)

add_subdirectory(src)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall")
set(GCC_COVERAGE_COMPILE_FLAGS "-Wall -std=c99 -o -lm")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}" )

set(SOURCE_FILES src/utils_2.c src/utils_2.h src/testing.c src/tasks.h src/tasks.c)

add_executable(main ${SOURCE_FILES})
target_link_libraries(main m)

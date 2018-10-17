cmake_minimum_required(VERSION 3.9)


project(Assignment2)

add_subdirectory(src)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall")
set(GCC_COVERAGE_COMPILE_FLAGS "-Wall -std=c99 -o -lm")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}" )

set(SOURCE_FILES
        src/newton_ralphson.c
        src/tasks.c
        src/thomas.c
        src/interp.c
        src/diff.c
        src/utilities.c
        )

set(SOURCE_HEADERS
        src/newton_ralphson.h
        src/tasks.h
        src/thomas.h
        src/interp.h
        src/diff.h
        src/utilities.h
        )
set(TEST src/testing.c)
set(MAIN src/main.c)

add_executable(main ${SOURCE_FILES} ${SOURCE_HEADERS} ${TEST})
target_link_libraries(main m)

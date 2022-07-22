cmake_minimum_required(VERSION 3.21)
project(ostep_exercise C)

set(CMAKE_C_STANDARD 99)

add_executable(p1 process_api/p1.c)
add_executable(p2 process_api/p2.c)
add_executable(p3 process_api/p3.c)
add_executable(p4 process_api/p4.c)
add_executable(p5 process_api/p5.c)
add_executable(m1 memory/memory-user.c)
add_executable(n1 memory/null.c)
add_executable(malloc memory/malloc.c)


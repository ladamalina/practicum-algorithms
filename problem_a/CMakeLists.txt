cmake_minimum_required(VERSION 3.20)
project(problems_a)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")

file(GLOB TARGET_H ./*.h)
file(GLOB TARGET_SRC ./*.cpp)

add_executable(problems_a
        ${TARGET_SRC}
        ${TARGET_H}
        main.cpp)

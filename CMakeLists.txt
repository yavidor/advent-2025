cmake_minimum_required(VERSION 4.0)
project(advent_2025 C)

set(CMAKE_C_STANDARD 99)

set(DAY 2)
add_executable(advent_2025
        utils/utils.c
        day${DAY}/main.c
        utils/utils.h
)

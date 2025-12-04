cmake_minimum_required(VERSION 4.0)
project(advent_2025 C)

set(CMAKE_C_STANDARD 11)

add_executable(advent_2025
        utils/utils.c
        utils/utils.h
        day1/main.c)

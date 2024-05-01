cmake_minimum_required(VERSION 3.27)
project(sempiternal_knowledge)

set(CMAKE_CXX_STANDARD 17)

add_executable(sempiternal_knowledge main.cpp
        head.h
        sorting-algorithms/bubble-sort.cpp
        sorting-algorithms/sort-head.h)

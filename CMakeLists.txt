cmake_minimum_required(VERSION 3.27)
project(DSA)

set(CMAKE_CXX_STANDARD 11)

add_executable(DSA main.cpp
        sort/SortUtils.cpp
        sort/SortUtils.h
        leetcode/Solutions.cpp
        leetcode/Solutions.h
        leetcode/Solutions.h)

cmake_minimum_required(VERSION 3.24)
project(TP3)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(TP3
        Individu.cpp
        Employe.cpp
        main.cpp)

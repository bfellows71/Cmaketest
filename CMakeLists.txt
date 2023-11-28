cmake_minimum_required(VERSION 3.26)
project(Cmaketest)

set(CMAKE_CXX_STANDARD 17)

add_executable(Cmaketest main.cpp
        src/factorial.cpp)

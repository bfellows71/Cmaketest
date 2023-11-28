cmake_minimum_required(VERSION 3.22)
project(Cmaketest)

set(CMAKE_CXX_COMPILER /usr/bin/g++)


add_executable(Cmaketest main.cpp
        src/factorial.cpp)

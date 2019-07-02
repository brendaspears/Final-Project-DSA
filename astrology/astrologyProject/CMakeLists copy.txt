cmake_minimum_required(VERSION 3.13)
project(astrology)

set(CMAKE_CXX_STANDARD 14)

add_executable(astrology main.cpp node.h person.h zodiacs.h function.h menu.h function.cpp menu.cpp person.cpp)
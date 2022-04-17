cmake_minimum_required(VERSION 3.0.2)
project(bind)
set_directory_properties(PROPERTIES COMPILE_OPTIONS "-std=c++14;-Wall;-Werror")

add_executable(run main.cpp)
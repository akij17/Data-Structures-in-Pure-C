# cmake_minimum_required(VERSION <specify CMake version here>)
project(DSAImplementation C)

set(CMAKE_C_STANDARD 11)

include_directories(/usr/local/lib)

set(CMAKE_INCLUDE_CURRENT_DIR )
set(CMAKE_INCLUDE_PATH /usr/local/lib)


add_executable(DSAImplementation main.c arraylist.c arraylist.h liststructures.c liststructures.h helpers.c helpers.h linkedlist.c linkedlist.h sortnsearch.c sortnsearch.h tree.h tree.c)
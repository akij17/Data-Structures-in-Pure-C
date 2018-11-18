# cmake_minimum_required(VERSION <specify CMake version here>)
cmake_minimum_required(VERSION 3.12)
project(DSAImplementation C)

set(CMAKE_C_STANDARD 11)

include_directories(/usr/local/lib)

set(CMAKE_INCLUDE_CURRENT_DIR )
set(CMAKE_INCLUDE_PATH /usr/local/lib)


add_executable(DSAImplementation main.c arraylist.c arraylist.h liststructures.c liststructures.h helpers.c helpers.h linkedlist.c linkedlist.h sortnsearch.c sortnsearch.h stack_al.h stack_al.c stack_al.h stackQueue.c stackQueue.h main.h queue_ll.c queue_ll.h avl_bst.c avl_bst.h bst.c bst.h btree.c btree.h main_tree.c main_tree.h graph.c graph.h graph2.c graph2.h heap.c heap.h)
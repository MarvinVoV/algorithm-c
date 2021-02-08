cmake_minimum_required(VERSION 3.17)
project(algorithm_c C)

set(CMAKE_C_STANDARD 11)

add_executable(enum_type src/tutorial/enum_type.c)
add_executable(union_type src/tutorial/union_type.c)
add_executable(structure_type src/tutorial/structure_type.c)
add_executable(point src/tutorial/point.c)
add_executable(binary_tree src/binary_tree/binary_tree.c src/stack/stack_by_array.c src/stack/stack_by_linked_list.c)
add_executable(stack_by_array src/stack/stack_by_array.c)
add_executable(stack_by_linked_list src/stack/stack_by_linked_list.c)

#
#include_directories(list)
#include_directories(practise/exp)
#include_directories(practise/maze)
#include_directories(sort)
#include_directories(tree)
#
#add_executable(algorithm_c
#        basis/io/copy_block.c
#        basis/io/simple_copy.c
#        basis/io/simple_read.c
#        basis/io/simple_write.c
#        basis/io/tolower.c
#        basis/args.c
#        basis/longest-line.c
#        basis/my_atoi.c
#        basis/point_1.c
#        basis/point_2.c
#        basis/point_strlen.c
#        basis/point_swap.c
#        basis/qsort.c
#        basis/simple_stack.c
#        basis/simple_strucure.c
#        basis/strcpy.c
#        list/list.c
#        list/list.h
#        practise/exp/postfix.c
#        practise/exp/stack.c
#        practise/exp/stack.h
#        practise/maze/maze.c
#        practise/maze/stack.c
#        practise/maze/stack.h
#        practise/factorial.c
#        practise/fibonacci.c
#        practise/pattern_match.c
#        practise/permutation.c
#        queue/circle_queue.c
#        sort/binary_search.c
#        sort/common.c
#        sort/common.h
#        sort/full_permutation.c
#        sort/selection_sort.c
#        stack/stack.c
#        tree/bintree.c
#        tree/bintree.h
#        tree/stack.c
#        tree/stack.h
#        int_reverse.c)

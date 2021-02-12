cmake_minimum_required(VERSION 3.17)
project(algorithm_c C)

set(CMAKE_C_STANDARD 11)

add_executable(my_string src/lib/string.c src/lib/string.h)
add_executable(my_number src/lib/number.c src/lib/number.h)
add_executable(enum_type src/tutorial/enum_type.c)
add_executable(union_type src/tutorial/union_type.c)
add_executable(structure_type src/tutorial/structure_type.c)
add_executable(point src/tutorial/point.c)
add_executable(binary_tree src/data_structure/binary_tree/binary_tree.c)
add_executable(stack_by_array src/data_structure/stack/stack_by_array.c)
add_executable(stack_by_linked_list src/data_structure/stack/stack_by_linked_list.c)
add_executable(binary_search src/sort/binary_search.c)
add_executable(selection_sort src/sort/selection_sort.c)
add_executable(full_permutation src/sort/full_permutation.c)
add_executable(query_by_array src/data_structure/queue/queue_by_array.c)
add_executable(list src/data_structure/list/list.c)
add_executable(quick_sort src/sort/quick_sort.c)
add_executable(int_reverse src/number/int_reverse.c)


#include_directories(list)


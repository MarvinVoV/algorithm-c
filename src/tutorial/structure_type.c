//
// Created by marvin on 2021/2/7.
//
#include "stdio.h"

int main(void) {

    // Define a structure type named struct point
    struct point {
        int x, y, z;
    };
    struct point my_point, *my_point_ptr;
    my_point.x = 5;
    my_point_ptr = &my_point;
    printf("size=%lu\n", sizeof(struct point));
    printf("size=%lu\n", sizeof(my_point));
    printf("size=%lu\n", sizeof(*my_point_ptr));


    typedef struct color {
        int x, y, z;
    } color_type;
    color_type my_color, *my_color_ptr;
    my_color.x = 5;
    my_color_ptr = &my_color;
    printf("size=%lu\n", sizeof(my_color));
    printf("size=%lu\n", sizeof(*my_color_ptr));


    int a = 1;
    int *a_ptr = &a;
    printf("a_ptr=%d\n", *a_ptr);
    typedef int *int_ptr;
    int_ptr b_ptr = &a;
    printf("b_ptr=%d\n", *b_ptr);


    typedef struct car {
        int x, y, z;
    } car_type, *car_ptr_type;

    car_type my_car;
    my_car.x  = 10;

    car_ptr_type my_car_ptr = &my_car;
    printf("%d\n", my_car_ptr->x);
    printf("sizeof my_car %lu\n", sizeof(my_car));
    printf("sizeof my_car_ptr %lu\n", sizeof(*my_car_ptr));

    return 0;
}

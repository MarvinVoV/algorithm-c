//
// Created by marvin on 2021/2/7.
//
#include "stdio.h"
#include "stddef.h"

int main(void) {

    int i = 10, j = 5;
    int *ip = &i;
    printf("i=%d\n", i);
    printf("&i=%p\n", &i);
    printf("ip=%p\n", ip);
    printf("*ip=%d\n", *ip);
    printf("&ip=%p\n", &ip);

    ip = &j;
    printf("j=%d\n", j);
    printf("&j=%p\n", &j);
    printf("&ip=%p\n", &ip);
    printf("ip=%p\n", ip);
    printf("*ip=%d\n", *ip);

    *ip = 2;
    printf("j=%d\n", j);
    printf("ip=%p\n", ip);

    union numbers {
        int i;
        float j;
    };
    union numbers foo = {4};
    union numbers *numbers_ptr = &foo;
    printf("foo.i=%d\n", foo.i);
    printf("foo.i=%d\n", numbers_ptr->i);
    numbers_ptr->i = 5;
    printf("foo.i=%d\n", numbers_ptr->i);

    struct fish {
        float length, weight;
    };
    struct fish salmon = {4.5f, 5.8f};
    struct fish *fish_ptr = &salmon;
    printf("salmon length=%f\n", salmon.length);
    printf("salmon length=%f\n", fish_ptr->length);


    struct linked_list {
        struct linked_list *next;
        int x;
    };

    struct linked_list *list_head;

    typedef unsigned char byte_char;
    typedef struct car {
        float weight;
    } car_type;

    car_type my_car = {2.0f};
    printf("my_car weight %f\n", my_car.weight);

    int array[] = {5,15,3,4,5};
    int *p = array;
    printf("array[0]=%d\n", *p);
    printf("array[1]=%d\n", ++*p);

    size_t len = sizeof(array);

    struct t {
        int data;
        float d;
        int dd;
        int zz;
        struct t *ptr;
    } my_t, *t_ptr;

    printf("struct t size=%lu\n", sizeof(struct t));
    printf("struct t size=%lu\n", sizeof(*t_ptr));

    return 0;
}
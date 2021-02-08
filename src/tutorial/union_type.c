//
// Created by marvin on 2021/2/7.
//
#include "stdio.h"

int main(void) {
    union number {
        int i;
        float f;
    };
    union number first_number;
    first_number.i = 3;
    first_number.f = 5.0f;

    union number second_number = {.f=3.5f};
    printf("union size %lu", sizeof(second_number));
    return 0;
}
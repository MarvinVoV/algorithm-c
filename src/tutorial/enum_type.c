//
// Created by marvin on 2021/2/7.
//

#include <stdio.h>


int main(void) {

    enum week {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
    enum week today;
    today = Wednesday;
    printf("Day %d", today + 1);
    printf("\n");


    enum color {
        red, blue
    } my_color;

    my_color = red + 1;
    printf("Color %d\n", my_color);
    printf("size of my_color %lu\n", sizeof(my_color));
    return 0;
}
//
// Created by marvin on 2021/2/7.
//
#include "stdio.h"

int main(void) {
    printf("hello");
    int z = 0x17;
    printf("%d", z);

    int y = 055;
    printf("%d", y);

    printf("\n");
    char a[] = "hello";
    printf("%s\n", a);

    char b[] = "hello" "world";
    printf("%s", b);

    char c[] = "hello" "world"
                       "welcome";
    printf("%s", c);

    double d = 2.1;
    printf("%f\n", d);

    float f = 2.2f;
    printf("%f\n", f);

    enum fruit {
        grape, cherry
    };

    printf("%d\n", grape);

//    enum color {
//        red, blue
//    } my_color;

    enum color {
        red, blue
    };
    enum color my_color;



    return 0;



}

//
// Created by marvin on 2021/2/7.
//
#include "stdio.h"
#include "stddef.h"

int main(void) {

    int num = 123;

    int *ptr;

    int **pptr;

    ptr = &num;

    pptr = &ptr;

    int *cp;
    cp = *pptr;

    printf("\n num=%d", num);
    printf("\n &num=%p", &num);
    printf("\n ptr=%p", ptr);
    printf("\n *ptr=%d", *ptr);
    printf("\n &ptr=%p", &ptr);
    printf("\n pptr=%p", pptr);
    printf("\n *pptr=%p", *pptr);
    printf("\n &pptr=%p", &pptr);
    printf("\n **pptr=%d", **pptr);
    printf("\n cp=%p", cp);

    return 0;
}
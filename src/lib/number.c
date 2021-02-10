//
// Created by marvin on 2021/2/10.
//

#include "number.h"

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

/**
 * Parse string a number
 * @param s
 * @return
 */
int parseInt(const char s[]) {
    int i, n;
    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = n * 10 + (s[i] - '0');
    return n;
}

int main() {
    int a = 1, b = 2;
    swap(&a, &b);
    printf("a=%d,b=%d\n", a, b);

    char s[] = {'1', '2', '3'};
    printf("%d\n", parseInt(s));
}
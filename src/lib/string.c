//
// Created by marvin on 2021/2/10.
//

#include "string.h"

/**
 * Swap char a and b
 * @param a
 * @param b
 */
void swap(char *a, char *b) {
    char tmp = *a;
    *a = *b;
    *b = tmp;
}

/**
 * Length of string
 * @param s
 * @return
 */
int len(char *s) {
    int n;
    for (n = 0; *s != '\0'; s++, n++);
    return n;
}

/**
 * Copy string
 * @param s
 * @param t
 */
void copy(char *s, char *t) {
    while ((*s++ = *t++) != '\0');
}

int main() {
    char a = 'a';
    char b = 'b';
    swap(&a, &b);
    printf("\n a=%c", a);
    printf("\n b=%c", b);

    char s[] = {'a', 'b', 'c', '\0'};
    printf("length of s is %d\n", len(s));


}
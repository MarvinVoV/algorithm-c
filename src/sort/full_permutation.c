#include <stdio.h>

/**
 * Swap char a and b
 * @param a
 * @param b
 */
void swap_char(char *a, char *b) {
    char t = *a;
    *a = *b;
    *b = t;
}

/**
 * Full permutation of String
 * @param s
 * @param start
 * @param end
 */
void full_permutation(char *s, int start, int end) {
    if (start == end) {
        for (int i = 0; i <= end; i++)
            printf("%c", s[i]);
        printf("    ");
    } else {
        for (int i = start; i <= end; i++) {
            swap_char(&s[start], &s[i]);
            full_permutation(s, start + 1, end);
            swap_char(&s[start], &s[i]);
        }
    }
}


int main(void) {
    char s[] = {'a', 'b', 'c'};
    full_permutation(s, 0, 2);

    return 0;
}

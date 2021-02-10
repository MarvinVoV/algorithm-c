#include <stdio.h>
#include <limits.h>

int reverse(int x) {
    long long res = 0;
    while (x) {
        res = res * 10 + x % 10;
        x /= 10;
    }
    return (res < INT_MIN || res > INT_MAX) ? 0 : res;
}

int main(void) {
    int num = 321;
    printf("result=%d\n", reverse(num));
    return 0;
}

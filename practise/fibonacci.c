#include <stdio.h>

// recursion
int fibonacci(int n){
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// non recursion
int fibonacci2(int n){
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    int before = 0, after = 1;
    int i = 2;
    int result;
    while(i <= n){
       result = before + after;
       before = after;
       after = result;
       i++;
    }
    return result;
}


int main(void){
    int n = 20;
    int r = fibonacci(n);
    printf("%d\n", r);

    r = fibonacci2(n);
    printf("%d\n", r);
    return 0;
}

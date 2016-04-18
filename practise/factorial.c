#include <stdio.h>

// recursion
int factorial(int n){
    if(n <= 1)
        return 1;
    return n * factorial(n - 1);
}

// non recursion
int factorial2(int n){
    if(n <= 1)
        return 1;
    int i = 1, tmp;
    int r;
    tmp = i;
    while(i <= n){
        r = i * tmp; 
        tmp = r;
        i++;
    }
    return r;
}
int main(void){
    int n = 6;
    int r =  factorial(n);
    printf("%d\n", r);
    r = factorial2(n);
    printf("%d\n", r);
    return 0;
}

#include "common.h"


void full_permutation(char *s, int i, int n){
    int j;
    if(i == n){
        for(j = 0; j <= n; j++)
            printf("%c", s[j]);
        printf("    ");
    }else{
        for(j = i; j <= n; j++){
            swap_c(&s[i], &s[j]);
            full_permutation(s, i + 1, n);
            swap_c(&s[i], &s[j]);
        }
    }
}


int main(void){
    
    char s[] = {'a', 'b', 'c'};
    full_permutation(s, 0, 2);


    return 0;
}

#include "common.h"



void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap_c(char *a, char *b){
    char t = *a;
    *a = *b;
    *b = t;
}

int compare(const int a, const int b){
    if(a == b)
        return 0;
    else
        return a > b ? 1 : -1;
}

void print_array(int a[], int n){
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

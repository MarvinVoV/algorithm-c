#include <stdio.h>
#include <stdlib.h>
#include "common.h"

void selection_sort(int a[], int n);


void selection_sort(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        int min = i;
        for(int j = i; j < n; j++){
            if(a[min] > a[j])
                min = j;
        }
        swap(&a[min], &a[i]);
    }
}

int main(){
    int a[10]; 

    for(int i = 0; i < 10; i++)
        a[i] = rand() % 20; // 0 ~ 19
    print_array(a, 10);

    selection_sort(a, 10);

    print_array(a, 10);

    return 0;
}

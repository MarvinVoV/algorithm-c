#include "common.h"

// non recursion
int binary_search_1(int a[], int num, int left,  int right){
    while(left <= right){
        int mid = (left + right) >> 1;
        if(a[mid] == num)
            return mid;
        else if(a[mid] < num)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

// recursion
int binary_search_2(int a[], int num, int left, int right){
    if(left <= right){
        int mid = (left + right) >> 1;
        if(a[mid] == num)
            return mid;
        else if(a[mid] < num)
            return binary_search_2(a, num, mid + 1, right);
        else
            return binary_search_2(a, num, left, mid - 1);
    }else
        return -1;
}


int main(){
    int a[10] = {1,2,3,4,5,6,7,8,9,10};

    int num = 6;
    printf("search result is %d\n", binary_search_1(a, num, 0, 9));
    printf("search result is %d\n", binary_search_2(a, num, 0, 9));

    num = 11;
    printf("search result is %d\n", binary_search_1(a, num, 0, 9));
    printf("search result is %d\n", binary_search_2(a, num, 0, 9));

    return 0;
}

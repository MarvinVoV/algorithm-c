#include <stdio.h>
#include <stdlib.h>

/**
 * Swap a and b
 * @param a
 * @param b
 */
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

/**
 * Print array
 * @param a
 * @param n
 */
void print_array(int a[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

/**
 * Selection Sort
 * @param a
 * @param n
 */
void selection_sort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i; j < n; j++) {
            if (a[min] > a[j])
                min = j;
        }
        swap(&a[min], &a[i]);
    }
}

int main() {
    int a[10];

    for (int i = 0; i < 10; i++)
        a[i] = rand() % 20; // 0 ~ 19
    print_array(a, 10);

    selection_sort(a, 10);

    print_array(a, 10);

    return 0;
}

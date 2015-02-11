/*
 ============================================================================
 Name        : basis.c
 Author      : louis
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void swap(int *a,int *b){
	int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}

int main(void) {
	int a=3,b=5;
	swap(&a,&b);
	printf("a=%d,b=%d",a,b);

	return EXIT_SUCCESS;
}





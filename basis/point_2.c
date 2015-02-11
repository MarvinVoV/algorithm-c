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


int main(void) {

	int v[]={1,2,3,4,5};
	int *p;
	p=v;

	printf("%d\n",*p); // 1
	// ++ and * associate from right to left
	printf("%d\n",*p++); //1
	printf("%d\n",*(++p));// 2

	return EXIT_SUCCESS;
}





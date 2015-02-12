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

int my_strlen(char *s){
	int n;
	for(n=0;*s!='\0';s++)
		n++;
	return n;
}

int main(void) {
	char s[]="hello";
	int n;
	n=my_strlen(s);
	printf("%d",n);

	return EXIT_SUCCESS;
}





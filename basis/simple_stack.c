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


#define STACK_SIZE 1000 /* stack size */

static char buf[STACK_SIZE];
static char *p=buf;

int isEmpty(){
	return !(p-buf);
}
int isFull(){
	return !(buf+STACK_SIZE-p);
}
int push(char c){
	if(isFull())
		return 0;
	*p++=c;
	return 1;
}
char pop(){
	if(isEmpty())
		return 0;
	return *--p;
}
int size(){
	return p-buf;
}

int main(void) {
	printf("%d,%d\n",isEmpty(),isFull());
	push('a');
	push('b');
	push('c');
	printf("%d\n",size());
	char c;
	while(c=pop())
		printf("%c ",c);
	return EXIT_SUCCESS;
}





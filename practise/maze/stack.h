#ifndef _STACK_H_
#define _STACK_H_
#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 200

typedef struct{
	short int row;
	short int col;
	short int dir;
}element;

int isEmpty();

int isFull();

void add(element item);

element delete();

int size();

#endif

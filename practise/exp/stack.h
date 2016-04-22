#ifndef _STACK_H_
#define _STACK_H_
#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 200

int isEmpty();

int isFull();

void add(int item);

int delete();

int size();

#endif

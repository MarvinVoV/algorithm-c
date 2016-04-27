#ifndef _STACK_H_
#define _STACK_H_
#include <stdio.h>
#include <stdlib.h>
#include "bintree.h"

#define MAX_STACK_SIZE 200


int isEmpty();

int isFull();

void add(tree_pointer node);

tree_pointer delete();

int size();

#endif

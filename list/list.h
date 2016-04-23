#ifndef _LIST_H_
#define _LIST_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
   int data;
   struct node *next;
} *node_ptr;

#endif

#ifndef _BINTREE_H_
#define _BINTREE_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *left_child, *right_child;
} *tree_pointer;

void inorder(tree_pointer node);
void posorder(tree_pointer node);
void preorder(tree_pointer node);


#endif

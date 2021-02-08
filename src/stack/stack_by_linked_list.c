//
// Created by marvin on 2021/2/8.
//

#include "stdio.h"
#include "stdlib.h"
#include "limits.h"

struct Node {
    int data;
    struct Node *next;
};

typedef struct Node StackNode;

/**
 * Create StackNode
 * @param data
 * @return
 */
StackNode *createNode(int data) {
    StackNode *node = (StackNode *) malloc(sizeof(StackNode));
    node->data = data;
    node->next = NULL;
    return node;
}

int isEmpty(StackNode *root) {
    return !root;
}

/**
 * https://www.geeksforgeeks.org/stack-data-structure-introduction-program/
 * @param root
 * @param data
 */
void push(StackNode **root, int data) {
    StackNode *node = createNode(data);
    node->next = *root;

}


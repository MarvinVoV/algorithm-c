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
 * Push
 * @param root
 * @param data
 */
void push(StackNode **root, int data) {
    StackNode *node = createNode(data);
    node->next = *root;
    *root = node;
    printf("%d pushed to stack\n", data);
}

/**
 * Pop
 * @param root
 * @return
 */
int pop(StackNode **root) {
    if (isEmpty(*root)) {
        return INT_MIN;
    }
    StackNode *temp = *root;
    *root = (*root)->next;
    int popped = temp->data;
    free(temp);

    return popped;
}

/**
 * Peek
 * @param root
 * @return
 */
int peek(StackNode *root) {
    if (isEmpty(root)) {
        return INT_MIN;
    }
    return root->data;
}

int main() {
    StackNode *root = NULL;

    push(&root, 10);
    push(&root, 20);
    push(&root, 30);

    printf("%d popped from stack\n", pop(&root));
    printf("Top element is %d\n", peek(root));

    return 0;
}




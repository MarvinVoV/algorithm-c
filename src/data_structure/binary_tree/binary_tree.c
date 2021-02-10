//
// Created by marvin on 2021/2/7.
//
#include "stdio.h"
#include "stdlib.h"


struct BTreeNode {
    int data;
    struct BTreeNode *left, *right;
};

typedef struct BTreeNode *Node;

Node create(int *array, int len) {
    printf("%d\n", array[5]);
    Node root = (Node)malloc(sizeof(struct BTreeNode));


}

int main(int argc, char *arv[]) {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    create(array, 1);

}



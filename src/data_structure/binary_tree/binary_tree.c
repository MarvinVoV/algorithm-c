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

/**
 * Create Node
 * @param data
 * @return
 */
Node newNode(int data) {
    Node node = (Node) malloc(sizeof(struct BTreeNode));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

/**
 * Construct a complement binary tree from a given array.
 * Input  :  arr[] = {1, 2, 3, 4, 5, 6}
 *
 * Output:
 *
 *                  1
 *                / \
 *               2   3
 *              / \ /
 *             4  5 6
 *
 * If parent node is at index i in the array then left child of that node
 * is at index (2*i+1) and right child is at index (2*i + 2) in the array.
 *
 * @param arr
 * @param root
 * @param i
 * @param n
 * @return
 */
Node insertLevelOfOrder(int arr[], Node root, int i, int n) {
    // Base case for recursion
    if (i < n) {
        Node temp = newNode(arr[i]);
        root = temp;

        // insert left child
        root->left = insertLevelOfOrder(arr, root->left, 2 * i + 1, n);

        // insert right child
        root->right = insertLevelOfOrder(arr, root->right, 2 * i + 2, n);
    }
    return root;
}

/**
 * Pre-Order
 * @param root
 */
void preOrder(Node root) {
    if (NULL != root) {
        printf("\n %d", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

/**
 * In-Order
 * @param root
 */
void inOrder(Node root) {
    if (NULL != root) {
        inOrder(root->left);
        printf("\n %d", root->data);
        inOrder(root->right);
    }
}

/**
 * Post-Order
 * @param root
 */
void postOrder(Node root) {
    if (NULL != root) {
        postOrder(root->left);
        postOrder(root->right);
        printf("\n %d", root->data);
    }
}

int main(void) {
    int array[] = {1, 2, 3, 4, 5, 6};
    int len = sizeof(array) / sizeof(array[0]);
    Node root = insertLevelOfOrder(array, NULL, 0, len);

//    preOrder(root);
//    inOrder(root);
    postOrder(root);
    return 0;
}



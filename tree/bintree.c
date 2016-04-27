#include "bintree.h"

/* LVR */
void inorder(tree_pointer node){
   if(!node) return;
   inorder(node->left_child);
   printf("%d", node->data);
   inorder(node->right_child);
}

/* LRV */
void postorder(tree_pointer node){
    if(!node) return;
   inorder(node->left_child);
   inorder(node->right_child);
   printf("%d", node->data);
}

/* VLR */
void preorder(tree_pointer node){
    if(!node) return;
   printf("%d", node->data);
   inorder(node->left_child);
   inorder(node->right_child);
}

/* LVR iterator */
void iter_inorder(tree_pointer node){
    for(;;){
        for(; node; node = node->left_child)
            add(node); /* add to stack */
        node = delete(); /* delete from stack */
        if(!node) break; /* empty stack */
        printf("%d", node->data);
        node = node->right_child;
    }
}

int main(int argc, char *argv[]){
    printf("hello world\n");

    return 0;
}



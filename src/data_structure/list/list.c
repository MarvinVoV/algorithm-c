#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} *node_ptr;


node_ptr create() {
    node_ptr header = NULL;
    node_ptr p = NULL; // record the tail node position
    // init a header
    header = (node_ptr) malloc(sizeof(struct node));
    header->data = 0;
    header->next = NULL;
    p = header;

    printf("input a positive number as the node data ended by -1\n");
    int data;
    scanf("%d", &data);
    while (data != -1) {
        node_ptr temp = (node_ptr) malloc(sizeof(struct node));
        temp->data = data;
        temp->next = NULL;

        p->next = temp;
        p = temp;
        printf("input a positive number as the node data ended by -1\n");
        scanf("%d", &data);
    }
    return header;
}

void insert_before_header(node_ptr header, node_ptr node) {
    node_ptr p = header->next;
    header->next = node;
    node->next = p;
}

void delete(node_ptr header, int data) {
    node_ptr p = header->next;
    node_ptr f = header;
    while (p) {
        if (p->data == data) {
            f->next = p->next;
            free(p);
            break;
        } else {
            f = p;
            p = p->next;
        }
    }
}

int size(node_ptr header) {
    int i = 0;
    node_ptr p;
    for (p = header->next; p; p = p->next, i++);
    return i;
}

void traverse_list(node_ptr header) {
    node_ptr p = header->next;
    while (p) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

node_ptr merge(node_ptr header1, node_ptr header2) {
    node_ptr header = (node_ptr) malloc(sizeof(struct node)); // the merge list
    header->next = NULL;
    header->data = 0;
    node_ptr tail = header;

    node_ptr p = header1->next;
    node_ptr q = header2->next;
    while (p && q) {
        if (p->data < q->data) {
            tail->next = p;
            p = p->next;
        } else {
            tail->next = q;
            q = q->next;
        }
        tail = tail->next;
    }
    if (!p)
        tail->next = q;
    else
        tail->next = p;
    return header;
}


int main(void) {
    /*
    node_ptr header = create();
    node_ptr insert_item = (node_ptr)malloc(sizeof(struct node));
    insert_item->next = NULL;
    insert_item->data = 100;
    insert_before_header(header, insert_item); 
    delete(header, 3);
    printf("list size is %d\n", size(header));
    */
    // tutorial merge
    printf("create first sorted list\n");
    node_ptr h1 = create();
    printf("create second sorted list\n");
    node_ptr h2 = create();
    node_ptr header = merge(h1, h2);
    traverse_list(header);

    return 0;
}

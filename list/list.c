#include "list.h"

node_ptr create(){
    node_ptr header = NULL;
    node_ptr p = NULL; // record the tail node position

    printf("input a positive number as the node data ended by -1\n");
    int data;
    scanf("%d", &data);
    while(data != -1){
        node_ptr temp = (node_ptr)malloc(sizeof(struct node));
        temp->data = data;
        temp->next = NULL;
        if(!header){
            header = temp;
            p = header;
        }else{
            p->next = temp;
            p = temp;
        }
        printf("input a positive number as the node data ended by -1\n");
        scanf("%d", &data);
    }
    return header;
}

void insert_before_header(node_ptr header, node_ptr node){
    node->next = header;
    header = node;
}

void delete(node_ptr header, int data){
    node_ptr front = header;
    // if delete header
    if(header->data == data){
        header = header->next;
        free(front);
    }else{
        while(front->next){
            if(front->next->data == data){
                node_ptr temp = front->next;
                front->next = front->next->next;
                free(temp);
            }
        }
    }
}

void traverse_list(node_ptr header){
    while(header){
        printf("%d ", header->data);
        header = header->next;
    }
    printf("\n");
}

int main(void){
    node_ptr header = create();
    node_ptr insert_item = (node_ptr)malloc(sizeof(struct node));
    insert_item->next = NULL;
    insert_item->data = 100;
    insert_before_header(header, insert_item); 
    traverse_list(header);

    return 0;
}

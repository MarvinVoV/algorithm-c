#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 3

typedef struct {
	int key;
} element;

element stack[MAX_STACK_SIZE];
int top = -1; 

int isEmpty(){
	return top == -1;	
}

int isFull(){
	return top == MAX_STACK_SIZE;
}

void add(element item){
	if(isFull()){
		fprintf(stderr, "stack is full\n");
		exit(-1);
	}
	stack[++top] = item;
}

element delete(){
	if(isEmpty()){
		fprintf(stderr, "stack is empty\n");
		exit(-1);
	}
	return stack[top--];
}

int size(){
	return top + 1;
}

int main(){
	element a = {1};
	element b = {2};
	element c = {3};
	printf("is empty %d\n", isEmpty());
	add(a);
	add(b);
	add(c);
	printf("is full %d\n", isFull());
	printf("stack size is %d\n", size());
	element r = delete();
	printf("del element %d\n", r.key);
	printf("stack size is %d\n", size());

	return 0;
}


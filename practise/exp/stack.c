#include "stack.h"

int stack[MAX_STACK_SIZE];

int top = -1; 

int isEmpty(){
	return top == -1;	
}

int isFull(){
	return top == MAX_STACK_SIZE;
}

void add(int item){
	if(isFull()){
		fprintf(stderr, "stack is full\n");
		exit(-1);
	}
	stack[++top] = item;
}

int delete(){
	if(isEmpty()){
		fprintf(stderr, "stack is empty\n");
		exit(-1);
	}
	return stack[top--];
}

int size(){
	return top + 1;
}

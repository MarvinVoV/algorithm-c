#include <stdio.h>
#include <stdlib.h>

#define MAX_QUEUE_SIZE 6

int front = 0, rear = 0;

typedef struct{
	int key;
} element;

element queue[MAX_QUEUE_SIZE - 1]; // note: the queue size is MAX_QUEUE_SIZE - 1

int isFull(){
	return front == (rear + 1) % MAX_QUEUE_SIZE;
}

int isEmpty(){
	return front == rear;
}

void enqueue(element item){
	if(isFull()){
		fprintf(stderr, "queue is full\n");
		exit(-1);	
	}	
	queue[rear] = item;
	rear = (rear + 1) % MAX_QUEUE_SIZE;
}

element dequeue(){
	if(isEmpty()){
		fprintf(stderr, "queue is empty\n");
		exit(-1);
	}
	front = (front + 1) % MAX_QUEUE_SIZE;
	return queue[front];
}

int size(){
	return (MAX_QUEUE_SIZE - front + rear) % MAX_QUEUE_SIZE;
}





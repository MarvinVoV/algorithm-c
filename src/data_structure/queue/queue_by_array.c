//
// Created by marvin on 2021/2/12.
//
#include "stdio.h"
#include "stdlib.h"
#include "limits.h"

struct Queue {
    int front, rear, size;
    unsigned capacity;
    int *array;
};

typedef struct Queue *Queue;

/**
 * Create a queue of given capacity and Initialize size of queue as 0
 * @param capacity
 * @return
 */
Queue createQueue(unsigned capacity) {
    Queue queue = (Queue) malloc(sizeof(struct Queue));
    queue->capacity = capacity;
    queue->front = queue->size = 0;
    queue->rear = (int) capacity - 1;
    queue->array = (int *) malloc(queue->capacity * sizeof(int));
    return queue;
}

/**
 * Queue is full when size equals to the capacity.
 * @param queue
 * @return
 */
int isFull(Queue queue) {
    return (queue->size == queue->capacity);
}

/**
 * Queue is empty when size equals to zero.
 * @param queue
 * @return
 */
int isEmpty(Queue queue) {
    return (queue->size == 0);
}

/**
 * Add an item to the queue and Change the rear and size value.
 * @param queue
 * @param item
 */
void enqueue(Queue queue, int item) {
    if (isFull(queue)) {
        printf("Queue is Full. %d is rejected.\n", item);
        return;
    }

    queue->rear = (queue->rear + 1) % (int) queue->capacity;
    queue->array[queue->rear] = item;
    queue->size++;
    printf("%d enqueue to queue\n", item);
}

/**
 * Remove an item from queue and Change front size.
 * @param queue
 * @return
 */
int dequeue(Queue queue) {
    if (isEmpty(queue)) {
        return INT_MIN;
    }
    int item = queue->array[queue->front];
    queue->front = (queue->front + 1) % (int) queue->capacity;
    queue->size--;
    return item;
}

/**
 * Get front of queue
 * @param queue
 * @return
 */
int front(Queue queue) {
    if (isEmpty(queue)) {
        return INT_MIN;
    }
    return queue->array[queue->front];
}

/**
 * Get rear of queue
 * @param queue
 * @return
 */
int rear(Queue queue) {
    if (isEmpty(queue)) {
        return INT_MIN;
    }
    return queue->array[queue->rear];
}

int main() {
    Queue queue = createQueue(5);
    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    enqueue(queue, 40);
    enqueue(queue, 50);
    enqueue(queue, 60);

    printf("%d dequeued from queue\n", dequeue(queue));
    printf("Front item is %d\n", front(queue));
    printf("Rear item is %d\n", rear(queue));

    return 0;
}
//
// Created by marvin on 2021/2/7.
//

#include "stdio.h"
#include "stdlib.h"
#include "limits.h"

/**
 * Stack implemented by Array
 */
struct Stack {
    int top;
    unsigned int capacity;
    int *array;
};

typedef struct Stack Stack;

/**
 * Create a stack of given capacity. It initialize size of stack as 0.
 * @param capacity
 * @return
 */
Stack *createStack(unsigned capacity) {
    Stack *stack = (Stack *) malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int *) malloc(stack->capacity * sizeof(int));
    return stack;
}

/**
 * Stack is Empty when top is equal to -1
 * @param stack
 * @return
 */
int isEmpty(Stack *stack) {
    return stack->top == -1;
}

/**
 * Stack is full when top is equal to the last index.
 * @param stack
 * @return
 */
int isFull(Stack *stack) {
    return stack->top == stack->capacity - 1;
}

/**
 * Add item to stack. It increase top by 1.
 * @param stack
 * @param item
 */
void push(Stack *stack, int item) {
    if (isFull(stack)) {
        printf("stack is full.\n");
        return;
    }
    stack->array[++stack->top] = item;
    printf("%d pushed to stack\n", item);
}

/**
 * Remove item from stack. It decrease top by 1.
 * @param stack
 * @return
 */
int pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("stack is empty.\n");
        return INT_MIN;
    }
    return stack->array[stack->top--];
}

/**
 * Return the top from stack without removing it.
 * @param stack
 * @return
 */
int peek(Stack *stack) {
    if (isEmpty(stack)) {
        printf("stack is empty");
        return INT_MIN;
    }
    return stack->array[stack->top];
}


int main(void) {
    Stack *stack = createStack(8);
    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
    push(stack, 40);
    push(stack, 50);
    push(stack, 60);
    push(stack, 70);
    push(stack, 80);
    push(stack, 90);

    printf("%d popped from stack\n", pop(stack));
    printf("%d peek from stack\n", peek(stack));
    printf("stack is empty? %d\n", isEmpty(stack));
    return 0;
}







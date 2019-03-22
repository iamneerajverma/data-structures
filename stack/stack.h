#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct Stack{
	int top;
	int capacity;
	int* array;
};

struct Stack* createStack(int capacity){
	struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack*));
	stack->top = -1;
	stack->capacity = capacity;
	stack->array = (int *) malloc(sizeof(int) * capacity);
	return stack;
}

int isEmpty(struct Stack* stack){
	return stack->top == -1;
}

int isFull(struct Stack* stack){
	return stack->top == stack->capacity - 1;
}

void push(struct Stack* stack, int data){
	if (isFull(stack)){
		printf("Stack overflow! Please increase size.\n");
	} else{
		stack->array[++stack->top] = data;
	}
}

int pop(struct Stack* stack){
	if (isEmpty(stack)){
		printf("Stack underflow!.\n");
		return INT_MIN;
	} else{
		return stack->array[stack->top--];
	}
}

int peek(struct Stack* stack){
	if (isEmpty(stack)){
		printf("Stack underflow!.\n");
		return INT_MIN;
	} else{
		return stack->array[stack->top];
	}
}


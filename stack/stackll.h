#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct Node{
	int data;
	struct Node* next;
};

struct Stack{
	struct Node* top;
	int size;
};

struct Node* getNewNode(int data){
	struct Node* node = (struct Node*) malloc(sizeof(struct Node*));
	node->data = data;
	node->next = NULL;
	return node;
}

struct Stack* createStack(){
	struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack*));
	stack->top = NULL;
	stack->size = 0;
	return stack;
}

int isEmpty(struct Stack* stack){
	return stack->top == NULL;
}

void push(struct Stack* stack, int data){
	struct Node* newNode = getNewNode(data);
	newNode->next = stack->top;
	stack->top = newNode;
	stack->size++;
}

int pop(struct Stack* stack){
	if (isEmpty(stack)){
		printf("Stack Empty!\n");
		return INT_MIN;
	} else {
		struct Node* topNode = stack->top;
		stack->top = stack->top->next;
		int data = topNode->data;
		// free(topNode);
		stack->size--;
		return data;
	}
}

int peek(struct Stack* stack){
	if (isEmpty(stack)){
		printf("Stack Empty!\n");
		return INT_MIN;
	} else {
		return stack->top->data;
	}
}

struct Node* reverseNextNode(struct Node* currNode){
	if (currNode->next == NULL){
		return currNode;
	} else {
		struct Node* lastReverseResult = reverseNextNode(currNode->next);
		currNode->next->next = currNode;
		currNode->next = NULL;
		return lastReverseResult;
	}
}

void reverse(struct Stack* stack){
	if (stack == NULL || stack->top == NULL){
		return;
	} else {
		stack->top = reverseNextNode(stack->top);
	}
}







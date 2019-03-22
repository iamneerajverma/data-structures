#include<stdlib.h>

struct Node{
	int data;
	struct Node* leftChild;
	struct Node* rightChild;
};

struct Node* getEmptyNode(){
	struct Node* newNode = (struct Node*) malloc(sizeof(struct Node*));
	newNode->leftChild = NULL;
	newNode->rightChild = NULL;
	return newNode;
}

struct Node* getNewNode(int data){
	struct Node* newNode = getEmptyNode();
	newNode->data = data;
	return newNode;
}
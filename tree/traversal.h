#include<stdio.h>
#include "binaryNode.h"

void inorder(struct Node* node){
	if (node == NULL){
		return;
	} else {
		inorder(node->leftChild);
		printf("%d  ", node->data);
		inorder(node->rightChild);
	}
}

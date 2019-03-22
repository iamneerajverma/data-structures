#include<stdio.h>
#include "traversal.h"

int getRandomNumber(){
	int val = rand()%1000;
	printf("%d  ", val);
	return val;
}

int main(){
	struct Node* root = getNewNode(getRandomNumber());
	root->leftChild = getNewNode(getRandomNumber());
	root->rightChild = getNewNode(getRandomNumber());
	root->rightChild->leftChild = getNewNode(getRandomNumber());
	printf("\n");
	inorder(root);
	printf("\n");
	return 0;
}

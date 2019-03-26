int generateRandomNumber(int max){
	int value = rand()%max;
	return value;
}

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void traverseArray(int *array, int size){
	printf("Array Traversal:\n\n");
	for (int i=0; i<size; i++){
		printf("%d  ", array[i]);
	}
	printf("\n\n");
}
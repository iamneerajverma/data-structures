#include<stdio.h>
#include "heap.h"

int generateRandomNumber(int max){
	int value = rand()%max;
	printf("%d  ", value);
	return value;
}

int main(){
	int capacity, max, count;
	printf("Please Enter size for the Heap:  _-_-_-   ");
	scanf("%d", &capacity);
	printf("\nPlease Enter max value & no of values:  _-_-_-   ");
	scanf("%d %d", &max, &count);
	struct Heap* heap = createHeap(capacity);
	printf("Size: %d, Capacity: %d\n\n", heap->size, heap->capacity);
	while(count != 0){
		insert(heap, generateRandomNumber(max));
		count--;
	}
	printf("Size: %d, Capacity: %d\n\n", heap->size, heap->capacity);
	printf("\n\n\n");
	traverse(heap);
	printf("Size: %d, Capacity: %d\n\n", heap->size, heap->capacity);
	printf("\n\n\n");
	while(heap->size != 0){
		printf("%d  ", getRootElement(heap));
	}
	printf("\n\n\n");
	return 0;
}
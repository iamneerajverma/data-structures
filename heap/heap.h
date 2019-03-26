#include<stdio.h>
#include<stdlib.h>

struct Heap{
	int capacity;
	int* data;
	int size;
};

struct Heap* createHeap(int capacity){
	struct Heap* heap = (struct Heap*) malloc(sizeof(struct Heap*));
	heap->capacity = capacity;
	heap->size = 0;
	heap->data = (int*) malloc(sizeof(int) * capacity);
	return heap;
}

int isEmpty(struct Heap* heap){
	return heap->size == 0;
}

int isFull(struct Heap* heap){
	return heap->size == heap->capacity;
}

int parent(int index){
	return (index - 1)/2;
}

int left(int index){
	return (2 * index) + 1;
}

int right(int index){
	return (2 * index) + 2;
}

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void insert(struct Heap* heap, int value){
	if (heap == NULL){
		printf("Heap is not defined\n");
	} else if (isFull(heap)){
		printf("Heap overflow!\n");
	} else {
		int index = heap->size++;
		heap->data[index] = value;
		while(index != 0 && heap->data[index] > heap->data[parent(index)]){
			swap(&heap->data[index], &heap->data[parent(index)]);
			index = parent(index);
		}
	}
}

void traverse(struct Heap* heap){
	int size = heap->size;
	while(size != 0){
		printf("%d  ", heap->data[heap->size-(size--)]);
	}
	printf("\n\nTraversal Complete\n\n");
}

void heapify(struct Heap* heap, int index){
	int leftChildIndex = left(index), rightChildIndex = right(index);
	int largest = index;
	if (leftChildIndex < heap->size && heap->data[leftChildIndex] > heap->data[largest]){
		largest = leftChildIndex;
	}
	if (rightChildIndex < heap->size && heap->data[rightChildIndex] > heap->data[largest]){
		largest = rightChildIndex;
	}
	if (largest != index){
		swap(&heap->data[largest], &heap->data[index]);
		heapify(heap, largest);
	}
}

int getRootElement(struct Heap* heap){
	int value = heap->data[0];
	swap(&heap->data[0], &heap->data[heap->size - 1]);
	heapify(heap, 0);
	heap->size--;
	return value;
}

// int* sort(struct Heap* heap){

// }

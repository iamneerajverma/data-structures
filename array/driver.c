#include<stdio.h>
#include "array.h"

int main(){
	int capacity, max;
	printf("Please enter size and max value for the array:  _-_-_-   ");
	scanf("%d %d", &capacity, &max);
	int* array = createArray(capacity);
	fillWithRandomValues(array, capacity, max);
	traverseArray(array, capacity);
	selectionSortArray(array, capacity);
	traverseArray(array, capacity);
	printf("Array Sorted: %s\n\n", isArraySorted(array, capacity) ? "True" : "False");
	return 0;
}
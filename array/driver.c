#include<stdio.h>
#include "array.h"

int main(){
	int capacity = 25;
	int* array = createArray(capacity);
	fillWithRandomValues(array, capacity, 100);
	traverseArray(array, capacity);
	bubbleSortArray(array, capacity);
	traverseArray(array, capacity);
	return 0;
}
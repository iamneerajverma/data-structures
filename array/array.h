#include<stdio.h>
#include<stdlib.h>
#include "../commons/numbers.h"

int* createArray(int capacity){
	return (int*) malloc(sizeof(int) * capacity);
}

void fillWithRandomValues(int *array, int size, int max){
	for (int i=1; i<=size; i++){
		array[i-1] = generateRandomNumber(max);
	}
}

void bubbleSortArray(int *array, int size){
	for (int i=size; i>0; i--){
		for (int j=0; j<size-1; j++){
			if (array[j] > array[j+1]){
				swap(&array[j], &array[j+1]);
			}
		} 
	}
}

int isArraySorted(int *array, int size){
	for (int i=0; i<size-1; i++){
		if (array[i] <= array[i+1]){
			continue;
		} else {
			return 0;
		}
	}
	return 1;
}
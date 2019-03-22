#include<stdio.h>
#include "stackll.h"

int generateRandomNumber(int max){
	int value = rand()%max;
	printf("%d ", value);
	return value;
}


int main(){
	int capacity = -1, max = -1, counter = 0;
	printf("Please Enter no of values in the list:  _-_-_-   ");
	scanf("%d", &capacity);
	printf("\n\nPlease enter max value range  _-_-_-   ");
	scanf("%d",&max);
	printf("\n\n");
	struct Stack* stack = createStack();
	for(counter = 0; counter != capacity; counter++){
		push(stack, generateRandomNumber(max));
	}
	printf("\n\n");
	while (!isEmpty(stack)){
		printf("%d ", pop(stack));
	}
	printf("\n\n");
	return 0;
}

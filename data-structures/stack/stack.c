#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void create(stack *staPtr) {
     staPtr->head=-1;
}

int  isEmpty(stack sta) {
     return (sta.head == -1);
}

int  isFull(stack sta) {
	return (sta.head == MAXIMUM-1);
}

void pop(stack *staPtr, int *element, int *underflow) {
	if (isEmpty(*staPtr))
		*underflow = 1;
	else {
		*underflow = 0;
		*element = staPtr->A[staPtr->head];
		staPtr->head--;
	}
}

void push(stack *staPtr, int element, int *overflow) {
	if (isFull(*staPtr)) //(stoivaPtr->korifi == (PLITHOS -1))
		*overflow = 1;
	else {
		*overflow = 0;
		staPtr->head++;
		staPtr->A[staPtr->head]=element;
	}
}

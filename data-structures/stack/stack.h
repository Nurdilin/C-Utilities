#ifndef __STACK__ 
#define __STACK__

#define MAXIMUM 40 

typedef struct 
{
	int head;
	int A[MAXIMUM];
}stack;


void create(stack *staPtr);
int  isEmpty(stack sta);
int  isFull(stack sta);
void pop(stack *staPtr, int *element, int *underflow);
void push(stack *staPtr, int element, int *overflow);

#endif

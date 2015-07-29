#include<stdio.h>

#define MAXSIZE 10

typedef struct {
	int data[MAXSIZE];
	int top;
}arrStack;
void initial(arrStack* stk) {
	stk->top = 0;
}

int isFull(arrStack* stk) {
	if(stk->top == 10) return 1;
	else return 0;
}

int isEmpty(arrStack* stk) {
	if(!stk->top) return 1;
	else return 0;
}

void push(arrStack* stk, int data) {
	if(!isFull(stk)) {
		stk->data[stk->top] = data;
		stk->top++;
		printf("stk->top : %d\t push : %d\n", stk->top, data);
	} else {
		printf("stk->top : %d\tStack is full.\n", stk->top);
	}
}

void pop(arrStack* stk) {
	if(!isEmpty(stk)) {
		printf("pop : %d\tstk->top : %d\n", stk->data[--stk->top], stk->top);
	} else {
		printf("stk->top : %d\tStack is empty.\n", stk->top);
	}
}

int main() {
	int i = 1;
	arrStack stk;
	initial(&stk);
	for(i = 1; i <= 11 ; i++) push(&stk, i);
	for(i = 1; i <= 11 ; i++) pop(&stk);
	return 0;
}

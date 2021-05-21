#include <stdio.h>
#include <stdlib.h>

typedef struct Node 
{
	int val;
	struct Node *next;
}Node,*PNode;

typedef struct Stack
{
	struct Node *head;
	int size;
}Stack,*PStack;

void init_stack(PStack);
void pop(PStack,PNode*);
void push(PStack,int val);
void top(PStack,PNode*);

int empty(PStack);
int size(PStack);
void printNode(PNode node);
void printStack(PStack pStack);
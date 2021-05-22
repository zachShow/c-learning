#include <stdlib.h>
#include <stdio.h>

typedef int ElemType;

typedef struct Queue 
{
	ElemType data[10];
	int front, rear;
}Queue;

void initQueue(Queue*);
void enQueue(Queue*, ElemType);
void deQueue(Queue*, ElemType*);
int isEmpty(Queue);

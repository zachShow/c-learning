#include "Queue.h"

void initQueue(Queue* queue)
{
	queue->front = queue->rear = 0;
}
void enQueue(Queue* queue, ElemType val)
{
	if ((queue->rear+1)%10 == queue->front)
	{
		printf("queue is full!\n");
		return;
	}
	queue->data[queue->rear] = val;
	queue->rear= (queue->rear + 1)%10;
}
void deQueue(Queue* queue, ElemType* pElem)
{
	if (queue->front == queue->rear)
	{
		printf("queue is empty!\n");
		return;
	}
	*pElem = queue->data[queue->front];
	queue->front = (queue->front + 1) % 10;
}

int isEmpty(Queue q)
{
	if (q.front == q.rear)
	{
		printf("queue is empty!\n");
	}
	else
	{
		printf("queue is not empty!\n");
	}
}
#include "Queue.h"

int main()
{
	Queue queue;
	initQueue(&queue);

	enQueue(&queue, 1);
	enQueue(&queue, 2);
	enQueue(&queue, 3);
	enQueue(&queue, 4);
	enQueue(&queue, 5);
	enQueue(&queue, 6);
	enQueue(&queue, 7);
	enQueue(&queue, 8);
	enQueue(&queue, 9);

	isEmpty(queue);

	return 0;
}


#include "stack.h"

int main()
{
	PStack pStack = NULL;
	init_stack(&pStack);

	push(pStack, 1);
	push(pStack, 2);
	push(pStack, 3);
	push(pStack, 4);
	push(pStack, 5);
	printStack(pStack);

	PNode top = NULL;
	pop(pStack, &top);
	printf("top is %d\n", top->val);

	PNode node = NULL;
	pop(pStack, &node);
	pop(pStack, &node);
	printStack(pStack);

	empty(pStack);
	int length = size(pStack);
	printf("size is %d", length);
}
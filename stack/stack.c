#include "stack.h"

void init_stack(PStack *pStack)
{
	*pStack = (PStack)calloc(1, sizeof(Stack));
	(*pStack)->head = NULL;
	(*pStack)->size = 0;
}

void pop(PStack pStack,PNode *ppNode)
{
	top(pStack,ppNode);
	if (*ppNode)
	{
		pStack->head = (*ppNode)->next;
		pStack->size--;
	}
}
void push(PStack pStack,int val)
{
	PNode pNode = (PNode)calloc(1, sizeof(Node));
	pNode->val = val;
	pNode->next = pStack->head;
	pStack->head = pNode;
	pStack->size++;
}
void top(PStack pStack, PNode *ppNode)
{
	if (pStack->head == NULL)
	{
		printf("stack is empty!");
		return;
	}
	*ppNode = pStack->head;
}

int empty(PStack pStack)
{
	if (pStack->size)
	{
		printf("stack is not empty!\n");
	}
	else
	{
		printf("stack is empty!\n");
	}
}
int size(PStack pStack)
{
	return pStack->size;
}

void printNode(PNode node)
{
	printf("%d ", node->val);
}

void printStack(PStack pStack)
{
	PNode node = pStack->head;
	while (node)
	{
		printNode(node);
		node = node->next;
	}
	printf("\n");
}
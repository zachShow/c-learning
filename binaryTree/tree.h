#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node
{
	char data;
	struct Node *left;
	struct Node *right;
}Node,*PNode;

typedef struct Queue
{
	PNode node;
	struct Queue *next;
}Queue,*PQueue;

void buildTree(PNode*,PQueue*,PQueue*,char);
void preOrder(PNode);
void middleOrder(PNode);
void backOrder(PNode);
#include "tree.h"

void buildTree(PNode *root,PQueue *head,PQueue *tail,char c)
{
	PNode newPNode = (PNode)calloc(1, sizeof(Node));
	newPNode->data = c;

	PQueue newQueue = (PQueue)calloc(1, sizeof(Queue));
	newQueue->node = newPNode;
	newQueue->next = NULL;

	PQueue pCur = *head;

	if (*root == NULL)
	{
		*root = newPNode;
		*head = newQueue;
		*tail = newQueue;
	}
	else
	{
		(*tail)->next = newQueue;
		*tail = newQueue;

		if (NULL == pCur->node->left)
		{
			pCur->node->left = newPNode;
		}
		else if (NULL == pCur->node->right)
		{
			pCur->node->right = newPNode;
			*head = pCur->next;
		}
	}
}

void preOrder(PNode node)
{
	if (node)
	{
		putchar(node->data);
		preOrder(node->left);
		preOrder(node->right);
	}
}
void middleOrder(PNode node)
{
	if (node)
	{
		middleOrder(node->left);
		putchar(node->data);
		middleOrder(node->right);
	}
}
void backOrder(PNode node)
{
	if (node)
	{
		backOrder(node->left);
		backOrder(node->right);
		putchar(node->data);
	}
}
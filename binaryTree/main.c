#include "tree.h"

int main()
{
	char c;
	PQueue head = NULL,tail = NULL;
	PNode root = NULL;
	
	while (scanf_s("%c", &c) != EOF)
	{
		if (c == '\n')
		{
			break;
		}
		buildTree(&root, &head, &tail, c);
	}
	printf("==========================================\n");
	preOrder(root);
	printf("\n");
	middleOrder(root);
	printf("\n");
	backOrder(root);
}
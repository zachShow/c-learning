#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	void findMaxString(char (*)[10], int, char**, char**);
	char b[5][10] = { "b1","c1","d1","a1","e1" };
	char *max, *second = NULL;

	findMaxString(b, 5, &max, &second);

	printf("max=%s,second=%s", max, second);
}

void findMaxString(char (*p)[10],int size, char **max,char **second)
{
	*max = &p[0];
	for (int i = 1; i < size; i++)
	{
		if (strcmp(p[i], *max) > 0)
		{
			*second = *max;
			*max = &p[i];
		}
		else if (*second == NULL || strcmp(p, *second) > 0)
		{
			*second = &p[i];
		}
	}
}
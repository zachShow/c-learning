#include <stdio.h>
#include <stdlib.h>

int main()
{
	char b[5][10] = { "b1","c1","d1","a1","e1" };
	char *p;
	p = b;

	for (int i = 0; i < 5; i++) 
	{
		printf("%s\n", *(p+i)+1);
	}
}
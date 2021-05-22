#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student
{
	int num;
	struct student *next;
}student,*pStudent;

char* returnStack();
char* returnHeap();

int main()
{
	//char *p1 = returnStack();
	char *p2 = returnHeap();

	//printf("%s\n", p1);
	printf("%s\n", p2);
}

char* returnStack()
{
	char *p = "Hello";
	return p;
}

char* returnHeap()
{
	char a[] = "Hello";
	char *p = (char*)malloc(1, sizeof(20));
	strcpy_s(p, strlen(a)+1, a);
	return p;
}
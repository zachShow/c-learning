#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
	int num;
	struct student *next;
}student,*pStudent;

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7 };
	int *p;
	p = arr[0];
	printf("*p=%d\n", *p);
}
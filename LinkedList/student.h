#include <stdlib.h>
#include <stdio.h>

typedef struct Student
{
	int num;
	struct Student *next;
}Student,*PStudent;

void printStudent(PStudent pStudent);
void headInsert(PStudent *pHead, PStudent *pTail, int val);
void tailInsert(PStudent *pHead, PStudent *pTail, int val);
void sortInsert(PStudent *pHead, PStudent *pTail, int val);
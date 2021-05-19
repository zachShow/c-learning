#include "student.h";

void printStudent(PStudent pStudent)
{
	while (pStudent != NULL)
	{
		printf("%d\n", pStudent->num);
		pStudent = pStudent->next;
	}
}

void headInsert(PStudent *pHead, PStudent *pTail, int val)
{
	PStudent newStudent = (PStudent)calloc(1, sizeof(Student));
	newStudent->num = val;

	if (NULL == *pHead)
	{
		*pHead = newStudent;
		*pTail = newStudent;
	}
	else
	{
		newStudent->next = *pHead;
		*pHead = newStudent;
	}
}

void tailInsert(PStudent *pHead, PStudent *pTail, int val)
{
	PStudent newStudent = (PStudent)calloc(1, sizeof(Student));
	newStudent->num = val;

	if (NULL == *pTail)
	{
		*pHead = newStudent;
		*pTail = newStudent;
	}
	else
	{
		(*pTail)->next = newStudent;
		*pTail = newStudent;
	}
}

void sortInsert(PStudent *pHead, PStudent *pTail, int val)
{
	PStudent newStudent = (PStudent)calloc(1, sizeof(Student));
	newStudent->num = val;

	PStudent pFront = *pHead;
	PStudent pBack = NULL;
	if (pFront == NULL)
	{
		*pHead = newStudent;
		*pTail = newStudent;
	}
	else
	{
		while (pFront && val > pFront->num)
		{
			pBack = pFront;
			pFront = pFront->next;
		}
		if (pBack == NULL)
		{
			*pHead = newStudent;
		}
		else
		{
			pBack->next = newStudent;
		}
		if (pFront == NULL)
		{
			*pTail = newStudent;
		}
		else
		{
			newStudent->next = pFront;
		}
	}
}
#include "msort.h"

void select(int a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		int minIndex = i;
		for (int j = i+1; j < size; j++)
		{
			if (a[j] < a[minIndex])
			{
				minIndex = j;
			}
		}
		if (minIndex != i)
		{
			int temp = a[i];
			a[i] = a[minIndex];
			a[minIndex] = temp;
		}
	}
}
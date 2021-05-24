#include "msort.h"

void insert(int a[],int size)
{
	for (int i = 1; i < size; i++)
	{
		int val = a[i];
		int j = i-1;
		for (; j >= 0 && val < a[j]; j--)
		{
			a[j + 1] = a[j];
		}
		a[j + 1] = val;
	}
}
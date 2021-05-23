#include "msort.h"

void insert(int a[],int size)
{
	for (int i = 1; i < size; i++)
	{
		int val = a[i];
		int index = i-1;
		for (int j = size-1; j >= 0 && val < a[j]; j--)
		{
			a[j + 1] = a[j];
			index = j;
		}
		a[index + 1] = val;
	}
}
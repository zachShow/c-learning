#include "msort.h"

void shell(int a[], int size)
{
	for (int gap = size >> 1; gap > 0; gap >>= 1)
	{
		for (int i = gap; i < size; i++)
		{
			int val = a[i];
			int index = i - gap;
			for (int j = index; j >= 0 && val < a[j]; j -= gap)
			{
				a[j + gap] = a[j];
				index = j;
			}
			a[index+gap] = val;
		}
	}
}
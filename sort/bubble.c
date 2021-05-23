#include "msort.h"

void bubble(int a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		int flag = 1;
		for (int j = 0; j < size - i - 1; j++)
		{
			if (a[j] > a[j+1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				flag = 0;
			}
		}
		if (flag)
		{
			break;
		}
	}
}
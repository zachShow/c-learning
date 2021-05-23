#include "msort.h"

int main()
{
	int size = 10;
	int arr[10] = { 0 };
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		int random = rand()%100;
		arr[i] = random;
	}
	print(arr, size);
	
	insert(arr, size);
	print(arr, size);

}

void print(int a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%5d ",a[i]);
	}
	printf("\n");
}
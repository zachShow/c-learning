#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//ÒÔÖù×´Í¼´òÓ¡ÊäÈëµÄ×Ö·ûÀàĞÍ(Êı×Ö£¬×ÖÄ¸£¬ÌØÊâ×Ö·û)
int main()
{
	char arr[1000];
	while (gets(arr) != EOF)
	{
		char *p = arr;
		int num[3] = { 0 };
		char *arr[3] = { "num","alp","oth" };
		while (*p != 0)
		{
			if (*p >'0' && *p < '9')
			{
				num[0]++;
			}
			else if ((*p > 'a' && *p < 'z') || (*p > 'A' && *p < 'Z'))
			{
				num[1]++;
			}
			else
			{
				num[2]++;
			}
			p++;
		}

		printf("\n");
		printf("num=%d,alp=%d,oth=%d\n", num[0], num[1], num[2]);
		printf("\n");

		int size = 3;
		for (int i = 0; i < size - 1; i++)
		{
			for (int j = 0; j < size - i - 1; j++) 
			{
				if (num[j] > num[j + 1])
				{
					int temp = num[j];
					num[j] = num[j + 1];
					num[j + 1] = temp;

					char *tmp = arr[j];
					arr[j] = arr[j+1];
					arr[j + 1] = tmp;
				}
			}
		}

		printf("%3d%6d%6d\n", num[2], num[1], num[0]);
		for (int i = 0; i < num[2]; i++)
		{
			printf("*****");
			if (i > num[2] - num[1] -1)
			{
				printf(" *****");
			}
			if (i > num[2] - num[0] -1)
			{
				printf(" *****");
			}
			printf("\n");
		}
		printf("\n");
	}
}
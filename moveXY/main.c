#include <stdlib.h>
#include <stdio.h>

typedef struct position
{
	int x;
	int y;
}position,*pposition;

int main()
{
	pposition from = (pposition)calloc(1, sizeof(pposition));
	from->x = 0;
	from->y = 0;

	pposition to = (pposition)calloc(1, sizeof(pposition));
	to->x = 1;
	to->y = 1;

	int total = move(from, to);
	printf("一共有%d种方案", total);
}

int move(pposition from, pposition to)
{
	int total = 0;
	if (from->x != to->x || from->y != to->y)
	{
		if (from->x < to->x)
		{
			pposition next = (pposition)calloc(1, sizeof(pposition));
			next->x = from->x+1;
			next->y = from->y;
			total += move(next,to);
		}
		if (from->y < to->y)
		{
			pposition next = (pposition)calloc(1, sizeof(pposition));
			next->x = from->x;
			next->y = from->y+1;
			total += move(next, to);
		}
	}
	else
	{
		total = 1;
	}
	return total;
}
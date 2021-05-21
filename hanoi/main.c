#include <stdio.h>
#include <stdlib.h>

int main()
{
	void hanoi(int, char, char, char);
	int n;
	while (scanf_s("%d", &n) != EOF)
	{
		hanoi(n, 'A', 'B', 'C');
	}
	printf("finish");
}

/*
* 汉诺塔算法
* 三根柱子，一根柱子上从小到大放置几个圆盘，将柱子上的所有圆盘移动到另外一根柱子上
* 移动必须保证大圆盘在下，小圆盘在上
*/
void hanoi(int n, char one, char two, char three)
{
	void move(char, char);
	if (n==0)
	{
		return;
	}
	else if (n == 1)
	{
		move(one, three);
	}
	else
	{
		hanoi(n-1, one, three, two);
		move(one, three);
		hanoi(n - 1, two, one, three);
	}
}

void move(char from, char to) 
{
	printf("%c -> %c\n", from, to);
}
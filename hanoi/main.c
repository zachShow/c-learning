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
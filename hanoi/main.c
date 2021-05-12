#include<stdio.h>
#include<stdlib.h>

int main() 
{
	void hanoi(int, char, char, char);
	int i;
	printf("how many hanio tower do you want to move:");
	scanf_s("%d", &i);
	hanoi(i, 'A', 'B', 'C');
}

void hanoi(int n, char a, char b, char c)
{
	void move(char, char);
	if (n == 1)
	{
		move(a, c);
	}
	else
	{
		hanoi(n - 1, a, c, b);
		move(a, c);
		hanoi(n - 1, b, a, c);
	}
}

void move(char a, char b) 
{
	printf("%c --> %c\n", a, b);
}


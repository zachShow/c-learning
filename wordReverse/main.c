#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	void reverseWord(char*, char*);
	char s[100];
	while (gets(s) != EOF)
	{
		printf("before: %s\n", s);
		reverseWord(s, &s[strlen(s) - 1]);
		printf("middle: %s\n", s);

		char *front, *back;
		front = back = s;

		while (*front)
		{
			while (*front == ' ')
			{
				front++;
			}
			back = front;

			while (*front != ' ' && *front)
			{
				front++;
			}
			reverseWord(back, front - 1);
		}
		
		printf("after: %s\n", s);
	}
}

void reverseWord(char *start,char *end)
{
	while(start < end)
	{
		char tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
}
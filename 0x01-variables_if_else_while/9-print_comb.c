#include<stdio.h>
/**
* main - Entry point
*
* Return: Always =
*/
int main(void)
{
	int ch;

	for (ch = 48 ; ch <= 57 ; ch++)
	{
		putchar(ch);
		if (ch < 57)
		{
			putchar (',');
			putchar (' ');
		}
	}
	putchar('\n');
return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "holberton.h"
/**
 *main - function
 *@argc: counter
 *@argv: vector
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int count, count2;
	int total = 0;

	if (argc > 1)
	{
		for (count = 1; argv[count]; count++)
		{
			for (count2 = 0; argv[count][count2]; count2++)
			{
				if (!isdigit(argv[count][count2]))
				{
					puts("Error");
					return (1);
				}
			}
			total += atoi(argv[count]);
		}
	}
	printf("%d\n", total);

	return (0);
}

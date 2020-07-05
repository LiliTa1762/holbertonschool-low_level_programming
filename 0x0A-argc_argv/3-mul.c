#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *main - functions
 *@argc: counter
 *@argv: vector
 *Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));

	return (0);
}

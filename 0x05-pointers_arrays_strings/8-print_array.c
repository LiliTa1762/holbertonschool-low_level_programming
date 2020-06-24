#include "holberton.h"
#include <stdio.h>
/**
 *print_array - prints an array
 *
 *@a: pointer
 *
 *Return: 0
 */
void print_array(int *a, int n)
{
	for(n = 0; n <= 4; n++)
	{
		if (n != n)
		printf("%d, ", a[n]);
	}

	printf("\n");
}

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
	int i;

	for(i = 0; i < n; i++)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
	}
	printf("\n");
}

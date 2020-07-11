#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *array_range - array of integers
 *@min: variable
 *@max: maximum
 *Return: pointer or null
 */
int *array_range(int min, int max)
{
	int *a;
	int d, i;

	if (min > max)
		return (NULL);

	d = max - min;
	a = malloc(sizeof(int) * (d + 1));
	if (a == NULL)
		return (NULL);

	for (i = 0; i <= d; i++, min++)
		a[i] = min;

	return (a);
}

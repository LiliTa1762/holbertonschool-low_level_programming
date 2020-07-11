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
	int i;

	if (min > max)
		return (NULL);

	a = malloc(sizeof(int) * max);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < max; min++, i++)
		a[i] = min;

	return (a);
}

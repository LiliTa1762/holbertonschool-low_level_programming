#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 *linear_search - search for a value
 *@array: array of integers to search in
 *@size: size of the array
 *@value: value to search for
 *Return: int
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			return (i);
		}
		else if (array[i] != value)
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i++;
	}

	return (-1);
}

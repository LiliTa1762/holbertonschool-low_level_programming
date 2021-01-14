#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 *binary_search - search for a value
 *@array: array of integers to search in
 *@size: size of the array
 *@value: value to search for
 *Return: int
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t r = size - 1;
	size_t m, i;

	if (array == NULL)
		return (-1);

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
		printf("%d, ", array[i]);
	printf("\n");
	
	while (l <= r)
	{
		m = ((l + r) / 2);

		if (array[m] < value)
		{
			l = (m + 1);
			i = l;
			printf("Searching in array: ");
			while (i < size)
			{
				printf("%d, ", array[i]);
				i++;
			}
			printf("\n");
		}

		else if (array[m] > value)
		{
			r = (m - 1);
			printf("Searching in array: ");
			for (i = 0; i < size; i++)
				printf("%d, ", array[i]);
			printf("\n");
			size = m;
		}

		else
		{
			return (m);
		}
	}
	return (-1);
}

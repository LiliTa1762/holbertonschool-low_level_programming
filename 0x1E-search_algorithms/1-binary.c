#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * print_array - function to print array
 * @size: size of array
 * @value: value to return
*/
void print_array(int *array, size_t l, size_t r)
{
	size_t i;

	printf("Searching in array: ");
	for (i = l; i <= r; i++)
	{
		printf("%d, ", array[i]);
			if (i == r)
				printf("\n");
			else
			{
				printf(", " );
			}
			
	}
	
}

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
	size_t m;

	if (array == NULL)
		return (-1);
	

	while (l <= r)
	{
		print_array(array, l, r);
		m = ((l + r) / 2);

		if (array[m] < value)
		{
			l = m + 1;
		}

		else if (array[m] > value)
		{
			r = m - 1;
			print_array(array, l, r);
		}

		else
		{
			return (m);
		}
	}
	return (-1);
}

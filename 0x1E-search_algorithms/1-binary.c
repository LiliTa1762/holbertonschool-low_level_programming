#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * print_array - function to print array
 * @array: array to searching
 * @r: size of array
 * @l: value to return
*/
void print_array(int *array, size_t l, size_t r)
{
	size_t i;

	printf("Searching in array: ");
	for (i = l; i <= r; i++)
	{
		printf("%d", array[i]);
			if (i == r)
				printf("\n");
			else
				printf(", ");
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

	if (array == NULL || r == 0)
		return (-1);


	while (l <= r)
	{
		print_array(array, l, r);

		m = (l + r) / 2;

		if (array[m] == value)
			return (m);

		if (array[m] < value)
			l = m + 1;

		else
			r = m - 1;
	}
	return (-1);
}

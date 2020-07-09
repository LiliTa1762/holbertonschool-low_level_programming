#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 *alloc_grid - allocate grid
 *@width: pointer
 *@height: variable
 *Return: pointer or null
 */
int **alloc_grid(int width, int height)
{
	int counter;
	int c2;
	int **a2;

	if (width <= 0 || height <= 0)
		return (NULL);

	a2 = malloc(sizeof(int *) * height);

	if (a2 == NULL)
		return (NULL);

	for (counter = 0; counter < height; counter++)
	{
		a2[counter] = malloc(sizeof(int) * width);
		if (a2[counter] == NULL)
		{

			for (c2 = 0; c2 < counter; c2++)
				free(a2[c2]);
			free(a2);
			return (NULL);
		}
		for (c2 = 0; c2 < width; c2++)
		{
			a2[counter][c2] = 0;
		}

	}
	return (a2);
}

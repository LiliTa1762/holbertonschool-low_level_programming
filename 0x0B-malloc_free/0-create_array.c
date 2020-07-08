#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array -  function
 *@size: size of the data
 *@c: variable
 *Return: NULL or pointer
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int counter;

	if (size != 0)
		a = malloc(sizeof(c) * size);

	else
		return (NULL);

	if (a == NULL)
		return (NULL);

	for (counter = 0; counter < size; counter++)
		{
			a[counter] = c;
		}
		return (a);
}

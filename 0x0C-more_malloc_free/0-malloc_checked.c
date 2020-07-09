#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 *malloc_checked - check malloc
 *@b: variable
 *Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);

	return (a);
}

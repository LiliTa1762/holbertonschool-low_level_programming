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
	unsigned int *a;

	a = malloc(sizeof(unsigned int) *b);
	if (a == NULL)
		exit(98);

	return (a);
}

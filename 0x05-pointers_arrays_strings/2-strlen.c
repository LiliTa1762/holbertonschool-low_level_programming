#include "holberton.h"
#include <stdio.h>
/**
 *strlen - returns the length of a string
 *
 *Return: 0
 */
int _strlen(char *s)
{
	int r = 0;

	while (s[r] != '\0')
	r++;

	return (r);
}

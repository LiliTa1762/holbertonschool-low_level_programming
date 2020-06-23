#include "holberton.h"
#include <stdio.h>
/**
 *_strlen - returns the length of a string
 *
 *@s: pointer
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

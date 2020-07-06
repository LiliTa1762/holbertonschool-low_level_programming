#include "holberton.h"
/**
 *_memset - fills with a constant byte
 *@s: pointer
 *@b: variable
 *@n: variable
 *Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

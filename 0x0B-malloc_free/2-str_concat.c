#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *str_concat - concatenate
 *@s1: pointer
 *@s2: pointer
 *Return: array or null
 */
char *str_concat(char *s1, char *s2)
{
	int r;
	int c;
	int d;
	int u;
	char *a;

	if (!s1)
		s1 = "";

	if (!s2)
		s2 = "";

	for (r = 0; s1[r] != '\0'; r++)
		;
	for (c = 0; s2[c] != '\0'; c++)
		;
	a = malloc((sizeof(*s1) * r) + (sizeof(*s2) * c) + 1);

	if (!a)
	{
		return (NULL);
	}
	for (d = 0, u = 0; d <= (r + c + 1); d++)
	{
		if (d < r)
		{
			a[d] = s1[d];
		}
		else
			a[d] = s2[u++];
	}

	return (a);

}

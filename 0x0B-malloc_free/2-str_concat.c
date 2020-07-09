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
	int counter;
	int counter2;
	int c;
	int c2;
	char *a;

	if (s1 == NULL)
		(s1 = " ");

	if (s2 == NULL)
		(s2 = " ");

	for (counter = 0; s1[counter] != '\0'; counter++)
		;
	for (counter2 = 0; s2[counter] != '\0'; counter2++)
		;
	a = malloc(((sizeof(*s1) * counter) + (sizeof(*s2) * counter2)) + 1);
	{
		if (a == NULL)
		return (NULL);
	}
	for (c = 0, c2 = 0; c < (counter + counter2 + 1); c++)
		;
	{
		if (c < counter)
			a[c] = s1[c];
		else
			a[c] = s2[c2++];
	}
	return (a);
}

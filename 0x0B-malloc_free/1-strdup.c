#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - returns a pointer to a new string, duplicate it
 *@str: string
 *Return: a pointer
 */
char *_strdup(char *str)
{
	int counter, counter2;
	char *a;

	if (str == NULL)
		return (NULL);

	for (counter = 0; str[counter] != '\0'; counter++)
		;
	a = malloc((sizeof(char) * counter + 1));

	if (a == NULL)
		return (NULL);

	for (counter2 = 0; counter2 <= counter; counter2++)
		a[counter2] = str[counter2];

	return (a);
}

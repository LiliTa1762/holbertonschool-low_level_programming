#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *string_nconcat - string concatenate
 *@s1: pointer dest
 *@s2: pointer src
 *@n: variable
 *Return: pointer or null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int counter;
	unsigned int counter2;
	unsigned int c;
	unsigned int d;
	char *a;

	if (s1 == NULL)
		(s1 = "");

	if (s2 == NULL)
		(s2 = "");

	for (counter = 0; s1[counter] != '\0'; counter++) /*recorre el primer string dest*/
		;
	for (counter2 = 0; s2[counter2] != '\0'; counter2++) /*recorre el string src*/
		;
	a = malloc(sizeof(char) * (counter + n)+ 1);
	if (a == NULL)
		return (NULL);

	for (c = 0; c < counter; c++)
		a[c] = s1[c];

	for (d = 0; d <= n; d++)
		a[c + d] = s2[d];

	a[c + d] = '\0';

	return (a);
}

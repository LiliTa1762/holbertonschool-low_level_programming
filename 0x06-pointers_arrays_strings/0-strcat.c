#include "holberton.h"
#include <stdio.h>

/**
 *_strcat - strings concatenates
 *
 *@dest: destination string
 *@src: source string
 *
 *Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int s1 = 0;
	int s2 = 0;

	for (s1 = 0; dest[s1] != '\0'; s1++)
		;

	for (s2 = 0; src[s2] != '\0'; s2++)
		;

	return (dest);
}

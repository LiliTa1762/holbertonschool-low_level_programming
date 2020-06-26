#include "holberton.h"
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
	int s1;
	int s2;

	for (s1 = 0; dest[s1] != '\0'; s1++)
		;

	for (s2 = 0; src[s2]; s2++)
	{
		dest[s1 + s2] = src[s2];
	}

	dest[s1 + s2] = '\0';

	return (dest);
}

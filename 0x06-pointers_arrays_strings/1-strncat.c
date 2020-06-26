#include "holberton.h"
/**
 *_strncat - concatenate some strings
 *
 *@dest: string
 *@src: string
 *@n: variable
 *
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int s1;
	int s2;

	for (s1 = 0; dest[s1] != '\0'; s1++)
		;

	for (s2 = 0; src[s2] != '\0' && s2 < n; )
	{
		dest[s1] = src[s2];
		s1++;
		s2++;
	}
	dest[s1] = '\0';
	return (dest);
}

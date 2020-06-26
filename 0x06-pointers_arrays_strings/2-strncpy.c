#include "holberton.h"
/**
 *_strncpy - copy a string
 *@dest: dest pointer
 *@src: source pointer
 *@n: variable
 *Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int s = 0;

	for (s = 0; src(s) != '\0' && s < n)
	{
		dest[s] = src[s];
		s++;
	}
	while (s < n)
	{
		dest[i] = '\0';
		s++;
	}
	return (dest);
}

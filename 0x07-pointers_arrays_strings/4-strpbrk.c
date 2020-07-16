#include "holberton.h"
/**
 *_strpbrk - function
 *@s: pointer string
 *@accept: pointer accept
 *Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i, x;

	for (i = 0; s[i] != '\0'; s++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[i] == accept[x])
				return (&s[i]);
		}
	}
	return ('\0');
}

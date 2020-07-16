#include "holberton.h"
/**
 *_strspn - string length
 *@s: pointer string
 *@accept: pointer accept
 *Return: pointer
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, i2, c;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (i2 = 0; accept[i2] != '\0'; i2++)
			if (accept[i2] == s[i])
			{
				c += 1;
				break;
			}
		if (accept[i2] != s[i])
			break;
	}
	return (c);
}

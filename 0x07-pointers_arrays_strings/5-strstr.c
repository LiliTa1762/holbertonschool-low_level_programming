#include "holberton.h"
/**
 *_cmp - function
 *@s1: pointers 1
 *@s2: pointers 2
 *Return: 0 or 1
 */
int _cmp(char *s1, char *s2)
{
	for (; *s1 && *s2; s1++, s2++)
		if (*s1 != *s2)
			return (0);

	return (*s2 == '\0');
}

/**
 *_strstr - function
 *@haystack: pointer
 *@needle: pointer
 *Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (_cmp(&haystack[i], needle))
		{
			return (&haystack[i]);
		}
	}
	if (haystack[i] != *needle)
		return (0);

	return (&haystack[i]);
}

#include "holberton.h"
/**
 *string_toupper - changues lowercase to uppercase
 *
 *@str: string pointer
 *
 *Return: 0
 */
char *string_toupper(char *str)
{
	int c = 0;
	int n = 0;

	while (str[n] != '\0')
		n++;

	while (c < n)
	{
		if (str[c] >= 'a' && str[c] <= 'z')
			str[c] = str[c] - 32;
		c++;
	}
	return (str);
}

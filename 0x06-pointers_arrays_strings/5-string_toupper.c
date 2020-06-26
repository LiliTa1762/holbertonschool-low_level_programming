#include "holberton.h"
/**
 *string_toupper - changues lowercase to uppercase
 *
 *@
 *
 *Return: 0
 */
char *string_toupper(char * str)
{
	int n;
	int c;

	for (n = 0; str[n] !='\0'; n++)

		while (c < n)
		{
			if (str[c] >= 'a' && str [c] <= 'z')
				str[c] = str[c] - 32;
			c++;
		}
	return (str);
}

#include "holberton.h"
/**
*rev_string - reverse a string
*@s: string
*
*Return: 0
*/
void rev_string(char *s)
{
	int i = 0, z = 0;
	char a, zo;

	while (*(s + i))
	{
		i++;
	}
	z = i - 1;
	i = 0;

	for (; z > i; z--)
	{
		a = *(s + i);
		zo = *(s + z);
		*(s + i++) = zo;
		*(s + z) = a;
	}
}

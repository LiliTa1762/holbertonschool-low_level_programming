#include "holberton.h"
#include <stdio.h>
/**
 *print_rev - prints a string in reverse
 *
 *@s: a string to print
 *
 *Return: 0
 */
void print_rev(char *s)
{
	int l;

	for (l = 0; s[l] != '\0'; l++)
		;

	l = l - 1;
	for (; l >= 0; l--)
	{
		_putchar(s[l]);
	}

	_putchar('\n');
}

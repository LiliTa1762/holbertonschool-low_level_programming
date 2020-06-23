#include "holberton.h"
#include <stdio.h>

/**
 *_puts - function that print
 *
 *
 *Return: 0
 */
void _puts(char *str)
{
	int s;

	for (s = 0; str[s] != '\0'; s++)

		_putchar(s[str]);

	_putchar('\n');
}

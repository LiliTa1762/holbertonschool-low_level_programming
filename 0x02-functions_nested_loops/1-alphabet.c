#include "holberton.h"

/**
 * print_alphabet - entry point
 *
 * Return: 0 Always
 */

void print_alphabet(void)
{
	char ch = 'a';
	while (ch <= 'z')

	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}

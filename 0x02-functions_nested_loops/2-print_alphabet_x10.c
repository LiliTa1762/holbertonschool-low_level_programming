#include "holberton.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: 0 Always
 */

void print_alphabet_x10(void)
{
	int d;
	int a;

	for (d = 1; d <= 10; d++)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
		_putchar('\n');
	}
}

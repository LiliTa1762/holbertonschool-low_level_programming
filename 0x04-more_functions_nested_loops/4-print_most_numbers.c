#include "holberton.h"

/**
 * void print_most_numbers(void) - prints most numbers
 *
 * Return: 0
 */

void print_most_numbers(void)
{
	int x = 0;
	while (x < 10)

	{
		if (x != 2 && x != 4)
	{
		_putchar(x);
	}
	}
	{
		_putchar('\n');
	}
}

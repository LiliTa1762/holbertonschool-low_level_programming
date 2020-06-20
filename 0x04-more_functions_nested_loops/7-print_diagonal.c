#include "holberton.h"
/**
* print_diagonal - print a diagonal
*
* Return: 0
*/

void print_diagonal(int n)
{
	int d, s;
	for (d = 0; d < n; d++)
	{
		for (s = 0; s < d; s++)
			_putchar(32);
		_putchar(92);
		_putchar ('\n');
	}
	if (n <= 0)
		_putchar ('\n');
}

#include "holberton.h"
/**
* more_numbers - prints 10 times the numbers from 0 to 14
*
* Return: 0
*/

void more_numbers(void)
{
	int n;
	int i;

	for (n = 0; n <= 9; n++)
	{
		for (i = 0; i <= 14; i++)
		{
		if (i > 9)
		{
			_putchar((i / 10) + '0');
		}

	_putchar((i % 10) + '0');

		}
		_putchar('\n');
	}
}

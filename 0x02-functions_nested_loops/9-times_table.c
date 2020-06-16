#include "holberton.h"

/**
 * times_table - prints the 9 times table
 *
 */
void times_table(void)
{
	int a, b, ab, ab1, ab2;

	a= 0;
	while (a <= 9)
	{
		b=0;
		while (b <=9)
		{
			ab= a * b;
			ab1 = ab / 10;
			ab2 = ab % 10;
			if (b == 0)
				_putchar('0');
			else
			{
				if (ab1 == 0)
					_putchar(' ');
				else
					_putchar(ab1 + '0');
				_putchar(ab2 + '0');
			}
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}

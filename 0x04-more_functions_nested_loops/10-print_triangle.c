#include "holberton.h"
/**
 * print_triangle - prints a triangle
 *
 * @size: size of triangle
 *
 * Return: 0
 */
void print_triangle(int size)
{
	int t, s;

	for (t = 0; t < size; t++)
	{
		for (s = 0; s < size; s++)
		{
			if (t < size - s - 1)
				_putchar(32);
			else
				_putchar(35);
		}
		_putchar('\n');
	}
	if (t <= 0)
	_putchar('\n');
}

#include "holberton.h"
/**
* print_square - prints a square with a character
*
*@size: size of the square
*
*/
void print_square(int size)
{

	int s, r;

	for (s = 0; s < size; s++)
	{
		for (r = 0; r < size ; r++)

		_putchar('#');
	_putchar('\n');
	}
	if (s <= 0)
		_putchar('\n');

}

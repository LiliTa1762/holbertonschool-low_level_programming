#include "holberton.h"
/**
 *_pow_recursion - raise to the power of a variable
 *@x: variable
 *@y: variable
 *Return: 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}

	else if (y > 0)
	{
		return (x * _pow_recursion (x, y - 1));
	}
	return x;
}

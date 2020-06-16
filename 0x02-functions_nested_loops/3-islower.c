#include "holberton.h"

/**
 * _islower - convert lowercase to 0 and 1
 *
 * @c: Value of input
 *
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

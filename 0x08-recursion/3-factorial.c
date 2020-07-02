#include "holberton.h"
/**
 *factorial - factorial de int
 *@n: variable
 *Return: 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

#include "holberton.h"

/**
 * print_last_digit - prints last digit of a number
 *
 * @n: Value of input number
 *
 *Return: last digit
 */

int print_last_digit(int n)
{
	if (n < 0)
		n = -1 * (n % 10);
	else
		n = n % 10;
	_putchar(n + '0');
	return (n);
}

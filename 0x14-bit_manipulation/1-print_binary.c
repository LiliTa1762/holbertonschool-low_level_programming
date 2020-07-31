#include "holberton.h"
/**
 *print_binary - print binary
 *@n: variable
 *Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
	print_binary(n >> 1);
	}
	putchar('0' + (n & 1));
}

#include "holberton.h"
/**
 *flip_bits - funtion to flip
 *@n: variable
 *@m: variable
 *Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int f;
	int i = 0;

	f = n ^ m;

	while (f)
	{
		i += f & 1;
		f >>= 1;
	}
	return (i);
}

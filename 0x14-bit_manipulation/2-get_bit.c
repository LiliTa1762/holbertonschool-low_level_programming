#include "holberton.h"
/**
 *get_bit - function to get a bit in an index
 *@n: variable
 *@index: given index
 *Return: value of a bit or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (index == 0)
	{
		return (n & 1);
	}
	return (get_bit(n >> 1, index - 1));
}

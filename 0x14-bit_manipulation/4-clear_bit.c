#include "holberton.h"
/**
 *clear_bit - funtions to sets the value to 0
 *@n: pointer
 *@index: given index
 *Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	else
	{
		*n = *n & ~ (1 << index);
		return (1);
	}
}

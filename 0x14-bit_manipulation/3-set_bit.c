#include "holberton.h"
/**
 *set_bit - function to set the value of a bit to 1
 *@n: pointer
 *@index: given index
 *Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	else
	{
		*n = *n | (1 << index);
		return (1);
	}
}

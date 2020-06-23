#include "holberton.h"
/**
 *swap_int - swap values of two integers
 *
 *@a: first integer
 *@b: two integer
 *
 *Return: 0
 */

void swap_int(int *a, int *b)
{
	int temporal = *a;
	*a = *b;
	*b = temporal;
}

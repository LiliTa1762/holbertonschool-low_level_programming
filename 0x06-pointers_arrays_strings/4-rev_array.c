#include "holberton.h"
/**
 *reverse_array - reverse an array
 *@a: a pointer
 *@n: variable
 *Return: 0
 */
void reverse_array(int *a, int n)
{
	int count;
	int temp;

	for (count = 0; a[count] < n / 2; count++)
	{
		temp = a[count];
		a[count] = a[n - count - 1];
		a[n - count - 1] = temp;
	}

}

#include "holberton.h"
/**
 *binary_to_uint - function change binary to an unsigned int
 *@b: variable
 *Return: converted number or 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;
	int pow = 1;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		i++;
	}
	i--;

	while (i >= 0)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		val += (b[i] - 48) * pow;

		pow *= 2;
		i--;
	}
	return (val);
}

#include "holberton.h"
/**
*_strncpy - copy a string
*@dest: dest pointer
*@src: source pointer
*@n: variable
*Return: 0
*/
char *_strncpy(char *dest, char *src, int n)
{
	int counter;

	for (counter = 0; src[counter] != '\0' && counter < n; counter++)
	{
		dest[counter] = src[counter];
	}

	for ( ; counter < n; counter++)
		dest[counter] = '\0';

	return (dest);
}

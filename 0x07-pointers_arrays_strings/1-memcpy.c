#include "holberton.h"
/**
 *_memcpy - memcopy
 *@dest: pointer destination
 *@src: source pointer
 *@n: variable
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		*(dest + counter) = *(src + counter);
	}

		return (dest);
}

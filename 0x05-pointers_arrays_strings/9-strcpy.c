#include "holberton.h"
/**
 **_strcpy - string pointed to src to the buffer pointed
 *
 *@dest: buffer
 *@src: pointed to by
 *
 *Return: copied string
 */
char *_strcpy(char *dest, char *src)
{
	int c;

	for (c = 0; src[c] != 0; c++)
		dest[c] = src[c];
	dest[c] = 0;

	return (dest);
}

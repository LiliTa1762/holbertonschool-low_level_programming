#include "holberton.h"
/**
 *_strchr - locates a character in a string
 *@s: pointer
 *@c: variable
 *Return: pointer
 */
char *_strchr(char *s, char c)
{
	int counter;

		for (counter = 0; s[counter] != ('\0'); counter++)
		{
			if (*(s + counter) == c)
			return (s + counter);
		}
		return (0);
}

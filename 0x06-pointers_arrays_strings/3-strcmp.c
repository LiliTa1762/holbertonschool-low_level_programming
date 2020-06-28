#include "holberton.h"
/**
 *_strcmp - Compares two strings
 *
 *@s1: first string
 *@s2: second string
 *
 *Return: 0
 */
int _strcmp(char *s1, char *s2)
{

	int counter;

	for (counter = 0; s1[counter] != '\0'; counter++)
	{
		if (s1[counter] != s2 [counter])
		{
			return (s1[counter] - s2[counter]);
		}
	}
	return (0);
}

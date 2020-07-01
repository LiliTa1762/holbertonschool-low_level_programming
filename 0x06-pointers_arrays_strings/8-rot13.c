#include "holberton.h"
/**
 * rot13 - rotate by 13 places
 * @str: a pointer
 * Return: a string
 */

char *rot13(char *str)
{
	int count;
	char array_1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char array_2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int m;

	for (count = 0; str[count] != '\0'; count++)
	{

		for (m = 0; array_1[m]; m++)
		{
			if (str[count] == array_1[m])
			{
				str[count] = array_2[m];
				break;
			}
		}

	}
	return (str);
}

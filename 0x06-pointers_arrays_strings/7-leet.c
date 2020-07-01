#include "holberton.h"

/**
 *leet - replaced by numbers
 *@str: pointer
 *Return: string
 */
char *leet(char *str)
{
	int count;
	char array_1[] = "aAeEoOtTlL";
	char array_2[] = "4433007711";
	int m;

	for (count = 0; str[count] != '\0'; count++)
	{
		for (m = 0; array_1[m]; m++)
		{
			if (str[count] == array_1[m])
			{
				str[count] = array_2[m];
			}
		}
	}
	return (str);
}

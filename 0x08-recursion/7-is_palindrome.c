#include "holberton.h"
/**
 *_count - return lenght
 * @str: string to check
 *Return: lenght of string
 */

int _count(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + _count(str + 1));
}

/**
 *check_palindrome - check palindrome
 *@start: index
 *@end: index
 *@p: possible check
 *Return: 1 or 0
 */
int check_palindrome(int start, int end, char *p)
{

	if (start >= end)
		return (1);
	else if (p[start] != p[end])
		return (0);
	else
		return (check_palindrome(start + 1, end - 1, p));
}

/**
 *is_palindrome - string is palindrome
 *@s: string to check
 *
 *Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int i;

	i = _count(s) - 1;
	return (check_palindrome(0, i, s));
}

#include "holberton.h"
/**
 *_puts_recursion - prints a string with recursion
 *@s: a string
 *Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar (*s);
	_puts_recursion(s + 1);
}

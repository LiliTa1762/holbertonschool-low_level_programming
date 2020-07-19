#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *_switchd - function switch
 *@lst: va_list
 *@c: variable
 *Return: void
 */
void _switchd(va_list lst, char c)
{
	char *p;

	switch (c)
	{
	case 'c':
	printf("%c", va_arg(lst, int));
	break;

	case 'i':
	printf("%d", va_arg(lst, int));
	break;

	case 'f':
	printf("%f", va_arg(lst, double));
	break;

	case 's':
		p = va_arg(lst, char *);
	if (p == NULL)
		p = "(nil)";
	printf("%s", p);
	break;

	default:
	break;
	}
}
/**
 *print_all - print all
 *@char
 *@format: constant
 *Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i, r;
	va_list lst;
	char *c = "cifs";
	char *separator = "";

	va_start(lst, format);

	i = 0;

	while (format != NULL && format[i] != '\0')
	{
		r = 0;
		while (r < 4)
		{
			if (format[i] == c[r])
			{
				printf("%s", separator);
				separator = ", ";
				_switchd(lst, c[r]);
			}
			r++;
		}
		i++;
	}
	printf("\n");
	va_end(lst);
}

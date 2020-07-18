#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 *print_strings - print strings
 *@separator: pointer constant
 *@n: variable constant
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list pstr;
	unsigned int i;
	char *str;

	if (separator == NULL)
		return;

	va_start(pstr, n);

	str = va_arg(pstr, char*);
	for (i = 0; i < n; i++)
	{
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		str =  va_arg(pstr, char*);

		if (i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(pstr);
}

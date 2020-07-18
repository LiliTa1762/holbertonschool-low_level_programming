#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 *print_numbers - function
 *@separator: variable constant
 *@n: variable constant
 *Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nlist;
	unsigned int i;


	if (separator == NULL)
		return;

	va_start(nlist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nlist, int));
		if (i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(nlist);
}

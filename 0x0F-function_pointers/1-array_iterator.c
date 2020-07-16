#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 *array_iterator - function
 *@array: pointer
 *@size: variable
 *@action: function pointer
 *Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (size == '\0')
		return;

	if (action != NULL)
		for(i = 0; i <= size; i++)
			action(array[i]);
}

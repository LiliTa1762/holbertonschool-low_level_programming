#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *print_dlistint - print all the elements of a list
 *@h: constant of the struct
 *Return: a size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter;

	for (counter = 0; h != NULL; counter++)
	{
		if (h == NULL)
		{
			return (0);
		}
		else
			printf("%d", h->n);
		h = h->next;
		printf("\n");
	}
	return (counter);
}

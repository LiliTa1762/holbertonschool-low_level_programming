#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *dlistint_len - function to return the length
 *@h: pointer to head
 *Return: the length
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter;

	for (counter = 0; h != NULL; counter++)
	{
		if (h == NULL)
			return (0);

		h = h->next;
	}
	return (counter);
}

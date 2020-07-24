#include "lists.h"
/**
 *list_len - function size_t type
 *@h: pointer list
 *Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t counter;

	for (counter = 0; h != NULL; counter++)
		h = h->next;
	return (counter);
}

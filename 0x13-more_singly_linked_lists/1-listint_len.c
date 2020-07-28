#include "lists.h"
/**
 *listint_len - function list lenght
 *@h: variable
 *Return: the lenght
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
		h = h->next;

	return (count);
}

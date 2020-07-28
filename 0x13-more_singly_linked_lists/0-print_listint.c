#include "lists.h"
/**
 *print_listint - function to print a list
 *@h: variable const type
 *Return: size_t
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		printf("%d", h->n);
		h = h->next;
		printf("\n");
	}
	return (count);
}

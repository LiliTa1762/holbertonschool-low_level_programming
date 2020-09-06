#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *insert_dnodeint_at_index - insert a node in an index
 *@h: double pointer to h
 *@idx: the index of the list, starts at 0
 *@n: an int
 *Return: the addess of the new node, or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *current = NULL, *post = NULL;
	unsigned int count = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		current = *h;
		for (count = 0; count < idx - 1 && current != NULL; count++)
			current = current->next;
		if (current == NULL)
			return (NULL);
	}
	if (idx == 0)
	{
		post = *h;
		*h = new;
		new->prev = NULL;
	}
	else
	{
		new->prev = current;
		post = current->next;
		current->next = new;
	}
	new->next = post;
	if (new->next != NULL)
		new->next->prev = new;
	return (new);
}

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

	post = *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
/* The node has to be assign in idx as head, and head is null */
	if ((*h) == NULL)
	{
		if (idx != 0)
			return (0);
		else
			(*h) = new;
	}

/* The node has to be assign in idx as head, but head is not null */
	if ((*h) != NULL && idx == 0)
	{
		new->next = (*h);
		(*h) = new;
		return (0);
	}

	current = (*h);
	current->prev = NULL;

/* Assign new node to the idx found or break if not found */
	while (count < idx)
	{
		current = post;
		post = post->next;

		if (current == NULL)
		{
			break;
		}
		count++;
	}
	current->next = new;
	post->prev = new;
	new->next = post;

	return (new);
}

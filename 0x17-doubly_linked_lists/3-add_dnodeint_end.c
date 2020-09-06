#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_dnodeint_end - Function to add a new node at the end of a list
 *@head: pointer to head
 *@n: int
 *Return: the address of new element, or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *last = NULL;

	new = malloc(sizeof(dlistint_t));
	{
		if (new == NULL)
			return (NULL);
	}

	new->n = n;

/* Position: The new node is gonna be the last, so the next of it is NULL */
	new->next = NULL;
	new->prev = NULL;

/* If the linked list is empty, then the new node is head */
	if (*head == NULL)
	{
		(*head) = new;
		return (0);
	}

	last = (*head);
/* If it is not empty, traverse till the last node */
	while (last->next != NULL)
		last = last->next;

/* Now, change the next of last */
	last->next = new;

/* Finally, the last node is the prev of the new node */
	new->prev = last;

	return (new);
}

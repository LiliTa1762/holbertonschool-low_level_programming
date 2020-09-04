#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_dnodeint - add a new node at the beginning
 *@head: double pointer to head
 *@n: a int variable
 *Return: the address of a new element or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

/* Allocate node */
	new = malloc(sizeof(dlistint_t));
		{
			if (new == NULL)
				return (NULL);
		}
/* Put in the date */
	new->n = n;
/* Make next of new node as head and previous as NULL */
	new->next = (*head);
	new->prev = NULL;
/* Now, the prev of head is the new node */
	if ((*head) != NULL)
		(*head)->prev = new;
/* Now, head needs to point to the new node */
	(*head) = new;

	return (new);
}

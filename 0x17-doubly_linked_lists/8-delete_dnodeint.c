#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node in an idex
 *@head: pointer to head
 *@index: index of the node that should be deleted
 *Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = NULL;
	unsigned int i;

	if ((*head) == NULL)
		return (-1);
	current = (*head);

	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;

		free(current);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}
	current->prev->next = current->next;

	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);

	return (1);
}

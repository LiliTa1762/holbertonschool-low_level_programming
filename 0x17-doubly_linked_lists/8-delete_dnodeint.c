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
	dlistint_t *current = NULL, *post = NULL;
	unsigned int i;

	if ((*head) == NULL)
		return (-1);

	current = (*head);
	if (index == 0)
	{
		if (current->next != NULL)
			current->prev = NULL;

		current = (*head)->next;
		free(*head);
		(*head) = current;
		return (1);
	}
	post = (*head);
	for (i = 0; current; i++)
	{
		if (i == index)
		{
			free(current);
			post->next = (post->next)->next;
			post->prev = post;
			return (1);
		}
		post = current;
		current = current->next;

		if (current == NULL)
			return (-1);
	}
	if (i == index)
	{
		free(current);
		post->next = NULL;
		return (1);
	}
	return (1);
}

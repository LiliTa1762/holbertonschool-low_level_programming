#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *get_dnodeint_at_index - Function to return an nth node
 *@head: pointer to the head of the list
 *@index: index of the node, starting from 0
 *Return: the nth node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (current != NULL)
	{
		if (count == index)
			return (head);
		count++;
		current = current->next;
		head = current;
	}
	return (current);
}

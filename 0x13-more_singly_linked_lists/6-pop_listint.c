#include "lists.h"
/**
 *pop_listint - function that pops
 *@head: double pointer
 *Return: the head node's data or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (!(*head))
		return (0);

	data = (*head)->n;
	temp = (*head)->next;

	free((*head));

	*head = temp;

	return (data);
}

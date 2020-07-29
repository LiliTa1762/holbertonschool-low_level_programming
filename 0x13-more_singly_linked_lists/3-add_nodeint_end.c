#include "lists.h"
/**
 *add_nodeint_end - function to add node at the end
 *@head: variable
 *@n: const variable
 *Return: the address of the new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp = NULL;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	else
		temp = *head;

	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = newnode;

	return (newnode);
}

#include "lists.h"
/**
 *add_nodeint - function to add node
 *@head: pointer variable
 *@n: variable constant
 *Return: list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->next = *head;
	*head = newnode;
	newnode->n = n;

	return (newnode);
}

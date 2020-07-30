#include "lists.h"
/**
 *delete_nodeint_at_index - function to delete
 *@head: pointer to list
 *@index: variable
 *Return: 1, -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = NULL, *address = NULL;
	unsigned int i;

	if ((*head) == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}

	for (i = 0; temp; i++)
	{
		if (i == index)
		{
			free(temp);
			address->next = (address->next)->next;
			return (1);
		}
		address = temp;
		temp = temp->next;
	}

	if (i == index)
	{
		free(temp);
		address->next = NULL;
		return (1);
	}
	return (-1);
}

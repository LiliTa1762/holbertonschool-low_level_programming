#include "lists.h"
/**
 *insert_nodeint_at_index - function to insert
 *@head: pointer to list
 *@idx: index where node will be added
 *Return: address or null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = NULL, *newnode = NULL, *address = NULL;
	unsigned int i = 0;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return(NULL);

	newnode->n = n;
	newnode->next = NULL;

	if(idx == 0)
	{
		newnode->next = temp;
		*head = newnode;
		return (newnode);
	}
	for (i = 0; temp; i++)
	{
		if (i == idx)
		{
			address->next = newnode;
			newnode->next = temp;
			return(newnode);
		}
		address = temp;
		temp = temp->next;
	}
	if (i == idx)
	{
		address->next = newnode;
		return (newnode);
	}
	return (NULL);
}

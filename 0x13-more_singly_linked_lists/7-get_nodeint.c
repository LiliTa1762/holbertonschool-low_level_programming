#include "lists.h"
/**
 *get_nodeint_at_index - function to get node
 *@head: variable
 *@index: index of the node
 *Return: NULL or nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nnode = head;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (nnode != NULL)
	{
		if (count == index)
			return (head);
		count++;
		nnode = nnode->next;
		head = nnode;
	}
	return (nnode);
}

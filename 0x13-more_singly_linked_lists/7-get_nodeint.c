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
	listint_t *f = head;
	unsigned int count = 1;

	if (head == NULL)
		return (NULL);

	while (count <= index - 1)
	{
		f = f->next;
		count = count + 1;
	}

	while (f->next == NULL)
	{
		f = f->next;
		nnode = nnode->next;
	}
	return (nnode);
}

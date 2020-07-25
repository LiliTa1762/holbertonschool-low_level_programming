#include "lists.h"
/**
 *_strlen - returns the length of a string
 *@s: pointer
 *Return: 0
 */
int _strlen(char *s)
{
	int r = 0;

	while (s[r])
		r++;

	return (r);
}

/**
 *add_node_end - function to add a node at the end
 *@head: double pointer
 *@str: contant char
 *Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode = NULL,  *i = NULL;

	newnode = malloc(sizeof(list_t));

	if (!newnode)
	{
		free(newnode);
		return (NULL);
	}
	newnode->str = strdup(str);
	newnode->len = _strlen(newnode->str);

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	else
	{
		i = *head;
	}
	while (i->next)
	{
		i = i->next;
	}
	i->next = newnode;

	return (newnode);
}

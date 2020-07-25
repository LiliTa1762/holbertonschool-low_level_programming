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
	list_t *new = NULL, *temp = NULL, *address = NULL;
	int i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	for (i = 0; str[i]; i++)
	{}
	new->len = i;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
		temp = *head;
	/* here I find the last node */
	for (i = 0; temp != NULL; i++)
	{
		address = temp;
		temp = temp->next;
	}
	address->next = new;
	return (new);
}

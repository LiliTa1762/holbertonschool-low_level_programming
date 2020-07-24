#include "lists.h"

/**
 *add_node - function list_t type
 *@head: double pointer
 *@str: string constant
 *Return: list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	int counter;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->str = strdup(str);

	for (counter = 0; str [counter]; counter++)
		;

	newnode->len = counter;

	if (*head == NULL)
		*head = newnode;
	else
	{
		newnode->next = *head;
		*head = newnode;
	}
	return (newnode);

}

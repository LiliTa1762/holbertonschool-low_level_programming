#include "lists.h"
/**
 *free_listint - function to free
 *@head: pointer to list
 *Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		free(temp->next);
		free(temp);
		head = head->next;
	}
}

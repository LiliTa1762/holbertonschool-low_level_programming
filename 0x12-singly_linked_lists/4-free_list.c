#include "lists.h"
/**
 *free_list - function to free list_t
 *@head: pointer variable
 *Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head);
	{
		temp = head;
		free(temp->str);
		free(temp);
		head = head->next;
	}
}

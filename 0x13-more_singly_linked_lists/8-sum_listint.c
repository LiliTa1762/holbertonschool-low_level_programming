#include "lists.h"
/**
 *sum_listint - function to sum
 *@head: pointer to list
 *Return: int or 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}

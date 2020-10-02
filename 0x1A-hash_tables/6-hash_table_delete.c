#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 *hash_table_delete -  Deletes a hash table
 *@ht: the hash table
 *Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *nextnode;

	if (ht == NULL || ht->next == NULL || ht->size == 0)
		return;

	for (index = 0; index < ht->size; ht++)
	{
		while (ht->array[index] != NULL)
		{
			next = ht->array[index]->next;
			free(ht->array[index]->key);
			free(ht->array[index]->value);
			free(ht->array[index]);

			ht->array[index] = next;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->siza = 0;
	free(ht);
}

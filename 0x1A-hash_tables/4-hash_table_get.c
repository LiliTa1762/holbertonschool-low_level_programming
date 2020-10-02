#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 *hash_table_get - retrieves a value associated with a key
 *@ht:  the hash table you want to look into
 *@key:  key you are looking for
 *Return: the value associated with the element, NULL if key not found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp = NULL;

	if (ht == NULL || ht->array == NULL || ht->size == 0 || key == NULL ||
	    strlen(key) == 0)
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);

		temp = temp->next;
	}
	return (NULL);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 *hash_node_maker - create a new hash node
 *@key: the key for the node
 *@value: the value associated with the key, for the node
 *Return: the new node or NULL
 */
hash_node_t *hash_node_maker(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->key = strdup(key);

	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->value = strdup(value);

	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	return (new_node);
}
/**
 *hash_table_set - function that adds an element to the hash table
 *@ht: the hash table you want to add or update the key/value
 *@key: the key
 *@value: the value associated with the key
 *Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *h_node = NULL, *temp = NULL;
	char *new_node;

	if (ht == NULL || ht->array == NULL || ht->size == 0 || key == NULL ||
	    strlen(key) == 0 || value == NULL)
	{
		return (0);
	}

	index = key_index((const unsigned char *) key, ht->size);

	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			new_node = strdup(value);
			if (new_node == NULL)
				return (0);
			free(temp->value);
			temp->value = new_node;
			return (1);
		}
		temp = temp->next;
	}
	h_node = hash_node_maker(key, value);
	if (h_node == NULL)
		return (0);

	h_node->next = ht->array[index];
	ht->array[index] = h_node;
	return (1);
}

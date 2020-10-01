#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 *hash_table_create: function that returns a pointer
 *@size: size of the arrya
 *Return: a pointer to the newly hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;
	unsigned long int i = 0;

	hash_table = malloc(sizeof(hash_table_t));

	hash_table->array = malloc(sizeof(hash_node_t) * size);

	for (; i < size; i++)
	{
		hash_table->array[i] = NULL;
	}

	return hash_table;
}

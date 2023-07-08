/*
 * File: 3-hash_table_set.c
 * Author: Oluwatobiloba Light
 */

#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: Hash table to add or update the key/value to
 * @key: Key in the hash table
 * @value: The value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int i;
	unsigned long int index;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->key = (char *)key;
	node->value = (char *)value;
	node->next = NULL;
	index = key_index((char unsigned *)key, ht->size);
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[index] == NULL)
		{
			ht->array[i] = node;
			break;
		}
	}

	return (1);
}

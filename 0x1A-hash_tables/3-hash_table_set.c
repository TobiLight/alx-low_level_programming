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
	hash_node_t *node, *temp, *head;
	unsigned long int index;

	if (ht == NULL || key == NULL || key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	head = ht->array[0];
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			node->next = head;
			return (1);
		}
		temp = temp->next;
	}
	node->next = ht->array[index];
	ht->array[index] = node;
	printf("%s", ht->array[index]->key);
	return (1);
}

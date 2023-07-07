/*
 * File: 2-key_index.c
 * Author: Oluwatobiloba Light
 */

#include "hash_tables.h"

/**
 * key_index - Returns the index of a key
 * @key: Key in the hash table
 * @size: Size of the array of the hash table
 *
 * Return: The index at which the key/value pair should be stored in the
 *         array of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int hashed_key;

	hash_table = malloc(sizeof(hash_table));
	if (hash_table == NULL)
		return (NULL);
	hash_table->array = malloc(sizeof(hash_table_t *) * size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	hashed_key = hash_djb2(key);
	hash_table->array[hashed_key] = NULL;
	hash_table->size = size;

	return (hashed_key);
}

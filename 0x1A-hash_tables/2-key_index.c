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
	unsigned long int index;
	unsigned long int hash;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}

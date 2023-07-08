/*
 * File: 4-hash_table_get.c
 * Author: Oluwatobiloba Light
 */

#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: Hash table to look into
 * @key: Key to look for
 *
 * Return: The value associated with the element, or NULL if key couldn’t be
 *         found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int index;

    if (ht == NULL || key == NULL || *key == '\0')
        return (0);

    index = key_index((const unsigned char *)key, ht->size);
    if (ht->array[index] == NULL)
        return (NULL);
    return (ht->array[index]->value);
}

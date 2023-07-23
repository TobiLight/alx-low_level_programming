/*
 * File: 2-add_node.c
 * Author: TobiLight
 */

#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to a pointer to the head of the list_t list
 * @str: The string to be added to the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	/* Initialize new node pointer with list_t */
	list_t *new_node;
	unsigned int count = 0;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}

	/* Allocate memory for new_node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	/* Duplicate and update new_node str */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[count] != '\0')
	{
		count++;
	}
	new_node->len = count;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

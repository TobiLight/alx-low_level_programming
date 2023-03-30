/*
 * File: 3-add_node_end.c
 * Author: TobiLight
 */

#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A pointer to a pointer to the head of the list_t list
 * @str: The string to be added to the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last;

	if (head == NULL || str == NULL)
		return (NULL);

	/* Allocate memory for new_node */
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	/* Duplicate and update new_node str */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = 0;
	new_node->next = NULL;
	while (str[new_node->len] != '\0')
		new_node->len++;

	/* if the node is empty, make it the new node */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	last = *head;
	/* If the node is not empty, traverse till the end */
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return (new_node);
}

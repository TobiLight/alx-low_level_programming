/*
 * File: 2-add_nodeint.c
 * Author: TobiLight
*/

#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @h - Pointer to a pointer to a node
 * @n - value of node data
 *
 * Return: The address of the new element, or NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	/* Allocate memory for new_node */
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (head);
}

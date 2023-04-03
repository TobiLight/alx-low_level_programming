#include "lists.h"

size_t temp_print_listint(const listint_t *h)
{
	size_t num_nodes;

	for (num_nodes = 0; h != NULL; num_nodes++)
	{
		/* Print elements of the node */
		printf("%d\n", h->n);
		/* Assing h to h.next */
		h = h->next;
	}

	return (num_nodes);
}

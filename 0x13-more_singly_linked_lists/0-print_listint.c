#include "lists.h"

/**
 * print_listint - this prints the elements available in the list.
 * @h: linked list to be probed.
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes_counter = 0;

	for (; h; h = h->next)
	{
		printf("%d\n", h->n);
		nodes_counter++;
	}
	return (nodes_counter);
}

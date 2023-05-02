#include "lists.h"
/**
 * listint_len - this is for the task to list the elements..
 * @h: the constant linked list appiled.
 *
 * Return: number of nodess.
 */

size_t listint_len(const listint_t *h)
{
	size_t node_counter = 0;

	for (; h != NULL; h = h->next)
		node_counter++;
	return (node_counter);
}


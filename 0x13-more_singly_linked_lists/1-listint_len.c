#include "lists.h"
/**
 * coding done by self .
 * listint_len - function for the task.
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


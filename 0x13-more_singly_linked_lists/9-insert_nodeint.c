#include "lists.h"

/**
 * insert_nodeint_at_index - inserts newest_nodes in a linked list,
 * at a given position
 * @head: constant node.
 * @idx: index where the new nodes are.
 * @n: data to insert in the newest_nodes.
 *
 * Return: pointer to the newest_nodes node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int intial_i;
	listint_t *newest_nodes;
	listint_t *temp_ptrs;

	if (!head)
		return (NULL);

	newest_nodes = malloc(sizeof(listint_t));
	if (!newest_nodes)
		return (NULL);

	newest_nodes->n = n;
	newest_nodes->next = NULL;

	if (idx == 0)
	{
		newest_nodes->next = *head;
		*head = newest_nodes;
		return (newest_nodes);
	}

	temp_ptrs = *head;
	for (intial_i = 0; temp_ptrs && intial_i < idx - 1; intial_i++)
		temp_ptrs = temp_ptrs->next;

	if (!temp_ptrs)
	{
		free(newest_nodes);
		return (NULL);
	}

	newest_nodes->next = temp_ptrs->next;
	temp_ptrs->next = newest_nodes;

	return (newest_nodes);
}

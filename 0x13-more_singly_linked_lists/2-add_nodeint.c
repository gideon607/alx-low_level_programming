#include "lists.h"
/**
 * add_nodeint - adds a new node to front.
 * @head: this is a pointer to the first node available in the list.
 * @n: the data or series of data to be inserted in the new node.
 *
 * Return: pointer that points to the available new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newest_nodes = malloc(sizeof(listint_t));

	if (newest_nodes == NULL)
		return (NULL);
	newest_nodes->n = n;
	newest_nodes->next = *head;
	*head = newest_nodes;

	return (newest_nodes);
}


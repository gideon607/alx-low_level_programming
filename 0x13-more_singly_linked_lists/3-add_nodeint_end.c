#include "lists.h"

/**
 * add_nodeint_end - currently adds a node at the end of a linked list
 * @head: pointer to on the linked list.
 * @n: data to work on the linked list.
 *
 * Return: pointer that points to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newest_nodes = malloc(sizeof(listint_t));

	if (newest_nodes == NULL)
		return (NULL);
	newest_nodes->n = n;
	if (*head == NULL)
		*head = newest_nodes;
	else
	{
		listint_t *current_node = *head;

		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = newest_nodes;
	}
	newest_nodes->next = NULL;

	return (newest_nodes);
}


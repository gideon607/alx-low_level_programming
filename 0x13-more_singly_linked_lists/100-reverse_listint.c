#include "lists.h"

/**
 * reverse_listint - reverses linked lists.
 * @head: constant pointer.
 *
 * Return: pointer in reverse.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous_ptr = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous_ptr;
		previous_ptr = *head;
		*head = next;
	}

	*head = previous_ptr;

	return (*head);
}


#include "lists.h"
/**
 * pop_listint - pops the head node of a linked list.
 * @head: pointer to the elements of a linked list.
 *
 * Return: the data deleted is returnd
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_pointer;
	int counter_n;

	if (!*head)
		return (0);

	counter_n = (*head)->n;
	temp_pointer = (*head)->next;
	free(*head);
	*head = temp_pointer;

	return (counter_n);
}


#include "lists.h"

/**
 * sum_listint - sum all in the linked list.
 * @head: constant first node.
 * Return: the sum all.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (temp)
	{
		sum += temp->n;

		temp = temp->next;
	}

	return (sum);
}


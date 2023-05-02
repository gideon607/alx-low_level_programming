#include "lists.h"

/**
 * sum_listint - sum all in the linked list.
 * @head: constant first node.
 * Return: the sum all.
 */
int sum_listint(listint_t *head)
{
	int sumall = 0;

	while (head)
	{
		sumall += head->n;
		head = head->next;
	}

	return (sumall);
}



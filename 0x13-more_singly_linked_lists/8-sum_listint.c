#include "lists.h"

/**
 * sum_listint - sum all in the linked list.
 * @head: constant first node.
 * Return: the sum all.
 */
int sum_listint(listint_t *head)
{
	int sumall = 0;
	listint_t *pointer_n;

	while (pointer_n)
	{
		sumall += pointer_n->n;
		pointer_n = pointer_n->next;
	}

	return (sumall);
}


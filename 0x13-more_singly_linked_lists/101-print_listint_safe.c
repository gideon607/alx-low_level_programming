#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts unique nodes at below
 * in the looped listint_t linked list.
 * @head: constant pointer.
 *
 * Return: If list not looped then - 0.
 * Otherwise - number output of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *situation1, *situation2;
	size_t nodescounter = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	situation1 = head->next;
	situation2 = (head->next)->next;

	while (situation2)
	{
		if (situation1 == situation2)
		{
			situation1 = head;
			while (situation1 != situation2)
			{
				nodescounter++;
				situation1 = situation1->next;
				situation2 = situation2->next;
			}

			situation1 = situation1->next;
			while (situation1 != situation2)
			{
				nodescounter++;
				situation1 = situation1->next;
			}

			return (nodescounter);
		}

		situation1 = situation1->next;
		situation2 = (situation2->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: constant pointer in listint_t list.
 *
 * Return: The number of nodescounter in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodescounter, indexintial = 0;

	nodescounter = looped_listint_len(head);

	if (nodescounter == 0)
	{
		for (; head != NULL; nodescounter++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (indexintial = 0; indexintial < nodescounter; indexintial++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodescounter);
}


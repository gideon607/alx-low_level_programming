#include "lists.h"

/**
 * find_listint_loop - locates loops in a linked list
 * @head: constant pointer but being searched for.
 *
 * Return: the address of loop origin, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *situation1 = head;
	listint_t *situation2 = head;

	if (!head)
		return (NULL);

	while (situation1 && situation2 && situation2->next)
	{
		situation2 = situation2->next->next;
		situation1 = situation1->next;
		if (situation2 == situation1)
		{
			situation1 = head;
			while (situation1 != situation2)
			{
				situation1 = situation1->next;
				situation2 = situation2->next;
			}
			return (situation2);
		}
	}

	return (NULL);
}


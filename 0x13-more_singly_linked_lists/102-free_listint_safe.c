#include "lists.h"

/**
 * free_listint_safe - safely freeing a linked list
 * @h: constant pointer.
 *
 * Return: freed list conuter returned.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t Counter_l = 0;
	int data_d;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		data_d = *h - (*h)->next;
		if (data_d > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			Counter_l++;
		}
		else
		{
			free(*h);
			*h = NULL;
			Counter_l++;
			break;
		}
	}

	*h = NULL;

	return (Counter_l);
}


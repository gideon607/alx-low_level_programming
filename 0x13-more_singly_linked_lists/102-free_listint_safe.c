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

	if (h == NULL || *h == NULL)
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
		else if (data_d < 0)
		{
			/* To make it more robust */
			printf("Error: There is a loop reference\n");
			return (Counter_l);
		}
		else
		{
			free(*h);
			*h = NULL;
			Counter_l++;
			break;
		}
	}

	return (Counter_l);
}


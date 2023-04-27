#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns numbers of elements in a linked list or lists 
 * @h: pointer to the list_t list or lists
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t ecount = 0;

	while (h)
	{
		ecount++;
		h = h->next;
	}
	return (ecount);
}


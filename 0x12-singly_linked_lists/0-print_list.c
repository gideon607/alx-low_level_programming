#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the element or elements of a linked list or lists
 * @h: pointer to the list_t list to print
 * Return: the number of nodes printed which is num_nodess
 */
size_t print_list(const list_t *h)
{
	size_t num_nodess = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		num_nodess++;
	}

	return (num_nodess);
}


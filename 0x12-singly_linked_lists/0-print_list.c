#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the element or elements of a linked list or lists
 * @h: pointer to the list_t list to be print
 * Return: the number of nodes printed which is s
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}


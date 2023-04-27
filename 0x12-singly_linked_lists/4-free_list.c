#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list i.e on a pointer
 * @head: list_t list the list that to be freed
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

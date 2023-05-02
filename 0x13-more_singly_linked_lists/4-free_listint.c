#include "lists.h"

/**
 * free_listint - frees a linked list.
 * @head: the listint_t list being freed.
 */
void free_listint(listint_t *head)
{
	listint_t *temp_pointer;

	while (head)
	{
		temp_pointer = head->next;
		free(head);
		head = temp_pointer;
		free(temp_pointer);
	}
}

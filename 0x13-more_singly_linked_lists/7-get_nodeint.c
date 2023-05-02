#include "lists.h"

/**
 * get_nodeint_at_index - used at index calling in a linked node.
 * @head: constant first node.
 * @index: index to be returnd.
 *
 * Return: pointer to the node requested or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter_n = 0;
	listint_t *temp_ptrs = head;

	while (temp_ptrs && counter_n < index)
	{
		temp_ptrs = temp_ptrs->next;
		counter_n++;
	}

	return (temp_ptrs ? temp_ptrs : NULL);
}

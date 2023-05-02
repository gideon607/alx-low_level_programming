#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a paticular location.
 * @head: constant pointer.
 * @index: index of to be deleted node.
 *
 * Return: 1 Succesdful, or -1 Failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int intial;
	listint_t *temp_pointr, *current_ptr;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		temp_pointr = *head;
		*head = (*head)->next;
		free(temp_pointr);
		return (1);
	}

	temp_pointr = *head;
	for (intial = 0; intial < index - 1 && temp_pointr; intial++)
		temp_pointr = temp_pointr->next;

	if (!temp_pointr || !(temp_pointr->next))
		return (-1);

	current_ptr = temp_pointr->next;
	temp_pointr->next = current_ptr->next;
	free(current_ptr);

	return (1);
}

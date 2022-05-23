#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* delete_nodeint_at_index - remove the nth node of a linked list.
* @head: a linked list to print
* @index: index of the node that should be deleted. Index starts at 0.
*
* Return: the nth node, NULL otherwise.
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *new_node;

	if (head == NULL)
		return (-1);

	for (i = 0; i < index - 1; i++)
	{
		*head = *head->next;
		if (*head == NULL)
			return (-1);
	}

	new_node = (*head)->next;
	(*head)->next = new_node->next;

return (1);
}

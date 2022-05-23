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
	listint_t *curr_node, *next_node;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
		return (1);
	}

	curr_node = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (curr_node->next == NULL)
			return (-1);
		curr_node = curr_node->next;
	}

	next_node = curr_node->next;
	curr_node->next = next_node->next;
	free(next_node);

return (1);
}

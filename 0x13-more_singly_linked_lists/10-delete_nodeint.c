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
	listint_t *new_node, *tmp_node;

	if (head == NULL || *head == NULL)
		return (-1);

	new_node = (*head);
	for (i = 0; i < index - 1; i++)
	{
		if (new_node->next == NULL)
			return (-1);
		new_node = new_node->next;
	}

	tmp_node = new_node->next;
	new_node->next = tmp_node->next;
	free(tmp_node);

return (1);
}

#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* insert_nodeint_at_index - insert new node at the nth node of a linked list.
* @head: a linked list to print
* @idx: the position where new node added.
* @n: value to be added.
*
* Return: the nth node, NULL otherwise.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < idx; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}

	new_node->n = n;
	new_node->next = (*head)->next;
	(*head)->next = new_node;

return (head);
}

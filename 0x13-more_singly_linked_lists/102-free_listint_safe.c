#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - free a linked list with a loop
 * @h: pointer to the first node in the linked list
 *
 * Return: pointer to the 1st node in the new list, fail otherwise
 */

size_t free_listint_safe(listint_t **h)
{
	int nodes = 0;
	listint_t *tmp_node;

	while (*h)
	{
		if (*h - (*h)->next > 0)
		{
			++nodes;
			tmp_node = (*h)->next;
			free(*h);
			(*h) = tmp_node;
		}
		else
			break;
	}

return (nodes);
}

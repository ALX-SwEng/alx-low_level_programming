#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - free a linked list with a loop
 * @head: pointer to the first node in the linked list
 *
 * Return: pointer to the 1st node in the new list, fail otherwise
 */

size_t free_listint_safe(listint_t **h)
{
	int nodes = 0;
  listint_t *tmp_node;

	while (*head)
	{
		++nodes;
		if (*head - (*head)->next > 0)
    {
      tmp_node = (*head)->next;
      free(*head);
      (*head) = tmp_node;
    }
		else
			break;
	}

return (nodes);
}

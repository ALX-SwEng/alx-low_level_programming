#include "lists.h"

/**
* free_listint_safe - frees a singly linked list.
* @h: a linked list to print
*
* Return: the size of the list that was free’d.
*/

size_t free_listint_safe(listint_t **h)
{
	size_t count_node = 0;
	listint_t *tmp_node; /* Create a temporary node */

	if (*h == NULL || h == NULL)
		return (-1);

	while (*h)
	{
		tmp_node = (*h)->next;
		free(*h);
		*h = tmp_node;
		++count_node;
	}

return (count_node);
}


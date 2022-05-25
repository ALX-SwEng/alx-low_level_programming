#include "lists.h"

/**
* free_listint_safe - frees a singly linked list.
* @head: a linked list to print
*
* Return: the size of the list that was free’d.
*/

size_t free_listint_safe(listint_t **h)
{
	size_t count_node = 0;
	listint_t *tmp_node; /* Create a temporary node */

	if (head == NULL)
		return;

	while (*head)
	{
		tmp_node = (*head)->next;
		free(*head);
		(*head) = tmp_node;
		++count_node;
	}

return (count_node);
}


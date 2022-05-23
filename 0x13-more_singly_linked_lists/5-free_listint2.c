#include <string.h>
#include "lists.h"

/**
* free_listint2 - frees a singly linked list.
* @head: a linked list to print
*
* Return: void.
*/

void free_listint2(listint_t **head)
{
	listint_t *tmp_node; /* Create a temporary node */

	while (head)
	{
		tmp_node = *head;
		(*head) = (*head)->next;
		free(tmp_node);
	}
	*head = NULL;
}

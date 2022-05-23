#include <string.h>
#include "lists.h"

/**
* free_listint - frees a singly linked list.
* @head: a linked list to print
*
* Return: void.
*/

void free_listint(listint_t *head)
{
	listint_t *tmp_node; /* Create a temporary node */

	while (head)
	{
		tmp_node = head;
		head = head->next;
		free(tmp_node);
	}
}

#include <string.h>
#include "lists.h"

/**
* free_list - frees a singly linked list.
* @head: a linked list to print
*
* Return: void.
*/

void free_list(list_t *head)
{
	list_t *tmp_node; /* Create a temporary node */

	while (head->next)
	{
		tmp_node = head;
		head = head->next;
		free(tmp_node);
	}
}

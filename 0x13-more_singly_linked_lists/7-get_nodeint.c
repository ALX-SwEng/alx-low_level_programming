#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* get_nodeint_at_index - find the nth node of a listint_t linked list.
* @head: a linked list to print
* @index: the index of the node, starting at 0.
*
* Return: the nth node, NULL otherwise.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num;
	listint_t *tmp_node;

	tmp_node = head;
	while (head != NULL)
	{
		num = head->n;
		if (num == index)
			return (head);
		head = head->next;
	}

head = tmp_node;
return (NULL);
}

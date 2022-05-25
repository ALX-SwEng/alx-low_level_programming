#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the linked list
 *
 * Return: pointer to the 1st node in the new list, fail otherwise
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr_list_head = NULL;
	listint_t *rev_list_head = NULL;

	while (*head)
	{
		curr_list_head = (*head)->next;
		(*head)->next = rev_list_head;
		rev_list_head = *head;
		*head = curr_list_head;
	}

	*head = rev_list_head;

	return (*head);
}

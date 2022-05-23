#include <string.h>
#include "lists.h"

/**
* pop_listint - remove the begining node of a singly linked list.
* @head: a linked list to print
*
* Return: the address of the new element, or NULL if it failed.
*/

int pop_listint(listint_t **head)
{
	listint_t *new_node, *tmp_node; /* Create a new node */
	unsigned int c = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->len = n;
	new_node->next = NULL; /* Point it to null */

	/* if head is NULL, it is an empty list */
	if (*head == NULL)
	{
		(*head) = new_node;
		return (new_node);
	}

	tmp_node = *head;
	while (tmp_node->next)
		tmp_node = tmp_node->next;

	tmp_node->next = new_node;	/* Point head to new node */

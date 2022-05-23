#include <string.h>
#include "lists.h"

/**
* add_nodeint - adds a new node at the beginning of a singly linked list.
* @head: a linked list to print
*
* Return: the address of the new element, or NULL if it failed.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	list_t *new_node; /* Create a new node */
	unsigned int c = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->len = n;
	new_node->next = (*head); /* Point it to old head */
	(*head) = new_node;	/* Point head to new node */

	return (*head);
}

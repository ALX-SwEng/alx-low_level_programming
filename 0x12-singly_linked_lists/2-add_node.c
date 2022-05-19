#include <string.h>
#include "lists.h"

/**
* add_node - adds a new node at the beginning of a singly linked list.
* @head: a linked list to print
* @str: needs to be duplicated.
*
* Return: the address of the new element, or NULL if it failed.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node; /* Create a new node */
	unsigned int c = 0;

	while (str[c++])
		;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = --c;
	new_node->next = (*head); /* Point it to old head */
	(*head) = new_node;	/* Point head to new node */

	return (*head);
}

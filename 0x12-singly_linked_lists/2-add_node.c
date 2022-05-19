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
	list_s *new_node = new list_s; /* Create a new node */
	
	new_node->str = str;
	
	new_node->next = head;	 /* Point it to old head */
	head = new_node;	/* Point head to new node */

	return (head);
}

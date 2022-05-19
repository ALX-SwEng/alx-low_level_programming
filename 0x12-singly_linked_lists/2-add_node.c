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
	/* Create a new node */
	list_s *new_node = new list_s;
	new_node->str = str;
	
	/* Point it to old head */
	new_node->next = head;
	
	// Point head to new node
	head = new_node;
	
	return (head);
}

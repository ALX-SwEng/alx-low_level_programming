#include "lists.h"

/**
* print_list - count the elements of a linked list.
* @h: a singly linked list
*
* Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		++counter;
		h = h->next;
	}

return (counter);
}

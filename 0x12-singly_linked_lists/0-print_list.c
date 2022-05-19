#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* print_list - prints all the elements of a linked list.
* @h: a linked list to print
*
* Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("[%d]", h->len);
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("%s\n", h->str);

		++counter;

		h = h->next;
	}

return (counter);
}

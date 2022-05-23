#include <stdio.h>
#include "lists.h"

/**
* print_listint - prints all the elements of a linked list.
* @h: a linked list to print
*
* Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	int counter = 0;
	const listint_t *tmp;

	if (h == NULL)
		return (0);

	tmp = h;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		++counter;
		tmp = tmp->next;
	}

return (counter);
}

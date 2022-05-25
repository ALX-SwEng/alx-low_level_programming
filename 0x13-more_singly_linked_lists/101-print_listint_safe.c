#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - print a linked list with a loop
 * @head: pointer to the first node in the linked list
 *
 * Return: pointer to the 1st node in the new list, fail otherwise
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index;

	nodes = looped_listint_count(*h);

	if (nodes == 0) 	/* print not looped list */
	{
		while(h)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			*h = (*h)->next;
		}
	}
	else 	/* print looped list */
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			*h = (*h)->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}

return (nodes);
}

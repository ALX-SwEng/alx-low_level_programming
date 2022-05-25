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

	nodes = loop__checker_listint(head);

	if (nodes == 0) 	/* print not looped list */
	{
		while(head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			*head = (*head)->next;
		}
	}
	else 	/* print looped list */
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			*head = (*head)->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}

return (nodes);
}

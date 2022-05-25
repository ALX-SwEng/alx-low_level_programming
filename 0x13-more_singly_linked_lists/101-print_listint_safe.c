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
	int nodes = 0;

	if (head == NULL)
		exit(98);

	while (head)
	{
		++nodes;
		printf("[%p] %d\n", (void *)head, head->n);

		if (head - head->next > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}

	}

return (nodes);
}

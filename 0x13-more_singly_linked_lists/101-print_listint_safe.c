#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * loop__checker_listint - check if there is loop in a linked list and
 *            counts the number of unique nodes in a looped linked list
 *
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: 0 - if the list is not looped,
 *         Otherwise - the number of unique nodes in the list.
 */
 
size_t loop__checker_list(const listint_t *head)
{
	const listint_t *tortoise;
	const listint_t *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	/* check if there is a loop */
	tortoise = head->next;
	hare = head->next->next;
	while (hare)
	{
		if (tortoise == hare)
			break;

		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

	/* count unique nodes if the list is looped */
	if (tortoise == hare)
	{
		/* count the noodes till the point of loop */
		tortoise = head;
		while (tortoise != hare)
		{
			nodes++;
			tortoise = tortoise->next;
			hare = hare->next;
		}

		/* count the noodes after the point of loop */
		tortoise = tortoise->next;
		while (tortoise != hare)
		{
			nodes++;
			tortoise = tortoise->next;
		}
		return (nodes);
	}
return (0);
}

/**
 * print_listint_safe - print a linked list with a loop
 * @head: pointer to the first node in the linked list
 *
 * Return: pointer to the 1st node in the new list, fail otherwise
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index;

	nodes = loop__checker_list(head);

	if (nodes == 0) 	/* print not looped list */
	{
		while(head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else 	/* print looped list */
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}

return (nodes);
}

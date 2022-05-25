#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * loop__checker_list - check if there is loop in a linked list and
 *            counts the number of unique nodes in a looped linked list
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: 0 - if the list is not looped,
 *         Otherwise - the number of unique nodes in the list.
 */

size_t loop__checker_list(const listint_t *head)
{
	const listint_t *tortoise  = head->next;
	const listint_t *hare  = head->next->next;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	while (hare) /* check if there is a loop */
	{
		if (tortoise == hare)
			break;

		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}
	if (tortoise == hare) /* count unique nodes if the list is looped */
	{
		tortoise = head;
		while (tortoise != hare) /* count the noodes till the point of loop */
		{
			nodes++;
			tortoise = tortoise->next;
			hare = hare->next;
		}
		tortoise = tortoise->next;
		while (tortoise != hare) /* count the noodes after the point of loop */
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
	if (nodes == 0) /* print not looped list */
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else	/* print looped list */
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

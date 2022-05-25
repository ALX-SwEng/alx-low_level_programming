#include "lists.h"

/**
 * check_looped_listfree - check if there is loop in a linked list and
 *            counts the number of unique nodes in a looped linked list
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: 0 - if the list is not looped,
 *         Otherwise - the number of unique nodes in the list.
 */

size_t check_looped_listfree(listint_t *head)
{
	listint_t *tortoise, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare) /* check if there is loop in the list */
	{
		if (tortoise == hare)
			break;
		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

	if (tortoise == hare) /* count unique node in a looped list */
	{
		tortoise = head;
		while (tortoise != hare)
		{
			nodes++;
			tortoise = tortoise->next;
			hare = hare->next;
		}
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
 * free_listint_safe - Frees a listint_t list safely
 *            (i.e. can free lists containing loops)
 * @h: A pointer to the address of
 *     the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 *
 * Description: The function sets the head to NULL.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t nodes, index;

	nodes = check_looped_listfree(*h);
	if (nodes == 0)
	{
		while (h != NULL && *h != NULL)
		{
			nodes++;
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
		*h = NULL;
	}

	h = NULL;
	return (nodes);
}

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
 
size_t loop__checker_listint(listint_t *head)
{
	listint_t *tortoise = head;
	listint_t *hare = head->next;
	size_t nodes = 0;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head->next;
	hare = (head->next)->next;

	while (tortoise && hare && hare->next)
	{
		if (tortoise == hare)
			break;
		
		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}
	
	if if (tortoise == hare)
	{
		tortoise = head;
		while (tortoise != hare)
		{
			nodes++;
			tortoise = tortoise->next;
			hare = hare->next;
		}
	}
return (nodes);
}

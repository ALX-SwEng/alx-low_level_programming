#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely 
 *                 (i.e. can free lists containing loops)
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

	nodes = loop__checker_listint(*h);

	if (nodes == 0) /* free not looped list */
	{
		while(h)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}
	else /* free looped list */
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

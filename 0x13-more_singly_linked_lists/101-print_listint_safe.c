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
	const listint_t *fast = head;
	const listint_t *slow = head;
	int nodes = 0;
	
	if (head == NULL)
		exit(98);

	while (slow != NULL && fast != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		++nodes;

		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
			break;
	}

return (nodes);
}

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
	listint_t *fast = head;
	listint_t *slow = head;
	int nodes = 0;
	
	if (head == NULL)
		exit(98);
	
	while (slow != null && fast != null && fast.next != null)
	{
		slow = slow->next;
		fast = fast->next->next;
		printf("%d\n", slow->n);
		++nodes;

		if (slow == fast)
		{
			loop = 1;
			break;
		}
	}

return (nodes);
}

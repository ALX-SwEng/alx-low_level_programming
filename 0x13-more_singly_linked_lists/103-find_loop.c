#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - find a loop in a linked list
 * @head: pointer to the first node in the linked list
 *
 * Return: pointer to the 1st node in the new list, fail otherwise
 */
        
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast = *head;
	listint_t *slow = *head;
	int loop = 0;
	
	while (slow != null && fast != null && fast.next != null)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			loop = 1;
			break;
		}
	}

	if (loop)
	{
		slow = head;
		while (fast != slow) 
		{
			fast = fast.next;
			slow = slow.next;
		}

		return (fast);
	}
	else
		return (NULL);
}

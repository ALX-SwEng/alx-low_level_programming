#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* sum_listint - find the the sum of all the data (n) of a listint_t linked list.
* @head: a linked list to print
*
* Return: the nth node, NULL otherwise.
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (-1);

	while (head)
	{
		head = head->next;
    sum += head->n;
	}
return (sum);
}

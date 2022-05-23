#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print the elements in a list.
(* a blank line
*@h: the list
* Description: print the elements of one list)?
(* section header: the header of this function is lists.h)*
* Return: this return the num of the elements in the list
*/
size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (i);
}

#include "main.h"

/**
 * reset_to_98 - change value using pointer
 * @n: integer value
 *
 * Return: none
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
  *b = *a - *b;
  *a = *a - *b;
}

#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - call a function that iterate over an array
 *
 * @size: array size
 * @action: pointer to function
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; ++i)
		action(array[i]);
}

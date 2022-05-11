#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - call a function that iterate over an array
 *
 * @array: array pointer
 * @size: array size
 * @action: pointer to function
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (size > 0 && array && action)
	{
		for (i = 0; i < size; ++i)
			action(array[i]);
	}
}

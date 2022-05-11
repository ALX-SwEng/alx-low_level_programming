#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - search integer value in array
 *
 * @array: array pointer
 * @size: array size
 * @cmp: pointer to function that compare values
 *
 * Return: 0 if success, fails (-1) otherwise.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);

	for (i = 0; i < size; ++i)
	{
		if (cmp(array[i]))
			return (i);
	}

return (-1);
}

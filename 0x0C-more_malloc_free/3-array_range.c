#include <stdlib.h>
#include "main.h"

/**
* array_range - creates an array of integers using malloc.
*
* @min: int param.
* @max: int parm.
*
* Return: pointer to the newly created array, or NULL if it fails.
*/

int *array_range(int min, int max)
{
	int *newArray, *temp;

	if (min > max)
		return (NULL);

	newArray = malloc((max - min + 1) * sizeof(int));
	if (!newArray)
		return (NULL);

	temp = newArray;
	while (min <= max)
		*temp++ = min++;

return (newArray);
}

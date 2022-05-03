#include <stdlib.h>
#include "main.h"

/**
* alloc_grid - create a pointer to a 2 dimensional array of integers.
*
* @width: array column size
* @height: array row size
*
* Return:  a pointer to the array, or NULL if it fails.
*/

int **alloc_grid(int width, int height)
{
	int **newArray, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	newArray = malloc(height * sizeof(int *));
	if (newArray == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		newArray[i] = malloc(width * sizeof(int));
		if (newArray[i] == NULL)
		{
			for (; i >= 0; i--)
				free(newArray[i]);
			free(newArray);
			return (NULL);
		}

		for (j = 0; j <= width; j++)
			newArray[i][j] = 0;
	}

return (newArray);
}

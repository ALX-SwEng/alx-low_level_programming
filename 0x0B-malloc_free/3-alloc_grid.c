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
	int **newArray, int i;
	unsigned int size, size1 = 0, size2 = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	newArray = malloc((width * height) * sizeof(int));
  
  for (i = 0; i < width * height; i++)
    newArray[i] = 0;

return (newArray);
}

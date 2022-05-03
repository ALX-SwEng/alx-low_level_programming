#include <stdlib.h>
#include "main.h"

/**
* free_grid - frees a 2 dimensional grid created by malloc.
*
* @grid: pointer to 2D array
* @height: pointer array row size
*
* Return: nothing.
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

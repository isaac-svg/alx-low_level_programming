#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees memory area occupied
 *  by a 2D array
 *  @grid: pointer to pointer
 *  @height: size of the column
 *  Return:void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

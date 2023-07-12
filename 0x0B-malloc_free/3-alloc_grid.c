#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2D array
 * @width: row size  of the array
 * @height: column size  of the array
 * Return: pointer to the 2D array
 */

int **alloc_grid(int width, int height)
{
	int **arr, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(sizeof(int) * (width * height));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}

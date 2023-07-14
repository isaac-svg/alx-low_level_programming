#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: from value
 * @max: to value
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *t, diff, i, j;

	if (min > max)
		return (NULL);

	diff = max - min + 1;
	t = malloc(sizeof(int) * diff);
	if (t == NULL)
		return (NULL);
	for (i = 0, j = min; i < diff; i++, j++)
	{
		t[i] = j;
	}
	return (t);
}


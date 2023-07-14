#include "main.h"
#include <stlib.h>

/**
 * array_range - creates an array of integers
 * @min: from value
 * @max: to value
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	if (min > max)
		return (NULL);
	int *t, diff, i, j;

	diff = max - min;
	t = malloc(sizeof(int) * diff);
	if (t == NULL)
		return (NULL);
	for (i = 0, j = min; j <= max; j++, i++)
	{
		t[i] = j;
		j++;
		i++;
	}
	return (t);
}


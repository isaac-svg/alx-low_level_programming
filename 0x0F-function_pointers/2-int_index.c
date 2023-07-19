#include "function_pointers.h"

/**
 * int_index - gets the index of the first integer in an array
 * @array: pointer to array
 * @size: size of array
 * @cmp: comparator
 * Return: index of first integer otherwise -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array ==  NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

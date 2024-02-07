#include "search_algos.h"

/**
 * interpolation_search - Searches using interpolation
 * @array: The array to search through
 * @size: The size of the array
 * @value: The value to search for
 * Return: The index of value otherwise -1 on failure
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t high, low, midpoint;

	if (array == NULL || size == 0)
		return (-1);
	low = 0;
	high = size - 1;
	while ((array[high] != array[low]) &&
			(value >= array[low]) &&
			(value <= array[high]))
	{
		midpoint = low + ((value - array[low]) * (high - low) /
				(array[high] - array[low]));
		printf("Value checked array[%lu] = [%d]\n", midpoint, array[midpoint]);
		if (array[midpoint] < value)
			low = midpoint + 1;
		else if (value < array[midpoint])
			high = midpoint - 1;
		else
			return (midpoint);
	}
	if (value == array[low])
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		return (low);
	}
	midpoint = low + (((double)(high - low) / (array[high] - array[low])) *
		(value - array[low]));
	printf("Value checked array[%lu] is out of range\n", midpoint);
	return (-1);
}


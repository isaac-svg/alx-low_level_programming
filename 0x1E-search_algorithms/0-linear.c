#include "search_algos.h"


/**
 * linear_search - finds an element in a list by by ever element
 * with the key
 * @array: pointer to the array to find
 * @size: size of the array
 * @value: the value to find
 * Return: The index of the value if present else -1
 */


int linear_search(int *array, size_t size, int value)
{
	size_t j = 0;

	if (array == NULL)
		return (-1);

	for (j = 0; j < size; j++)
	{
		if (array[j] == value)
		{
			return (j);
		}
	}

	return (-1);
}


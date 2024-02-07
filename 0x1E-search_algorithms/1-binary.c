#include "search_algos.h"

/**
 * binary_search - performs a biney search for an element
 * in an array
 * @array: array to search for element
 * @size: soze fo the array
 * @value: key or value to search for
 * Return: the index of value if present else -1
 */


int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t midpoint = (high - low) / size;


	while (low <=  high)
	{
		midpoint = ((high + low) / (2));
		print_array(array, low, high + 1);

		if (array[midpoint] < value)
		{
			/*print_array(array, low, high + 1);*/
			low = midpoint + 1;
			/* print_array(array, low, high + 1); */
		}
		else if (array[midpoint] > value)
		{
			/*print_array(array, low, high + 1);*/
			high = midpoint - 1;
			/* print_array(array, low, high + 1); */
		}
		else if (array[midpoint] == value)
			return (midpoint);

		}
	return (-1);
}


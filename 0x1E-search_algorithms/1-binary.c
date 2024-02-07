#include "search_algos.h"







/**
 * print_array - Prints the elements of an array
 * @array: The array to print
 * @low: The index to start print from
 * @high: the Index to end printing
 * Return: void
 */
void print_array(int *array, size_t low, size_t high)
{
	size_t j;

	printf("Searching in array:");

	for (j = low; j < high; j++)
	{
		if (j == low)
		{
			printf(" %d", array[j]);
		}
		else
		{
			printf(" ,%d",array[j]);
		}
	}

	printf("\n");
}

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


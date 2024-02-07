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


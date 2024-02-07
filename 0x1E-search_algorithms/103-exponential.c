#include "search_algos.h"

/**
 * min - finds the min of two numbs
 * @a: the first number
 * @b: the second number
 * Return: the smallest
 */
size_t min(size_t a, size_t b)
{
	return ((a < b) ? a : b);
}

/**
 * print_array - Prints the content of an array
 * @arr: the array to print
 * @begin: Index to begin printing from
 * @end: Index to end printing at
 * Return: void
 */
void print_array(int *arr, size_t begin, size_t end)
{
	if (arr == NULL)
		return;
	while (begin <= end)
	{
		printf("%d", arr[begin]);
		if (begin != end)
			printf(", ");
		begin++;
	}
	printf("\n");
}

/**
 * bin_search - Performs a binary search
 *  through an array
 * @array: The array to search through
 * @left: the left side
 * @right: the right side
 * @value: The key to search for
 *
 * Return: The index of the found value or -1 otherwise
 */
int bin_search(int *array, size_t left, size_t right, int value)
{
	size_t low, high, m;

	if (array == NULL)
		return (-1);
	low = left;
	high = right - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	while (low <= high)
	{
		printf("Searching in array: ");
		print_array(array, low, high);
		m = (low + high) / 2;
		if (array[m] > value)
			high = m - 1;
		else if (array[m] < value)
			low = m + 1;
		else
			return (m);
	}
	return (-1);
}

/**
 * exponential_search - Searches using exponential search algo
 * @array: The array
 * @size: Size of the array
 * @value: the value to search for
 * Return: the index of @value or -1 on failure
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size == 0)
		return (-1);
	i = 1;
	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i *= 2;
	}
	return (bin_search(array, i / 2, min(i + 1, size), value));
}


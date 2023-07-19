#include "function_pointers.h"

/**
 * array_iterator - peforms an action on an array element
 * @array: array passed as argument
 * @size: size of array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL || size <= 0)
		return;
	for (i = 0; i < size; i++)
		action(*(array + i));
}

#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates memory
 * @old_size: old size of the memory block
 * @ptr: poointer to memory block
 * @new_size: new size of memory block
 * Return: pointer to new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *t, *temp = ptr;
	unsigned int j;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		t = malloc(new_size);
		return (t);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	t = malloc(new_size);
	if (t == NULL)
		return (NULL);
	if (new_size < old_size)
	{
		for (j = 0; j < new_size; j++)
		{
			t[j] = temp[j];
		}
	}
	else
	{
		for (j = 0; j < old_size; j++)
		{
			t[j] = temp[j];
		}
	}
	free(ptr);
	return (t);
}

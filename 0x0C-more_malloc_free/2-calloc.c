#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates a block of memroy for an array
 * @nmemb: number of elements of the array
 * @size: size of each byte
 * Return pointer to the block of memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *t;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (nmemb > (2147483647 / size))
		return (NULL);
	t = malloc(nmemb * size);
	if (t == NULL)
		return (NULL);
	return (t);
}



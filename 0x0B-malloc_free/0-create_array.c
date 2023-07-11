#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array and intiliases
 * it whic a specfic character
 * @size: size of byte to allocate
 * @c: character to initialise this to
 * Return: pointer to charater array
 */

char *create_array(unsigned int size, char c)
{
	char *t;

	t = malloc(sizeof(char) * size);
	t[0] = c;
	if (t == NULL || size == 0)
		return NULL;
	return t;
}

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
	int j;
	
	if (size == 0)
		return NULL;
	t = malloc(sizeof(char) * size);
	if (t == NULL)
		return NULL;
	for (j = 0; j < size; j++)
		t[j] = c;
	return t;
}

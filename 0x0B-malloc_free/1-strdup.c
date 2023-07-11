#include "main.h"
#include <stdlib.h>

/**
 * _strdup - allocates memory and copies a string
 * @str: string to copy
 * Return: pointer to memory containing copied string
 */

char *_strdup(char *str)
{
	char *t;
	int size, j;
	
	t =  malloc(sizeof(*str));
	size = (t / sizeof(char));
	for (j = 0; j < size; j++)
	{
		t[j] = str[j];
	}
	return (t);
}

#include "main.h"
#include <stdlib.h>

/**
 * _strdup - allocates memory and copies a string
 * @str - string to copy
 * Return: pointer to memory containing copied string
 */

char *strdup(char *str)
{
	char *t;
	
	t =  malloc(sizeof(str));
	t[] = str;
	return t;
}

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
	int j, i;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	t =  malloc(sizeof(char) * (1 + i));
	if (t == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
	{
		t[j] = str[j];
	}
	return (t);
}

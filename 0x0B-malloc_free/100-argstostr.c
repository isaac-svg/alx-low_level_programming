#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all command-line arguments into a single string.
 * @argc: argument count
 * @argv: argument vector
 * Return: Pointer to the concatenated string
 */
char *argstostr(int argc, char **argv)
{
	int i, j, total_length = 0, current_index = 0;
	char *str;

	if (argc == 0 || argv == NULL)
		return (NULL);

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
			total_length++;
	}
	total_length += argc;

	str = malloc(sizeof(char) * (total_length + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			str[current_index] = argv[i][j];
			current_index++;
		}
		str[current_index++] = '\n';
	}
	str[current_index] = '\0';

	return (str);
}

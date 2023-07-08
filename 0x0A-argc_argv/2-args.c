#include "main.h"
#include <stdio.h>

/**
 * main - entry point to program
 * @argc: length of arguments
 * @argc: argument vector
 * Return: 0 if non-error
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

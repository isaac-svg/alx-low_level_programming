#include <stdio.h>
#include "main.h"

/**
 * main - entry point to program
 * @argc: number of arguments to function
 * @argv: vector containing the arguments
 * Return: 0 if no error
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

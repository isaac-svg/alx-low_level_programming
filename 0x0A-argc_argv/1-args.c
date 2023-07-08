#include <stdio.h>
#include "main.h"

/**
 * main - Entry point to function
 * @argc: Length of input arguments
 * @argv: vector containing the input arguments
 * Return: 0 if none error
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}

#include "function_pointers.h"
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the result of the operation passed as arguments
 * @argc: number of arguments alaways >= 1
 * @argv: argument vector
 * Return: Always 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{

	char *opt;
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	opt = argv[2];
	num2 = atoi(argv[3]);

	if ((get_op_func(opt) == NULL) || opt[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*opt == '/' && num2 == 0) ||
	    (*opt == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(opt)(num1, num2));

	return (0);
}

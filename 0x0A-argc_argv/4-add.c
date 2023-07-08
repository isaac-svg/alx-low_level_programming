#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
/**
 * verifyNum - check if the string has digits
 * @s: string
 * Return: 0
 */
int verifyNum(char *s)
{
	unsigned int i;

	i = 0;
	while (i < strlen(s))
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - sums the numbers on the command line
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{

	int count;
	int i;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (verifyNum(argv[count]))
		{
			i = atoi(argv[count]);
			sum += i;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}
	printf("%d\n", sum);
	return (0);
}

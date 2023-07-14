#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * exit_with_error - prints the test Error to the screen
 * Return: void
 */

void exit_with_error()
{
	printf("Error\n");
	exit(98);
}

/**
 * getstrlen - computes the length of the input string
 * @s: input string
 * Return: length of s
 */

int getstrlen(char *s)
{
	int j = 0;

	if (s == NULL)
		return (0);
	while (s[j] != '\0')
		j++;
	return (j);
}

/**
 * is_digit - checks if the input string contains only digits
 * @s: input string
 * Return: 1 if all are digits otherwise 0
 */
int is_digit(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		if (s[j] < '0' || s[j] > '9')
			return (0);
		j++;
	}
	return (1);
}

/**
 * main - multiples two numbers using  the long
 * multiplication algorithm
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int len1, len2, *product, diglen, j, dig1, dig2, carry, isfilled;
	char *arg1, *arg2;

	if ((argc != 3) || !is_digit(argv[1]) || !is_digit(argv[2]))
	       exit_with_error();
	arg1 = argv[1];
	arg2 = argv[2];	
	len1 = getstrlen(argv[1]);
	len2 = getstrlen(argv[2]);
	diglen = len1 + len2 + 1;
	product = malloc(sizeof(int) * diglen);
	if (product == NULL)
		return (1);
	for (j = 0; j < diglen; j++)
		product[j] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		dig1 = arg1[len] - '0';
		carry = 0;
		for (len2 = len2 - 1; lens >= 0; len2--)
		{
			dig2 = arg2[len2] - '0';
			carry += product[len1 + len2 + 1] + (dig1 * dig2);
			product[len1 + len2 + 1] = (carry % 10);
			carry = carry / 10;
		}
		if (carry > 0)
		{
			result[len1 + len2 + 1] += carry;
		}
	}
	isfilled = 0;
	for (j = 0; j < diglen -1; j++)
	{
		if (product[j])
			isfilled = 0;
		if (isfilled)
			_puchar(product[j] + '0');
	}
	if (isfilled == 0)
		_putchar('0');
	_putchar('\n');
	free(product);
	return (0);
}

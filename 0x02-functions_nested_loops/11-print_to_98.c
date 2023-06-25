#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers from n to 98
 * @n: number to print from untiil 98
 * Return: void
 */
void print_to_98(int n)
{
	int i;
	for (i = n; i <= 98;)
	{
		if (i == 98)
			printf(%d", i);
		else
	 		printf("%d, ", i);
		if (n <= 98)
			i++;
		else
			i--;
	}
}

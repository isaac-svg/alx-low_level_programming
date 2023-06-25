#include "main.h"
#include <stdio.h>

/**
 * main - entyr poin t to program
 * Return: sum of the mutiples of 3 and 5 bellow 1024
 */
int main(void)
{
	int sum;
	int i;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	}
	printf("%d\n", sum);
	return (0-);
}

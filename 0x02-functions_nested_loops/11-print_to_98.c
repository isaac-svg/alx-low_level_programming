#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers from n to 98
 * @n: number to print from untiil 98
 * Return: void
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		int i;
		for ( i = n; i > 98; i--)
		{
			if (i == 98)
			{
				printf("%d\n", i);
			}
			else
			{
				printf("%d, ", i);
			}
		
		}
	
	}
	else
	{
		int i;
		for ( i = n; i < 98; i++)
		{
			if (i == 98)
			{
				printf("%d\n", i);
			}
			else
			{
				printf("%d, ", i);
			}
		
		}
	}
}

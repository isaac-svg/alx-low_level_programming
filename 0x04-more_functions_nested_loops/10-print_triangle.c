#include "main.h"

/**
 * print_triangle - prints triangles using the # symbol.
 * @size: SIze of the triangle to print.
 * Return: void .
 */

void print_triangle(int size)
{
	int i,j,k;

	for(i = 1; i<= size; i++)
	{
		for( j = 1; j <= size; j++)
		{
			_putchar(' ');
		}
		for( k = i; k <=  i; i++)
		{
			_putchar('#');
		}
	}
}

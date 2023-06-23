#include "main.h"

/**
 * print_triangle - prints triangles using the # symbol.
 * @size: SIze of the triangle to print.
 * Return: void .
 */

void print_triangle(int size)
{
	int i,j,k;
	if(size <= 0)
	{
		_putchar('\n');
	
	else
	{

	for(i = 1; i <= size; i++)
	{
		for( j = i; j < size; j++)
		{
			_putchar(' ');
		}
		for( k = 1; k <=  i; i++)
		{
			_putchar('#');
		}
	}
	}
}

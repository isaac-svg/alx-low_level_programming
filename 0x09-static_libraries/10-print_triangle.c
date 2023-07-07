#include "main.h"

/**
 * print_triangle - prints triangles using the # symbol.
 * @size: SIze of the triangle to print.
 * Return: void .
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int outer, inner;

		for (outer = 1; outer <= size; outer++)
		{
			for (inner = outer; inner < size; inner++)
			{
				_putchar(' ');
			}

			for (inner = 1; inner <= outer; inner++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}

#include "main.c"

/**
 * print_diagonal- prints a diagonal line.
 *
 * @n: number of lines
 * Return:void
 */
void print_diagonal(int n)
{
	int i;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{

		for (i = 0; i < n; i++)
		{
		int j;

			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
		_putchar('\n');
	}
}

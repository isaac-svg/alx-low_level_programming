#include "main.h"

/**
 *  print_alphabet_x10 - prints the lowercase alphabets 10 times followed by a new line
 *  Return: void
 */
void print_alphabet_x10(void)
{
	int i,j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j < 123; j++)
		{

		_putchar(i);
		}
		_putchar('\n');
	}
	
}



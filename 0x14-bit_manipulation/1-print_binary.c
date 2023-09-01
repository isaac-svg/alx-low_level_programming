#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @a: The number to convert and print in binary representation
 *
 * Return: void
 */
void print_binary(unsigned long int a)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while ((a & mask) == 0 && mask != 0)
	{
		mask >>= 1;
	}

	while (mask != 0)
	{
		_putchar((n & mask) ? '1' : '0');
		mask >>= 1;
	}
}

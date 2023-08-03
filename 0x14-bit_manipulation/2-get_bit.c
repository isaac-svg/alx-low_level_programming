#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The number to check
 * @index: The index, starting from 0
 *
 * Return: The value of the bit at the specified index (0 or 1),
 *         or -1 if  error i.e index is out of range
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;

	return ((n & mask) ? (1) : (0));
}

#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at the given index
 * @n: Pointer to the number to modify
 * @index: The index of the set bit
 *
 * Return: 1 (Success), or -1 if error i.e index is out of range
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;

	*n |= mask;

	return (1);
}

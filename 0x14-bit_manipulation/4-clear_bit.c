#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @num: Pointer to the number to modify.
 * @index: The index of the bit to clear.
 *
 * Return: 1 (Success), or -1 if error i.e index is out of range
 */
int clear_bit(unsigned long int *num, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = ~(1UL << index);

	*num &= mask;

	return (1);
}

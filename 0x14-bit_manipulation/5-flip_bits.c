#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip
 * to get from one number to another.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: Number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int a, unsigned long int b)
{
	unsigned long int result = a ^ b;
	unsigned int count = 0;

	while (result != 0)
	{
		result &= (result - 1);
		count++;
	}

	return (count);
}

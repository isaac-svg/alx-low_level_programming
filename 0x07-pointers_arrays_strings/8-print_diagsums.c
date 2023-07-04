#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the diagonals
 * of a square matrix
 * @a: input array
 * int size the size of the array
 * Return: void
 */
void print_diagsums (int *a, int size)
{
	int majorsum, minorsum, x, y;

	majorsum = 0;
	minorsum = 0;

	for (x = 0; x < size; x++)
	{
		majorsum += a[(x * size) + x];
	}
	for (y = size -1; y >= 0; y--)
	{
		minorsum += a[(y * size) + (size -1 - y)];
	}
	printf("%d, %d\n", majorsum, minorsum);

}



#include "main.h"
/**
 * swap_int - swaps the values of integrs
 * @a: first arg
 * @b: second arg
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int *c;
	c = *a;
	a = *b;
	b = *c;
}

#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - computes the sum of the two arguments
 * @a: the first argument
 * @b: the second argument
 * Return: (a + b)
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - computes the difference of the two aarguments
 * @a: the first argument
 * @b: the second argument
 * Return: (a - b)
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - computes  the product of the two aguments
 * @a: the first argument
 * @b: the second argument
 * Return: The product of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - computes the division of the two arguments
 * @a: the first argumnet
 * @b: the second argument
 * Return: the quotient the two arguments
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - computes the remainder of the division of the two arguments
 * @a: the first argument
 * @b: the second argument
 * Return: the remainder of the division of the twi arguments
 */

int op_mod(int a, int b)
{
	return (a % b);
}

#include "variadic_functions.h"
/**
 * sum_them_all - sums all the arguments given to it
 * @n: first argument
 * Return: sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;
	va_list args;

	va_start(args, n);
	if (n == 0)
		return (0);
	for (i = n; i >= 0; i++)
		sum += va_arg(args, n);
	va_end(args);
	return (sum);
}

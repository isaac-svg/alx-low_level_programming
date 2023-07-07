#include "main.h"

int get_prime(int num, int counter);

/**
 * is_prime_number - checks if a number is prime or not
 * @n: input argument
 * Return: 1 if number is prime else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (get_prime(n, n - 1));
}

/**
 * get_prime - calculates if a number is prime recursively
 * @num: input argument
 * @counter: counter
 * Return: 1 if num is prime else 0
 */
int get_prime(int num, int counter)
{
	if (counter == 1)
		return (1);
	if ((num % counter == 0) && (counter > 0))
		return (0);
	return (get_prime(num, (counter - 1)));
}


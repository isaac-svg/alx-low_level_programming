#include "main.h"

/**
 * print_to_98 - prints numbers from n to 98
 * @n: number to print from untiil 98
 * Return: void
 */
void print_to_98(int n){
	int i;
	
	for (i = n; i <= 9;)
	{
		printf("%d, ", i);
		if (n <= 98)
			i++;
		else
			i--;
	}
}

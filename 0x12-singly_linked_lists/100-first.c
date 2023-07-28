#include <stdio.h>

void ex_first(void)__attribute__((constructor));

/**
 * ex_first - executes first before the main func
 * Return: void
 */

void ex_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

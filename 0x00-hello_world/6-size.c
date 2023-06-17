#include <stdio.h>

/**
 * main - Entry point
 (*
 * Description: prints to the out stream
 * Return: 0 for succes and any other value for failure
 */
int main(void)
	{
		printf("Size of a char: %d byte(s)\n", sizeof(char));
		printf("Size of an int: %d byte(s)\n", sizeof(int));
		printf("Size of a long int : %d byte(s)\n", sizeof(long int));
		printf("Size of a long long: %d byte(s)\n", sizeof(long long int));
		printf("Size of a float: %d byte(s)\n", sizeof(float));
		return (0);
	}

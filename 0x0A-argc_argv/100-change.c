#include <stdio.h>
#include <stdlib.h>

int change_coin(int total);


/**
 * change_coin - prints the minimum number of coins to
 * make change for an amount of money
 * @total: the total amount of money to make change for
 *
 * Return: 0 if no error otherwise 1
 */
int change_coin(int total)
{
	int num, idx, coin_count;
	int coins[] = {25, 10, 5, 2, 1};

	if (total < 0)
	{
		printf("0\n");
		return (0);
	}

	coin_count = 0;
	num = total;

	for (idx = 0; idx < 5 && num >= 0; idx++)
	{
		while (num >= coins[idx])
		{
			coin_count++;
			num -= coins[idx];
		}
	}

	printf("%d\n", coin_count);
	return (0);
}

/**
 * main - Entry point to program
 * @argc: argument count
 * @argv: arguments vector
 * Return: 0 if no error otherwise 1
 */
int main(int argc, char *argv[])
{
	int num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	change_coin(num);

	return (0);
}


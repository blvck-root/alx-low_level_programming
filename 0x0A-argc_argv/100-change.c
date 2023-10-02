#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * numcoins - finds the minimum number of coins to make change
 * @cents: amount of change
 * @denoms: array of possible values of coins from biggest to smallest
 * Return: numner of coins used to make change
 */
int numcoins(int cents, int *denoms)
{
	int denom = *denoms;

	if (cents == denom)
		return (1);
	else if (cents  > denom)
		return (numcoins(cents - denom, denoms) + 1);
	else
		return (numcoins(cents, ++denoms));
}

/**
 * main - entry point to the program that makes change
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	int cents;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	printf("%d\n", numcoins(cents, coins));
	return (0);
}

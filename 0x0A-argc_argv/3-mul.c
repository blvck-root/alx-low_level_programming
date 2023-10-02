#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number command line arguments
 * @argv: array containing command line arguments
 * Return: O (success)
 */
int main(int __attribute__((unused)) argc, char __attribute__((unused)) **argv)
{
	int a, b;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d\n", a * b);
	return (0);
}

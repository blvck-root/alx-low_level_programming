#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - convert string to integer
 * @n: string representation of an integer
 * Return: integer conversion of a string, -1 if n contains non-integer symbols 
 */
int _atoi(char *n)
{
	char c;
	int res = 0;

	while (*n != '\0')
	{
		c = *n++;
		if ('0' <= c && c <= '0' + 9)
			res = res * 10 + (int) c - 48;
		else
			return (-1);
	}
	return (res);
}

/**
 * main - entry point
 * @argc: number command line arguments
 * @argv: array containing command line arguments
 * Return: O (success)
 */
int main(int __attribute__((unused)) argc, char __attribute__((unused)) **argv)
{
	int sum = 0;
	int n;

	while (--argc)
	{
		n = _atoi(argv[argc]);

		if (n == -1)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += n;
		}
	}

	printf("%d\n", sum);
	return (0);
}

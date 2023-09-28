#include "main.h"

/**
 * factorial - computes the factorial of a number
 * @n: positive integer
 * Return: integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

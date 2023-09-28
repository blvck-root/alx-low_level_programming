#include "main.h"

/**
 * find_sqrt - helper function for _sqrt_recursion
 * @x: integer
 * @n: integer
 * Return: number x such that x * x = n
 */
int find_sqrt(int x, int n)
{
	int next = (n / x + x) / 2;

	if (n < 0)
		return (-1);
	else if (n < 2)
		return (n);
	else if (x * x == n)
		return (x);

	if (next == x)
		return (-1);
	return (find_sqrt(next, n));
}

/**
  * _sqrt_recursion - computes the square root of a number
  * @n: integer
  * Return: number x such that x * x = n
  */
int _sqrt_recursion(int n)
{
	return (find_sqrt(2, n));
}

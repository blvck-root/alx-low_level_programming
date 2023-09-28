#include "main.h"

/**
 * _pow_recursion - computes the factorial of a number
 * @x: base to be multiplied
 * @y: exponent (number of times the base will multiply itself)
 * Return: integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

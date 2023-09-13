#include "main.h"

/**
 * _abs - computes the value of an integer
 *
 * @n: integer
 * Return: n if n >= 0 or -n if n < 0
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

#include "main.h"

/**
 * is_prime - is_prime_number helper function
 * @n: integer to be tested
 * @d: divisor
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime(int n, int d)
{
	if (n < 0)
		n *= -1;

	if (n % d == 0 || d > n)
		return (0);
	else if (d * d > n)
		return (1);
	return (is_prime(n, d + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: integer
 * Return: 1 if number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}

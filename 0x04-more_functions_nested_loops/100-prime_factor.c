#include <stdio.h>

/**
 * _isprime - determines if an integer is a prime number
 * @n: integer
 * Return: 0 if n is prime 0 otherwise
 */
int _isprime(int n)
{
	int f = 2;

	if (n < 2)
		return (1);

	if (n == 2)
		return (0);

	while (f * f < n)
	{
		if (n % f == 0)
			return (1);
		f++;
	}

	return (0);
}

/**
 * main - prints the largest prime factor
 * Return: Always 0
 */
int main(void)
{
	int f = 2;
	int lpf = 2;
	int n = 1231952;

	while (f < n)
	{
		if ((_isprime(f) == 0) && (n % f == 0))
			lpf = f;
		f++;
	}
	printf("%d\n", lpf);
	return (0);
}

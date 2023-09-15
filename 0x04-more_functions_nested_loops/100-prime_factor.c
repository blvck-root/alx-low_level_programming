#include <stdio.h>

/**
 * main - prints the largest prime factor
 * Return: Always 0
 */
int main(void)
{
	long f = 2;
	long n = 612852475143;

	while (f < n)
	{
		while (n % f == 0)
		{
			n /= f;
		}
		f++;
	}
	printf("%ld\n", n);
	return (0);
}

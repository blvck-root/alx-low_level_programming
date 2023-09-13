#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long tmp;
	unsigned long curr = 1;
	unsigned long next = 2;
	unsigned long sum = 0;

	while (curr < 4000000)
	{
		if (curr % 2 == 0)
			sum += curr;

		tmp = next;
		next += curr;
		curr = tmp;
	}
	printf("%lu\n", sum);
	return (0);
}

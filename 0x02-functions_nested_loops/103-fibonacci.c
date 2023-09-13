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

	while (curr < 4000000)
	{
		if (curr % 2 == 0)
		{
			if (curr > 2)
				printf(", ");
			printf("%lu", curr);
		}
		tmp = next;
		next += curr;
		curr = tmp;
	}
	printf("\n");
	return (0);
}

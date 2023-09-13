#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long tmp;
	unsigned long curr = 1;
	unsigned long next = 2;

	for (i = 0; i < 50; i++)
	{
		if (i > 0)
			printf(", ");
		printf("%lu", curr);
		tmp = next;
		next += curr;
		curr = tmp;
	}
	printf("\n");
	return (0);
}

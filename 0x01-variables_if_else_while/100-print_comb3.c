#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j;
	int i = 0;

	while (i < 10)
	{
		j = i + 1;
		while (j < 10)
		{
			if  (j > 1)
			{
				putchar(',');
				putchar(' ');
			}

			putchar('0' + i);
			putchar('0' + j);
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}


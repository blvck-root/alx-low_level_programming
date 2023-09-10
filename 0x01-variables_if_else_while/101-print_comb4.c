#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j;
	int k;
	int i = 0;

	while (i < 10)
	{
		j = i + 1;
		while (j < 10)
		{
			k = j + 1;
			while (k < 10)
			{
				if  (k > 2)
				{
					putchar(',');
					putchar(' ');
				}
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}


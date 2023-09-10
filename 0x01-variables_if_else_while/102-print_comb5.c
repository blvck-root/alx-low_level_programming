#include <stdio.h>

/**
 * zero_pad - print single-digit and double-digit numbers as two digit numbers
 * @n: integer between 0 and 99
 *
 * Return: 1 if successful, 0 if error
 */
int zero_pad(int n)
{
	if (n < 10)
	{
		putchar('0');
		putchar('0' + n);
	}
	else if (n < 100)
	{
		putchar('0' + (n / 10));
		putchar('0' + (n % 10));
	}
	else
	{
		return (0);
	}
	return (1);
}

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			if (j > 1)
			{
				putchar(',');
				putchar(' ');
			}

			zero_pad(i);
			putchar(' ');
			zero_pad(j);
		}
	}
	putchar('\n');
	return (0);
}

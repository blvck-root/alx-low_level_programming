#include "main.h"

void printnum(int n);

/**
 * print_times_table - prints the n-times table
 *
 * @n: integer between 0 and 15 inclusive
 * Return: Void
 */
void print_times_table(int n)
{
	int i;
	int j;
	int res;

	for (i = 0; i <= n; i++)
	{
		if (n < 0 || n > 15)
			break;

		for (j = 0; j <= n; j++)
		{
			res = i * j;

			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');

				if (res < 10)
					_putchar(' ');
				if (res < 100)
					_putchar(' ');
				printnum(res);
			}
			else
			{
				_putchar('0');
			}

		}
		_putchar('\n');
	}
}

/**
 * printnum - print number
 *
 * @n: natural number
 * Return: void
 */
void printnum(int n)
{
	int r;

	if (n < 10)
	{
		_putchar('0' + n);
	}
	else
	{
		r = n % 10;

		printnum(n / 10);
		_putchar('0' + r);
	}
}

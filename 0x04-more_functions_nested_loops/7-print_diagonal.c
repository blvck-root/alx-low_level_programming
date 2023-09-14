#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: integer
 * Return: void
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');

	for (i = 0; i < n; i++)
	{
		int j = i;

		while (j > 0)
		{
			_putchar(' ');
			j--;
		}
		_putchar('\\');
		_putchar('\n');
	}
}


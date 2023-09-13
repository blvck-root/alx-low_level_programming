#include "main.h"

void printnum(int n);
/**
 * print_to_98 - prints a comma separated list of numbers from n to 98
 *
 * @n: starting integer
 * Return: Void
 */
void print_to_98(int n)
{
	int i;
	int incr; /* increment value: 1 or -1 */

	if (n < 98)
		incr = 1;
	else if (n > 98)
		incr = -1;

	for (i = n; i != 98; i += incr)
	{
		printnum(i);
		_putchar(',');
		_putchar(' ');
	}
	printnum(98);
	_putchar('\n');
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

	if (n < 0)
	{
		_putchar('-');
		printnum(-n);
	}
	else if (n < 10)
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

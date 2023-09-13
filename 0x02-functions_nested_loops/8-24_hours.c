#include "main.h"

/**
 * jack_bauer - prints evey minute from 00:00 to 23:59
 *
 * Return: Void
 */
void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			zeropad(h);
			_putchar(':');
			zeropad(m);
			_putchar('\n');
		}
	}
}

/**
 * zeropad - prints a number in two digits, prepends a 0 if number is < 10
 *
 * @i: integer
 * Return: Void
 */
void zeropad(int i)
{
	if (i < 10)
	{
		_putchar('0');
		_putchar('0' + i);
	}
	else
	{
		_putchar('0' + (i / 10));
		_putchar('0' + (i % 10));
	}
}

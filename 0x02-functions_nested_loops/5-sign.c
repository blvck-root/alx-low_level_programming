#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int r;

	r = print_sign(-1);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

/**
 * print_sign - prints the sign of a number
 *
 * @n: integer
 * Return: 1 if n > 0, 0 if n == 0, and -1 if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

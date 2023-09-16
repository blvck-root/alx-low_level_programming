#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 * Return: void
 */
void print_number(int n)
{
	unsigned int c = n;

	if (n < 0)
	{
		c = -1 * n;
		_putchar(45);
	}

	if (c >= 10)
		print_number(c / 10);
	
	_putchar('0' + c % 10);
}

#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: integer
 * Return: the last digit of a number (always positive)
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld = -ld;
	_putchar('0' + ld);
	return (ld);
}

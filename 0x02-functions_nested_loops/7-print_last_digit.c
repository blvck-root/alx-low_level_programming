#include "main.h"
#include <stdio.h>

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

int main(void) {
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}

#include "_putchar.c"

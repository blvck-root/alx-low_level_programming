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

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

/**
 * _islower - check if a character is lowercase
 *
 * @c: integer corresponding to the ASCII code of a character
 * Return: 1 if c is lowercase character
 */
int _islower(int c)
{
	if (c >= 95 && c < 123)
		return (1);
	else
		return (0);
}

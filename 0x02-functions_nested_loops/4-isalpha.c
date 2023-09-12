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

	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = _isalpha(108);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

/**
 * _isalpha - check if a character is a letter of the alphabet
 *
 * @c: integer corresponding to the ASCII code of a character
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 95 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}

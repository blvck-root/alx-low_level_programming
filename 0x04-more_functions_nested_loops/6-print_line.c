#include "main.h"

/**
 * print_line - draws a straight line using _
 * @n: integer length of the line
 * Return: void
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}

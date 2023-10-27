#include "main.h"

/**
 * print_binary - print the binary representation of a number
 * @n: unsigned integer
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int print = 0; /* flag to print if leftmost is 1 */
	int i, bit, bits = sizeof(unsigned long int) * 8;

	for (i = bits - 1; i >= 0; --i)
	{
		if (n == 0 || n == 1)
		{
			_putchar(n + '0');
			break;
		}

		bit = (n >> i) & 1;
		print += bit;
		if (print > 0)
			_putchar(bit ? '1' : '0');
	}
}

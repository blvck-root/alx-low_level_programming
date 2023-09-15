#include "main.h"

/**
 * print_triangle - prints a righ-angled isosceles triangle
 * @size:  width and height of the trianle
 * Return: Void
 */
void print_triangle(int size)
{
	int i, j;

	if (size < 1)
		_putchar('\n');

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j <= size - i)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}

#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}

/**
 * print_alphabet_x10 - prints the letters of the alphabet 10 times
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
			_putchar('a' + j);
		_putchar('\n');
	}
}

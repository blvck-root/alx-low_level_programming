#include "main.h"

/**
 * print_alphabet - prints the letters a-z
 *
 * Return: Nothing (void)
 */
void print_alphabet(void)
{
	int i;

	for (i = 0; i < 26; i++)
		_putchar('a' + i);
	_putchar('\n');
}

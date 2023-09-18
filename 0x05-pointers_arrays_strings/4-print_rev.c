#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: string
 * Return: Void
 */
void print_rev(char *s)
{
	int i = strlen(s);

	while (i != 0)
	{
		_putchar(s[--i]);
	}
	_putchar('\n');
}

#include "main.h"

/**
 * _puts - prints a string
 * @str: string
 * Return: Void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i++]);
	}
	_putchar('\n');
}

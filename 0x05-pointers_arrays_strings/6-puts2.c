#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string
 * @str: string
 * Return: Void
 */
void puts2(char *str)
{
	int i = 0;
	int l = strlen(str);

	while (i < l)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}

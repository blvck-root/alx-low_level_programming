#include "main.h"
#include <string.h>

/**
 * puts_half - Prints the second half of a string
 * @str: string
 * Return: Void
 */
void puts_half(char *str)
{
	int i; /* start index for the second part of the string */
	int l = strlen(str);

	if (l % 2 == 0)
		i = l / 2; /* start index when length is even */
	else
		i = (l + 1) / 2; /* start index when length is odd */

	while (str[i] != '\0')
	{
		_putchar(str[i++]);
	}
	_putchar('\n');
}

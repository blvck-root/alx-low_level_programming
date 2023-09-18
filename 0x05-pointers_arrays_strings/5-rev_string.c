#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int l = strlen(s);

	for (i = 0; i < l / 2; i++)
	{
		char tmp;

		tmp = *(s + l - i - 1);
		*(s + l - i - 1) = *(s + i);
		*(s + i) = tmp;
	}
}


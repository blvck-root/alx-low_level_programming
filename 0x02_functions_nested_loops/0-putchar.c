#include <stdio.h>
#include <string.h>
#include "main.h"
#include "_putchar.c"

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* print "_putchar" */
	int i;
	char *str = "_putchar";

	for (i = 0; i < (int) strlen(str); i++)
		_putchar(str[i]);
	_putchar('\n');
	return (0);
}

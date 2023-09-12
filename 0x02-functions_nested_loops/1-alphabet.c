#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	print_alphabet();
	return (0);
}

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

#include "_putchar.c"

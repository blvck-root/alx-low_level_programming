#include <stdio.h>
#include <ctype.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char ch = 'a';

	while (i <= 9)
		putchar('0' + i++);

	while (ch <= 'f')
		putchar(ch++);
	putchar('\n');

	return (0);
}

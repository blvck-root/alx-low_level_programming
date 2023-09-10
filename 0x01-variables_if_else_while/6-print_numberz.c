#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = '0';

	/* Print single digit numbers of base 10 */
	while (ch <= '9')
		putchar(ch++);
	putchar('\n');

	return (0);
}
